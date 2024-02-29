using System.IO;
using UnityEngine;
using static XLua.LuaEnv;

namespace YXCell
{
    public class Main : MonoSingleton<Main>
    {
        public XLua.LuaEnv luaEnv { get; } = new XLua.LuaEnv();

        protected async override void Awake()
        {
            base.Awake();

            InitGlobal();

            InitCustomLoader();

            // ����ģ��
            ModuleConfig launchModule = new ModuleConfig()
            {
                moduleName = "Launch",
                moduleVersion = "20240219121943",
                moduleUrl = "http://127.0.0.1:8080"

            };

            ModuleManager.Instance.ResiterModuleConfig(launchModule);

            await ModuleManager.Instance.Load(launchModule.moduleName);

            YXUtils.EditorLogNormal("Lua���뿪ʼ...");

            gameObject.AddComponent<MonoProxy>().BindScript("Launch", "Main");
        }

        private void Update()
        {
            AssetLoader.Instance.Unload(AssetLoader.Instance.base2Assets);
            AssetLoader.Instance.Unload(AssetLoader.Instance.update2Assets);
        }

        /// <summary>
        /// ��ʼ��ȫ�ֱ���
        /// </summary>
        private void InitGlobal()
        {
            GlobalConfig.HotUpdate = false;

            GlobalConfig.BundleMode = false;

            DontDestroyOnLoad(gameObject);
        }

        private void InitCustomLoader()
        {
            DirectoryInfo baseDir = new DirectoryInfo(Application.dataPath + "/GAssets");

            DirectoryInfo[] Dirs = baseDir.GetDirectories();

            foreach (DirectoryInfo moduleDir in Dirs)
            {
                string moduleName = moduleDir.Name;

                CustomLoader loader = (ref string scriptPath) =>
                {
                    string assetPath = $"Assets/GAssets/{moduleName}/Src/{scriptPath.Trim()}.lua";
                    TextAsset asset = AssetLoader.Instance.CreatAsset<TextAsset>("Launch", assetPath, Main.Instance.gameObject);

                    if (asset != null)
                    {
                        string scriptstring = asset.text; 
                        byte[] result = System.Text.Encoding.UTF8.GetBytes(scriptstring);
                        return result;
                    }

                    return null;
                };

                luaEnv.AddLoader(loader);
            }

        }
    }
}