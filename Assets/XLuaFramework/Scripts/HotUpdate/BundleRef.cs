using System.Collections.Generic;
using UnityEngine;
namespace YXCell
{
    public class BundleRef
    {
        public BundleInfo bundleInfo;

        public AssetBundle bundle;

        public List<AssetRef> children;

        public BaseOrUpdate witch;

        public BundleRef(BundleInfo bundleInfo, BaseOrUpdate witch)
        {
            this.bundleInfo = bundleInfo;

            this.witch = witch;
        }
    }
}