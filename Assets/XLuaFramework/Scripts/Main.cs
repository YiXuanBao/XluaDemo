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

        // ����ģ��
        ModuleConfig launchModule = new ModuleConfig()
        {
            moduleName = "Launch",
            moduleVersion = "20210902121943",
            moduleUrl = "http://192.168.0.7:8000"
        };

        bool result = await ModuleManager.Instance.Load(launchModule);

        if (result == true)
        {
            Debug.Log("Lua���뿪ʼ...");
        }
    }

    /// <summary>
    /// ��ʼ��ȫ�ֱ���
    /// </summary>
    private void InitGlobal()
    {
        Instance = this;

        GlobalConfig.HotUpdate = false;

        GlobalConfig.BundleMode = false;

        DontDestroyOnLoad(gameObject);
    }

    /// <summary>
    /// ��Mono����
    /// </summary>
    public static Main Instance;
}