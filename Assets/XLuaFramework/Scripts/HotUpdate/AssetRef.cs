using System.Collections.Generic;
using UnityEngine;
namespace YXCell
{
    public class AssetRef
    {
        public AssetInfo assetInfo;

        /// <summary>
        /// ��bundle�ļ�����ȡ��������Դ������Ϣ
        /// </summary>
        public Object asset;

        public bool isGameObject;

        /// <summary>
        /// �����ڴ�asset��gameobject����
        /// </summary>
        public List<GameObject> children;

        public AssetRef(AssetInfo assetInfo)
        {
            this.assetInfo = assetInfo;
        }
    }
}