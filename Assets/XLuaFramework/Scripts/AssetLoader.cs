using LitJson;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.Networking;

/// <summary>
/// 模块资源加载器
/// </summary>
public class AssetLoader : Singleton<AssetLoader>
{
    public async Task<ModuleABConfig> LoadAssetBundleConfig(string moduleName)
    {
#if UNITY_EDITOR
        if (GlobalConfig.BundleMode == false)
        {
            return null;
        }
        else
        {
            return await LoadAssetBundleConfig_Runtime(moduleName);
        }
#else
        return await LoadAssetBundleConfig_Runtime(moduleName);
#endif
    }

    /// <summary>
    /// 加载模块对应的全局AssetBundle资源管理文件
    /// </summary>
    /// <param name="moduleName">模块的名字</param>
    /// <param name="action">加载完成后的回调函数，回调参数表示加载是否成功</param>
    private async Task<ModuleABConfig> LoadAssetBundleConfig_Runtime(string moduleName)
    {
        string url = Application.streamingAssetsPath + "/" + moduleName.ToLower() + ".json";
        UnityWebRequest request = UnityWebRequest.Get(url);
        await request.SendWebRequest();

        if (string.IsNullOrEmpty(request.error) == true)
        {
            return JsonMapper.ToObject<ModuleABConfig>(request.downloadHandler.text);
        }
        return null;
    }
}