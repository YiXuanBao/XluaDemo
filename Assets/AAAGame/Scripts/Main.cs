using System.Collections;
using System.IO;
using UnityEngine;
using UnityEngine.AddressableAssets;


public class Main
{
    public static void StartHotfixLogic()
    {
        var handle = Addressables.LoadAssetAsync<GameObject>("Assets/GAssets/Launch/Res/Cube.prefab");
        handle.Completed += (aoh) =>
        {
            Object.Instantiate(aoh.Result);
        };

        var handle1 = Addressables.LoadAssetAsync<GameObject>("Assets/GAssets/Launch/Res/Cube2.prefab");
        handle1.Completed += (aoh) =>
        {
            Object.Instantiate(aoh.Result);
        };

        Debug.Log("StartHotfixLogic");
    }
}
