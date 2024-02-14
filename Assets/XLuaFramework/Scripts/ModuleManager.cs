using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;

/// <summary>
/// ģ������� ������
/// </summary>
public class ModuleManager : Singleton<ModuleManager>
{
    /// <summary>
    /// ����һ��ģ�� Ψһ����API����
    /// </summary>
    /// <param name="moduleConfig"></param>
    /// <param name="moduleAction"></param>
    public async Task<bool> Load(ModuleConfig moduleConfig)
    {
        if (GlobalConfig.HotUpdate == false)
        {
            if (GlobalConfig.BundleMode == false)
            {
                return true;
            }
            else
            {
                ModuleABConfig moduleABConfig = await AssetLoader.Instance.LoadAssetBundleConfig(moduleConfig.moduleName);
                if (moduleABConfig != null)
                {
                    Debug.Log("ģ�������AB����������" + moduleABConfig.BundleArray.Count);

                    return true;
                }
                else
                {
                    return false;
                }
            }
        }
        else
        {
            return await Downloader.Instance.Download(moduleConfig);
        }
    }
}