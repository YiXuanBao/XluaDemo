using System.Collections.Generic;
using UnityEngine;
namespace YXCell
{
    public class AssetRef
    {
        public AssetInfo assetInfo;

        public BundleRef bundleRef;

        public BundleRef[] dependencies;

        /// <summary>
        /// 从bundle文件中提取出来的资源对象信息
        /// </summary>
        public Object asset;

        public bool isGameObject;

        /// <summary>
        /// 依赖于此asset的gameobject集合
        /// </summary>
        public List<GameObject> children;

        public AssetRef(AssetInfo assetInfo)
        {
            this.assetInfo = assetInfo;
        }
    }
}