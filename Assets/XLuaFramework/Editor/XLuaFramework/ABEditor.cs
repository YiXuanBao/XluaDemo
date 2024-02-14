using System.Collections.Generic;
using System.IO;
using Unity.Plastic.Newtonsoft.Json;
using UnityEditor;
using UnityEngine;
using UnityEngine.UI;

/// <summary>
/// ����AssetBundle�ı༭������
/// </summary>
public class ABEditor : MonoBehaviour
{
    /// <summary>
    /// �ȸ���Դ�ĸ�Ŀ¼
    /// </summary>
    public static string rootPath = Application.dataPath + "/GAssets";

    /// <summary>
    /// AB���ļ������·��
    /// </summary>
    public static string abOutputPath = Application.streamingAssetsPath;

    /// <summary>
    /// ������Ҫ�����AB����Ϣ��һ��AssetBundle�ļ���Ӧ��һ��AssetBundleBuild����
    /// </summary>
    public static List<AssetBundleBuild> assetBundleBuildList;

    /// <summary>
    /// ��¼ÿ��asset��Դ������AB���ļ��б�
    /// </summary>
    public static Dictionary<string, List<string>> asset2Dependencies;

    /// <summary>
    /// ��¼�ĸ�asset��Դ�����ĸ�AB���ļ�
    /// </summary>
    public static Dictionary<string, string> asset2bundle;

    /// <summary>
    /// ���AssetBundle��Դ
    /// </summary>
    [MenuItem("ABEditor/BuildAssetBundle")]
    public static void BuildAssetBundle()
    {

        Debug.Log("��ʼ--->>>��������ģ���AB��!");

        if (Directory.Exists(abOutputPath) == true)
        {
            Directory.Delete(abOutputPath, true);
        }

        assetBundleBuildList = new List<AssetBundleBuild>();
        asset2Dependencies = new Dictionary<string, List<string>>();
        asset2bundle = new Dictionary<string, string>();

        Dictionary<string, string> totalAsset2Bundle = new Dictionary<string, string>();
        List<AssetBundleBuild> totalBundles = new List<AssetBundleBuild>();
        Dictionary<string, Dictionary<string, string>> moduleAssets = new Dictionary<string, Dictionary<string, string>>();
        Dictionary<string, List<AssetBundleBuild>> moduleBundles = new Dictionary<string, List<AssetBundleBuild>>();

        // ��������ģ�飬�������ģ�鶼�ֱ���

        DirectoryInfo rootDir = new DirectoryInfo(rootPath);

        DirectoryInfo[] Dirs = rootDir.GetDirectories();

        foreach (DirectoryInfo moduleDir in Dirs)
        {
            string moduleName = moduleDir.Name;

            assetBundleBuildList.Clear();

            asset2bundle.Clear();

            // ��ʼ�����ģ������AB���ļ�

            ScanChildDireations(moduleDir);

            foreach (var item in asset2bundle)
            {
                totalAsset2Bundle.Add(item.Key, item.Value);
            }
            totalBundles.AddRange(assetBundleBuildList);
            moduleAssets.Add(moduleName, new Dictionary<string, string>(asset2bundle));
            moduleBundles.Add(moduleName, new List<AssetBundleBuild>(assetBundleBuildList));
        }

        if (Directory.Exists(abOutputPath) == true)
        {
            Directory.Delete(abOutputPath, true);
        }

        Directory.CreateDirectory(abOutputPath);

        BuildPipeline.BuildAssetBundles(abOutputPath, totalBundles.ToArray(), BuildAssetBundleOptions.None, EditorUserBuildSettings.activeBuildTarget);

        foreach (DirectoryInfo moduleDir in Dirs)
        {
            string moduleName = moduleDir.Name;

            asset2Dependencies.Clear();
            CalculateDependencies(moduleAssets[moduleName], totalAsset2Bundle);
            SaveModuleABConfig(moduleName, moduleAssets[moduleName], moduleBundles[moduleName]);
        }

        AssetDatabase.Refresh();

        Debug.Log("����--->>>��������ģ���AB��!");

        assetBundleBuildList = null;
        asset2bundle = null;
        asset2Dependencies = null;
    }

    /// <summary>
    /// ����ָ�����ļ���
    /// 1. ������ļ����µ�����һ�����ļ����һ��AssetBundle
    /// 2. ���ҵݹ��������ļ����µ��������ļ���
    /// </summary>
    /// <param name="directoryInfo"></param>
    public static void ScanChildDireations(DirectoryInfo directoryInfo)
    {
        if (directoryInfo.Name.EndsWith("CSProject~"))
        {
            return;
        }

        // �ռ���ǰ·���µ��ļ� �����Ǵ��һ��AB��

        ScanCurrDirectory(directoryInfo);

        // ������ǰ·���µ����ļ���

        DirectoryInfo[] dirs = directoryInfo.GetDirectories();

        foreach (DirectoryInfo info in dirs)
        {
            ScanChildDireations(info);
        }
    }

