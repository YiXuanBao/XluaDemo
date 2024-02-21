using System.Collections.Generic;

/// <summary>
/// һ��Bundle���� ���������л�Ϊjson�ļ���
/// </summary>
public class BundleInfo
{
    /// <summary>
    /// ���bundle������
    /// </summary>
    public string bundle_name;

    /// <summary>
    /// ���bundle��Դ��crcɢ����
    /// </summary>
    public string crc;

    /// <summary>
    /// bundle��С
    /// </summary>
    public int size;

    /// <summary>
    /// ���bundle����������Դ��·���б�
    /// </summary>
    public List<string> assets;
}

/// <summary>
/// һ��Asset���� ���������л�Ϊjson�ļ���
/// </summary>
public class AssetInfo
{
    /// <summary>
    /// �����Դ�����·��
    /// </summary>
    public string asset_path;

    /// <summary>
    /// �����Դ������AssetBundle������
    /// </summary>
    public string bundle_name;

    /// <summary>
    /// �����Դ��������AssetBundle�б������
    /// </summary>
    public List<string> dependencies;
}

/// <summary>
/// ModuleABConfig���� ��Ӧ ��������ģ���json�ļ�
/// </summary>
public class ModuleABConfig
{
    public ModuleABConfig(int assetCount)
    {
        BundleArray = new Dictionary<string, BundleInfo>();
        AssetArray = new AssetInfo[assetCount];
    }

    public ModuleABConfig()
    { }

    /// <summary>
    /// ����AssetBundle������
    /// </summary>
    public Dictionary<string, BundleInfo> BundleArray;

    /// <summary>
    /// asset ����
    /// </summary>
    public AssetInfo[] AssetArray;

    /// <summary>
    /// ����һ��bundle��¼
    /// </summary>
    /// <param name="bundleId">bundle��id</param>
    /// <param name="bundleInfo">bundle����</param>
    public void AddBundle(string bundleName, BundleInfo bundleInfo)
    {
        BundleArray[bundleName] = bundleInfo;
    }

    /// <summary>
    /// ����һ����Դ��¼
    /// </summary>
    /// <param name="index"></param>
    /// <param name="assetInfo"></param>
    public void AddAsset(int index, AssetInfo assetInfo)
    {
        AssetArray[index] = assetInfo;
    }
}