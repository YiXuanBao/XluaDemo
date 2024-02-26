using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;

namespace YXCell
{
    /// <summary>
    /// ģ������� ������
    /// </summary>
    public class ModuleManager : Singleton<ModuleManager>
    {
        private Dictionary<string, ModuleConfig> moduleDic;

        public ModuleManager()
        {
            this.moduleDic = new Dictionary<string, ModuleConfig>();
        }

        public void ResiterModuleConfig(ModuleConfig moduleConfig)
        {
            if (moduleDic.ContainsKey(moduleConfig.moduleName) == true)
            {
                return;
            }

            moduleDic[moduleConfig.moduleName] = moduleConfig;
        }

        public ModuleConfig GetModuleConfig(string moduleName)
        {
            return moduleDic.GetValueOrDefault(moduleName);
        }


        /// <summary>
        /// ����һ��ģ�� Ψһ����API����
        /// </summary>
        /// <param name="moduleConfig"></param>
        /// <param name="moduleAction"></param>
        public async Task<bool> Load(string moduleName)
        {
            ModuleConfig moduleConfig = GetModuleConfig(moduleName);

            if (moduleConfig == null)
            {
                return false;
            }

            if (GlobalConfig.HotUpdate == false)
            {
                if (GlobalConfig.BundleMode == false)
                {
                    return true;
                }
                else
                {
                    bool baseBundleOk = await LoadBaseBundle(moduleConfig.moduleName);

                    if (baseBundleOk == false)
                    {
                        return false;
                    }

                    return await LoadBase(moduleConfig.moduleName);
                }
            }
            else
            {
                await Downloader.Instance.Download(moduleConfig);

                bool updateBundleOk = await LoadUpdateBundle(moduleConfig.moduleName);

                if (updateBundleOk == false)
                {
                    return false;
                }

                bool baseBundleOk = await LoadBaseBundle(moduleConfig.moduleName);

                if (baseBundleOk == false)
                {
                    return false;
                }

                bool updateOk = await LoadUpdate(moduleConfig.moduleName);

                if (updateOk == false)
                {
                    return false;
                }

                return true;
            }
        }

        /// <summary>
        /// ����BaseĿ¼��Bundle
        /// </summary>
        /// <param name="moduleName"></param>
        /// <returns></returns>
        private async Task<bool> LoadBaseBundle(string moduleName)
        {
            ModuleABConfig moduleABConfig = await AssetLoader.Instance.LoadAssetBundleConfig(BaseOrUpdate.Base, moduleName, moduleName.ToLower() + ".json");

            if (moduleABConfig == null)
            {
                YXUtils.EditorLogError("LoadBaseBundle...");
                return false;
            }

            foreach (KeyValuePair<string, BundleInfo> kv in moduleABConfig.BundleArray)
            {
                string bundleName = kv.Key;

                if (AssetLoader.Instance.name2BundleRef.ContainsKey(bundleName) == false)
                {
                    BundleInfo bundleInfo = kv.Value;

                    AssetLoader.Instance.name2BundleRef[bundleName] = new BundleRef(bundleInfo, BaseOrUpdate.Base);
                }
            }

            return true;
        }

        /// <summary>
        /// ���������Դ
        /// </summary>
        /// <param name="moduleName"></param>
        /// <returns></returns>
        private async Task<bool> LoadBase(string moduleName)
        {
            ModuleABConfig moduleABConfig = await AssetLoader.Instance.LoadAssetBundleConfig(BaseOrUpdate.Base, moduleName, moduleName.ToLower() + ".json");

            if (moduleABConfig == null)
            {
                return false;
            }

            YXUtils.EditorLogNormal($"Base{moduleName}ģ�������AB����������{moduleABConfig.BundleArray.Count}");

            Dictionary<string, AssetRef> Path2AssetRef = AssetLoader.Instance.ConfigAssembly(moduleABConfig);
            AssetLoader.Instance.base2Assets.Add(moduleName, Path2AssetRef);

            return true;
        }

        private async Task<bool> LoadUpdateBundle(string moduleName)
        {
            ModuleABConfig moduleABConfig = await AssetLoader.Instance.LoadAssetBundleConfig(BaseOrUpdate.Update, moduleName, moduleName.ToLower() + ".json");

            if (moduleABConfig == null)
            {
                YXUtils.EditorLogError("LoadUpdateBundle...");
                return false;
            }

            foreach (KeyValuePair<string, BundleInfo> kv in moduleABConfig.BundleArray)
            {
                string bundleName = kv.Key;

                if (AssetLoader.Instance.name2BundleRef.ContainsKey(bundleName) == false)
                {
                    BundleInfo bundleInfo = kv.Value;

                    AssetLoader.Instance.name2BundleRef[bundleName] = new BundleRef(bundleInfo, BaseOrUpdate.Update);
                }
            }

            return true;
        }

        /// <summary>
        /// �����ȸ���Դ
        /// </summary>
        /// <param name="moduleName"></param>
        /// <returns></returns>
        private async Task<bool> LoadUpdate(string moduleName)
        {
            ModuleABConfig moduleABConfig = await AssetLoader.Instance.LoadAssetBundleConfig(BaseOrUpdate.Update, moduleName, moduleName.ToLower() + ".json");

            if (moduleABConfig == null)
            {
                YXUtils.EditorLogError("LoadUpdate");
                return false;
            }

            YXUtils.EditorLogNormal($"Update{moduleName}ģ�������AB����������{moduleABConfig.BundleArray.Count}");

            Dictionary<string, AssetRef> Path2AssetRef = AssetLoader.Instance.ConfigAssembly(moduleABConfig);
            AssetLoader.Instance.update2Assets.Add(moduleName, Path2AssetRef);

            return true;
        }
    }
}