using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using XLua;

namespace YXCell
{
    public class MonoProxy : MonoBehaviour
    {
        ///<summary>
        ///���MonoProxy�������󶨵�1ua�ű�����
        ///</summary>
        public LuaTable luaTable;
        private Action<LuaTable> luaStart;
        private Action<LuaTable> luaOnDestroy;

        ///<summary>
        ///�󶨶�Ӧ�Ľű�
        ///</summary>
        ///<paramname="scriptPath">�����1ua�ű����ļ������·��</param>
        public LuaTable BindScript(string moduleName, string scriptPath)
        {
            Main.Instance.luaEnv.DoString($"require '{scriptPath}'");
            luaTable = Main.Instance.luaEnv.Global.Get<LuaTable>(scriptPath);

            //�����luaTable�������һ���ֶ�ָ�����c#��MonoProxy�ű�����
            luaTable.Set("MonoProxy", this);

            //��һ��Awake��������
            Action<LuaTable> luaAwake = luaTable.Get<Action<LuaTable>>("Awake");
            luaAwake?.Invoke(luaTable);

            //��ȡlua�ű��ĳ�Ա����
            luaTable.Get("Start", out luaStart);

            luaTable.Get("OnDestroy", out luaOnDestroy);

            return luaTable;
        }

        private void Start()
        {
            luaStart?.Invoke(luaTable);
        }

        private void OnDestroy()
        {
            luaOnDestroy?.Invoke(luaTable);
        }
    }
}