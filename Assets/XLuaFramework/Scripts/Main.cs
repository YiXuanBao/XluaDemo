using System.Collections;
using System.Collections.Generic;
using System.Threading;
using System.Threading.Tasks;
using UnityEngine;

public class Main : MonoBehaviour
{
    public async void Awake()
    {
        InitGlobal();

        // 启动模块
        ModuleConfig launchModule = new ModuleConfig()
        {
            moduleName = "Launch",
            moduleVersion = "20240219121943",
            moduleUrl = "http://127.0.0.1:8080"
        };

        ModuleConfig gameModule = new ModuleConfig()
        {
            moduleName = "Game",
            moduleVersion = "20240219121943",
            moduleUrl = "http://127.0.0.1:8080"
        };

        ModuleManager.Instance.ResiterModuleConfig(launchModule);
        ModuleManager.Instance.ResiterModuleConfig(gameModule);

        await ModuleManager.Instance.Load(launchModule.moduleName);
        await ModuleManager.Instance.Load(gameModule.moduleName);

        Debug.Log("Lua代码开始...");
        AssetLoader.Instance.Clone("Launch", "Assets/GAssets/Launch/Sphere.prefab");
        AssetLoader.Instance.Clone("Game", "Assets/GAssets/Game/Sphere1.prefab").transform.Translate(Vector3.down * 3, Space.World);
    }

    private void Update()
    {
        AssetLoader.Instance.Unload(AssetLoader.Instance.base2Assets);
    }

    /// <summary>
    /// 初始化全局变量
    /// </summary>
    private void InitGlobal()
    {
        Instance = this;

        GlobalConfig.HotUpdate = false;

        GlobalConfig.BundleMode = false;

        DontDestroyOnLoad(gameObject);
    }

    /// <summary>
    /// 主Mono对象
    /// </summary>
    public static Main Instance;
}