#if USE_UNI_LUA
using LuaAPI = UniLua.Lua;
using RealStatePtr = UniLua.ILuaState;
using LuaCSFunction = UniLua.CSharpFunctionDelegate;
#else
using LuaAPI = XLua.LuaDLL.Lua;
using RealStatePtr = System.IntPtr;
using LuaCSFunction = XLua.LuaDLL.lua_CSFunction;
#endif

using XLua;
using System.Collections.Generic;


namespace XLua.CSObjectWrap
{
    using Utils = XLua.Utils;
    public class YXCellYXDialoguePlayerWrap 
    {
        public static void __Register(RealStatePtr L)
        {
			ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			System.Type type = typeof(YXCell.YXDialoguePlayer);
			Utils.BeginObjectRegister(type, L, translator, 0, 2, 13, 13);
			
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "Play", _m_Play);
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "SentenceNextStep", _m_SentenceNextStep);
			
			
			Utils.RegisterFunc(L, Utils.GETTER_IDX, "asset", _g_get_asset);
            Utils.RegisterFunc(L, Utils.GETTER_IDX, "playOnStart", _g_get_playOnStart);
            Utils.RegisterFunc(L, Utils.GETTER_IDX, "panel", _g_get_panel);
            Utils.RegisterFunc(L, Utils.GETTER_IDX, "contentText", _g_get_contentText);
            Utils.RegisterFunc(L, Utils.GETTER_IDX, "speakerText", _g_get_speakerText);
            Utils.RegisterFunc(L, Utils.GETTER_IDX, "choicePanel", _g_get_choicePanel);
            Utils.RegisterFunc(L, Utils.GETTER_IDX, "choiceObjects", _g_get_choiceObjects);
            Utils.RegisterFunc(L, Utils.GETTER_IDX, "choiceTexts", _g_get_choiceTexts);
            Utils.RegisterFunc(L, Utils.GETTER_IDX, "speakerImage", _g_get_speakerImage);
            Utils.RegisterFunc(L, Utils.GETTER_IDX, "contentButton", _g_get_contentButton);
            Utils.RegisterFunc(L, Utils.GETTER_IDX, "choiceButtons", _g_get_choiceButtons);
            Utils.RegisterFunc(L, Utils.GETTER_IDX, "onDialogueEnded", _g_get_onDialogueEnded);
            Utils.RegisterFunc(L, Utils.GETTER_IDX, "onDialogueStart", _g_get_onDialogueStart);
            
			Utils.RegisterFunc(L, Utils.SETTER_IDX, "asset", _s_set_asset);
            Utils.RegisterFunc(L, Utils.SETTER_IDX, "playOnStart", _s_set_playOnStart);
            Utils.RegisterFunc(L, Utils.SETTER_IDX, "panel", _s_set_panel);
            Utils.RegisterFunc(L, Utils.SETTER_IDX, "contentText", _s_set_contentText);
            Utils.RegisterFunc(L, Utils.SETTER_IDX, "speakerText", _s_set_speakerText);
            Utils.RegisterFunc(L, Utils.SETTER_IDX, "choicePanel", _s_set_choicePanel);
            Utils.RegisterFunc(L, Utils.SETTER_IDX, "choiceObjects", _s_set_choiceObjects);
            Utils.RegisterFunc(L, Utils.SETTER_IDX, "choiceTexts", _s_set_choiceTexts);
            Utils.RegisterFunc(L, Utils.SETTER_IDX, "speakerImage", _s_set_speakerImage);
            Utils.RegisterFunc(L, Utils.SETTER_IDX, "contentButton", _s_set_contentButton);
            Utils.RegisterFunc(L, Utils.SETTER_IDX, "choiceButtons", _s_set_choiceButtons);
            Utils.RegisterFunc(L, Utils.SETTER_IDX, "onDialogueEnded", _s_set_onDialogueEnded);
            Utils.RegisterFunc(L, Utils.SETTER_IDX, "onDialogueStart", _s_set_onDialogueStart);
            
			
			Utils.EndObjectRegister(type, L, translator, null, null,
			    null, null, null);

