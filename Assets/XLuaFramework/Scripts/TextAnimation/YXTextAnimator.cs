using System.Collections.Generic;
using System.Text;
using TMPro;
using UnityEngine;

namespace YXCell
{
    [RequireComponent(typeof(YXText))]
    public class YXTextAnimator : MonoBehaviour
    {
        public bool useInlineEffects = true;

        private YXText text;

        private YXTextData textData;
        private TMP_TextInfo textInfo;

        private string oStr;
        private string pStr;
        private List<YXTextAnimSemantics> anims;

        private void Awake()
        {
            text = GetComponent<YXText>();
            oStr = text.text;
        }

        private void Start()
        {
            YXUtils.InvokeAction(0.1f, () =>
            {
                ParseText();
                ApplyParsedText();
                UpdateTextInfo();

                foreach (var item in textData.charData)
                {
                    YXUtils.EditorLogNormal(item.index);
                }

                YXUtils.InvokeActionUnlimited(
                    0.1f, () =>
                    {
                        for (int i = 0; i < textData.charData.Length; i++)
                        {
                            var charData = textData.charData[i];
                            for (int j = 0; j < 4; j++)
                            {
                                charData.vertices[j] = charData.vertices[j] + new Vector3(0, Mathf.Sin(Time.time * 2f + charData.vertices[j].x) * 20f, 0);
                            }
                        }

                        ApplyTextData(textData);
                    }, Time.fixedDeltaTime
                    );
            });
        }

        public void ApplyTextData(YXTextData data)
        {
            for (int i = 0; i < data.charData.Length; i++)
            {
                for (int j = 0; j < 4; j++)
                {
                    textInfo.meshInfo[0].vertices[i * 4 + j] = data.charData[i].vertices[j];
                    textInfo.meshInfo[0].colors32[i * 4 + j] = data.charData[i].colors32[j];
                }
            }
            text.UpdateVertexData();
        }

        public void UpdateTextInfo()
        {
            textInfo = text.textInfo;
            InitializeData();
        }

        public void InitializeData()
        {
            textData = new YXTextData();
            textData.ConstructCharData(text);
        }

        private void ParseText()
        {
            if (oStr == null)
                return;

            oStr = oStr.Replace(@"\r", "\r");
            oStr = oStr.Replace(@"\n", "\n");

            if (!useInlineEffects)
            {
                pStr = oStr;
                return;
            }

            anims = new List<YXTextAnimSemantics>();
            YXTextAnimSemantics curAnim = new YXTextAnimSemantics();
            if (!text) return;
            TMP_LineInfo[] lineInfos = text.GetTextInfo(oStr).lineInfo;
            if (lineInfos == null || lineInfos.Length == 0)
                return;

            string s = oStr;
            int nullCount = 0;
            int curLine = 0;
            for (int i = 0; i < s.Length; i++)
            {
                if (curLine < lineInfos.Length && i > lineInfos[curLine].lastCharacterIndex)
                {
                    nullCount++;
                    curLine++;
                }
                if (s[i] == ' ')
                {
                    nullCount++;
                }
                if (s[i] == '<')
                {
                    if (s[i + 1] == '/')
                    {
                        curAnim.endIndex = i - 1 - nullCount;
                        //submit anim
                        anims.Add(curAnim);
                        curAnim = null;
                        while (s[i] != '>') { nullCount++; i++; }
                        nullCount++;
                    }
                    else
                    {
                        curAnim = new YXTextAnimSemantics();
                        int l = 1;
                        while (i + l < s.Length && (s[i + l] != '>' && s[i + l] != '(')) l++;
                        curAnim.typedef = s.Substring(i + 1, l - 1); //parse type

                        if (s[i + l] == '(') //parse args
                        {
                            int m = 1, n = 1;
                            int curStart = i + l + m;
                            while (s[i + l + m] != ')')
                            {
                                if (s[i + l + m] == ',')
                                {
                                    curAnim.args.Add(float.Parse(s.Substring(curStart, n - 1)));
                                    curStart = i + l + m + 1;
                                    n = 0;
                                }
                                m++;
                                n++;
                            }
                            curAnim.args.Add(float.Parse(s.Substring(curStart, n - 1)));
                            nullCount += l + m + 2;
                            i = i + l + m + 2;
                            while (s[i] == ' ') { nullCount++; i++; }
                            curAnim.startIndex = i - nullCount;
                        }
                        else
                        {
                            nullCount += l + 1;
                            i = i + l + 1;
                            while (i < s.Length && s[i] == ' ') { nullCount++; i++; }
                            curAnim.startIndex = i - nullCount;
                        }
                    }

                }
            }

            //Second pass: remove markers
            StringBuilder sb = new StringBuilder();
            bool excl = false;
            for (int i = 0; i < s.Length; i++)
            {
                if (excl)
                {
                    if (s[i] == '>')
                        excl = false;
                }
                else
                {
                    if (s[i] == '<')
                    {
                        excl = true;
                    }
                    else
                    {
                        sb.Append(s[i]);
                    }
                }
            }

            pStr = sb.ToString();
        }

        private void ApplyParsedText()
        {
            if (!text)
                return;
            text.SetText(pStr);
            text.ForceMeshUpdate(true, true);
        }
    }

    public class YXTextAnimSemantics
    {
        public string typedef;
        public List<float> args = new List<float>();
        public int startIndex, endIndex;
    }
}