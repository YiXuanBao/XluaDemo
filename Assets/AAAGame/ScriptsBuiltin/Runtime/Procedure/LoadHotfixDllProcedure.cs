using GameFramework;
using GameFramework.Fsm;
using GameFramework.Procedure;
using System.IO;
using System.Linq;
using System.Reflection;
using UnityEngine;
using UnityEngine.AddressableAssets;


public class LoadHotfixDllProcedure : ProcedureBase
{
    private bool hotfixListIsLoaded;

    protected override void OnEnter(IFsm<IProcedureManager> procedureOwner)
    {
        base.OnEnter(procedureOwner);
        Debug.Log("OnEnter");
        PreloadAndInitData();
    }

    /// <summary>
    /// 加载热更新dll
    /// </summary>
    private void PreloadAndInitData()
    {
        hotfixListIsLoaded = true;


        LoadHotfixDlls();

    }

    private void LoadHotfixDlls()
    {
        //Addressables.Initialize();
        var handle = Addressables.LoadAssetAsync<TextAsset>("Assets/HotUpdate/Dlls/Hotfix.dll.bytes");

        handle.Completed += (aoh) =>
        {
            var bytes = aoh.Result.bytes;

#if !UNITY_EDITOR
            Assembly hotUpdateAss = Assembly.Load(bytes);
#else
            // Editor下无需加载，直接查找获得HotUpdate程序集
            Assembly hotUpdateAss = System.AppDomain.CurrentDomain.GetAssemblies().First(a => a.GetName().Name == "Hotfix");
#endif

            var entryFunc = hotUpdateAss.GetType("Main")?.GetMethod("StartHotfixLogic", System.Reflection.BindingFlags.Public | System.Reflection.BindingFlags.Static);

            Debug.Log(entryFunc == null);

            Debug.Log(1);

            entryFunc?.Invoke(null, null);
        };
    }
}