    /// <summary>
    /// ������ǰ·���µ��ļ� �����Ǵ��һ��AB��
    /// </summary>
    /// <param name="directoryInfo"></param>
    private static void ScanCurrDirectory(DirectoryInfo directoryInfo)
    {
        List<string> assetNames = new List<string>();

        FileInfo[] fileInfoList = directoryInfo.GetFiles();

        int subIndex = Application.dataPath.Length - "Assets".Length;

        foreach (FileInfo fileInfo in fileInfoList)
        {
            if (fileInfo.FullName.EndsWith(".meta"))
            {
                continue;
            }

            // assetName�ĸ�ʽ���� "Assets/GAssets/Launch/Sphere.prefab"

            string assetName = fileInfo.FullName.Substring(subIndex).Replace('\\', '/');

            assetNames.Add(assetName);
        }

        if (assetNames.Count > 0)
        {
            // ��ʽ���� gassets_Launch

            string assetbundleName = directoryInfo.FullName.Substring(Application.dataPath.Length + 1).Replace('\\', '_').ToLower();

            AssetBundleBuild build = new AssetBundleBuild();

            build.assetBundleName = assetbundleName;

            build.assetNames = new string[assetNames.Count];

            for (int i = 0; i < assetNames.Count; i++)
            {
                build.assetNames[i] = assetNames[i];

                // ��¼������Դ�����ĸ�bundle�ļ�

                asset2bundle.Add(assetNames[i], assetbundleName);
            }

            assetBundleBuildList.Add(build);
        }
    }

    /// <summary>
    /// ����ÿ����Դ��������ab���ļ��б�
    /// </summary>
    public static void CalculateDependencies(Dictionary<string, string> assetTobundle, Dictionary<string, string> totalAssetTobundle)
    {
        foreach (string asset in assetTobundle.Keys)
        {
            // �����Դ�Լ����ڵ�bundle
            string assetBundle = assetTobundle[asset];

            string[] dependencies = AssetDatabase.GetDependencies(asset);

            Debug.Log(asset + "    dependencies:" + LitJson.JsonMapper.ToJson(dependencies));

            List<string> assetList = new List<string>();

            if (dependencies != null && dependencies.Length > 0)
            {
                foreach (string oneAsset in dependencies)
                {
                    if (oneAsset == asset || oneAsset.EndsWith(".cs"))
                    {
                        continue;
                    }

                    assetList.Add(oneAsset);
                }
            }

            if (assetList.Count > 0)
            {
                List<string> abList = new List<string>();

                foreach (string oneAsset in assetList)
                {
                    bool result = totalAssetTobundle.TryGetValue(oneAsset, out string bundle);

                    if (result == true)
                    {
                        if (bundle != assetBundle)
                        {
                            abList.Add(bundle);
                        }
                    }
                }

                asset2Dependencies.Add(asset, abList);
            }
        }
    }

    /// <summary>
    /// ��һ��ģ�����Դ������ϵ���ݱ����json��ʽ���ļ�
    /// </summary>
    /// <param name="moduleName">ģ������</param>
    private static void SaveModuleABConfig(string moduleName, Dictionary<string, string> moduleAsset2Bundle, List<AssetBundleBuild> moduleBundles)
    {
        ModuleABConfig moduleABConfig = new ModuleABConfig(moduleAsset2Bundle.Count);

        // ��¼AB����Ϣ

        foreach (AssetBundleBuild build in moduleBundles)
        {
            BundleInfo bundleInfo = new BundleInfo();

            bundleInfo.bundle_name = build.assetBundleName;

            bundleInfo.assets = new List<string>();

            foreach (string asset in build.assetNames)
            {
                bundleInfo.assets.Add(asset);
            }

            // ����һ��bundle�ļ���CRCɢ����

            string abFilePath = abOutputPath + "/" + bundleInfo.bundle_name;

            using (FileStream stream = File.OpenRead(abFilePath))
            {
                bundleInfo.crc = AssetUtility.GetCRC32Hash(stream);
            }

            moduleABConfig.AddBundle(bundleInfo.bundle_name, bundleInfo);
        }

        // ��¼ÿ����Դ��������ϵ

        int assetIndex = 0;

        foreach (var item in moduleAsset2Bundle)
        {
            AssetInfo assetInfo = new AssetInfo();
            assetInfo.asset_path = item.Key;
            assetInfo.bundle_name = item.Value;
            assetInfo.dependencies = new List<string>();

            bool result = asset2Dependencies.TryGetValue(item.Key, out List<string> dependencies);

            if (result == true)
            {
                for (int i = 0; i < dependencies.Count; i++)
                {
                    string bundleName = dependencies[i];

                    assetInfo.dependencies.Add(bundleName);
                }
            }

            moduleABConfig.AddAsset(assetIndex, assetInfo);

            assetIndex++;
        }

        // ��ʼд��Json�ļ�

        string moduleConfigName = moduleName.ToLower() + ".json";

        string jsonPath = abOutputPath + "/" + moduleConfigName;

        if (File.Exists(jsonPath) == true)
        {
            File.Delete(jsonPath);
        }

        File.Create(jsonPath).Dispose();

        string jsonData = LitJson.JsonMapper.ToJson(moduleABConfig);

        File.WriteAllText(jsonPath, ConvertJsonString(jsonData));
    }

    /// <summary>
    /// ��ʽ��json
    /// </summary>
    /// <param name="str">����json�ַ���</param>
    /// <returns>���ظ�ʽ������ַ���</returns>
    private static string ConvertJsonString(string str)
    {
        JsonSerializer serializer = new JsonSerializer();

        TextReader tr = new StringReader(str);

        JsonTextReader jtr = new JsonTextReader(tr);

        object obj = serializer.Deserialize(jtr);
        if (obj != null)
        {
            StringWriter textWriter = new StringWriter();

            JsonTextWriter jsonWriter = new JsonTextWriter(textWriter)
            {
                Formatting = Formatting.Indented,

                Indentation = 4,

                IndentChar = ' '
            };

            serializer.Serialize(jsonWriter, obj);

            return textWriter.ToString();
        }
        else
        {
            return str;
        }
    }
}