using UnityEngine;

namespace YXCell
{
    [RequireComponent(typeof(YXText))]
    public class YXTextAnimator : MonoBehaviour
    {
        private YXText text;

        private void Awake()
        {
            text = GetComponent<YXText>();
        }

        private void Start()
        {
            
        }

        private void Update()
        {
            text.ForceMeshUpdate();
            var textInfo = text.textInfo;
            var meshInfo = textInfo.meshInfo[0];
            var verts = meshInfo.vertices;

            for (int i = 0; i < textInfo.characterCount-1; i++)
            {
                var charInfo = textInfo.characterInfo[i];

                if (!charInfo.isVisible)
                    continue;

                for (int j = 0; j < 4; j++)
                {
                    var orig = verts[charInfo.vertexIndex + j];
                    verts[charInfo.vertexIndex + j] = orig + new Vector3(0,Mathf.Sin(Time.time * 2f + orig.x * 0.01f) * 10f, 0);
                }
            }

            meshInfo.mesh.vertices = verts;
            text.UpdateGeometry(meshInfo.mesh, 0);
        }
    }
}