		    Utils.BeginClassRegister(type, L, __CreateInstance, 1, 0, 0);
			
			
            
			
			
			
			Utils.EndClassRegister(type, L, translator);
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int __CreateInstance(RealStatePtr L)
        {
            
			try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
				if(LuaAPI.lua_gettop(L) == 1)
				{
					
					var gen_ret = new YXCell.YXDialoguePlayer();
					translator.Push(L, gen_ret);
                    
					return 1;
				}
				
			}
			catch(System.Exception gen_e) {
				return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
			}
            return LuaAPI.luaL_error(L, "invalid arguments to YXCell.YXDialoguePlayer constructor!");
            
        }
        
		
        
		
        
        
        
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_Play(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                YXCell.YXDialoguePlayer gen_to_be_invoked = (YXCell.YXDialoguePlayer)translator.FastGetCSObj(L, 1);
            
            
			    int gen_param_count = LuaAPI.lua_gettop(L);
            
                if(gen_param_count == 1) 
                {
                    
                    gen_to_be_invoked.Play(  );
                    
                    
                    
                    return 0;
                }
                if(gen_param_count == 2&& translator.Assignable<YXCell.YXDialogueAsset>(L, 2)) 
                {
                    YXCell.YXDialogueAsset _asset = (YXCell.YXDialogueAsset)translator.GetObject(L, 2, typeof(YXCell.YXDialogueAsset));
                    
                    gen_to_be_invoked.Play( _asset );
                    
                    
                    
                    return 0;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
            return LuaAPI.luaL_error(L, "invalid arguments to YXCell.YXDialoguePlayer.Play!");
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_SentenceNextStep(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                YXCell.YXDialoguePlayer gen_to_be_invoked = (YXCell.YXDialoguePlayer)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    
                    gen_to_be_invoked.SentenceNextStep(  );
                    
                    
                    
                    return 0;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        
        
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_asset(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                YXCell.YXDialoguePlayer gen_to_be_invoked = (YXCell.YXDialoguePlayer)translator.FastGetCSObj(L, 1);
                translator.Push(L, gen_to_be_invoked.asset);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_playOnStart(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                YXCell.YXDialoguePlayer gen_to_be_invoked = (YXCell.YXDialoguePlayer)translator.FastGetCSObj(L, 1);
                LuaAPI.lua_pushboolean(L, gen_to_be_invoked.playOnStart);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_panel(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                YXCell.YXDialoguePlayer gen_to_be_invoked = (YXCell.YXDialoguePlayer)translator.FastGetCSObj(L, 1);
                translator.Push(L, gen_to_be_invoked.panel);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_contentText(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                YXCell.YXDialoguePlayer gen_to_be_invoked = (YXCell.YXDialoguePlayer)translator.FastGetCSObj(L, 1);
                translator.Push(L, gen_to_be_invoked.contentText);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_speakerText(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                YXCell.YXDialoguePlayer gen_to_be_invoked = (YXCell.YXDialoguePlayer)translator.FastGetCSObj(L, 1);
                translator.Push(L, gen_to_be_invoked.speakerText);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_choicePanel(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                YXCell.YXDialoguePlayer gen_to_be_invoked = (YXCell.YXDialoguePlayer)translator.FastGetCSObj(L, 1);
                translator.Push(L, gen_to_be_invoked.choicePanel);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_choiceObjects(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                YXCell.YXDialoguePlayer gen_to_be_invoked = (YXCell.YXDialoguePlayer)translator.FastGetCSObj(L, 1);
                translator.Push(L, gen_to_be_invoked.choiceObjects);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_choiceTexts(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                YXCell.YXDialoguePlayer gen_to_be_invoked = (YXCell.YXDialoguePlayer)translator.FastGetCSObj(L, 1);
                translator.Push(L, gen_to_be_invoked.choiceTexts);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_speakerImage(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                YXCell.YXDialoguePlayer gen_to_be_invoked = (YXCell.YXDialoguePlayer)translator.FastGetCSObj(L, 1);
                translator.Push(L, gen_to_be_invoked.speakerImage);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_contentButton(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                YXCell.YXDialoguePlayer gen_to_be_invoked = (YXCell.YXDialoguePlayer)translator.FastGetCSObj(L, 1);
                translator.Push(L, gen_to_be_invoked.contentButton);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_choiceButtons(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                YXCell.YXDialoguePlayer gen_to_be_invoked = (YXCell.YXDialoguePlayer)translator.FastGetCSObj(L, 1);
                translator.Push(L, gen_to_be_invoked.choiceButtons);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_onDialogueEnded(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                YXCell.YXDialoguePlayer gen_to_be_invoked = (YXCell.YXDialoguePlayer)translator.FastGetCSObj(L, 1);
                translator.Push(L, gen_to_be_invoked.onDialogueEnded);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_onDialogueStart(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                YXCell.YXDialoguePlayer gen_to_be_invoked = (YXCell.YXDialoguePlayer)translator.FastGetCSObj(L, 1);
                translator.Push(L, gen_to_be_invoked.onDialogueStart);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_asset(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                YXCell.YXDialoguePlayer gen_to_be_invoked = (YXCell.YXDialoguePlayer)translator.FastGetCSObj(L, 1);
                gen_to_be_invoked.asset = (YXCell.YXDialogueAsset)translator.GetObject(L, 2, typeof(YXCell.YXDialogueAsset));
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_playOnStart(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                YXCell.YXDialoguePlayer gen_to_be_invoked = (YXCell.YXDialoguePlayer)translator.FastGetCSObj(L, 1);
                gen_to_be_invoked.playOnStart = LuaAPI.lua_toboolean(L, 2);
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_panel(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                YXCell.YXDialoguePlayer gen_to_be_invoked = (YXCell.YXDialoguePlayer)translator.FastGetCSObj(L, 1);
                gen_to_be_invoked.panel = (UnityEngine.GameObject)translator.GetObject(L, 2, typeof(UnityEngine.GameObject));
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_contentText(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                YXCell.YXDialoguePlayer gen_to_be_invoked = (YXCell.YXDialoguePlayer)translator.FastGetCSObj(L, 1);
                gen_to_be_invoked.contentText = (YXCell.YXText)translator.GetObject(L, 2, typeof(YXCell.YXText));
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_speakerText(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                YXCell.YXDialoguePlayer gen_to_be_invoked = (YXCell.YXDialoguePlayer)translator.FastGetCSObj(L, 1);
                gen_to_be_invoked.speakerText = (YXCell.YXText)translator.GetObject(L, 2, typeof(YXCell.YXText));
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_choicePanel(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                YXCell.YXDialoguePlayer gen_to_be_invoked = (YXCell.YXDialoguePlayer)translator.FastGetCSObj(L, 1);
                gen_to_be_invoked.choicePanel = (UnityEngine.GameObject)translator.GetObject(L, 2, typeof(UnityEngine.GameObject));
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_choiceObjects(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                YXCell.YXDialoguePlayer gen_to_be_invoked = (YXCell.YXDialoguePlayer)translator.FastGetCSObj(L, 1);
                gen_to_be_invoked.choiceObjects = (UnityEngine.GameObject[])translator.GetObject(L, 2, typeof(UnityEngine.GameObject[]));
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_choiceTexts(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                YXCell.YXDialoguePlayer gen_to_be_invoked = (YXCell.YXDialoguePlayer)translator.FastGetCSObj(L, 1);
                gen_to_be_invoked.choiceTexts = (YXCell.YXText[])translator.GetObject(L, 2, typeof(YXCell.YXText[]));
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_speakerImage(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                YXCell.YXDialoguePlayer gen_to_be_invoked = (YXCell.YXDialoguePlayer)translator.FastGetCSObj(L, 1);
                gen_to_be_invoked.speakerImage = (UnityEngine.UI.Image)translator.GetObject(L, 2, typeof(UnityEngine.UI.Image));
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_contentButton(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                YXCell.YXDialoguePlayer gen_to_be_invoked = (YXCell.YXDialoguePlayer)translator.FastGetCSObj(L, 1);
                gen_to_be_invoked.contentButton = (UnityEngine.UI.Button)translator.GetObject(L, 2, typeof(UnityEngine.UI.Button));
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_choiceButtons(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                YXCell.YXDialoguePlayer gen_to_be_invoked = (YXCell.YXDialoguePlayer)translator.FastGetCSObj(L, 1);
                gen_to_be_invoked.choiceButtons = (UnityEngine.UI.Button[])translator.GetObject(L, 2, typeof(UnityEngine.UI.Button[]));
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_onDialogueEnded(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                YXCell.YXDialoguePlayer gen_to_be_invoked = (YXCell.YXDialoguePlayer)translator.FastGetCSObj(L, 1);
                gen_to_be_invoked.onDialogueEnded = (UnityEngine.Events.UnityEvent)translator.GetObject(L, 2, typeof(UnityEngine.Events.UnityEvent));
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_onDialogueStart(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                YXCell.YXDialoguePlayer gen_to_be_invoked = (YXCell.YXDialoguePlayer)translator.FastGetCSObj(L, 1);
                gen_to_be_invoked.onDialogueStart = (UnityEngine.Events.UnityEvent)translator.GetObject(L, 2, typeof(UnityEngine.Events.UnityEvent));
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
		
		
		
		
    }
}
