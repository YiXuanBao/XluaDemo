using System.Collections;
using System.IO;
using UnityEngine;

namespace YXCell
{
    public class Main : MonoSingleton<Main>
    {
        public YXABConfig abConfig;

        public GlobalConfig globalConfig;

        protected async override void Awake()
        {
            base.Awake();

            InitGlobal();

            foreach (var moduleConfig in abConfig.modules)
            {
                ModuleManager.Instance.ResiterModuleConfig(moduleConfig);
            }

            await ModuleManager.Instance.Load("Public");
            await ModuleManager.Instance.Load("Launch");

            YXUtils.EditorLogNormal("代码开始...");

            var go = AssetLoader.Instance.Clone("Launch", "Assets/GAssets/Launch/Res/Cube.prefab");
        }

        /// <summary>
        /// Start is called on the frame when a script is enabled just before
        /// any of the Update methods is called the first time.
        /// </summary>
        void Start()
        {
            StartCoroutine(UnloadUnuseResource());
        }

        IEnumerator UnloadUnuseResource()
        {
            while (true)
            {
                AssetLoader.Instance.Unload();
                yield return new WaitForEndOfFrame();
            }
        }

        /// <summary>
        /// ��ʼ��ȫ�ֱ���
        /// </summary>
        private void InitGlobal()
        {

            DontDestroyOnLoad(gameObject);

            abConfig = Resources.Load<YXABConfig>("Data/ABConfig");

            abConfig.modules.Sort();

            globalConfig = Resources.Load<GlobalConfig>("Data/GlobalConfig");
        }
    }
}