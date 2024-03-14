﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R>
struct InvokerFuncInvoker0
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		R ret;
		method->invoker_method(methodPtr, method, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
struct Dictionary_2_t403ABC2FA2D9740F9ADD28DB8815C00EE2DB4249;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32[]>
struct Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>
struct Dictionary_2_t2AB2F09285677DDC3A0A75E97B5A7492F1E236C9;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>
struct Dictionary_2_t69734EC5CF354F3B1434F2527067B631D09E1D27;
// System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>
struct Dictionary_2_tD2936860D0DBBB809F916DD79F6A1FDA961C3185;
// System.Collections.Generic.Dictionary`2<System.String,LitJson.JsonData>
struct Dictionary_2_tDF79546961566D2D6F7C4155F7ED851428AA9931;
// System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>
struct Dictionary_2_tD88E8C222DEDEFACEF548AAB380B9ED228B42954;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct Dictionary_2_t51F843E5AA0162639CFD12BF0859C4C0FF822998;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>
struct Dictionary_2_tD786692960EC82E79B160F75E780BA867D6C1BBD;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
struct Dictionary_2_tAA76A881C8942A9F8F63F6BEE2A572DCF133AB93;
// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>
struct Dictionary_2_tB42EF32D51D7595BF925017BF4A743C5B97C9053;
// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ExporterFunc>
struct Dictionary_2_t13D69527163788C316AD7673426765F0A3E018A0;
// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ImporterFunc>
struct Dictionary_2_t9017400E4435187C1FB3841B4F5843B94836A625;
// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.MethodInfo>
struct Dictionary_2_tB7188876A70AC81C939F78F9171156E43ED476CB;
// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ObjectMetadata>
struct Dictionary_2_tD8EF042176D7CCA0618F7F42494A6AAD68478914;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
struct IDictionary_2_t9503DE0744217071D554CC415B2890C454070024;
// System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData>
struct IDictionary_2_t8B67C0BACED3ABBE0BB390A264074F9245F22842;
// System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata>
struct IDictionary_2_tC6EEF4DE19255D76EDF497CDE277E5578CB81EB2;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct IDictionary_2_t0BD8FD9B6F60BD6B18C6D1CD2BE215E7F97D3D63;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>
struct IDictionary_2_tE7FFBD71D86A280E4B101DF2F8E59C9FFFAA4C29;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
struct IDictionary_2_t02C6BF8BB03B58DD552B193E9CABACD0AF9CCFA4;
// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ArrayMetadata>
struct IDictionary_2_t8918FFC362E99797BB0E47D0D787D923EC3C8AAA;
// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>
struct IDictionary_2_t74600F66BA04DC423A37DB24919A3C9D56D75B43;
// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ObjectMetadata>
struct IDictionary_2_tBDC061B9374E6628F4296689FB32A9C598E45C4B;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>
struct IEnumerator_1_tA8D764B99B6196299ECE08BCBA02AB2EE733CB1D;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>
struct IList_1_tCE0C7B37A9126CC0CB3277FBC9C4B9161B866C32;
// System.Collections.Generic.IList`1<LitJson.JsonData>
struct IList_1_t0E22BD75314F60626B98C2C1FA5B2634BA7F5A82;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
struct KeyCollection_tE8399140098D3D8028A8D5FB2CBF88B0965541B7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32[]>
struct KeyCollection_tC542A7519E04306FF4830698FC8A485843209C5F;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,LitJson.JsonData>
struct KeyCollection_tE6688B1D0092F017DF2F4826CC5D84C949D2429E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,LitJson.PropertyMetadata>
struct KeyCollection_t955DF6F14659134D09E141EB4425AF8F55F679AA;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct KeyCollection_t5DAF380E2438DEBAE74A7EE923FDFEEE1C5BDC80;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>
struct KeyCollection_t9467C64146E0E28B1B96A0A953D40232244C1EF5;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
struct KeyCollection_t011DD148DD1E459C54D3B86D436275360A0B864A;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,LitJson.ArrayMetadata>
struct KeyCollection_t2268EDE7A9B4F936A672B3380267DF730779A1B2;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,LitJson.ExporterFunc>
struct KeyCollection_t5B6745FEC66770915D98FF9337430E39F2C7F596;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,LitJson.ImporterFunc>
struct KeyCollection_t5E5ADF12F5CBD0ACE41CD4E6FDE74FC9A04FABCA;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Reflection.MethodInfo>
struct KeyCollection_t8D45DD26CAEC5F17F2CEEBE8D6F33B09D3E41E54;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,LitJson.ObjectMetadata>
struct KeyCollection_tF98E87A008809415D6AB6F9C787C311786D2F016;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>
struct List_1_tFC3915CEAB0CCCC11D0AB7F2D3717177D1111111;
// System.Collections.Generic.List`1<LitJson.JsonData>
struct List_1_tF2E1AB00AE46093D3DBEBFF23EE42498976376CA;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<LitJson.PropertyMetadata>
struct List_1_t3F16D5D88FAFD68886DA28A9E82E74E30BE371F8;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.Stack`1<System.Int32>
struct Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5;
// System.Collections.Generic.Stack`1<LitJson.WriterContext>
struct Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
struct ValueCollection_t28FD47FCC4F1763B936C9A4BB2A8B2276E633FEF;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32[]>
struct ValueCollection_t6D44D0A2B65933FB953BE36FD019130BBA243B59;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,LitJson.JsonData>
struct ValueCollection_t59C53309B419C328FC0837737FEF760AE047CD0D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,LitJson.PropertyMetadata>
struct ValueCollection_t32358315F68FC5BD948EBFB7C6EB843D1BAE6BC9;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct ValueCollection_t83E53BA3EA08DD561AC7C5EDB4531AD216CFCE61;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>
struct ValueCollection_tAFECE5DF6F1FB1BEF304EAA61C4F731E871A681B;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
struct ValueCollection_t8110CF124D20114B9F5705E2434F2DDFE505CC3A;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ArrayMetadata>
struct ValueCollection_t62026A81D00FB49C8EE60A7D152FE7BCE160AAE3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ExporterFunc>
struct ValueCollection_t9DEC1A402FF8D1E7F33F67FF13F0D9C8B3AB434C;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ImporterFunc>
struct ValueCollection_tF7998DF06D1D07D517739DA512466779BCC73787;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Reflection.MethodInfo>
struct ValueCollection_tA395C0460635906E16AC5F8593D8BCB9A6C656B3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ObjectMetadata>
struct ValueCollection_t2C9CB7257121A667C1587DCE644D26B187E0D6B5;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>[]
struct EntryU5BU5D_tDFD4E62BB3F1C0F3B7819DAEE99FF5E659B06D91;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Int32[]>[]
struct EntryU5BU5D_tE39FFA41A51BE829EA4A822560291EDF5752730D;
// System.Collections.Generic.Dictionary`2/Entry<System.String,LitJson.JsonData>[]
struct EntryU5BU5D_tFFD6B8317B8A4EC04C0CA2219BB927484E757C66;
// System.Collections.Generic.Dictionary`2/Entry<System.String,LitJson.PropertyMetadata>[]
struct EntryU5BU5D_tA7A095FC67289B7550B389A45FAEAD876ABC79DB;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>[]
struct EntryU5BU5D_tDB5466124978048AEE7EB5E0E3E00A17730CCD48;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>[]
struct EntryU5BU5D_tBE94ACF469E632D10D12216E35F0F03019768F7C;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>[]
struct EntryU5BU5D_t6571231E1804E10DF85CA83869BEEB713E4A4DE2;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,LitJson.ArrayMetadata>[]
struct EntryU5BU5D_t0761EEEEF2622AAB5B39E69A7492D75B065C58D6;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,LitJson.ExporterFunc>[]
struct EntryU5BU5D_tABDBD24101DD7CE5A8D84BB5879160B31EAC148A;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,LitJson.ImporterFunc>[]
struct EntryU5BU5D_tB852E8F817BCE8CDD4C6979579F1737AB30EF83B;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Reflection.MethodInfo>[]
struct EntryU5BU5D_t6D60396D99C16167704D8C5FDCA8092D8EDBAA19;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,LitJson.ObjectMetadata>[]
struct EntryU5BU5D_tDE228C379B6987B7CBBCC56E46244D08D332886F;
// System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>[]
struct KeyValuePair_2U5BU5D_tD567A773BB79854B9F60CD456C76D7B0FFC5D67F;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Globalization.CalendarId[]
struct CalendarIdU5BU5D_t559EDBF1B819A695624BE9004EAA4FFA38B65CDA;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// LitJson.JsonData[]
struct JsonDataU5BU5D_t188E4B690F13A24B3486BD318C767E9BECCE3D72;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7;
// LitJson.PropertyMetadata[]
struct PropertyMetadataU5BU5D_t74226C57698FFA61D8846D575CF58DC855C9CD07;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// LitJson.WriterContext[]
struct WriterContextU5BU5D_tBFF8768BDE5F671BEEE483FBAF7A92CB6D8DE657;
// System.Globalization.DateTimeFormatInfo/TokenHashValue[]
struct TokenHashValueU5BU5D_t3F8794937D04BA380989A813F33418CED58E80B9;
// LitJson.Lexer/StateHandler[]
struct StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93;
// System.ApplicationException
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.Collections.ArrayList
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// LitJson.ExporterFunc
struct ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// LitJson.FsmContext
struct FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.ICollection
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// LitJson.IJsonWrapper
struct IJsonWrapper_t447B39837883BA1281A17C3D6BA122AD22837DD9;
// System.Collections.IList
struct IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D;
// LitJson.ImporterFunc
struct ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5;
// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// LitJson.JsonData
struct JsonData_t3C51D89A19D30A47A74617107D861959322307F1;
// LitJson.JsonException
struct JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76;
// LitJson.JsonMapper
struct JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A;
// LitJson.JsonReader
struct JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD;
// LitJson.JsonWriter
struct JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F;
// LitJson.Lexer
struct Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// LitJson.OrderedDictionaryEnumerator
struct OrderedDictionaryEnumerator_t557577F1E3C3DC7E5A3BFA6B12F2E0F7921D9C18;
// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.IO.StringReader
struct StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8;
// System.IO.StringWriter
struct StringWriter_tF48052BE4F980E5C85403221E835768E4156267D;
// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7;
// System.IO.TextWriter
struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3;
// System.Type
struct Type_t;
// System.Text.UnicodeEncoding
struct UnicodeEncoding_t2C90D9E1E55C16081FACA57B229053C1EF05DAF0;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// LitJson.WrapperFactory
struct WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD;
// LitJson.WriterContext
struct WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F;
// LitJson.JsonData/BlackBox
struct BlackBox_t5B6E59097EE44D502385DD31F784B3BD2E71E1AB;
// LitJson.Lexer/StateHandler
struct StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t13D69527163788C316AD7673426765F0A3E018A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t403ABC2FA2D9740F9ADD28DB8815C00EE2DB4249_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t51F843E5AA0162639CFD12BF0859C4C0FF822998_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t9017400E4435187C1FB3841B4F5843B94836A625_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tAA76A881C8942A9F8F63F6BEE2A572DCF133AB93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tB42EF32D51D7595BF925017BF4A743C5B97C9053_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tB7188876A70AC81C939F78F9171156E43ED476CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tD786692960EC82E79B160F75E780BA867D6C1BBD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tD88E8C222DEDEFACEF548AAB380B9ED228B42954_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tD8EF042176D7CCA0618F7F42494A6AAD68478914_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tDF79546961566D2D6F7C4155F7ED851428AA9931_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FieldInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t3D10824E2D7EC716BB4188AE53FF69437B9FDED5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t5C03FBFD5ECBDE4EAB8C4ED582DDFCF702EB5DC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t76010575BE25258AB4D5EFFF458A7FCD2F1030A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tD9AFA6DDEDB81906ED90E6DD2E1A6E8CB9A28A97_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tE29700207988CC46641C84FE3D958DAF55F9ECDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tE4324299D87C0ED69EFF6083103E594ED9299AF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t02C6BF8BB03B58DD552B193E9CABACD0AF9CCFA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t0BD8FD9B6F60BD6B18C6D1CD2BE215E7F97D3D63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t14E89C96BA24B565BED22155CB0969211ADEB1AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t3CC56282CC2E992AD8F56406430E76F0711457AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t74600F66BA04DC423A37DB24919A3C9D56D75B43_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t8918FFC362E99797BB0E47D0D787D923EC3C8AAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t8B67C0BACED3ABBE0BB390A264074F9245F22842_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t9503DE0744217071D554CC415B2890C454070024_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_tAD4D3CC9C1631510439F3806F67FAA90CE4C4313_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_tBDC061B9374E6628F4296689FB32A9C598E45C4B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_tC6EEF4DE19255D76EDF497CDE277E5578CB81EB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_tE7FFBD71D86A280E4B101DF2F8E59C9FFFAA4C29_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t985709A916F4830CF54F2EB0DE74174B85F2414C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tDFAB6A0EC1A6A40B5D759F32652B70BD609099EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tE918F8F2362B68438A431F84E92E542A23B318B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t05B5613D1899393C5D9EB2B8AE7E874C4C23ED6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t25804F9E75602AB0E9BBE15E15AA81B10A0A1FCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tA8D764B99B6196299ECE08BCBA02AB2EE733CB1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IJsonWrapper_t447B39837883BA1281A17C3D6BA122AD22837DD9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t0E22BD75314F60626B98C2C1FA5B2634BA7F5A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_tCE0C7B37A9126CC0CB3277FBC9C4B9161B866C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOrderedDictionary_t4705C37EB66554997A0F3C58A92EE8E202BD46E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonType_t9CFC52444C5F4ADB07D070974C5E58842A9AB006_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3F16D5D88FAFD68886DA28A9E82E74E30BE371F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF2E1AB00AE46093D3DBEBFF23EE42498976376CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tFC3915CEAB0CCCC11D0AB7F2D3717177D1111111_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OrderedDictionaryEnumerator_t557577F1E3C3DC7E5A3BFA6B12F2E0F7921D9C18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParserToken_t028CC13C177D864835928A77CF1DD250271E3570_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeArray_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringWriter_tF48052BE4F980E5C85403221E835768E4156267D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7B18f18ac2U2Df585U2D405aU2Dac91U2Dbcb41785a078U7D_tACFC88B052112E097360D2A31C5DC6CFC2372D2C____U24fieldU2D0_0_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7B18f18ac2U2Df585U2D405aU2Dac91U2Dbcb41785a078U7D_tACFC88B052112E097360D2A31C5DC6CFC2372D2C____U24fieldU2D1_1_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7B18f18ac2U2Df585U2D405aU2Dac91U2Dbcb41785a078U7D_tACFC88B052112E097360D2A31C5DC6CFC2372D2C____U24fieldU2D2_2_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7B18f18ac2U2Df585U2D405aU2Dac91U2Dbcb41785a078U7D_tACFC88B052112E097360D2A31C5DC6CFC2372D2C____U24fieldU2D3_3_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7B18f18ac2U2Df585U2D405aU2Dac91U2Dbcb41785a078U7D_tACFC88B052112E097360D2A31C5DC6CFC2372D2C____U24fieldU2D4_4_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7B18f18ac2U2Df585U2D405aU2Dac91U2Dbcb41785a078U7D_tACFC88B052112E097360D2A31C5DC6CFC2372D2C____U24fieldU2D5_5_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7B18f18ac2U2Df585U2D405aU2Dac91U2Dbcb41785a078U7D_tACFC88B052112E097360D2A31C5DC6CFC2372D2C____U24fieldU2D6_6_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7B18f18ac2U2Df585U2D405aU2Dac91U2Dbcb41785a078U7D_tACFC88B052112E097360D2A31C5DC6CFC2372D2C____U24fieldU2D7_7_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7B18f18ac2U2Df585U2D405aU2Dac91U2Dbcb41785a078U7D_tACFC88B052112E097360D2A31C5DC6CFC2372D2C____U24fieldU2D8_8_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7B18f18ac2U2Df585U2D405aU2Dac91U2Dbcb41785a078U7D_tACFC88B052112E097360D2A31C5DC6CFC2372D2C____U24fieldU2D9_9_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7B18f18ac2U2Df585U2D405aU2Dac91U2Dbcb41785a078U7D_tACFC88B052112E097360D2A31C5DC6CFC2372D2C____U24fieldU2DA_10_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7B18f18ac2U2Df585U2D405aU2Dac91U2Dbcb41785a078U7D_tACFC88B052112E097360D2A31C5DC6CFC2372D2C____U24fieldU2DB_11_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7B18f18ac2U2Df585U2D405aU2Dac91U2Dbcb41785a078U7D_tACFC88B052112E097360D2A31C5DC6CFC2372D2C____U24fieldU2DC_12_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral057118C49B28F31FA4955B194753088DDCD94999;
IL2CPP_EXTERN_C String_t* _stringLiteral0B4852B6F2412388B50C99BF806BFE926E4FFEA5;
IL2CPP_EXTERN_C String_t* _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A;
IL2CPP_EXTERN_C String_t* _stringLiteral1168E92C164109D6220480DEDA987085B2A21155;
IL2CPP_EXTERN_C String_t* _stringLiteral13026DD559AA5A6B131F15B7DB4105EA898DA4D9;
IL2CPP_EXTERN_C String_t* _stringLiteral1D59E6177FAE880C9EF94663465FEEDCD97D999F;
IL2CPP_EXTERN_C String_t* _stringLiteral2FDBCAC73EFAEC70FABB5B26409911A2BCC55B44;
IL2CPP_EXTERN_C String_t* _stringLiteral3B9E9A2C5E31742E65966C199480343A968BE2CF;
IL2CPP_EXTERN_C String_t* _stringLiteral3FB649A9FAAB5634336E279002E9E84D9AFCA0FC;
IL2CPP_EXTERN_C String_t* _stringLiteral4076FB7A81E0ECCB3522A3F4255886AD85D85905;
IL2CPP_EXTERN_C String_t* _stringLiteral437906DA6527EA9BAA9A971EC5171183BEB85B59;
IL2CPP_EXTERN_C String_t* _stringLiteral447D2D55725EF428A6F4753B53612ECA1764ECE7;
IL2CPP_EXTERN_C String_t* _stringLiteral456BA6DFA4ECDFAAD0D654A1EC48EE0C8CB90B18;
IL2CPP_EXTERN_C String_t* _stringLiteral45C6FAA87CD0123CD17D47EA53DEAA5A748C6A04;
IL2CPP_EXTERN_C String_t* _stringLiteral464EA4526685475D814F5FF8C1459165CBF8967A;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral5149D2AD92135C0DFA7131CADBFCC669275E96B5;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral638C5441E8427B2B9D2C941DDBF958579B5FE3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral65178450579333918C3BDA9FEBAE91C079EABDE7;
IL2CPP_EXTERN_C String_t* _stringLiteral6BAB8F53EE6BDD0369569E27A174F474EA370914;
IL2CPP_EXTERN_C String_t* _stringLiteral6DEED36FFF14869BC9ABC87FCC45B3DA6985BEEC;
IL2CPP_EXTERN_C String_t* _stringLiteral709B8FFB36A9C2A4ADB7BD81DE14F1AAE07AD798;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral7B6EE056E549534162451A09C7F0AFAC372DBD06;
IL2CPP_EXTERN_C String_t* _stringLiteral7DF685091771A18E38BD7386A978D86E63623EBA;
IL2CPP_EXTERN_C String_t* _stringLiteral82A13B351F60D442B29C59FEDF02FF7E52C04163;
IL2CPP_EXTERN_C String_t* _stringLiteral84BE6DF7F5E86A94476E7ED44C8A9ACA10E6236A;
IL2CPP_EXTERN_C String_t* _stringLiteral8515553A5B3BDCBB0920E96A5FD0FC34F11C2713;
IL2CPP_EXTERN_C String_t* _stringLiteral8E284AA45C643AAA8D3553AA7AB6A1C3BC3E32D1;
IL2CPP_EXTERN_C String_t* _stringLiteral999DBDC959C03AA352D6BBA2EE5B69A49B9F2393;
IL2CPP_EXTERN_C String_t* _stringLiteral9CBCD572886BE3E0FA105AA3A7FE08AABFF19B79;
IL2CPP_EXTERN_C String_t* _stringLiteral9D9FB48D8A068EC2148400327674524D1B988AC3;
IL2CPP_EXTERN_C String_t* _stringLiteralAB6E8D33884A8AB4625102A8EEE80D34FD589540;
IL2CPP_EXTERN_C String_t* _stringLiteralAC752DDD9E7D71113EA72864BE92198866B1D658;
IL2CPP_EXTERN_C String_t* _stringLiteralB3AF6981667F40A32E02D8E30F7F87E6D80E0C8B;
IL2CPP_EXTERN_C String_t* _stringLiteralB44026C99001F09F5D70AE0AE9300ACDF0D6A660;
IL2CPP_EXTERN_C String_t* _stringLiteralB6F02FE6CD732AB22BD11BE4254D9546F3BEEE58;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralBBC2182A95A29E2752FA60C92F779B599B7B43ED;
IL2CPP_EXTERN_C String_t* _stringLiteralC2B624A34AE5F3AF1DE39F5AA12C5DBF59299E28;
IL2CPP_EXTERN_C String_t* _stringLiteralC31E66F919D06AD2730738EF7F884271E99BB7DA;
IL2CPP_EXTERN_C String_t* _stringLiteralC63496F78F80F09E4841EF5CD0DA8DAF7028FB4B;
IL2CPP_EXTERN_C String_t* _stringLiteralCDA723AA4DBB226A906416AA9BF1C2D4CEC53C89;
IL2CPP_EXTERN_C String_t* _stringLiteralCEE7535349ADB76DD55B08451D311FC3CF06A19C;
IL2CPP_EXTERN_C String_t* _stringLiteralD5DF53EB5CC9A30D6CA4EECD8F9C4882ABF00BB6;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralDCAF96AFD9825EC0819F85E3953F28B330B45CC3;
IL2CPP_EXTERN_C String_t* _stringLiteralE09E38B1A3E02297C148733DE7EED6E5DC8479F5;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralE53B6FBD162C91AD5A0438452E33647A61BBA15D;
IL2CPP_EXTERN_C String_t* _stringLiteralECAC83771A00C701043A940F621CC1C765D30D31;
IL2CPP_EXTERN_C String_t* _stringLiteralF7E5EFDC670ACA0D3155DEFB95477AD16E9744EB;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m186154EAD1DF359706A7CF36C6BD7F5ACC47CFB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m224AC90EC65DF7D2F4D85F0DDEC5FECC74920277_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m3D7546A6DF9CDDA353873ECE10E542AD6406A825_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m3F530E7CD9CC3EB97DCC6E1669EAB9FCE984FA9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m57E4DE0721BD2D645AF3036D988B131AAB138227_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m69403AE90D12CA520ABB728A1557B42580BBC7DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m7B6BA98348249476333A6F6C3EFB7E2ABAEF49A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m95FEBED8F3E1B9BB1282B2C7E18C736BDC259D49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mB364E5DE0CF679AC362662B5C96B6A6FB6B12AB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mE6A439BEA4E21EF9C6E01E19390EE90B680DD348_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mF37C098D396E6388CF354D6F37970685A85B6FC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mFDB6B4CAA4E2AE6E8C2EA0D6D7DE7172BF609E65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_EnsureCollection_mFB01D813BC8765113931EF533783BA5BC764C283_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_EnsureDictionary_m402293ECDF1F18AE8CA8259A102E698ADD3A8EB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_EnsureList_m6FCDB06F594222F9584291F20B3DA2FF4E5CE718_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_LitJson_IJsonWrapper_GetBoolean_m02229DB77CB8074F0F2ED898D0CE29BA4350B95B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_LitJson_IJsonWrapper_GetDouble_mBB4264E6B18E4DF17A4B00CB0BFE838A3895AE69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_LitJson_IJsonWrapper_GetInt_mC20A4D6F04A93056C1FB067C68E092AA4CE13BEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_LitJson_IJsonWrapper_GetLong_mC36169157591BD9D3A60C529659D4F6EF01A268D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_LitJson_IJsonWrapper_GetString_m6EA810BD49C5125077D92E11DFEC4AFE0A4235E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_System_Collections_IDictionary_set_Item_m9E5C2463B2821FC2B3BE28F28F1050AE388902F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData__ctor_mA02A77C55F31BBE7F62D84ADEAC445BB4D6BF6F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_op_Explicit_m0A788F49E28DE18F33D851EF8C95D496A2275B48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_op_Explicit_m7AD19ED5C99B6C2BEAC71AD2C892C86ED3F8F55C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_op_Explicit_m91889F4D3822778AFF7632F5B30BD281EA937F09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_op_Explicit_m94F189BE9636A52B7E699F988282EAEF9342751D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_op_Explicit_mA048CAEE607C55B0E82B2051CDC921A7E54A9AD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Em__0_mA532619A7EC7C9DEF4D6EB38B4DCFC147410C780_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Em__1_m110FF8AA5363BCD46796FAD1F2D8FED836BFDDBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Em__2_m0FD239C7D31079CE0675AFB2A018A1FC3F43B011_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Em__3_mA29C3028DA92212563CFE9D81330CF54DAB65B8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Em__4_mCBDFEBE0258C9356C1344220ED444CE561296DAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Em__5_mF9877906A7374E0EF585198C87932BA56E702E16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Em__6_m990DB5417D13B4039F5ECF7EE748C4A26358B8CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Em__7_mCADDB28F9A068F794CFFCA92C11FEAB6789505F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Em__8_mDA9844C013501A93EB4D8E6EAEE1F16FF13A6575_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__10_m373921C4F987CB8342108CA7B892AFC9359FEA94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__11_m3DB56AA4D337205711CC07D354E67D28C1C1C586_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__12_m31F2706B1EDA98CF528C80328ACB64DBF7A3B95D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__13_m881B1EBE03FFD1ECAAEAD3FB23ACA14D2F639B07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__14_mDD8CDBB9BBD6B45989EDBA945F727DE509618E2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__9_mAA0E4C56A03D5340767AF319EF2E3A1FAEF97E83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__A_mA1F5749E268B8573AE59CA4AFDA294E06C5B495D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__B_m3ADD4F61880F2DBF16970403F0C4AB6D0CA5C866_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__C_m8F5FA54FC18A79A77BD4A8063E6EFDD101FBE7A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__D_m82DF7F475A2E0DA9EB74C493C41475475EC56DF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__E_mFF7D39CF1F9C6539031853BF7282E96823BFDD6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__F_mBD6BB1B68A7163693A2F8207F22CA0E9DBD1CDB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CToObjectU3Em__15_mC1C337655E42A4F849ACD7335C8271278B0A1542_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CToObjectU3Em__16_m8DA1098B91A6C53C80739287E9B586FEA13E4CC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CToObjectU3Em__17_mBE9335E726649414F7F89885844EBCA138B6DCCF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_WriteValue_m143881E655EEAE7440BFE564E13A2580A021DBDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonReader_Read_mD8D28369934A79C6A0125279F425E48D1D35AE7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonReader__ctor_mDC4C842CE01B549E193647B6BFEE5420187C446A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonWriter_DoValidation_m3F03AD6E422930F933D182AD01154E08F32EFF3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonWriter__ctor_m59AEC417CBCF6AB49675BCCFD00F274C31D3585E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2__ctor_mF8563179C2DDD7A9FDB625D79ABD337FB772A683_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mB20EAD0A1F549096009239692374BA2D53CC56C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m1AF62875E8518A1790EFF3FBB65608529D80A79E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_NextToken_m1FC49AB01B8C3D281961541D1D7D1A8721B06083_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State10_m5904073970AD0D36A52E6EF3528D8932E8588D59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State11_m5A9D0CA38509AB81A532487CF5D2DC65D6B71F04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State12_m958CFDBC029123955374295C3E9913D1599A196D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State13_m560152ABC44290068A66CB6BFC939C5AAFEC51FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State14_m8C25AB90286E32F384E390E17E726F1BC08BC9DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State15_m00E0DE3464F1159F7EB835A3286EFFA40B558403_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State16_m8BD82487456FA900D6BBDED72C8C975696D67804_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State17_mDFB66C6B09C25B8B8CC2EC226F446FEF70AFE493_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State18_m2C29A371734A3AF4B66ACD39EA4356FCEEB42703_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State19_mD468E390FBA1C3B79566FD0CF8AB183BEF7B9A7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State1_m35B7B80F34B274EC767AAE1FB3F61D2DB4A64699_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State20_mB134E41DBE7A01B14B8ADBBEDFAE16596CB76C1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State21_m98740912488BE0C617E7112B1EFA0CC52080297A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State22_m40E243F9BE396E171757231B9D5045880E92EC2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State23_m14C029F3770CEF5E40A14DE7B3D3C2952D9C385F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State24_mD981E66641429ED14661F0D83F155ACB0ADE601E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State25_m846973336CD8B49363EBCFB9EF83676772B9B6F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State26_m464EBDB9597D118A7666A693F407F7E7126752EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State27_mFDC378B071D2ABA7045A6CE1B8AE7C7F40D99638_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State28_m151FEC6858FB9E2A515CABFEFEDE5DAB3F736F91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State2_m205EFB31447C24D81684803A8952AE47F34289E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State3_mD4320873954DA33A7B26AA9B6CF7CD64A8588783_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State4_m88410392996F1D5DAB6DADC91AE16FC7CA54FF86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State5_mA1FA2D1CC7595C3D70A02973568DADDD27CFFA87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State6_m4B7FE39523E86CA3283F618065D8647CCFC6C0B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State7_m5464256E9F4EF412B26461E52B133812F79EFA41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State8_mEE57AB611D759135E18E796C685799AF59653DF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State9_m2A2DF75F8B8AEFAAFF778393AFCC9605ED84C01C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m53AA73BE6E2FF2045F347EBCEE46E8E4EE524E5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m71FFC1A9C81BB314F91B10BE885521A22E708BF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mAAC32D144B3A74FCD65A76B4CA7CB1D2024A1E3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Clear_m6ADA89EC27B8CEB290D73A08C00E14FCF1440D65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Clear_mEE1C6E0AF654AE01D41D12DAF62217D4FE3930E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Peek_m20439CD5B4898A681D0F39D58BBC7E2C21CA584C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Peek_m919AA48BFC239B260BB6A0639B8E027B60CB8B66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_m98A1DBF775D66CFC5149DF79AFD2042E2E54ABC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_mCC27D4FD504E058A5A42BE3285782C44D715DF4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_m2A8D4EF841D474ABBD42CA0BE7389F3C1A1A31E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_mF63AE96E8925749CDACE05B89002A389DDD748D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_get_Count_m145C99D2412AD5B6C8CADF47696A334272AA6EDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* JsonData_t3C51D89A19D30A47A74617107D861959322307F1_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C;
struct PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t625F4EE40CDF76E63929DA3A0864C5AEF068DCF1 
{
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
struct Dictionary_2_t403ABC2FA2D9740F9ADD28DB8815C00EE2DB4249  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tDFD4E62BB3F1C0F3B7819DAEE99FF5E659B06D91* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tE8399140098D3D8028A8D5FB2CBF88B0965541B7* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t28FD47FCC4F1763B936C9A4BB2A8B2276E633FEF* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32[]>
struct Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tE39FFA41A51BE829EA4A822560291EDF5752730D* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tC542A7519E04306FF4830698FC8A485843209C5F* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t6D44D0A2B65933FB953BE36FD019130BBA243B59* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,LitJson.JsonData>
struct Dictionary_2_tDF79546961566D2D6F7C4155F7ED851428AA9931  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tFFD6B8317B8A4EC04C0CA2219BB927484E757C66* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tE6688B1D0092F017DF2F4826CC5D84C949D2429E* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t59C53309B419C328FC0837737FEF760AE047CD0D* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>
struct Dictionary_2_tD88E8C222DEDEFACEF548AAB380B9ED228B42954  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tA7A095FC67289B7550B389A45FAEAD876ABC79DB* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t955DF6F14659134D09E141EB4425AF8F55F679AA* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t32358315F68FC5BD948EBFB7C6EB843D1BAE6BC9* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct Dictionary_2_t51F843E5AA0162639CFD12BF0859C4C0FF822998  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tDB5466124978048AEE7EB5E0E3E00A17730CCD48* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t5DAF380E2438DEBAE74A7EE923FDFEEE1C5BDC80* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t83E53BA3EA08DD561AC7C5EDB4531AD216CFCE61* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>
struct Dictionary_2_tD786692960EC82E79B160F75E780BA867D6C1BBD  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tBE94ACF469E632D10D12216E35F0F03019768F7C* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t9467C64146E0E28B1B96A0A953D40232244C1EF5* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tAFECE5DF6F1FB1BEF304EAA61C4F731E871A681B* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
struct Dictionary_2_tAA76A881C8942A9F8F63F6BEE2A572DCF133AB93  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t6571231E1804E10DF85CA83869BEEB713E4A4DE2* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t011DD148DD1E459C54D3B86D436275360A0B864A* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t8110CF124D20114B9F5705E2434F2DDFE505CC3A* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>
struct Dictionary_2_tB42EF32D51D7595BF925017BF4A743C5B97C9053  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t0761EEEEF2622AAB5B39E69A7492D75B065C58D6* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t2268EDE7A9B4F936A672B3380267DF730779A1B2* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t62026A81D00FB49C8EE60A7D152FE7BCE160AAE3* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ExporterFunc>
struct Dictionary_2_t13D69527163788C316AD7673426765F0A3E018A0  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tABDBD24101DD7CE5A8D84BB5879160B31EAC148A* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t5B6745FEC66770915D98FF9337430E39F2C7F596* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t9DEC1A402FF8D1E7F33F67FF13F0D9C8B3AB434C* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ImporterFunc>
struct Dictionary_2_t9017400E4435187C1FB3841B4F5843B94836A625  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tB852E8F817BCE8CDD4C6979579F1737AB30EF83B* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t5E5ADF12F5CBD0ACE41CD4E6FDE74FC9A04FABCA* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tF7998DF06D1D07D517739DA512466779BCC73787* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.MethodInfo>
struct Dictionary_2_tB7188876A70AC81C939F78F9171156E43ED476CB  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t6D60396D99C16167704D8C5FDCA8092D8EDBAA19* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t8D45DD26CAEC5F17F2CEEBE8D6F33B09D3E41E54* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tA395C0460635906E16AC5F8593D8BCB9A6C656B3* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ObjectMetadata>
struct Dictionary_2_tD8EF042176D7CCA0618F7F42494A6AAD68478914  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tDE228C379B6987B7CBBCC56E46244D08D332886F* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tF98E87A008809415D6AB6F9C787C311786D2F016* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t2C9CB7257121A667C1587DCE644D26B187E0D6B5* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>
struct List_1_tFC3915CEAB0CCCC11D0AB7F2D3717177D1111111  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_tD567A773BB79854B9F60CD456C76D7B0FFC5D67F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<LitJson.JsonData>
struct List_1_tF2E1AB00AE46093D3DBEBFF23EE42498976376CA  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	JsonDataU5BU5D_t188E4B690F13A24B3486BD318C767E9BECCE3D72* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<LitJson.PropertyMetadata>
struct List_1_t3F16D5D88FAFD68886DA28A9E82E74E30BE371F8  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	PropertyMetadataU5BU5D_t74226C57698FFA61D8846D575CF58DC855C9CD07* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.Stack`1<System.Int32>
struct Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Collections.Generic.Stack`1<LitJson.WriterContext>
struct Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	WriterContextU5BU5D_tBFF8768BDE5F671BEEE483FBAF7A92CB6D8DE657* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// <PrivateImplementationDetails>{18f18ac2-f585-405a-ac91-bcb41785a078}
struct U3CPrivateImplementationDetailsU3EU7B18f18ac2U2Df585U2D405aU2Dac91U2Dbcb41785a078U7D_tACFC88B052112E097360D2A31C5DC6CFC2372D2C  : public RuntimeObject
{
};

// System.Collections.ArrayList
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A  : public RuntimeObject
{
	// System.Object[] System.Collections.ArrayList::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_0;
	// System.Int32 System.Collections.ArrayList::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.ArrayList::_version
	int32_t ____version_2;
	// System.Object System.Collections.ArrayList::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// LitJson.FsmContext
struct FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1  : public RuntimeObject
{
	// System.Boolean LitJson.FsmContext::Return
	bool ___Return_0;
	// System.Int32 LitJson.FsmContext::NextState
	int32_t ___NextState_1;
	// LitJson.Lexer LitJson.FsmContext::L
	Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* ___L_2;
	// System.Int32 LitJson.FsmContext::StateStack
	int32_t ___StateStack_3;
};

// LitJson.JsonMapper
struct JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A  : public RuntimeObject
{
};

// LitJson.JsonWriter
struct JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F  : public RuntimeObject
{
	// LitJson.WriterContext LitJson.JsonWriter::context
	WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* ___context_1;
	// System.Collections.Generic.Stack`1<LitJson.WriterContext> LitJson.JsonWriter::ctx_stack
	Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD* ___ctx_stack_2;
	// System.Boolean LitJson.JsonWriter::has_reached_end
	bool ___has_reached_end_3;
	// System.Char[] LitJson.JsonWriter::hex_seq
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___hex_seq_4;
	// System.Int32 LitJson.JsonWriter::indentation
	int32_t ___indentation_5;
	// System.Int32 LitJson.JsonWriter::indent_value
	int32_t ___indent_value_6;
	// System.Text.StringBuilder LitJson.JsonWriter::inst_string_builder
	StringBuilder_t* ___inst_string_builder_7;
	// System.Boolean LitJson.JsonWriter::pretty_print
	bool ___pretty_print_8;
	// System.Boolean LitJson.JsonWriter::validate
	bool ___validate_9;
	// System.IO.TextWriter LitJson.JsonWriter::writer
	TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___writer_10;
};

// LitJson.Lexer
struct Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9  : public RuntimeObject
{
	// System.Boolean LitJson.Lexer::allow_comments
	bool ___allow_comments_2;
	// System.Boolean LitJson.Lexer::allow_single_quoted_strings
	bool ___allow_single_quoted_strings_3;
	// System.Boolean LitJson.Lexer::end_of_input
	bool ___end_of_input_4;
	// LitJson.FsmContext LitJson.Lexer::fsm_context
	FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___fsm_context_5;
	// System.Int32 LitJson.Lexer::input_buffer
	int32_t ___input_buffer_6;
	// System.Int32 LitJson.Lexer::input_char
	int32_t ___input_char_7;
	// System.IO.TextReader LitJson.Lexer::reader
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___reader_8;
	// System.Int32 LitJson.Lexer::state
	int32_t ___state_9;
	// System.Text.StringBuilder LitJson.Lexer::string_buffer
	StringBuilder_t* ___string_buffer_10;
	// System.String LitJson.Lexer::string_value
	String_t* ___string_value_11;
	// System.Int32 LitJson.Lexer::token
	int32_t ___token_12;
	// System.Int32 LitJson.Lexer::unichar
	int32_t ___unichar_13;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472  : public RuntimeObject
{
	// System.Int32[] System.Globalization.NumberFormatInfo::numberGroupSizes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___numberGroupSizes_1;
	// System.Int32[] System.Globalization.NumberFormatInfo::currencyGroupSizes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___currencyGroupSizes_2;
	// System.Int32[] System.Globalization.NumberFormatInfo::percentGroupSizes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___percentGroupSizes_3;
	// System.String System.Globalization.NumberFormatInfo::positiveSign
	String_t* ___positiveSign_4;
	// System.String System.Globalization.NumberFormatInfo::negativeSign
	String_t* ___negativeSign_5;
	// System.String System.Globalization.NumberFormatInfo::numberDecimalSeparator
	String_t* ___numberDecimalSeparator_6;
	// System.String System.Globalization.NumberFormatInfo::numberGroupSeparator
	String_t* ___numberGroupSeparator_7;
	// System.String System.Globalization.NumberFormatInfo::currencyGroupSeparator
	String_t* ___currencyGroupSeparator_8;
	// System.String System.Globalization.NumberFormatInfo::currencyDecimalSeparator
	String_t* ___currencyDecimalSeparator_9;
	// System.String System.Globalization.NumberFormatInfo::currencySymbol
	String_t* ___currencySymbol_10;
	// System.String System.Globalization.NumberFormatInfo::ansiCurrencySymbol
	String_t* ___ansiCurrencySymbol_11;
	// System.String System.Globalization.NumberFormatInfo::nanSymbol
	String_t* ___nanSymbol_12;
	// System.String System.Globalization.NumberFormatInfo::positiveInfinitySymbol
	String_t* ___positiveInfinitySymbol_13;
	// System.String System.Globalization.NumberFormatInfo::negativeInfinitySymbol
	String_t* ___negativeInfinitySymbol_14;
	// System.String System.Globalization.NumberFormatInfo::percentDecimalSeparator
	String_t* ___percentDecimalSeparator_15;
	// System.String System.Globalization.NumberFormatInfo::percentGroupSeparator
	String_t* ___percentGroupSeparator_16;
	// System.String System.Globalization.NumberFormatInfo::percentSymbol
	String_t* ___percentSymbol_17;
	// System.String System.Globalization.NumberFormatInfo::perMilleSymbol
	String_t* ___perMilleSymbol_18;
	// System.String[] System.Globalization.NumberFormatInfo::nativeDigits
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___nativeDigits_19;
	// System.Int32 System.Globalization.NumberFormatInfo::m_dataItem
	int32_t ___m_dataItem_20;
	// System.Int32 System.Globalization.NumberFormatInfo::numberDecimalDigits
	int32_t ___numberDecimalDigits_21;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyDecimalDigits
	int32_t ___currencyDecimalDigits_22;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyPositivePattern
	int32_t ___currencyPositivePattern_23;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyNegativePattern
	int32_t ___currencyNegativePattern_24;
	// System.Int32 System.Globalization.NumberFormatInfo::numberNegativePattern
	int32_t ___numberNegativePattern_25;
	// System.Int32 System.Globalization.NumberFormatInfo::percentPositivePattern
	int32_t ___percentPositivePattern_26;
	// System.Int32 System.Globalization.NumberFormatInfo::percentNegativePattern
	int32_t ___percentNegativePattern_27;
	// System.Int32 System.Globalization.NumberFormatInfo::percentDecimalDigits
	int32_t ___percentDecimalDigits_28;
	// System.Int32 System.Globalization.NumberFormatInfo::digitSubstitution
	int32_t ___digitSubstitution_29;
	// System.Boolean System.Globalization.NumberFormatInfo::isReadOnly
	bool ___isReadOnly_30;
	// System.Boolean System.Globalization.NumberFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_31;
	// System.Boolean System.Globalization.NumberFormatInfo::m_isInvariant
	bool ___m_isInvariant_32;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsNumber
	bool ___validForParseAsNumber_33;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsCurrency
	bool ___validForParseAsCurrency_34;
};

// LitJson.OrderedDictionaryEnumerator
struct OrderedDictionaryEnumerator_t557577F1E3C3DC7E5A3BFA6B12F2E0F7921D9C18  : public RuntimeObject
{
	// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>> LitJson.OrderedDictionaryEnumerator::list_enumerator
	RuntimeObject* ___list_enumerator_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// LitJson.WriterContext
struct WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F  : public RuntimeObject
{
	// System.Int32 LitJson.WriterContext::Count
	int32_t ___Count_0;
	// System.Boolean LitJson.WriterContext::InArray
	bool ___InArray_1;
	// System.Boolean LitJson.WriterContext::InObject
	bool ___InObject_2;
	// System.Boolean LitJson.WriterContext::ExpectingValue
	bool ___ExpectingValue_3;
	// System.Int32 LitJson.WriterContext::Padding
	int32_t ___Padding_4;
};

// LitJson.JsonData/BlackBox
struct BlackBox_t5B6E59097EE44D502385DD31F784B3BD2E71E1AB  : public RuntimeObject
{
	// LitJson.IJsonWrapper LitJson.JsonData/BlackBox::obj
	RuntimeObject* ___obj_0;
	// LitJson.JsonWriter LitJson.JsonData/BlackBox::writer
	JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___writer_1;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.String>
struct Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	String_t* ____current_3;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>
struct KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	JsonData_t3C51D89A19D30A47A74617107D861959322307F1* ___value_1;
};

// LitJson.ArrayMetadata
struct ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D 
{
	// System.Type LitJson.ArrayMetadata::element_type
	Type_t* ___element_type_0;
	// System.Boolean LitJson.ArrayMetadata::is_array
	bool ___is_array_1;
	// System.Boolean LitJson.ArrayMetadata::is_list
	bool ___is_list_2;
};
// Native definition for P/Invoke marshalling of LitJson.ArrayMetadata
struct ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D_marshaled_pinvoke
{
	Type_t* ___element_type_0;
	int32_t ___is_array_1;
	int32_t ___is_list_2;
};
// Native definition for COM marshalling of LitJson.ArrayMetadata
struct ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D_marshaled_com
{
	Type_t* ___element_type_0;
	int32_t ___is_array_1;
	int32_t ___is_list_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Decimal::flags
			int32_t ___flags_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_9_OffsetPadding[4];
			// System.Int32 System.Decimal::hi
			int32_t ___hi_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_9_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_10_OffsetPadding[8];
			// System.Int32 System.Decimal::lo
			int32_t ___lo_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_10_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_11_OffsetPadding[12];
			// System.Int32 System.Decimal::mid
			int32_t ___mid_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_11_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_12_OffsetPadding[8];
			// System.UInt64 System.Decimal::ulomidLE
			uint64_t ___ulomidLE_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_12_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_12_forAlignmentOnly;
		};
	};
};

// System.Collections.DictionaryEntry
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB 
{
	// System.Object System.Collections.DictionaryEntry::_key
	RuntimeObject* ____key_0;
	// System.Object System.Collections.DictionaryEntry::_value
	RuntimeObject* ____value_1;
};
// Native definition for P/Invoke marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_pinvoke
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
// Native definition for COM marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_com
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// LitJson.ObjectMetadata
struct ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661 
{
	// System.Type LitJson.ObjectMetadata::element_type
	Type_t* ___element_type_0;
	// System.Boolean LitJson.ObjectMetadata::is_dictionary
	bool ___is_dictionary_1;
	// System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata> LitJson.ObjectMetadata::properties
	RuntimeObject* ___properties_2;
};
// Native definition for P/Invoke marshalling of LitJson.ObjectMetadata
struct ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661_marshaled_pinvoke
{
	Type_t* ___element_type_0;
	int32_t ___is_dictionary_1;
	RuntimeObject* ___properties_2;
};
// Native definition for COM marshalling of LitJson.ObjectMetadata
struct ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661_marshaled_com
{
	Type_t* ___element_type_0;
	int32_t ___is_dictionary_1;
	RuntimeObject* ___properties_2;
};

// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
};

// LitJson.PropertyMetadata
struct PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D 
{
	// System.Reflection.MemberInfo LitJson.PropertyMetadata::Info
	MemberInfo_t* ___Info_0;
	// System.Boolean LitJson.PropertyMetadata::IsField
	bool ___IsField_1;
	// System.Type LitJson.PropertyMetadata::Type
	Type_t* ___Type_2;
};
// Native definition for P/Invoke marshalling of LitJson.PropertyMetadata
struct PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D_marshaled_pinvoke
{
	MemberInfo_t* ___Info_0;
	int32_t ___IsField_1;
	Type_t* ___Type_2;
};
// Native definition for COM marshalling of LitJson.PropertyMetadata
struct PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D_marshaled_com
{
	MemberInfo_t* ___Info_0;
	int32_t ___IsField_1;
	Type_t* ___Type_2;
};

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
};

// System.IO.TextWriter
struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___CoreNewLine_3;
	// System.String System.IO.TextWriter::CoreNewLineStr
	String_t* ___CoreNewLineStr_4;
	// System.IFormatProvider System.IO.TextWriter::_internalFormatProvider
	RuntimeObject* ____internalFormatProvider_5;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// <PrivateImplementationDetails>{18f18ac2-f585-405a-ac91-bcb41785a078}/$ArrayType=112
struct U24ArrayTypeU3D112_tBDD00A4A5BB99853808FD6A6D7A89F7B2CE60238 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU3D112_tBDD00A4A5BB99853808FD6A6D7A89F7B2CE60238__padding[112];
	};
};

// <PrivateImplementationDetails>{18f18ac2-f585-405a-ac91-bcb41785a078}/$ArrayType=12
struct U24ArrayTypeU3D12_t21D7845400D381BC259F089838DC1627417D1F79 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU3D12_t21D7845400D381BC259F089838DC1627417D1F79__padding[12];
	};
};

// LitJson.Condition
struct Condition_t5A2886727E95C448F25D8FF108BA613A7CC2E882 
{
	// System.Int32 LitJson.Condition::value__
	int32_t ___value___2;
};

// System.Globalization.DateTimeFormatFlags
struct DateTimeFormatFlags_tB7CDDA8D7A3A0B2B9F64DB7704671F07FCE88FDC 
{
	// System.Int32 System.Globalization.DateTimeFormatFlags::value__
	int32_t ___value___2;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	intptr_t ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// LitJson.JsonToken
struct JsonToken_t34FC6193574EE269A01E4CE522C2A97A149CE8C2 
{
	// System.Int32 LitJson.JsonToken::value__
	int32_t ___value___2;
};

// LitJson.JsonType
struct JsonType_t9CFC52444C5F4ADB07D070974C5E58842A9AB006 
{
	// System.Int32 LitJson.JsonType::value__
	int32_t ___value___2;
};

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
};

// System.Reflection.ParameterAttributes
struct ParameterAttributes_tDAEC8B3C5986B042F8F9B0845505D0FC15F92E68 
{
	// System.Int32 System.Reflection.ParameterAttributes::value__
	int32_t ___value___2;
};

// LitJson.ParserToken
struct ParserToken_t028CC13C177D864835928A77CF1DD250271E3570 
{
	// System.Int32 LitJson.ParserToken::value__
	int32_t ___value___2;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.IO.StringReader
struct StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8  : public TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7
{
	// System.String System.IO.StringReader::_s
	String_t* ____s_2;
	// System.Int32 System.IO.StringReader::_pos
	int32_t ____pos_3;
	// System.Int32 System.IO.StringReader::_length
	int32_t ____length_4;
};

// System.IO.StringWriter
struct StringWriter_tF48052BE4F980E5C85403221E835768E4156267D  : public TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3
{
	// System.Text.StringBuilder System.IO.StringWriter::_sb
	StringBuilder_t* ____sb_7;
	// System.Boolean System.IO.StringWriter::_isOpen
	bool ____isOpen_8;
};

// System.ApplicationException
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A  : public Exception_t
{
};

// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A  : public RuntimeObject
{
	// System.Globalization.CultureData System.Globalization.DateTimeFormatInfo::_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ____cultureData_1;
	// System.String System.Globalization.DateTimeFormatInfo::_name
	String_t* ____name_2;
	// System.String System.Globalization.DateTimeFormatInfo::_langName
	String_t* ____langName_3;
	// System.Globalization.CompareInfo System.Globalization.DateTimeFormatInfo::_compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ____compareInfo_4;
	// System.Globalization.CultureInfo System.Globalization.DateTimeFormatInfo::_cultureInfo
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____cultureInfo_5;
	// System.String System.Globalization.DateTimeFormatInfo::amDesignator
	String_t* ___amDesignator_6;
	// System.String System.Globalization.DateTimeFormatInfo::pmDesignator
	String_t* ___pmDesignator_7;
	// System.String System.Globalization.DateTimeFormatInfo::dateSeparator
	String_t* ___dateSeparator_8;
	// System.String System.Globalization.DateTimeFormatInfo::generalShortTimePattern
	String_t* ___generalShortTimePattern_9;
	// System.String System.Globalization.DateTimeFormatInfo::generalLongTimePattern
	String_t* ___generalLongTimePattern_10;
	// System.String System.Globalization.DateTimeFormatInfo::timeSeparator
	String_t* ___timeSeparator_11;
	// System.String System.Globalization.DateTimeFormatInfo::monthDayPattern
	String_t* ___monthDayPattern_12;
	// System.String System.Globalization.DateTimeFormatInfo::dateTimeOffsetPattern
	String_t* ___dateTimeOffsetPattern_13;
	// System.Globalization.Calendar System.Globalization.DateTimeFormatInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_17;
	// System.Int32 System.Globalization.DateTimeFormatInfo::firstDayOfWeek
	int32_t ___firstDayOfWeek_18;
	// System.Int32 System.Globalization.DateTimeFormatInfo::calendarWeekRule
	int32_t ___calendarWeekRule_19;
	// System.String System.Globalization.DateTimeFormatInfo::fullDateTimePattern
	String_t* ___fullDateTimePattern_20;
	// System.String[] System.Globalization.DateTimeFormatInfo::abbreviatedDayNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___abbreviatedDayNames_21;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_superShortDayNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_superShortDayNames_22;
	// System.String[] System.Globalization.DateTimeFormatInfo::dayNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___dayNames_23;
	// System.String[] System.Globalization.DateTimeFormatInfo::abbreviatedMonthNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___abbreviatedMonthNames_24;
	// System.String[] System.Globalization.DateTimeFormatInfo::monthNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___monthNames_25;
	// System.String[] System.Globalization.DateTimeFormatInfo::genitiveMonthNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___genitiveMonthNames_26;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_genitiveAbbreviatedMonthNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_genitiveAbbreviatedMonthNames_27;
	// System.String[] System.Globalization.DateTimeFormatInfo::leapYearMonthNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___leapYearMonthNames_28;
	// System.String System.Globalization.DateTimeFormatInfo::longDatePattern
	String_t* ___longDatePattern_29;
	// System.String System.Globalization.DateTimeFormatInfo::shortDatePattern
	String_t* ___shortDatePattern_30;
	// System.String System.Globalization.DateTimeFormatInfo::yearMonthPattern
	String_t* ___yearMonthPattern_31;
	// System.String System.Globalization.DateTimeFormatInfo::longTimePattern
	String_t* ___longTimePattern_32;
	// System.String System.Globalization.DateTimeFormatInfo::shortTimePattern
	String_t* ___shortTimePattern_33;
	// System.String[] System.Globalization.DateTimeFormatInfo::allYearMonthPatterns
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___allYearMonthPatterns_34;
	// System.String[] System.Globalization.DateTimeFormatInfo::allShortDatePatterns
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___allShortDatePatterns_35;
	// System.String[] System.Globalization.DateTimeFormatInfo::allLongDatePatterns
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___allLongDatePatterns_36;
	// System.String[] System.Globalization.DateTimeFormatInfo::allShortTimePatterns
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___allShortTimePatterns_37;
	// System.String[] System.Globalization.DateTimeFormatInfo::allLongTimePatterns
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___allLongTimePatterns_38;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_eraNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_eraNames_39;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_abbrevEraNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_abbrevEraNames_40;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_abbrevEnglishEraNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_abbrevEnglishEraNames_41;
	// System.Globalization.CalendarId[] System.Globalization.DateTimeFormatInfo::optionalCalendars
	CalendarIdU5BU5D_t559EDBF1B819A695624BE9004EAA4FFA38B65CDA* ___optionalCalendars_42;
	// System.Boolean System.Globalization.DateTimeFormatInfo::_isReadOnly
	bool ____isReadOnly_44;
	// System.Globalization.DateTimeFormatFlags System.Globalization.DateTimeFormatInfo::formatFlags
	int32_t ___formatFlags_45;
	// System.String System.Globalization.DateTimeFormatInfo::_fullTimeSpanPositivePattern
	String_t* ____fullTimeSpanPositivePattern_49;
	// System.String System.Globalization.DateTimeFormatInfo::_fullTimeSpanNegativePattern
	String_t* ____fullTimeSpanNegativePattern_50;
	// System.Globalization.DateTimeFormatInfo/TokenHashValue[] System.Globalization.DateTimeFormatInfo::_dtfiTokenHash
	TokenHashValueU5BU5D_t3F8794937D04BA380989A813F33418CED58E80B9* ____dtfiTokenHash_52;
};

// LitJson.JsonData
struct JsonData_t3C51D89A19D30A47A74617107D861959322307F1  : public RuntimeObject
{
	// System.Collections.Generic.IList`1<LitJson.JsonData> LitJson.JsonData::inst_array
	RuntimeObject* ___inst_array_0;
	// System.Boolean LitJson.JsonData::inst_boolean
	bool ___inst_boolean_1;
	// System.Double LitJson.JsonData::inst_double
	double ___inst_double_2;
	// System.Int32 LitJson.JsonData::inst_int
	int32_t ___inst_int_3;
	// System.Int64 LitJson.JsonData::inst_long
	int64_t ___inst_long_4;
	// System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData> LitJson.JsonData::inst_object
	RuntimeObject* ___inst_object_5;
	// System.String LitJson.JsonData::inst_string
	String_t* ___inst_string_6;
	// System.String LitJson.JsonData::json
	String_t* ___json_7;
	// LitJson.JsonType LitJson.JsonData::type
	int32_t ___type_8;
	// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>> LitJson.JsonData::object_list
	RuntimeObject* ___object_list_9;
};

// LitJson.JsonReader
struct JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD  : public RuntimeObject
{
	// System.Collections.Generic.Stack`1<System.Int32> LitJson.JsonReader::automaton_stack
	Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* ___automaton_stack_1;
	// System.Int32 LitJson.JsonReader::current_input
	int32_t ___current_input_2;
	// System.Int32 LitJson.JsonReader::current_symbol
	int32_t ___current_symbol_3;
	// System.Boolean LitJson.JsonReader::end_of_json
	bool ___end_of_json_4;
	// System.Boolean LitJson.JsonReader::end_of_input
	bool ___end_of_input_5;
	// LitJson.Lexer LitJson.JsonReader::lexer
	Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* ___lexer_6;
	// System.Boolean LitJson.JsonReader::parser_in_string
	bool ___parser_in_string_7;
	// System.Boolean LitJson.JsonReader::parser_return
	bool ___parser_return_8;
	// System.Boolean LitJson.JsonReader::read_started
	bool ___read_started_9;
	// System.IO.TextReader LitJson.JsonReader::reader
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___reader_10;
	// System.Boolean LitJson.JsonReader::reader_is_owned
	bool ___reader_is_owned_11;
	// System.Object LitJson.JsonReader::token_value
	RuntimeObject* ___token_value_12;
	// LitJson.JsonToken LitJson.JsonReader::token
	int32_t ___token_13;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F  : public RuntimeObject
{
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_0;
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t* ___ClassImpl_1;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject* ___DefaultValueImpl_2;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t* ___MemberImpl_3;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_4;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_5;
};
// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_pinvoke
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	char* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_com
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	Il2CppChar* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// LitJson.ExporterFunc
struct ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A  : public MulticastDelegate_t
{
};

// LitJson.ImporterFunc
struct ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5  : public MulticastDelegate_t
{
};

// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// LitJson.JsonException
struct JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76  : public ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A
{
};

// System.Collections.Generic.KeyNotFoundException
struct KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// LitJson.WrapperFactory
struct WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD  : public MulticastDelegate_t
{
};

// LitJson.Lexer/StateHandler
struct StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603  : public MulticastDelegate_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32[]>

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32[]>

// System.Collections.Generic.Dictionary`2<System.String,LitJson.JsonData>

// System.Collections.Generic.Dictionary`2<System.String,LitJson.JsonData>

// System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>

// System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>

// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>

// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>

// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ExporterFunc>

// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ExporterFunc>

// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ImporterFunc>

// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ImporterFunc>

// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.MethodInfo>

// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.MethodInfo>

// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ObjectMetadata>

// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ObjectMetadata>

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>
struct List_1_tFC3915CEAB0CCCC11D0AB7F2D3717177D1111111_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	KeyValuePair_2U5BU5D_tD567A773BB79854B9F60CD456C76D7B0FFC5D67F* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>

// System.Collections.Generic.List`1<LitJson.JsonData>
struct List_1_tF2E1AB00AE46093D3DBEBFF23EE42498976376CA_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	JsonDataU5BU5D_t188E4B690F13A24B3486BD318C767E9BECCE3D72* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<LitJson.JsonData>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<LitJson.PropertyMetadata>
struct List_1_t3F16D5D88FAFD68886DA28A9E82E74E30BE371F8_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	PropertyMetadataU5BU5D_t74226C57698FFA61D8846D575CF58DC855C9CD07* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<LitJson.PropertyMetadata>

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>

// System.Collections.Generic.Stack`1<System.Int32>

// System.Collections.Generic.Stack`1<System.Int32>

// System.Collections.Generic.Stack`1<System.Object>

// System.Collections.Generic.Stack`1<System.Object>

// System.Collections.Generic.Stack`1<LitJson.WriterContext>

// System.Collections.Generic.Stack`1<LitJson.WriterContext>

// <PrivateImplementationDetails>{18f18ac2-f585-405a-ac91-bcb41785a078}
struct U3CPrivateImplementationDetailsU3EU7B18f18ac2U2Df585U2D405aU2Dac91U2Dbcb41785a078U7D_tACFC88B052112E097360D2A31C5DC6CFC2372D2C_StaticFields
{
	// <PrivateImplementationDetails>{18f18ac2-f585-405a-ac91-bcb41785a078}/$ArrayType=12 <PrivateImplementationDetails>{18f18ac2-f585-405a-ac91-bcb41785a078}::$field-0
	U24ArrayTypeU3D12_t21D7845400D381BC259F089838DC1627417D1F79 ___U24fieldU2D0_0;
	// <PrivateImplementationDetails>{18f18ac2-f585-405a-ac91-bcb41785a078}/$ArrayType=12 <PrivateImplementationDetails>{18f18ac2-f585-405a-ac91-bcb41785a078}::$field-1
	U24ArrayTypeU3D12_t21D7845400D381BC259F089838DC1627417D1F79 ___U24fieldU2D1_1;
	// <PrivateImplementationDetails>{18f18ac2-f585-405a-ac91-bcb41785a078}/$ArrayType=12 <PrivateImplementationDetails>{18f18ac2-f585-405a-ac91-bcb41785a078}::$field-2
	U24ArrayTypeU3D12_t21D7845400D381BC259F089838DC1627417D1F79 ___U24fieldU2D2_2;
	// <PrivateImplementationDetails>{18f18ac2-f585-405a-ac91-bcb41785a078}/$ArrayType=12 <PrivateImplementationDetails>{18f18ac2-f585-405a-ac91-bcb41785a078}::$field-3
	U24ArrayTypeU3D12_t21D7845400D381BC259F089838DC1627417D1F79 ___U24fieldU2D3_3;
	// <PrivateImplementationDetails>{18f18ac2-f585-405a-ac91-bcb41785a078}/$ArrayType=12 <PrivateImplementationDetails>{18f18ac2-f585-405a-ac91-bcb41785a078}::$field-4
	U24ArrayTypeU3D12_t21D7845400D381BC259F089838DC1627417D1F79 ___U24fieldU2D4_4;
	// <PrivateImplementationDetails>{18f18ac2-f585-405a-ac91-bcb41785a078}/$ArrayType=12 <PrivateImplementationDetails>{18f18ac2-f585-405a-ac91-bcb41785a078}::$field-5
	U24ArrayTypeU3D12_t21D7845400D381BC259F089838DC1627417D1F79 ___U24fieldU2D5_5;
	// <PrivateImplementationDetails>{18f18ac2-f585-405a-ac91-bcb41785a078}/$ArrayType=12 <PrivateImplementationDetails>{18f18ac2-f585-405a-ac91-bcb41785a078}::$field-6
	U24ArrayTypeU3D12_t21D7845400D381BC259F089838DC1627417D1F79 ___U24fieldU2D6_6;
	// <PrivateImplementationDetails>{18f18ac2-f585-405a-ac91-bcb41785a078}/$ArrayType=12 <PrivateImplementationDetails>{18f18ac2-f585-405a-ac91-bcb41785a078}::$field-7
	U24ArrayTypeU3D12_t21D7845400D381BC259F089838DC1627417D1F79 ___U24fieldU2D7_7;
	// <PrivateImplementationDetails>{18f18ac2-f585-405a-ac91-bcb41785a078}/$ArrayType=12 <PrivateImplementationDetails>{18f18ac2-f585-405a-ac91-bcb41785a078}::$field-8
	U24ArrayTypeU3D12_t21D7845400D381BC259F089838DC1627417D1F79 ___U24fieldU2D8_8;
	// <PrivateImplementationDetails>{18f18ac2-f585-405a-ac91-bcb41785a078}/$ArrayType=12 <PrivateImplementationDetails>{18f18ac2-f585-405a-ac91-bcb41785a078}::$field-9
	U24ArrayTypeU3D12_t21D7845400D381BC259F089838DC1627417D1F79 ___U24fieldU2D9_9;
	// <PrivateImplementationDetails>{18f18ac2-f585-405a-ac91-bcb41785a078}/$ArrayType=12 <PrivateImplementationDetails>{18f18ac2-f585-405a-ac91-bcb41785a078}::$field-A
	U24ArrayTypeU3D12_t21D7845400D381BC259F089838DC1627417D1F79 ___U24fieldU2DA_10;
	// <PrivateImplementationDetails>{18f18ac2-f585-405a-ac91-bcb41785a078}/$ArrayType=12 <PrivateImplementationDetails>{18f18ac2-f585-405a-ac91-bcb41785a078}::$field-B
	U24ArrayTypeU3D12_t21D7845400D381BC259F089838DC1627417D1F79 ___U24fieldU2DB_11;
	// <PrivateImplementationDetails>{18f18ac2-f585-405a-ac91-bcb41785a078}/$ArrayType=112 <PrivateImplementationDetails>{18f18ac2-f585-405a-ac91-bcb41785a078}::$field-C
	U24ArrayTypeU3D112_tBDD00A4A5BB99853808FD6A6D7A89F7B2CE60238 ___U24fieldU2DC_12;
};

// <PrivateImplementationDetails>{18f18ac2-f585-405a-ac91-bcb41785a078}

// System.Collections.ArrayList

// System.Collections.ArrayList

// LitJson.FsmContext

// LitJson.FsmContext

// LitJson.JsonMapper
struct JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields
{
	// System.Int32 LitJson.JsonMapper::max_nesting_depth
	int32_t ___max_nesting_depth_0;
	// System.IFormatProvider LitJson.JsonMapper::datetime_format
	RuntimeObject* ___datetime_format_1;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc> LitJson.JsonMapper::base_exporters_table
	RuntimeObject* ___base_exporters_table_2;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc> LitJson.JsonMapper::custom_exporters_table
	RuntimeObject* ___custom_exporters_table_3;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>> LitJson.JsonMapper::base_importers_table
	RuntimeObject* ___base_importers_table_4;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>> LitJson.JsonMapper::custom_importers_table
	RuntimeObject* ___custom_importers_table_5;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ArrayMetadata> LitJson.JsonMapper::array_metadata
	RuntimeObject* ___array_metadata_6;
	// System.Object LitJson.JsonMapper::array_metadata_lock
	RuntimeObject* ___array_metadata_lock_7;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>> LitJson.JsonMapper::conv_ops
	RuntimeObject* ___conv_ops_8;
	// System.Object LitJson.JsonMapper::conv_ops_lock
	RuntimeObject* ___conv_ops_lock_9;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ObjectMetadata> LitJson.JsonMapper::object_metadata
	RuntimeObject* ___object_metadata_10;
	// System.Object LitJson.JsonMapper::object_metadata_lock
	RuntimeObject* ___object_metadata_lock_11;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>> LitJson.JsonMapper::type_properties
	RuntimeObject* ___type_properties_12;
	// System.Object LitJson.JsonMapper::type_properties_lock
	RuntimeObject* ___type_properties_lock_13;
	// LitJson.JsonWriter LitJson.JsonMapper::static_writer
	JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___static_writer_14;
	// System.Object LitJson.JsonMapper::static_writer_lock
	RuntimeObject* ___static_writer_lock_15;
	// System.Collections.Generic.List`1<System.String> LitJson.JsonMapper::static_err_stack
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___static_err_stack_16;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache11
	ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* ___U3CU3Ef__amU24cache11_17;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache12
	ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* ___U3CU3Ef__amU24cache12_18;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache13
	ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* ___U3CU3Ef__amU24cache13_19;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache14
	ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* ___U3CU3Ef__amU24cache14_20;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache15
	ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* ___U3CU3Ef__amU24cache15_21;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache16
	ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* ___U3CU3Ef__amU24cache16_22;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache17
	ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* ___U3CU3Ef__amU24cache17_23;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache18
	ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* ___U3CU3Ef__amU24cache18_24;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache19
	ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* ___U3CU3Ef__amU24cache19_25;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache1A
	ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* ___U3CU3Ef__amU24cache1A_26;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache1B
	ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* ___U3CU3Ef__amU24cache1B_27;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache1C
	ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* ___U3CU3Ef__amU24cache1C_28;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache1D
	ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* ___U3CU3Ef__amU24cache1D_29;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache1E
	ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* ___U3CU3Ef__amU24cache1E_30;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache1F
	ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* ___U3CU3Ef__amU24cache1F_31;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache20
	ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* ___U3CU3Ef__amU24cache20_32;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache21
	ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* ___U3CU3Ef__amU24cache21_33;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache22
	ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* ___U3CU3Ef__amU24cache22_34;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache23
	ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* ___U3CU3Ef__amU24cache23_35;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache24
	ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* ___U3CU3Ef__amU24cache24_36;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache25
	ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* ___U3CU3Ef__amU24cache25_37;
	// LitJson.WrapperFactory LitJson.JsonMapper::<>f__am$cache26
	WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* ___U3CU3Ef__amU24cache26_38;
	// LitJson.WrapperFactory LitJson.JsonMapper::<>f__am$cache27
	WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* ___U3CU3Ef__amU24cache27_39;
	// LitJson.WrapperFactory LitJson.JsonMapper::<>f__am$cache28
	WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* ___U3CU3Ef__amU24cache28_40;
};

// LitJson.JsonMapper

// LitJson.JsonWriter
struct JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_StaticFields
{
	// System.Globalization.NumberFormatInfo LitJson.JsonWriter::number_format
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___number_format_0;
};

// LitJson.JsonWriter

// LitJson.Lexer
struct Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9_StaticFields
{
	// System.Int32[] LitJson.Lexer::fsm_return_table
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___fsm_return_table_0;
	// LitJson.Lexer/StateHandler[] LitJson.Lexer::fsm_handler_table
	StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* ___fsm_handler_table_1;
};

// LitJson.Lexer

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472_StaticFields
{
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.NumberFormatInfo::invariantInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___invariantInfo_0;
};

// System.Globalization.NumberFormatInfo

// LitJson.OrderedDictionaryEnumerator

// LitJson.OrderedDictionaryEnumerator

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// LitJson.WriterContext

// LitJson.WriterContext

// LitJson.JsonData/BlackBox

// LitJson.JsonData/BlackBox

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.String>

// System.Collections.Generic.List`1/Enumerator<System.String>

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>

// System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>

// LitJson.ArrayMetadata

// LitJson.ArrayMetadata

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.DateTime

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	// System.Decimal System.Decimal::Zero
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero_3;
	// System.Decimal System.Decimal::One
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One_4;
	// System.Decimal System.Decimal::MinusOne
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne_5;
	// System.Decimal System.Decimal::MaxValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue_6;
	// System.Decimal System.Decimal::MinValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue_7;
};

// System.Decimal

// System.Collections.DictionaryEntry

// System.Collections.DictionaryEntry

// System.Double

// System.Double

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// System.Reflection.FieldInfo

// System.Reflection.FieldInfo

// System.Int16

// System.Int16

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Reflection.MethodBase

// System.Reflection.MethodBase

// LitJson.ObjectMetadata

// LitJson.ObjectMetadata

// System.Reflection.PropertyInfo

// System.Reflection.PropertyInfo

// LitJson.PropertyMetadata

// LitJson.PropertyMetadata

// System.SByte

// System.SByte

// System.Single

// System.Single

// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7_StaticFields
{
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___Null_1;
};

// System.IO.TextReader

// System.IO.TextWriter
struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3_StaticFields
{
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___Null_1;
	// System.Char[] System.IO.TextWriter::s_coreNewLine
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_coreNewLine_2;
};

// System.IO.TextWriter

// System.UInt16

// System.UInt16

// System.UInt32

// System.UInt32

// System.UInt64

// System.UInt64

// System.Void

// System.Void

// <PrivateImplementationDetails>{18f18ac2-f585-405a-ac91-bcb41785a078}/$ArrayType=112

// <PrivateImplementationDetails>{18f18ac2-f585-405a-ac91-bcb41785a078}/$ArrayType=112

// <PrivateImplementationDetails>{18f18ac2-f585-405a-ac91-bcb41785a078}/$ArrayType=12

// <PrivateImplementationDetails>{18f18ac2-f585-405a-ac91-bcb41785a078}/$ArrayType=12

// LitJson.Condition

// LitJson.Condition

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// LitJson.JsonToken

// LitJson.JsonToken

// LitJson.JsonType

// LitJson.JsonType

// System.Reflection.MethodInfo

// System.Reflection.MethodInfo

// LitJson.ParserToken

// LitJson.ParserToken

// System.RuntimeFieldHandle

// System.RuntimeFieldHandle

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// System.IO.StringReader

// System.IO.StringReader

// System.IO.StringWriter
struct StringWriter_tF48052BE4F980E5C85403221E835768E4156267D_StaticFields
{
	// System.Text.UnicodeEncoding modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StringWriter::m_encoding
	UnicodeEncoding_t2C90D9E1E55C16081FACA57B229053C1EF05DAF0* ___m_encoding_6;
};

// System.IO.StringWriter

// System.ApplicationException

// System.ApplicationException

// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A_StaticFields
{
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::s_invariantInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___s_invariantInfo_0;
	// System.Char[] System.Globalization.DateTimeFormatInfo::s_monthSpaces
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_monthSpaces_46;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::s_jajpDTFI
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___s_jajpDTFI_80;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::s_zhtwDTFI
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___s_zhtwDTFI_81;
};

// System.Globalization.DateTimeFormatInfo

// LitJson.JsonData

// LitJson.JsonData

// LitJson.JsonReader
struct JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD_StaticFields
{
	// System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>> LitJson.JsonReader::parse_table
	RuntimeObject* ___parse_table_0;
};

// LitJson.JsonReader

// System.Reflection.ParameterInfo

// System.Reflection.ParameterInfo

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// System.ArgumentException

// System.ArgumentException

// System.AsyncCallback

// System.AsyncCallback

// LitJson.ExporterFunc

// LitJson.ExporterFunc

// LitJson.ImporterFunc

// LitJson.ImporterFunc

// System.InvalidCastException

// System.InvalidCastException

// System.InvalidOperationException

// System.InvalidOperationException

// LitJson.JsonException

// LitJson.JsonException

// System.Collections.Generic.KeyNotFoundException

// System.Collections.Generic.KeyNotFoundException

// LitJson.WrapperFactory

// LitJson.WrapperFactory

// LitJson.Lexer/StateHandler

// LitJson.Lexer/StateHandler

// System.ArgumentNullException

// System.ArgumentNullException
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7  : public RuntimeArray
{
	ALIGN_FIELD (8) PropertyInfo_t* m_Items[1];

	inline PropertyInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PropertyInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PropertyInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PropertyInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PropertyInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PropertyInfo_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* m_Items[1];

	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8  : public RuntimeArray
{
	ALIGN_FIELD (8) FieldInfo_t* m_Items[1];

	inline FieldInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FieldInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FieldInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FieldInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FieldInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FieldInfo_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// LitJson.Lexer/StateHandler[]
struct StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93  : public RuntimeArray
{
	ALIGN_FIELD (8) StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* m_Items[1];

	inline StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950_gshared (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m192C3D32AF3678C97E6520292F2C32629E9A905B_gshared (List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCEB6C060836E9A15E6584CAFDA2353C41305B5A2_gshared (Dictionary_2_t2AB2F09285677DDC3A0A75E97B5A7492F1E236C9* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m815B02A88DDC854D31CBCC02495BCB38F8132F91_gshared (Dictionary_2_t69734EC5CF354F3B1434F2527067B631D09E1D27* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA3312DE46C49623D0AA69BF312E3D826D541F80D_gshared (Dictionary_2_tD2936860D0DBBB809F916DD79F6A1FDA961C3185* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mAAC32D144B3A74FCD65A76B4CA7CB1D2024A1E3A_gshared (List_1_t3F16D5D88FAFD68886DA28A9E82E74E30BE371F8* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_mF63AE96E8925749CDACE05B89002A389DDD748D1_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Int32>::Push(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, int32_t ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Int32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Clear_mEE1C6E0AF654AE01D41D12DAF62217D4FE3930E0_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Int32>::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Stack_1_Peek_m919AA48BFC239B260BB6A0639B8E027B60CB8B66_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Int32>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m70E8EDA96A608CE9BAB7FC8313B233AADA573BD4_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Clear_mD550E89582979ECB0D6E6D68F0237FC14708BE85_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Object>::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_Peek_mF0ECF6A61726B66E6D9B33D8C4DEAA47E586E6E4_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Int32 LitJson.JsonData::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonData_get_Count_m59A660054922D869F9CC95947848D1829AD2680C (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) ;
// System.Collections.ICollection LitJson.JsonData::EnsureCollection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_EnsureCollection_mFB01D813BC8765113931EF533783BA5BC764C283 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) ;
// System.Collections.IDictionary LitJson.JsonData::EnsureDictionary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_EnsureDictionary_m402293ECDF1F18AE8CA8259A102E698ADD3A8EB2 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mB20EAD0A1F549096009239692374BA2D53CC56C8_inline (KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<LitJson.JsonData>::.ctor()
inline void List_1__ctor_m71FFC1A9C81BB314F91B10BE885521A22E708BF8 (List_1_tF2E1AB00AE46093D3DBEBFF23EE42498976376CA* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF2E1AB00AE46093D3DBEBFF23EE42498976376CA*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>::get_Value()
inline JsonData_t3C51D89A19D30A47A74617107D861959322307F1* KeyValuePair_2_get_Value_m1AF62875E8518A1790EFF3FBB65608529D80A79E_inline (KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28* __this, const RuntimeMethod* method)
{
	return ((  JsonData_t3C51D89A19D30A47A74617107D861959322307F1* (*) (KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Boolean LitJson.JsonData::get_IsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsArray_m37BA31D547428C52C0F4A1923598DC36124033DC (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) ;
// System.Boolean LitJson.JsonData::get_IsBoolean()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsBoolean_mA02E81165515B6A3FC71FC03A85734E9905FE450 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) ;
// System.Boolean LitJson.JsonData::get_IsDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsDouble_m36490E724869C57CC7CCDBA30430FCB5A3E4602A (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) ;
// System.Boolean LitJson.JsonData::get_IsInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsInt_m094B3A225B2B50F0123D1BAB1012D5E652C200B7 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) ;
// System.Boolean LitJson.JsonData::get_IsLong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsLong_m082D69215FD4794AF4B026BFEB5BF72A6FD1CEBD (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) ;
// System.Boolean LitJson.JsonData::get_IsObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsObject_mF608D1B4942FFA43A6E4D27DAD8243343AAEC0D3 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) ;
// System.Boolean LitJson.JsonData::get_IsString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsString_m5F2D19AC3F87FB3D76F1FDAA9D6B2CF3564977FF (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) ;
// System.Collections.IList LitJson.JsonData::EnsureList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_EnsureList_m6FCDB06F594222F9584291F20B3DA2FF4E5CE718 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) ;
// LitJson.JsonData LitJson.JsonData::ToJsonData(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonData_t3C51D89A19D30A47A74617107D861959322307F1* JsonData_ToJsonData_mD42F841238609F7087B993D39CC6EC3F39F8BACC (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void LitJson.JsonData::set_Item(System.String,LitJson.JsonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_set_Item_m6FE3B6A0E6C79F7B3661945A402CBEAB66371202 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, String_t* ___0_prop_name, JsonData_t3C51D89A19D30A47A74617107D861959322307F1* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_mF8563179C2DDD7A9FDB625D79ABD337FB772A683 (KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28* __this, String_t* ___0_key, JsonData_t3C51D89A19D30A47A74617107D861959322307F1* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28*, String_t*, JsonData_t3C51D89A19D30A47A74617107D861959322307F1*, const RuntimeMethod*))KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void LitJson.JsonData::set_Item(System.Int32,LitJson.JsonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_set_Item_m874D334A667986B4FBC1515687EF6B551D71FAE8 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, int32_t ___0_index, JsonData_t3C51D89A19D30A47A74617107D861959322307F1* ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.String LitJson.JsonData::ToJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonData_ToJson_m658608ADAC4FD37098A16F86171C6BEDAE6E4C30 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) ;
// System.Void LitJson.JsonData::ToJson(LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_ToJson_m179225C968B6EE68507BB3694882E41DA05DA4C4 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___0_writer, const RuntimeMethod* method) ;
// System.Int32 LitJson.JsonData::Add(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonData_Add_mA88DA1756863A2C121F7D72986EDF2EF6E0B88E1 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void LitJson.OrderedDictionaryEnumerator::.ctor(System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionaryEnumerator__ctor_mE835230F6C9BF7EBC082A282BE74976A450B07A1 (OrderedDictionaryEnumerator_t557577F1E3C3DC7E5A3BFA6B12F2E0F7921D9C18* __this, RuntimeObject* ___0_enumerator, const RuntimeMethod* method) ;
// System.Void LitJson.JsonData::DLOG(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_DLOG_m023911D00F4766EC148A869D2E3D5E74D5E92155 (String_t* ___0_str, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,LitJson.JsonData>::.ctor()
inline void Dictionary_2__ctor_m69403AE90D12CA520ABB728A1557B42580BBC7DC (Dictionary_2_tDF79546961566D2D6F7C4155F7ED851428AA9931* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDF79546961566D2D6F7C4155F7ED851428AA9931*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::.ctor()
inline void List_1__ctor_m53AA73BE6E2FF2045F347EBCEE46E8E4EE524E5F (List_1_tFC3915CEAB0CCCC11D0AB7F2D3717177D1111111* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFC3915CEAB0CCCC11D0AB7F2D3717177D1111111*, const RuntimeMethod*))List_1__ctor_m192C3D32AF3678C97E6520292F2C32629E9A905B_gshared)(__this, method);
}
// System.Void LitJson.JsonData::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_mA02A77C55F31BBE7F62D84ADEAC445BB4D6BF6F0 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A (RuntimeObject* ___0_arg0, RuntimeObject* ___1_arg1, const RuntimeMethod* method) ;
// System.Void LitJson.JsonData::PrintJsonTypeMemory(LitJson.JsonType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_PrintJsonTypeMemory_mB872435FEBB7CF9E03E46F9F0FF5FD4D541788EC (int32_t ___0_t, const RuntimeMethod* method) ;
// System.String LitJson.JsonData::ValueAsString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonData_ValueAsString_mA88781F7789BAF4688249A378F61A0FD9B40A2DE (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) ;
// System.Void LitJson.JsonWriter::Write(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_mC6C394BE18186CAEB8597055057A1AECDEE56916 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, String_t* ___0_str, const RuntimeMethod* method) ;
// System.Boolean LitJson.JsonData::ValueAsBoolean()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_ValueAsBoolean_m007498D834CB2356DD2FFE21D2595218BEFA40A3 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) ;
// System.Void LitJson.JsonWriter::Write(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_mFACCB1B6087CE1C66A68CE3BA2AF9844F7F31D8C (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, bool ___0_boolean, const RuntimeMethod* method) ;
// System.Double LitJson.JsonData::ValueAsDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double JsonData_ValueAsDouble_m0BD59F37300109E044C5EB9E290C90A44E09FF99 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) ;
// System.Void LitJson.JsonWriter::Write(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m657048A70C011FC85FD3773A026EC0B21462AB4D (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, double ___0_number, const RuntimeMethod* method) ;
// System.Int32 LitJson.JsonData::ValueAsInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonData_ValueAsInt_mC5F061F1DB52BF81897109616FF2E7B03A43D725 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) ;
// System.Void LitJson.JsonWriter::Write(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m3A3246FEFCA9BCEB4F3E7D2D5AC0FF49B8BBD3A7 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, int32_t ___0_number, const RuntimeMethod* method) ;
// System.Int64 LitJson.JsonData::ValueAsLong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t JsonData_ValueAsLong_m64BEA2ECDB9F46C766BE5515F3A3C28901578A36 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) ;
// System.Void LitJson.JsonWriter::Write(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m500833BCB5B21114C1C8A3FA7DAAF6A1EAD2A3D4 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, int64_t ___0_number, const RuntimeMethod* method) ;
// System.Void LitJson.JsonWriter::WriteArrayStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteArrayStart_mF4AB20790AB8817BCCEEB5FA649832890D5AADEB (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<LitJson.JsonData> LitJson.JsonData::ValueAsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_ValueAsArray_mC5C84587DB04BFC047A16516D6C7C003051CF885 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) ;
// LitJson.JsonType LitJson.JsonData::GetJsonType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JsonData_GetJsonType_m7313142A8EEFA586606A2F25157426C377A6096C_inline (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) ;
// System.Void LitJson.JsonData::WriteJson2(LitJson.JsonType,LitJson.JsonData,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_WriteJson2_m1A8279BE69453B3FCA2175A7A6C3CB2D8C97E3CC (int32_t ___0_t, JsonData_t3C51D89A19D30A47A74617107D861959322307F1* ___1_obj, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___2_writer, const RuntimeMethod* method) ;
// System.Void LitJson.JsonWriter::WriteArrayEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteArrayEnd_mE8262D6AC279897DA41D549CE12A8EA3054777B5 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, const RuntimeMethod* method) ;
// System.Void LitJson.JsonWriter::WriteObjectStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteObjectStart_m90F3A0A19C03EA7CF90017768E3FA217E4038688 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData> LitJson.JsonData::ValueAsObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_ValueAsObject_m37545EE771E8C7419246F8AF52749F533851E07E (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) ;
// System.Object System.Collections.DictionaryEntry::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEntry_get_Key_m09845C00732E530E6FCB9042079E90D3912215FE_inline (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, const RuntimeMethod* method) ;
// System.Void LitJson.JsonWriter::WritePropertyName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WritePropertyName_m5646EF1771ABCFCCAAD52086AAE3387579E158E0 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, String_t* ___0_property_name, const RuntimeMethod* method) ;
// System.Object System.Collections.DictionaryEntry::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEntry_get_Value_m75FD18FE968AE131F28AA2CB0DF4895EBA39075E_inline (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, const RuntimeMethod* method) ;
// System.Void LitJson.JsonWriter::WriteObjectEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteObjectEnd_m7B1F539A650AC9AA9413B9C3FF1DAA27834141AF (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, const RuntimeMethod* method) ;
// System.Void LitJson.JsonData::WriteJson(LitJson.IJsonWrapper,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_WriteJson_mD307B7581AE536A21EA9F30B270BC5393B335356 (RuntimeObject* ___0_obj, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___1_writer, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Int32::Equals(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722 (int32_t* __this, int32_t ___0_obj, const RuntimeMethod* method) ;
// System.Boolean System.Int64::Equals(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int64_Equals_mBAEB8FFBE12F6A5876473B4B40E1BD316658873E (int64_t* __this, int64_t ___0_obj, const RuntimeMethod* method) ;
// System.Boolean System.Double::Equals(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_Equals_mAB526D98719C44EA42107A297B23A739F2E14138 (double* __this, double ___0_obj, const RuntimeMethod* method) ;
// System.Boolean System.Boolean::Equals(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boolean_Equals_mC020D5EB2F64274CD623E8449E8777A70BEC6CC9 (bool* __this, bool ___0_obj, const RuntimeMethod* method) ;
// System.Void System.IO.StringWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringWriter__ctor_m072DFF5FFA84EBA7C38B282975D053E738C56E6D (StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* __this, const RuntimeMethod* method) ;
// System.Void LitJson.JsonWriter::.ctor(System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter__ctor_m59AEC417CBCF6AB49675BCCFD00F274C31D3585E (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___0_writer, const RuntimeMethod* method) ;
// System.Void LitJson.JsonWriter::set_Validate(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonWriter_set_Validate_mA5EE11772D5EEEDBF8653894C89D686A6B184F7B_inline (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean LitJson.JsonWriter::get_Validate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool JsonWriter_get_Validate_m28498F5A80E666297849E7C4F723F48A0B9A4DF6_inline (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, const RuntimeMethod* method) ;
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63 (bool* __this, const RuntimeMethod* method) ;
// System.String System.Double::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339 (double* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.Int64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B (int64_t* __this, const RuntimeMethod* method) ;
// System.Void LitJson.JsonData::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_mEB4115AF975189279CB57527850DDAD9230D3D2B (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, bool ___0_boolean, const RuntimeMethod* method) ;
// System.Void LitJson.JsonData::.ctor(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_m8A0A37263CACAC98E364B72BDF9929433707D6F7 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, double ___0_number, const RuntimeMethod* method) ;
// System.Void LitJson.JsonData::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_m53BBD8B0DF27C525C5CD4BFD9E5C2EC09A106F78 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, int32_t ___0_number, const RuntimeMethod* method) ;
// System.Void LitJson.JsonData::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_mB54717B470C1218DF181039F1A12F9BACD000462 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, int64_t ___0_number, const RuntimeMethod* method) ;
// System.Void LitJson.JsonData::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_m9FAA8A904760EDD166AA91A84184FB51FB68E3F3 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, String_t* ___0_str, const RuntimeMethod* method) ;
// System.Void System.InvalidCastException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644 (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Collections.DictionaryEntry LitJson.OrderedDictionaryEnumerator::get_Entry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB OrderedDictionaryEnumerator_get_Entry_mD2E0B7A30035474EB30FC5AB71B4C299E0C9124A (OrderedDictionaryEnumerator_t557577F1E3C3DC7E5A3BFA6B12F2E0F7921D9C18* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.DictionaryEntry::.ctor(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.ApplicationException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_m481B0251BEC0BF28EAAF3FCB11A47EFCB2E56E2A (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Void System.ApplicationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_mE51100DFCDB0A0DF23B482CC43EC8E396BE7BE82 (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.ApplicationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_m924E77609BAFA0595453363EB8B7BCCBA03B32DD (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Type LitJson.ArrayMetadata::get_ElementType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* ArrayMetadata_get_ElementType_m95F881ADA6D1906BDDAD52E328AEFF30ECA46226 (ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D* __this, const RuntimeMethod* method) ;
// System.Void LitJson.ArrayMetadata::set_ElementType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ArrayMetadata_set_ElementType_m5832C95BFE5A1BAE4F2A604A74935918F18C6FB3_inline (ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
// System.Boolean LitJson.ArrayMetadata::get_IsArray()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ArrayMetadata_get_IsArray_mF60D16C73C7A336444DAC740B3D6A84AD4AA40D2_inline (ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D* __this, const RuntimeMethod* method) ;
// System.Void LitJson.ArrayMetadata::set_IsArray(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ArrayMetadata_set_IsArray_m80C5694C47BE321F66F82FC47D554982E5F47AEE_inline (ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean LitJson.ArrayMetadata::get_IsList()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ArrayMetadata_get_IsList_m65D206DDD4278B4A0DF41E61799AE51EAA23BA7F_inline (ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D* __this, const RuntimeMethod* method) ;
// System.Void LitJson.ArrayMetadata::set_IsList(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ArrayMetadata_set_IsList_mE4168A68921BFBA7306369E7BFDFD10CC59083C2_inline (ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Type LitJson.ObjectMetadata::get_ElementType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* ObjectMetadata_get_ElementType_mEC34F3956588C3B5C7EB07A112A7797BF8935BEE (ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661* __this, const RuntimeMethod* method) ;
// System.Void LitJson.ObjectMetadata::set_ElementType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ObjectMetadata_set_ElementType_m5AF14DA94DE8B13F68D6913AA0487B6C412A9355_inline (ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
// System.Boolean LitJson.ObjectMetadata::get_IsDictionary()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ObjectMetadata_get_IsDictionary_mC66AF9CA841EC0386F35FAD3DA899EB5C0DB082E_inline (ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661* __this, const RuntimeMethod* method) ;
// System.Void LitJson.ObjectMetadata::set_IsDictionary(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ObjectMetadata_set_IsDictionary_mA0408F3F69CBF5C14DEC1CD12FBD4B9830F91151_inline (ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata> LitJson.ObjectMetadata::get_Properties()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ObjectMetadata_get_Properties_m8E9F8EDA9F12FD110E25D5785F084C1A8B393805_inline (ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661* __this, const RuntimeMethod* method) ;
// System.Void LitJson.ObjectMetadata::set_Properties(System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ObjectMetadata_set_Properties_m6DD2CBC23136F0B020069E54BDF7A1BCCCF31FE6_inline (ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>::.ctor()
inline void Dictionary_2__ctor_m186154EAD1DF359706A7CF36C6BD7F5ACC47CFB7 (Dictionary_2_tB42EF32D51D7595BF925017BF4A743C5B97C9053* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB42EF32D51D7595BF925017BF4A743C5B97C9053*, const RuntimeMethod*))Dictionary_2__ctor_mCEB6C060836E9A15E6584CAFDA2353C41305B5A2_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>::.ctor()
inline void Dictionary_2__ctor_mFDB6B4CAA4E2AE6E8C2EA0D6D7DE7172BF609E65 (Dictionary_2_tD786692960EC82E79B160F75E780BA867D6C1BBD* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD786692960EC82E79B160F75E780BA867D6C1BBD*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,LitJson.ObjectMetadata>::.ctor()
inline void Dictionary_2__ctor_m3D7546A6DF9CDDA353873ECE10E542AD6406A825 (Dictionary_2_tD8EF042176D7CCA0618F7F42494A6AAD68478914* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD8EF042176D7CCA0618F7F42494A6AAD68478914*, const RuntimeMethod*))Dictionary_2__ctor_m815B02A88DDC854D31CBCC02495BCB38F8132F91_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::.ctor()
inline void Dictionary_2__ctor_mB364E5DE0CF679AC362662B5C96B6A6FB6B12AB8 (Dictionary_2_tAA76A881C8942A9F8F63F6BEE2A572DCF133AB93* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAA76A881C8942A9F8F63F6BEE2A572DCF133AB93*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void LitJson.JsonWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter__ctor_mFF4C2DE4CAD061714750C2D87291FCF9D0AE4EF0 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, const RuntimeMethod* method) ;
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::get_InvariantInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* DateTimeFormatInfo_get_InvariantInfo_m24804C20A94D2952323C82193D4A59ADF171C8AA (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Type,LitJson.ExporterFunc>::.ctor()
inline void Dictionary_2__ctor_m224AC90EC65DF7D2F4D85F0DDEC5FECC74920277 (Dictionary_2_t13D69527163788C316AD7673426765F0A3E018A0* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t13D69527163788C316AD7673426765F0A3E018A0*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::.ctor()
inline void Dictionary_2__ctor_m95FEBED8F3E1B9BB1282B2C7E18C736BDC259D49 (Dictionary_2_t51F843E5AA0162639CFD12BF0859C4C0FF822998* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t51F843E5AA0162639CFD12BF0859C4C0FF822998*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void LitJson.JsonMapper::RegisterBaseExporters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_RegisterBaseExporters_m1866D55E6CA556A86EB3F4E4C484706A596A34D9 (const RuntimeMethod* method) ;
// System.Void LitJson.JsonMapper::RegisterBaseImporters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_RegisterBaseImporters_m108AF061EDD0D019D96B7276A59E909010EF6F79 (const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673 (Type_t* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetInterface(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetInterface_m536A2DE796291194A1EAE035EE3742D3A220854E (Type_t* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Reflection.PropertyInfo[] System.Type::GetProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* Type_GetProperties_m090A935168ED8AEE2CE95BDF6D69F3AAAF71B2D6 (Type_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>::.ctor()
inline void Dictionary_2__ctor_mE6A439BEA4E21EF9C6E01E19390EE90B680DD348 (Dictionary_2_tD88E8C222DEDEFACEF548AAB380B9ED228B42954* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD88E8C222DEDEFACEF548AAB380B9ED228B42954*, const RuntimeMethod*))Dictionary_2__ctor_mA3312DE46C49623D0AA69BF312E3D826D541F80D_gshared)(__this, method);
}
// System.Reflection.FieldInfo[] System.Type::GetFields()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* Type_GetFields_mC0570FF1986A6D93FA7976303B44B2FF8D0BC77F (Type_t* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::.ctor()
inline void List_1__ctor_mAAC32D144B3A74FCD65A76B4CA7CB1D2024A1E3A (List_1_t3F16D5D88FAFD68886DA28A9E82E74E30BE371F8* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F16D5D88FAFD68886DA28A9E82E74E30BE371F8*, const RuntimeMethod*))List_1__ctor_mAAC32D144B3A74FCD65A76B4CA7CB1D2024A1E3A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.MethodInfo>::.ctor()
inline void Dictionary_2__ctor_m57E4DE0721BD2D645AF3036D988B131AAB138227 (Dictionary_2_tB7188876A70AC81C939F78F9171156E43ED476CB* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB7188876A70AC81C939F78F9171156E43ED476CB*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Type_GetMethod_m9E8E55EC8316CE8A2851B62AD4C73E841FEAC2EA (Type_t* __this, String_t* ___0_name, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___1_types, const RuntimeMethod* method) ;
// System.Boolean LitJson.JsonReader::Read()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonReader_Read_mD8D28369934A79C6A0125279F425E48D1D35AE7B (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* __this, const RuntimeMethod* method) ;
// LitJson.JsonToken LitJson.JsonReader::get_Token()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JsonReader_get_Token_m519B39A4B87C3A9A7B424AECAE7FDA64B946E975_inline (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsClass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsClass_mACC1E0E79C9996ADE9973F81971B740132B64549 (Type_t* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Object LitJson.JsonReader::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* JsonReader_get_Value_mF219BCB43B2F020C1B67935AA63A40ECD1EE4C05_inline (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* __this, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Object LitJson.ImporterFunc::Invoke(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ImporterFunc_Invoke_m143089455BBD8920FDB4F1B683E685B50FB8077A_inline (ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* __this, RuntimeObject* ___0_input, const RuntimeMethod* method) ;
// System.Object System.Enum::ToObject(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF (Type_t* ___0_enumType, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo LitJson.JsonMapper::GetConvOp(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* JsonMapper_GetConvOp_mA86D07E06B99E4CA3C35F70E294950C288086F8F (Type_t* ___0_t1, Type_t* ___1_t2, const RuntimeMethod* method) ;
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826 (MethodBase_t* __this, RuntimeObject* ___0_obj, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_parameters, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
// System.Void LitJson.JsonMapper::AddArrayMetadata(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_AddArrayMetadata_mE3410659CA2904A58B6870D8AD254B2AC926871B (Type_t* ___0_type, const RuntimeMethod* method) ;
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF (Type_t* ___0_type, const RuntimeMethod* method) ;
// System.Void System.Collections.ArrayList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList__ctor_m07DC369002304B483B9FC41DBDAF4A25AC3C9F80 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, const RuntimeMethod* method) ;
// System.Object LitJson.JsonMapper::ReadValue(System.Type,LitJson.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_ReadValue_m12EFFE983BBE0A9254AA072EFEFB7A6156F094E6 (Type_t* ___0_inst_type, JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* ___1_reader, const RuntimeMethod* method) ;
// System.Array System.Array::CreateInstance(System.Type,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray* Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983 (Type_t* ___0_elementType, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Void System.Array::SetValue(System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8 (RuntimeArray* __this, RuntimeObject* ___0_value, int32_t ___1_index, const RuntimeMethod* method) ;
// System.Void LitJson.JsonMapper::AddObjectMetadata(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_AddObjectMetadata_m9A5768B60C9F0965DA9CD72412DE5371AA9A756C (Type_t* ___0_type, const RuntimeMethod* method) ;
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C (FieldInfo_t* __this, RuntimeObject* ___0_obj, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// LitJson.IJsonWrapper LitJson.WrapperFactory::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* WrapperFactory_Invoke_mDEC930B07F8B4652EBECE1E6386E92701A93C7D5_inline (WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* __this, const RuntimeMethod* method) ;
// LitJson.IJsonWrapper LitJson.JsonMapper::ReadValue(LitJson.WrapperFactory,LitJson.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_ReadValue_m1E79EF3FC740E018A6C14D7D4A5D9FBE12239856 (WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* ___0_factory, JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* ___1_reader, const RuntimeMethod* method) ;
// System.Void LitJson.ExporterFunc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExporterFunc__ctor_mE42C7A27446C000BC923E32171289DA0E9CDC5D2 (ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void LitJson.ImporterFunc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImporterFunc__ctor_m630470C9B15EC4550BDC9B0A860B2F9C3B66C029 (ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void LitJson.JsonMapper::RegisterImporter(System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>,System.Type,System.Type,LitJson.ImporterFunc)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_RegisterImporter_m091B42BD8AE8DBD08A21E950E11677E1B87363ED (RuntimeObject* ___0_table, Type_t* ___1_json_type, Type_t* ___2_value_type, ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* ___3_importer, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Type,LitJson.ImporterFunc>::.ctor()
inline void Dictionary_2__ctor_m7B6BA98348249476333A6F6C3EFB7E2ABAEF49A5 (Dictionary_2_t9017400E4435187C1FB3841B4F5843B94836A625* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9017400E4435187C1FB3841B4F5843B94836A625*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void LitJson.JsonException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_m400377A21C20F6CAEE97CE7958869D819BB94BB5 (JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.IO.TextWriter LitJson.JsonWriter::get_TextWriter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* JsonWriter_get_TextWriter_m8C5C9441F52C2813A2A3A1834E7A8A3AF2CF875F_inline (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator System.Array::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_GetEnumerator_mDB7E2AF23F2BDC715D429C71CA3B8D0151F0DC1E (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Void LitJson.JsonMapper::WriteValue(System.Object,LitJson.JsonWriter,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_WriteValue_m143881E655EEAE7440BFE564E13A2580A021DBDE (RuntimeObject* ___0_obj, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___1_writer, bool ___2_writer_is_private, int32_t ___3_depth, const RuntimeMethod* method) ;
// System.Void LitJson.ExporterFunc::Invoke(System.Object,LitJson.JsonWriter)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ExporterFunc_Invoke_mE96AA8DA43B26B809D4D5D09A1A22966C81D2BDD_inline (ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* __this, RuntimeObject* ___0_obj, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___1_writer, const RuntimeMethod* method) ;
// System.Type System.Enum::GetUnderlyingType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Enum_GetUnderlyingType_mEDDDC2C9F74ECC841E65E401C3703D59C37CBB05 (Type_t* ___0_enumType, const RuntimeMethod* method) ;
// System.Void LitJson.JsonWriter::Write(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_mA2318C6CCFB4A565564457D435FF8EDEDB0F6EAB (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, uint64_t ___0_number, const RuntimeMethod* method) ;
// System.Void LitJson.JsonMapper::AddTypeProperties(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_AddTypeProperties_m24B07F9D8AE8CE6C178AF8E6FD44BDF6A4A84389 (Type_t* ___0_type, const RuntimeMethod* method) ;
// System.Void LitJson.JsonWriter::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Reset_mCFA289C24C9ECEE98AD50E970F0D1F032F7E1989 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, const RuntimeMethod* method) ;
// System.Void LitJson.WrapperFactory::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapperFactory__ctor_mDCB80755422A0F810CF4702BBE931A9B4AE5C809 (WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// LitJson.IJsonWrapper LitJson.JsonMapper::ToWrapper(LitJson.WrapperFactory,LitJson.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_ToWrapper_m28AEBBDAD4A1AC70073753BC264C59020323B8A1 (WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* ___0_factory, JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* ___1_reader, const RuntimeMethod* method) ;
// System.Void LitJson.JsonReader::.ctor(System.IO.TextReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader__ctor_m796FB622ADB958C9EC9B9F937C12B72B6424DE3A (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* __this, TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___0_reader, const RuntimeMethod* method) ;
// LitJson.IJsonWrapper LitJson.JsonMapper::ToWrapper(LitJson.WrapperFactory,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_ToWrapper_mA6DFAACCFE4197B6B71E3AB7B325EF9C5D0739E6 (WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* ___0_factory, String_t* ___1_json, const RuntimeMethod* method) ;
// System.Void LitJson.JsonReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader__ctor_mA7B3448630453E385BCAADCA985410AFFCE4ACC3 (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* __this, String_t* ___0_json_text, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Clear()
inline void List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.String>::GetEnumerator()
inline Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7 (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.String System.Environment::get_NewLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF (const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Int32 System.Convert::ToInt32(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mD8869793A34ED86D38EFDF4BFCDD8D03FBBCCAB6 (uint8_t ___0_value, const RuntimeMethod* method) ;
// System.String System.Convert::ToString(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m8270C8361D2796C5C4659D441829CAFEEFBAC91C (Il2CppChar ___0_value, const RuntimeMethod* method) ;
// System.String System.Convert::ToString(System.DateTime,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m942B26CABBBFDCE9F1E647B15CA98F03D50976A0 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
// System.Void LitJson.JsonWriter::Write(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m2042A55B478D11A2C4BB399CE96C17DB3D85133A (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_number, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m9FD81A0DC7D2A34B74068ACA2F311270937DA2A2 (int8_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m708CB4FF71A3D4E08CBAAF70F290D093BD80AFCC (int16_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m350A3CBA3E031A3D53D14062D7E4ABB4A33F5438 (uint16_t ___0_value, const RuntimeMethod* method) ;
// System.UInt64 System.Convert::ToUInt64(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Convert_ToUInt64_m91C774E0D3AA8368D12AB8E2036E823C4FA9CB92 (uint32_t ___0_value, const RuntimeMethod* method) ;
// System.Byte System.Convert::ToByte(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Convert_ToByte_mB200A29D6E5CE42D564544DF1DC8852BF3582833 (int32_t ___0_value, const RuntimeMethod* method) ;
// System.UInt64 System.Convert::ToUInt64(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Convert_ToUInt64_m53C3A45C87A06F25957619222B04EABFD214373C (int32_t ___0_value, const RuntimeMethod* method) ;
// System.SByte System.Convert::ToSByte(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t Convert_ToSByte_mA336C42E413A5559B3F47FCD8B45EDB538693E63 (int32_t ___0_value, const RuntimeMethod* method) ;
// System.Int16 System.Convert::ToInt16(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t Convert_ToInt16_mF65D8227B8B6F0E30A135BC5F01F1562455AD382 (int32_t ___0_value, const RuntimeMethod* method) ;
// System.UInt16 System.Convert::ToUInt16(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Convert_ToUInt16_mA3ABC9268BA473D6F1C7801248D3200734180B2B (int32_t ___0_value, const RuntimeMethod* method) ;
// System.UInt32 System.Convert::ToUInt32(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Convert_ToUInt32_m3BD840FA8B5073EDD04AD3D3A044785EB00511A3 (int32_t ___0_value, const RuntimeMethod* method) ;
// System.Single System.Convert::ToSingle(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Convert_ToSingle_mE54B145DE1F8A182C3D1A66AEF3A95CB399C28CE (int32_t ___0_value, const RuntimeMethod* method) ;
// System.Double System.Convert::ToDouble(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Convert_ToDouble_m21A92C91FFDA003BD27748AA55CA0A7D6C0E6694 (int32_t ___0_value, const RuntimeMethod* method) ;
// System.Decimal System.Convert::ToDecimal(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Convert_ToDecimal_mAF1D2181BB8C5D3F25C0963245437B4AF4E6C575 (double ___0_value, const RuntimeMethod* method) ;
// System.UInt32 System.Convert::ToUInt32(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Convert_ToUInt32_m8754C042D71DB6C81EB54D85B73B7EC2710E4FA0 (int64_t ___0_value, const RuntimeMethod* method) ;
// System.Char System.Convert::ToChar(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Convert_ToChar_m1F2BBA9AD900A2570DE55F3E315BA7D9277E8230 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.DateTime System.Convert::ToDateTime(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Convert_ToDateTime_mA5FF0ECBE84ECB78B337E4E101423CC9AA95C8C3 (String_t* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
// System.Void LitJson.JsonData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_m6811B52CF3A742B6E425A0C8C02A7F475EC70C22 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) ;
// System.Void System.IO.StringReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringReader__ctor_m72556EC1062F49E05CF41B0825AC7FA2DB2A81C0 (StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* __this, String_t* ___0_s, const RuntimeMethod* method) ;
// System.Void LitJson.JsonReader::.ctor(System.IO.TextReader,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader__ctor_mDC4C842CE01B549E193647B6BFEE5420187C446A (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* __this, TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___0_reader, bool ___1_owned, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Int32>::.ctor()
inline void Stack_1__ctor_mF63AE96E8925749CDACE05B89002A389DDD748D1 (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6*, const RuntimeMethod*))Stack_1__ctor_mF63AE96E8925749CDACE05B89002A389DDD748D1_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Stack`1<System.Int32>::Push(T)
inline void Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6*, int32_t, const RuntimeMethod*))Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_gshared)(__this, ___0_item, method);
}
// System.Void LitJson.Lexer::.ctor(System.IO.TextReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer__ctor_mEF8BD28E77BCC5B98C34C9CE51CD2DCF786CA5A9 (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___0_reader, const RuntimeMethod* method) ;
// System.Void LitJson.JsonReader::PopulateParseTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_PopulateParseTable_mCC3169C58AC1DD19682E113FF9AD2F71BF95980C (const RuntimeMethod* method) ;
// System.Boolean LitJson.Lexer::get_AllowComments()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Lexer_get_AllowComments_m0810E49622D9958F3C841466EEE6A9695B09F8AB_inline (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, const RuntimeMethod* method) ;
// System.Void LitJson.Lexer::set_AllowComments(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Lexer_set_AllowComments_mD446284CCEBEE8C862E32DCC4C3503D0BA8AF25A_inline (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean LitJson.Lexer::get_AllowSingleQuotedStrings()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Lexer_get_AllowSingleQuotedStrings_m1A632DD60FDED6764AEF678AA716DDB98103A763_inline (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, const RuntimeMethod* method) ;
// System.Void LitJson.Lexer::set_AllowSingleQuotedStrings(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Lexer_set_AllowSingleQuotedStrings_mA18FE918B277D75318D4DB37638C04173C05A305_inline (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::.ctor()
inline void Dictionary_2__ctor_mF37C098D396E6388CF354D6F37970685A85B6FC0 (Dictionary_2_t403ABC2FA2D9740F9ADD28DB8815C00EE2DB4249* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t403ABC2FA2D9740F9ADD28DB8815C00EE2DB4249*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void LitJson.JsonReader::TableAddRow(LitJson.ParserToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_TableAddRow_m22740E32484278985D3C41B39D5BE6CFD7EFBE1F (int32_t ___0_rule, const RuntimeMethod* method) ;
// System.Void LitJson.JsonReader::TableAddCol(LitJson.ParserToken,System.Int32,System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_TableAddCol_m4A0AD9C37635A1C83AF78E463F603162DB292700 (int32_t ___0_row, int32_t ___1_col, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_symbols, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32[]>::.ctor()
inline void Dictionary_2__ctor_m3F530E7CD9CC3EB97DCC6E1669EAB9FCE984FA9A (Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966 (String_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Double::TryParse(System.String,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_TryParse_m60AD55BC181D70F661BC2A2294E66B5466C3C018 (String_t* ___0_s, double* ___1_result, const RuntimeMethod* method) ;
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21 (String_t* ___0_s, int32_t* ___1_result, const RuntimeMethod* method) ;
// System.Boolean System.Int64::TryParse(System.String,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int64_TryParse_m3FC0128C89CC2331239FC2A0A749BF33455F03D2 (String_t* ___0_s, int64_t* ___1_result, const RuntimeMethod* method) ;
// System.String LitJson.Lexer::get_StringValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Lexer_get_StringValue_mE4230649FF6DC2B66F9FAA021BB30FC8B7EBA5FF_inline (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, const RuntimeMethod* method) ;
// System.Void LitJson.JsonReader::ProcessNumber(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_ProcessNumber_mF3EF4D91F87594C1D6357FDE08D539DDB66A624D (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* __this, String_t* ___0_number, const RuntimeMethod* method) ;
// System.Boolean LitJson.Lexer::NextToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_NextToken_m1FC49AB01B8C3D281961541D1D7D1A8721B06083 (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, const RuntimeMethod* method) ;
// System.Boolean LitJson.Lexer::get_EndOfInput()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Lexer_get_EndOfInput_m450A1AC83F893FDE38826AFD2A726428956491AC_inline (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, const RuntimeMethod* method) ;
// System.Void LitJson.JsonReader::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_Close_m91AEDB0DE517F63898D830A3140B83032CFE8F2F (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* __this, const RuntimeMethod* method) ;
// System.Int32 LitJson.Lexer::get_Token()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Lexer_get_Token_m77727EC36916D1258709D74850710E0487B67F99_inline (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Int32>::Clear()
inline void Stack_1_Clear_mEE1C6E0AF654AE01D41D12DAF62217D4FE3930E0 (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6*, const RuntimeMethod*))Stack_1_Clear_mEE1C6E0AF654AE01D41D12DAF62217D4FE3930E0_gshared)(__this, method);
}
// System.Boolean LitJson.JsonReader::ReadToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonReader_ReadToken_m5C6E65529B9286DFC6270FE4A926FA12620894B9 (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Int32>::Peek()
inline int32_t Stack_1_Peek_m919AA48BFC239B260BB6A0639B8E027B60CB8B66 (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6*, const RuntimeMethod*))Stack_1_Peek_m919AA48BFC239B260BB6A0639B8E027B60CB8B66_gshared)(__this, method);
}
// T System.Collections.Generic.Stack`1<System.Int32>::Pop()
inline int32_t Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748 (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6*, const RuntimeMethod*))Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748_gshared)(__this, method);
}
// System.Void LitJson.JsonReader::ProcessSymbol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_ProcessSymbol_m0E855A59E8E386619529E923A6A9BABFEE63769C (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* __this, const RuntimeMethod* method) ;
// System.Void LitJson.JsonException::.ctor(LitJson.ParserToken,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_mD12D72A1D7949F48B846F1207BFA40EB8CB61E23 (JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76* __this, int32_t ___0_token, Exception_t* ___1_inner_exception, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Void System.IO.StringWriter::.ctor(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringWriter__ctor_mF38CB8046B79DEF523E427B7F41CA3135671D0C8 (StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* __this, StringBuilder_t* ___0_sb, const RuntimeMethod* method) ;
// System.Void LitJson.JsonWriter::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Init_m9DD0FC6AED98A7D661B9374FFDFF534411DDB838 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, const RuntimeMethod* method) ;
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::get_InvariantInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* NumberFormatInfo_get_InvariantInfo_m4689F466D2607C7369BCE394E3FB3681A6E644FA (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<LitJson.WriterContext>::.ctor()
inline void Stack_1__ctor_m2A8D4EF841D474ABBD42CA0BE7389F3C1A1A31E7 (Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD*, const RuntimeMethod*))Stack_1__ctor_m70E8EDA96A608CE9BAB7FC8313B233AADA573BD4_gshared)(__this, method);
}
// System.Void LitJson.WriterContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriterContext__ctor_m776EF36E46B33DFC054B4AD1E6F3139B038AF037 (WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<LitJson.WriterContext>::Push(T)
inline void Stack_1_Push_mCC27D4FD504E058A5A42BE3285782C44D715DF4A (Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD* __this, WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD*, WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F*, const RuntimeMethod*))Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared)(__this, ___0_item, method);
}
// System.Void LitJson.JsonWriter::PutNewline(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_PutNewline_mC6A36636BB9D628BCAB9C2F1B4C27546A9D07100 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, bool ___0_add_comma, const RuntimeMethod* method) ;
// System.Void LitJson.JsonWriter::Put(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Put_mFABB67DDE2B46F39CB3BD04A8A883D908934CDF0 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, String_t* ___0_str, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<LitJson.WriterContext>::Clear()
inline void Stack_1_Clear_m6ADA89EC27B8CEB290D73A08C00E14FCF1440D65 (Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD*, const RuntimeMethod*))Stack_1_Clear_mD550E89582979ECB0D6E6D68F0237FC14708BE85_gshared)(__this, method);
}
// System.Int32 System.Text.StringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8 (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Remove(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90 (StringBuilder_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Void LitJson.JsonWriter::DoValidation(LitJson.Condition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_DoValidation_m3F03AD6E422930F933D182AD01154E08F32EFF3B (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, int32_t ___0_cond, const RuntimeMethod* method) ;
// System.Void LitJson.JsonWriter::PutNewline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_PutNewline_mFE1588405B1DBE7ADC65A867FB1DB57A0D9CD3C4 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, const RuntimeMethod* method) ;
// System.String System.Convert::ToString(System.Decimal,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_mF6A8BB10515230B099A7EDA9D28C2F8991F758CA (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
// System.String System.Convert::ToString(System.Double,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m7EBE84B1D453D12C9514AD3EF4F6B3F55A5E5C9B (double ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
// System.String System.Convert::ToString(System.Int32,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_mC65AC3BEDED3049732E8A67B496AAAEF4C732871 (int32_t ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
// System.String System.Convert::ToString(System.Int64,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m03FCA4B41451E9A04705485B1C2FFC3D826B63E1 (int64_t ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
// System.Void LitJson.JsonWriter::PutString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_PutString_m8BD1DBB2B72F8027F3B9DE4CD5D4807C5849F3D1 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, String_t* ___0_str, const RuntimeMethod* method) ;
// System.String System.Convert::ToString(System.UInt64,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_mB35C9B82D948EFB22F235F65AC3996B9F44C6D38 (uint64_t ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<LitJson.WriterContext>::Pop()
inline WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* Stack_1_Pop_m98A1DBF775D66CFC5149DF79AFD2042E2E54ABC2 (Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD* __this, const RuntimeMethod* method)
{
	return ((  WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* (*) (Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD*, const RuntimeMethod*))Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.Stack`1<LitJson.WriterContext>::get_Count()
inline int32_t Stack_1_get_Count_m145C99D2412AD5B6C8CADF47696A334272AA6EDB_inline (Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD*, const RuntimeMethod*))Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline)(__this, method);
}
// T System.Collections.Generic.Stack`1<LitJson.WriterContext>::Peek()
inline WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* Stack_1_Peek_m20439CD5B4898A681D0F39D58BBC7E2C21CA584C (Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD* __this, const RuntimeMethod* method)
{
	return ((  WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* (*) (Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD*, const RuntimeMethod*))Stack_1_Peek_mF0ECF6A61726B66E6D9B33D8C4DEAA47E586E6E4_gshared)(__this, method);
}
// System.Void LitJson.JsonWriter::Unindent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Unindent_m2EF20A77048699830DA37601DA2BE20F17B1D5E0 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, const RuntimeMethod* method) ;
// System.Void LitJson.JsonWriter::Indent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Indent_m139D71DBB2C331C1C9A23D48AD0B607D10D8FEFA (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5 (StringBuilder_t* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Void LitJson.FsmContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmContext__ctor_m65740EA47916AE8C2881DD66B2EEE0CECA3E7189 (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* __this, const RuntimeMethod* method) ;
// System.Void LitJson.Lexer::PopulateFsmTables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer_PopulateFsmTables_m4FBE23E5C025665992DDA5398537C9D180A15BF7 (const RuntimeMethod* method) ;
// System.Void LitJson.Lexer/StateHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateHandler__ctor_m33A94C96682C78721802E376BDC6673C9CDB08E1 (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Char System.Convert::ToChar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Convert_ToChar_mF1B1B205DDEFDE52251235514E7DAFCAB37D1F24 (int32_t ___0_value, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
// System.Boolean LitJson.Lexer::GetChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_GetChar_m240416C419AACCDFAD8C74F764421740C53A6253 (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, const RuntimeMethod* method) ;
// System.Void LitJson.Lexer::UngetChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer_UngetChar_m1FBA3B548EFBD21F87308A001FD32ECCCF86C5D4 (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, const RuntimeMethod* method) ;
// System.Char LitJson.Lexer::ProcessEscChar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Lexer_ProcessEscChar_m1E23F62F3A8846AA52FD98E49917B3A8C9C168E3 (int32_t ___0_esc_char, const RuntimeMethod* method) ;
// System.Int32 LitJson.Lexer::HexValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lexer_HexValue_m5FF113620372573CAA3AAA87DE9BFDFE9D1AA83A (int32_t ___0_digit, const RuntimeMethod* method) ;
// System.Int32 LitJson.Lexer::NextChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lexer_NextChar_m4416B29A729201704EF5494475D04A81665E7D9D (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, const RuntimeMethod* method) ;
// System.Boolean LitJson.Lexer/StateHandler::Invoke(LitJson.FsmContext)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool StateHandler_Invoke_mAED7B745D78A2D2DC62A793247492E7718A3210E_inline (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* __this, FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___0_ctx, const RuntimeMethod* method) ;
// System.Void LitJson.JsonException::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_m267C4D3DA6783E685C755BEB2B354A15AB620363 (JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76* __this, int32_t ___0_c, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LitJson.JsonData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_m6811B52CF3A742B6E425A0C8C02A7F475EC70C22 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void LitJson.JsonData::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_mEB4115AF975189279CB57527850DDAD9230D3D2B (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, bool ___0_boolean, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		__this->___type_8 = 7;
		bool L_0 = ___0_boolean;
		__this->___inst_boolean_1 = L_0;
		return;
	}
}
// System.Void LitJson.JsonData::.ctor(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_m8A0A37263CACAC98E364B72BDF9929433707D6F7 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, double ___0_number, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		__this->___type_8 = 6;
		double L_0 = ___0_number;
		__this->___inst_double_2 = L_0;
		return;
	}
}
// System.Void LitJson.JsonData::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_m53BBD8B0DF27C525C5CD4BFD9E5C2EC09A106F78 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, int32_t ___0_number, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		__this->___type_8 = 4;
		int32_t L_0 = ___0_number;
		__this->___inst_int_3 = L_0;
		return;
	}
}
// System.Void LitJson.JsonData::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_mB54717B470C1218DF181039F1A12F9BACD000462 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, int64_t ___0_number, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		__this->___type_8 = 5;
		int64_t L_0 = ___0_number;
		__this->___inst_long_4 = L_0;
		return;
	}
}
// System.Void LitJson.JsonData::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_mA02A77C55F31BBE7F62D84ADEAC445BB4D6BF6F0 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))
		{
			goto IL_0025;
		}
	}
	{
		__this->___type_8 = 7;
		RuntimeObject* L_1 = ___0_obj;
		__this->___inst_boolean_1 = ((*(bool*)((bool*)(bool*)UnBox(L_1, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var))));
		return;
	}

IL_0025:
	{
		RuntimeObject* L_2 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_2, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var)))
		{
			goto IL_0044;
		}
	}
	{
		__this->___type_8 = 6;
		RuntimeObject* L_3 = ___0_obj;
		__this->___inst_double_2 = ((*(double*)((double*)(double*)UnBox(L_3, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var))));
		return;
	}

IL_0044:
	{
		RuntimeObject* L_4 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_4, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))
		{
			goto IL_0063;
		}
	}
	{
		__this->___type_8 = 4;
		RuntimeObject* L_5 = ___0_obj;
		__this->___inst_int_3 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_5, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		return;
	}

IL_0063:
	{
		RuntimeObject* L_6 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_6, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var)))
		{
			goto IL_0082;
		}
	}
	{
		__this->___type_8 = 5;
		RuntimeObject* L_7 = ___0_obj;
		__this->___inst_long_4 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_7, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var))));
		return;
	}

IL_0082:
	{
		RuntimeObject* L_8 = ___0_obj;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_00a1;
		}
	}
	{
		__this->___type_8 = 3;
		RuntimeObject* L_9 = ___0_obj;
		__this->___inst_string_6 = ((String_t*)CastclassSealed((RuntimeObject*)L_9, String_t_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inst_string_6), (void*)((String_t*)CastclassSealed((RuntimeObject*)L_9, String_t_il2cpp_TypeInfo_var)));
		return;
	}

IL_00a1:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDCAF96AFD9825EC0819F85E3953F28B330B45CC3)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData__ctor_mA02A77C55F31BBE7F62D84ADEAC445BB4D6BF6F0_RuntimeMethod_var)));
	}
}
// System.Void LitJson.JsonData::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_m9FAA8A904760EDD166AA91A84184FB51FB68E3F3 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, String_t* ___0_str, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		__this->___type_8 = 3;
		String_t* L_0 = ___0_str;
		__this->___inst_string_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inst_string_6), (void*)L_0);
		return;
	}
}
// System.Int32 LitJson.JsonData::System.Collections.ICollection.get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonData_System_Collections_ICollection_get_Count_m1928821DE12D36BC1ADD18A8640515E26712421D (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = JsonData_get_Count_m59A660054922D869F9CC95947848D1829AD2680C(__this, NULL);
		return L_0;
	}
}
// System.Boolean LitJson.JsonData::System.Collections.ICollection.get_IsSynchronized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_System_Collections_ICollection_get_IsSynchronized_m916ECDC97D55234918E33C68EBC7096AC3E9BB8C (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureCollection_mFB01D813BC8765113931EF533783BA5BC764C283(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean System.Collections.ICollection::get_IsSynchronized() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Object LitJson.JsonData::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_System_Collections_ICollection_get_SyncRoot_mBAB43E3293672F6EB626FA687E552B51DC2F1FC2 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureCollection_mFB01D813BC8765113931EF533783BA5BC764C283(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean LitJson.JsonData::System.Collections.IDictionary.get_IsFixedSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_System_Collections_IDictionary_get_IsFixedSize_m5783EEBDE15601AB8FA90FD9A02B26AEB3176026 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureDictionary_m402293ECDF1F18AE8CA8259A102E698ADD3A8EB2(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.Collections.IDictionary::get_IsFixedSize() */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean LitJson.JsonData::System.Collections.IDictionary.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_System_Collections_IDictionary_get_IsReadOnly_m4DDCFBDE28ED5393BC1DC2871B454D50271BB4BB (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureDictionary_m402293ECDF1F18AE8CA8259A102E698ADD3A8EB2(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Collections.IDictionary::get_IsReadOnly() */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Collections.ICollection LitJson.JsonData::System.Collections.IDictionary.get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_System_Collections_IDictionary_get_Keys_m09C045695EBC903E21448D3DA5A9A5D787683D96 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t5C03FBFD5ECBDE4EAB8C4ED582DDFCF702EB5DC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tE918F8F2362B68438A431F84E92E542A23B318B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tA8D764B99B6196299ECE08BCBA02AB2EE733CB1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mB20EAD0A1F549096009239692374BA2D53CC56C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureDictionary_m402293ECDF1F18AE8CA8259A102E698ADD3A8EB2(__this, NULL);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_1, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_0 = L_1;
		RuntimeObject* L_2 = __this->___object_list_9;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::GetEnumerator() */, IEnumerable_1_tE918F8F2362B68438A431F84E92E542A23B318B6_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0042:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					if (!L_4)
					{
						goto IL_004e;
					}
				}
				{
					RuntimeObject* L_5 = V_1;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_004e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0032_1;
			}

IL_001e_1:
			{
				RuntimeObject* L_6 = V_1;
				NullCheck(L_6);
				KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 L_7;
				L_7 = InterfaceFuncInvoker0< KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Current() */, IEnumerator_1_tA8D764B99B6196299ECE08BCBA02AB2EE733CB1D_il2cpp_TypeInfo_var, L_6);
				V_2 = L_7;
				RuntimeObject* L_8 = V_0;
				String_t* L_9;
				L_9 = KeyValuePair_2_get_Key_mB20EAD0A1F549096009239692374BA2D53CC56C8_inline((&V_2), KeyValuePair_2_get_Key_mB20EAD0A1F549096009239692374BA2D53CC56C8_RuntimeMethod_var);
				NullCheck(L_8);
				InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.String>::Add(T) */, ICollection_1_t5C03FBFD5ECBDE4EAB8C4ED582DDFCF702EB5DC7_il2cpp_TypeInfo_var, L_8, L_9);
			}

IL_0032_1:
			{
				RuntimeObject* L_10 = V_1;
				NullCheck(L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_10);
				if (L_11)
				{
					goto IL_001e_1;
				}
			}
			{
				goto IL_004f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004f:
	{
		RuntimeObject* L_12 = V_0;
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_12, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var));
	}
}
// System.Collections.ICollection LitJson.JsonData::System.Collections.IDictionary.get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_System_Collections_IDictionary_get_Values_m5C4630F668BCD06DF24FF2A25D78D1A52D249099 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tE4324299D87C0ED69EFF6083103E594ED9299AF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tE918F8F2362B68438A431F84E92E542A23B318B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tA8D764B99B6196299ECE08BCBA02AB2EE733CB1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m1AF62875E8518A1790EFF3FBB65608529D80A79E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m71FFC1A9C81BB314F91B10BE885521A22E708BF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF2E1AB00AE46093D3DBEBFF23EE42498976376CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureDictionary_m402293ECDF1F18AE8CA8259A102E698ADD3A8EB2(__this, NULL);
		List_1_tF2E1AB00AE46093D3DBEBFF23EE42498976376CA* L_1 = (List_1_tF2E1AB00AE46093D3DBEBFF23EE42498976376CA*)il2cpp_codegen_object_new(List_1_tF2E1AB00AE46093D3DBEBFF23EE42498976376CA_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m71FFC1A9C81BB314F91B10BE885521A22E708BF8(L_1, List_1__ctor_m71FFC1A9C81BB314F91B10BE885521A22E708BF8_RuntimeMethod_var);
		V_0 = L_1;
		RuntimeObject* L_2 = __this->___object_list_9;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::GetEnumerator() */, IEnumerable_1_tE918F8F2362B68438A431F84E92E542A23B318B6_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0042:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					if (!L_4)
					{
						goto IL_004e;
					}
				}
				{
					RuntimeObject* L_5 = V_1;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_004e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0032_1;
			}

IL_001e_1:
			{
				RuntimeObject* L_6 = V_1;
				NullCheck(L_6);
				KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 L_7;
				L_7 = InterfaceFuncInvoker0< KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Current() */, IEnumerator_1_tA8D764B99B6196299ECE08BCBA02AB2EE733CB1D_il2cpp_TypeInfo_var, L_6);
				V_2 = L_7;
				RuntimeObject* L_8 = V_0;
				JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_9;
				L_9 = KeyValuePair_2_get_Value_m1AF62875E8518A1790EFF3FBB65608529D80A79E_inline((&V_2), KeyValuePair_2_get_Value_m1AF62875E8518A1790EFF3FBB65608529D80A79E_RuntimeMethod_var);
				NullCheck(L_8);
				InterfaceActionInvoker1< JsonData_t3C51D89A19D30A47A74617107D861959322307F1* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<LitJson.JsonData>::Add(T) */, ICollection_1_tE4324299D87C0ED69EFF6083103E594ED9299AF1_il2cpp_TypeInfo_var, L_8, L_9);
			}

IL_0032_1:
			{
				RuntimeObject* L_10 = V_1;
				NullCheck(L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_10);
				if (L_11)
				{
					goto IL_001e_1;
				}
			}
			{
				goto IL_004f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004f:
	{
		RuntimeObject* L_12 = V_0;
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_12, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var));
	}
}
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_LitJson_IJsonWrapper_get_IsArray_mF1E13B321569EA63CC1429F47E30E838F263BE9E (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = JsonData_get_IsArray_m37BA31D547428C52C0F4A1923598DC36124033DC(__this, NULL);
		return L_0;
	}
}
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsBoolean()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_LitJson_IJsonWrapper_get_IsBoolean_mF6F37DE23B41831D7D996A6ED00A164098F9FD41 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = JsonData_get_IsBoolean_mA02E81165515B6A3FC71FC03A85734E9905FE450(__this, NULL);
		return L_0;
	}
}
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_LitJson_IJsonWrapper_get_IsDouble_m7370BEC0CE2BD5F1011A3C2F3DA91E314B9D1405 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = JsonData_get_IsDouble_m36490E724869C57CC7CCDBA30430FCB5A3E4602A(__this, NULL);
		return L_0;
	}
}
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_LitJson_IJsonWrapper_get_IsInt_m6EEE905B9FCDCECB3CCC9B6207FC84E4B4FBB563 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = JsonData_get_IsInt_m094B3A225B2B50F0123D1BAB1012D5E652C200B7(__this, NULL);
		return L_0;
	}
}
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsLong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_LitJson_IJsonWrapper_get_IsLong_m7A3DDB112C21CD0030A7C0212527DA234A00A836 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = JsonData_get_IsLong_m082D69215FD4794AF4B026BFEB5BF72A6FD1CEBD(__this, NULL);
		return L_0;
	}
}
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_LitJson_IJsonWrapper_get_IsObject_mA27D82C6D4234AB1CE3241FE4CE50ECDD8B1B52E (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = JsonData_get_IsObject_mF608D1B4942FFA43A6E4D27DAD8243343AAEC0D3(__this, NULL);
		return L_0;
	}
}
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_LitJson_IJsonWrapper_get_IsString_m77BD58710E042B213612CF4E51BAE0BF03EA9DD3 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = JsonData_get_IsString_m5F2D19AC3F87FB3D76F1FDAA9D6B2CF3564977FF(__this, NULL);
		return L_0;
	}
}
// System.Boolean LitJson.JsonData::System.Collections.IList.get_IsFixedSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_System_Collections_IList_get_IsFixedSize_m5E943C4DE3DD920E91CD7C1F2E53192FA28200AE (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureList_m6FCDB06F594222F9584291F20B3DA2FF4E5CE718(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(6 /* System.Boolean System.Collections.IList::get_IsFixedSize() */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean LitJson.JsonData::System.Collections.IList.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_System_Collections_IList_get_IsReadOnly_m6E271699DD735D2E1123085A3508AC27D735C4F7 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureList_m6FCDB06F594222F9584291F20B3DA2FF4E5CE718(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.Collections.IList::get_IsReadOnly() */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Object LitJson.JsonData::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_System_Collections_IDictionary_get_Item_m8E67E7723DA1D430AC2E2DDD1E592C708EFFB032 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureDictionary_m402293ECDF1F18AE8CA8259A102E698ADD3A8EB2(__this, NULL);
		RuntimeObject* L_1 = ___0_key;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void LitJson.JsonData::System.Collections.IDictionary.set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_System_Collections_IDictionary_set_Item_m9E5C2463B2821FC2B3BE28F28F1050AE388902F9 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JsonData_t3C51D89A19D30A47A74617107D861959322307F1* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_key;
		if (((String_t*)IsInstSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral82A13B351F60D442B29C59FEDF02FF7E52C04163)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData_System_Collections_IDictionary_set_Item_m9E5C2463B2821FC2B3BE28F28F1050AE388902F9_RuntimeMethod_var)));
	}

IL_0016:
	{
		RuntimeObject* L_2 = ___1_value;
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_3;
		L_3 = JsonData_ToJsonData_mD42F841238609F7087B993D39CC6EC3F39F8BACC(__this, L_2, NULL);
		V_0 = L_3;
		RuntimeObject* L_4 = ___0_key;
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_5 = V_0;
		JsonData_set_Item_m6FE3B6A0E6C79F7B3661945A402CBEAB66371202(__this, ((String_t*)CastclassSealed((RuntimeObject*)L_4, String_t_il2cpp_TypeInfo_var)), L_5, NULL);
		return;
	}
}
// System.Object LitJson.JsonData::System.Collections.Specialized.IOrderedDictionary.get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_System_Collections_Specialized_IOrderedDictionary_get_Item_m62C54CDE0A105AAF22FB8D88C5A04C18C9D592A8 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, int32_t ___0_idx, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tCE0C7B37A9126CC0CB3277FBC9C4B9161B866C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m1AF62875E8518A1790EFF3FBB65608529D80A79E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureDictionary_m402293ECDF1F18AE8CA8259A102E698ADD3A8EB2(__this, NULL);
		RuntimeObject* L_1 = __this->___object_list_9;
		int32_t L_2 = ___0_idx;
		NullCheck(L_1);
		KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 L_3;
		L_3 = InterfaceFuncInvoker1< KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Item(System.Int32) */, IList_1_tCE0C7B37A9126CC0CB3277FBC9C4B9161B866C32_il2cpp_TypeInfo_var, L_1, L_2);
		V_0 = L_3;
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_4;
		L_4 = KeyValuePair_2_get_Value_m1AF62875E8518A1790EFF3FBB65608529D80A79E_inline((&V_0), KeyValuePair_2_get_Value_m1AF62875E8518A1790EFF3FBB65608529D80A79E_RuntimeMethod_var);
		return L_4;
	}
}
// System.Void LitJson.JsonData::System.Collections.Specialized.IOrderedDictionary.set_Item(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_System_Collections_Specialized_IOrderedDictionary_set_Item_mC21FB1501163CB204909FBB6A265534ED43AF14A (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, int32_t ___0_idx, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t8B67C0BACED3ABBE0BB390A264074F9245F22842_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tCE0C7B37A9126CC0CB3277FBC9C4B9161B866C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mF8563179C2DDD7A9FDB625D79ABD337FB772A683_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mB20EAD0A1F549096009239692374BA2D53CC56C8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	JsonData_t3C51D89A19D30A47A74617107D861959322307F1* V_0 = NULL;
	KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureDictionary_m402293ECDF1F18AE8CA8259A102E698ADD3A8EB2(__this, NULL);
		RuntimeObject* L_1 = ___1_value;
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_2;
		L_2 = JsonData_ToJsonData_mD42F841238609F7087B993D39CC6EC3F39F8BACC(__this, L_1, NULL);
		V_0 = L_2;
		RuntimeObject* L_3 = __this->___object_list_9;
		int32_t L_4 = ___0_idx;
		NullCheck(L_3);
		KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 L_5;
		L_5 = InterfaceFuncInvoker1< KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Item(System.Int32) */, IList_1_tCE0C7B37A9126CC0CB3277FBC9C4B9161B866C32_il2cpp_TypeInfo_var, L_3, L_4);
		V_1 = L_5;
		RuntimeObject* L_6 = __this->___inst_object_5;
		String_t* L_7;
		L_7 = KeyValuePair_2_get_Key_mB20EAD0A1F549096009239692374BA2D53CC56C8_inline((&V_1), KeyValuePair_2_get_Key_mB20EAD0A1F549096009239692374BA2D53CC56C8_RuntimeMethod_var);
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_8 = V_0;
		NullCheck(L_6);
		InterfaceActionInvoker2< String_t*, JsonData_t3C51D89A19D30A47A74617107D861959322307F1* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData>::set_Item(TKey,TValue) */, IDictionary_2_t8B67C0BACED3ABBE0BB390A264074F9245F22842_il2cpp_TypeInfo_var, L_6, L_7, L_8);
		String_t* L_9;
		L_9 = KeyValuePair_2_get_Key_mB20EAD0A1F549096009239692374BA2D53CC56C8_inline((&V_1), KeyValuePair_2_get_Key_mB20EAD0A1F549096009239692374BA2D53CC56C8_RuntimeMethod_var);
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_10 = V_0;
		KeyValuePair_2__ctor_mF8563179C2DDD7A9FDB625D79ABD337FB772A683((&V_2), L_9, L_10, KeyValuePair_2__ctor_mF8563179C2DDD7A9FDB625D79ABD337FB772A683_RuntimeMethod_var);
		RuntimeObject* L_11 = __this->___object_list_9;
		int32_t L_12 = ___0_idx;
		KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 L_13 = V_2;
		NullCheck(L_11);
		InterfaceActionInvoker2< int32_t, KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::set_Item(System.Int32,T) */, IList_1_tCE0C7B37A9126CC0CB3277FBC9C4B9161B866C32_il2cpp_TypeInfo_var, L_11, L_12, L_13);
		return;
	}
}
// System.Object LitJson.JsonData::System.Collections.IList.get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_System_Collections_IList_get_Item_mD896EB10F113D680EDFBC3D495131B2FCDEC55EF (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureList_m6FCDB06F594222F9584291F20B3DA2FF4E5CE718(__this, NULL);
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void LitJson.JsonData::System.Collections.IList.set_Item(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_System_Collections_IList_set_Item_mB7EAC712FD88B435CF5D885BF0A678B09C19C60E (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	JsonData_t3C51D89A19D30A47A74617107D861959322307F1* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureList_m6FCDB06F594222F9584291F20B3DA2FF4E5CE718(__this, NULL);
		RuntimeObject* L_1 = ___1_value;
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_2;
		L_2 = JsonData_ToJsonData_mD42F841238609F7087B993D39CC6EC3F39F8BACC(__this, L_1, NULL);
		V_0 = L_2;
		int32_t L_3 = ___0_index;
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_4 = V_0;
		JsonData_set_Item_m874D334A667986B4FBC1515687EF6B551D71FAE8(__this, L_3, L_4, NULL);
		return;
	}
}
// System.Void LitJson.JsonData::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_System_Collections_ICollection_CopyTo_m718153CFF6828AF6E374C7FDF80D7FD675544520 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureCollection_mFB01D813BC8765113931EF533783BA5BC764C283(__this, NULL);
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< RuntimeArray*, int32_t >::Invoke(0 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Void LitJson.JsonData::System.Collections.IDictionary.Add(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_System_Collections_IDictionary_Add_m8F766EE45CE3613EEE5136B5AC233C3FF3A16A1A (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t76010575BE25258AB4D5EFFF458A7FCD2F1030A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mF8563179C2DDD7A9FDB625D79ABD337FB772A683_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JsonData_t3C51D89A19D30A47A74617107D861959322307F1* V_0 = NULL;
	KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___1_value;
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_1;
		L_1 = JsonData_ToJsonData_mD42F841238609F7087B993D39CC6EC3F39F8BACC(__this, L_0, NULL);
		V_0 = L_1;
		RuntimeObject* L_2;
		L_2 = JsonData_EnsureDictionary_m402293ECDF1F18AE8CA8259A102E698ADD3A8EB2(__this, NULL);
		RuntimeObject* L_3 = ___0_key;
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_4 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(5 /* System.Void System.Collections.IDictionary::Add(System.Object,System.Object) */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_2, L_3, L_4);
		RuntimeObject* L_5 = ___0_key;
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_6 = V_0;
		KeyValuePair_2__ctor_mF8563179C2DDD7A9FDB625D79ABD337FB772A683((&V_1), ((String_t*)CastclassSealed((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var)), L_6, KeyValuePair_2__ctor_mF8563179C2DDD7A9FDB625D79ABD337FB772A683_RuntimeMethod_var);
		RuntimeObject* L_7 = __this->___object_list_9;
		KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 L_8 = V_1;
		NullCheck(L_7);
		InterfaceActionInvoker1< KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::Add(T) */, ICollection_1_t76010575BE25258AB4D5EFFF458A7FCD2F1030A7_il2cpp_TypeInfo_var, L_7, L_8);
		__this->___json_7 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___json_7), (void*)(String_t*)NULL);
		return;
	}
}
// System.Void LitJson.JsonData::System.Collections.IDictionary.Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_System_Collections_IDictionary_Clear_m285AB467A43A7C41A8427B796E17F213AEA51528 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t76010575BE25258AB4D5EFFF458A7FCD2F1030A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureDictionary_m402293ECDF1F18AE8CA8259A102E698ADD3A8EB2(__this, NULL);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(6 /* System.Void System.Collections.IDictionary::Clear() */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_0);
		RuntimeObject* L_1 = __this->___object_list_9;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::Clear() */, ICollection_1_t76010575BE25258AB4D5EFFF458A7FCD2F1030A7_il2cpp_TypeInfo_var, L_1);
		__this->___json_7 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___json_7), (void*)(String_t*)NULL);
		return;
	}
}
// System.Boolean LitJson.JsonData::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_System_Collections_IDictionary_Contains_m02095723C5D92D7C080B137650156C56261FA23C (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureDictionary_m402293ECDF1F18AE8CA8259A102E698ADD3A8EB2(__this, NULL);
		RuntimeObject* L_1 = ___0_key;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(4 /* System.Boolean System.Collections.IDictionary::Contains(System.Object) */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Collections.IDictionaryEnumerator LitJson.JsonData::System.Collections.IDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_System_Collections_IDictionary_GetEnumerator_mC7F4FE47A8BD7DD7A9941C7D62BDC8906FBE7AAE (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOrderedDictionary_t4705C37EB66554997A0F3C58A92EE8E202BD46E9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.IDictionaryEnumerator System.Collections.Specialized.IOrderedDictionary::GetEnumerator() */, IOrderedDictionary_t4705C37EB66554997A0F3C58A92EE8E202BD46E9_il2cpp_TypeInfo_var, __this);
		return L_0;
	}
}
// System.Void LitJson.JsonData::System.Collections.IDictionary.Remove(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_System_Collections_IDictionary_Remove_m16DF2045A4C3B23570ACBFBF890CEABF481F81CF (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t76010575BE25258AB4D5EFFF458A7FCD2F1030A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tCE0C7B37A9126CC0CB3277FBC9C4B9161B866C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mB20EAD0A1F549096009239692374BA2D53CC56C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureDictionary_m402293ECDF1F18AE8CA8259A102E698ADD3A8EB2(__this, NULL);
		RuntimeObject* L_1 = ___0_key;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(10 /* System.Void System.Collections.IDictionary::Remove(System.Object) */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = 0;
		goto IL_004c;
	}

IL_0013:
	{
		RuntimeObject* L_2 = __this->___object_list_9;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 L_4;
		L_4 = InterfaceFuncInvoker1< KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Item(System.Int32) */, IList_1_tCE0C7B37A9126CC0CB3277FBC9C4B9161B866C32_il2cpp_TypeInfo_var, L_2, L_3);
		V_1 = L_4;
		String_t* L_5;
		L_5 = KeyValuePair_2_get_Key_mB20EAD0A1F549096009239692374BA2D53CC56C8_inline((&V_1), KeyValuePair_2_get_Key_mB20EAD0A1F549096009239692374BA2D53CC56C8_RuntimeMethod_var);
		RuntimeObject* L_6 = ___0_key;
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, ((String_t*)CastclassSealed((RuntimeObject*)L_6, String_t_il2cpp_TypeInfo_var)), NULL);
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_8 = __this->___object_list_9;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		InterfaceActionInvoker1< int32_t >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::RemoveAt(System.Int32) */, IList_1_tCE0C7B37A9126CC0CB3277FBC9C4B9161B866C32_il2cpp_TypeInfo_var, L_8, L_9);
		goto IL_005d;
	}

IL_0048:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_004c:
	{
		int32_t L_11 = V_0;
		RuntimeObject* L_12 = __this->___object_list_9;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Count() */, ICollection_1_t76010575BE25258AB4D5EFFF458A7FCD2F1030A7_il2cpp_TypeInfo_var, L_12);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0013;
		}
	}

IL_005d:
	{
		__this->___json_7 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___json_7), (void*)(String_t*)NULL);
		return;
	}
}
// System.Collections.IEnumerator LitJson.JsonData::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_System_Collections_IEnumerable_GetEnumerator_mFE8CBE09E06D74A6EFDBA81CC6755C65451862E2 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureCollection_mFB01D813BC8765113931EF533783BA5BC764C283(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.GetBoolean()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_LitJson_IJsonWrapper_GetBoolean_m02229DB77CB8074F0F2ED898D0CE29BA4350B95B (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___type_8;
		if ((((int32_t)L_0) == ((int32_t)7)))
		{
			goto IL_0017;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3FB649A9FAAB5634336E279002E9E84D9AFCA0FC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData_LitJson_IJsonWrapper_GetBoolean_m02229DB77CB8074F0F2ED898D0CE29BA4350B95B_RuntimeMethod_var)));
	}

IL_0017:
	{
		bool L_2 = __this->___inst_boolean_1;
		return L_2;
	}
}
// System.Double LitJson.JsonData::LitJson.IJsonWrapper.GetDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double JsonData_LitJson_IJsonWrapper_GetDouble_mBB4264E6B18E4DF17A4B00CB0BFE838A3895AE69 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___type_8;
		if ((((int32_t)L_0) == ((int32_t)6)))
		{
			goto IL_0017;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE09E38B1A3E02297C148733DE7EED6E5DC8479F5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData_LitJson_IJsonWrapper_GetDouble_mBB4264E6B18E4DF17A4B00CB0BFE838A3895AE69_RuntimeMethod_var)));
	}

IL_0017:
	{
		double L_2 = __this->___inst_double_2;
		return L_2;
	}
}
// System.Int32 LitJson.JsonData::LitJson.IJsonWrapper.GetInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonData_LitJson_IJsonWrapper_GetInt_mC20A4D6F04A93056C1FB067C68E092AA4CE13BEE (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___type_8;
		if ((((int32_t)L_0) == ((int32_t)4)))
		{
			goto IL_0017;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9CBCD572886BE3E0FA105AA3A7FE08AABFF19B79)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData_LitJson_IJsonWrapper_GetInt_mC20A4D6F04A93056C1FB067C68E092AA4CE13BEE_RuntimeMethod_var)));
	}

IL_0017:
	{
		int32_t L_2 = __this->___inst_int_3;
		return L_2;
	}
}
// System.Int64 LitJson.JsonData::LitJson.IJsonWrapper.GetLong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t JsonData_LitJson_IJsonWrapper_GetLong_mC36169157591BD9D3A60C529659D4F6EF01A268D (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___type_8;
		if ((((int32_t)L_0) == ((int32_t)5)))
		{
			goto IL_0017;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral999DBDC959C03AA352D6BBA2EE5B69A49B9F2393)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData_LitJson_IJsonWrapper_GetLong_mC36169157591BD9D3A60C529659D4F6EF01A268D_RuntimeMethod_var)));
	}

IL_0017:
	{
		int64_t L_2 = __this->___inst_long_4;
		return L_2;
	}
}
// System.String LitJson.JsonData::LitJson.IJsonWrapper.GetString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonData_LitJson_IJsonWrapper_GetString_m6EA810BD49C5125077D92E11DFEC4AFE0A4235E1 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___type_8;
		if ((((int32_t)L_0) == ((int32_t)3)))
		{
			goto IL_0017;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral447D2D55725EF428A6F4753B53612ECA1764ECE7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData_LitJson_IJsonWrapper_GetString_m6EA810BD49C5125077D92E11DFEC4AFE0A4235E1_RuntimeMethod_var)));
	}

IL_0017:
	{
		String_t* L_2 = __this->___inst_string_6;
		return L_2;
	}
}
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetBoolean(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_LitJson_IJsonWrapper_SetBoolean_mF61DEBF6BDEFCEEC1CA6786DB676415813DCB014 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, bool ___0_val, const RuntimeMethod* method) 
{
	{
		__this->___type_8 = 7;
		bool L_0 = ___0_val;
		__this->___inst_boolean_1 = L_0;
		__this->___json_7 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___json_7), (void*)(String_t*)NULL);
		return;
	}
}
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetDouble(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_LitJson_IJsonWrapper_SetDouble_mDE0713F66AB143C6F3705DA877F01C9E60D76553 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, double ___0_val, const RuntimeMethod* method) 
{
	{
		__this->___type_8 = 6;
		double L_0 = ___0_val;
		__this->___inst_double_2 = L_0;
		__this->___json_7 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___json_7), (void*)(String_t*)NULL);
		return;
	}
}
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetInt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_LitJson_IJsonWrapper_SetInt_m2FD29586CD2F56322C23D12E7622A30053C704D5 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, int32_t ___0_val, const RuntimeMethod* method) 
{
	{
		__this->___type_8 = 4;
		int32_t L_0 = ___0_val;
		__this->___inst_int_3 = L_0;
		__this->___json_7 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___json_7), (void*)(String_t*)NULL);
		return;
	}
}
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetLong(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_LitJson_IJsonWrapper_SetLong_mE40BE10F5427485DBFE8018E34C61EA862B18716 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, int64_t ___0_val, const RuntimeMethod* method) 
{
	{
		__this->___type_8 = 5;
		int64_t L_0 = ___0_val;
		__this->___inst_long_4 = L_0;
		__this->___json_7 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___json_7), (void*)(String_t*)NULL);
		return;
	}
}
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_LitJson_IJsonWrapper_SetString_m1D50848A9C4D6FDA2EA3A0B48AB58F27B859BFBA (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, String_t* ___0_val, const RuntimeMethod* method) 
{
	{
		__this->___type_8 = 3;
		String_t* L_0 = ___0_val;
		__this->___inst_string_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inst_string_6), (void*)L_0);
		__this->___json_7 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___json_7), (void*)(String_t*)NULL);
		return;
	}
}
// System.String LitJson.JsonData::LitJson.IJsonWrapper.ToJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonData_LitJson_IJsonWrapper_ToJson_m5B53ACE8DB62D0816B15367D6A35EDB96A3977CB (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = JsonData_ToJson_m658608ADAC4FD37098A16F86171C6BEDAE6E4C30(__this, NULL);
		return L_0;
	}
}
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.ToJson(LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_LitJson_IJsonWrapper_ToJson_m9F1ACEC1D1CDC41BE912D364538A9DFB79053CCD (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___0_writer, const RuntimeMethod* method) 
{
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_0 = ___0_writer;
		JsonData_ToJson_m179225C968B6EE68507BB3694882E41DA05DA4C4(__this, L_0, NULL);
		return;
	}
}
// System.Int32 LitJson.JsonData::System.Collections.IList.Add(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonData_System_Collections_IList_Add_mBB90F2B605DA48CF3B2BB283D83E3B68982D7857 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		int32_t L_1;
		L_1 = JsonData_Add_mA88DA1756863A2C121F7D72986EDF2EF6E0B88E1(__this, L_0, NULL);
		return L_1;
	}
}
// System.Void LitJson.JsonData::System.Collections.IList.Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_System_Collections_IList_Clear_m480936A33C1592C34894FCCB427D2A650841D15B (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureList_m6FCDB06F594222F9584291F20B3DA2FF4E5CE718(__this, NULL);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(4 /* System.Void System.Collections.IList::Clear() */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_0);
		__this->___json_7 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___json_7), (void*)(String_t*)NULL);
		return;
	}
}
// System.Boolean LitJson.JsonData::System.Collections.IList.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_System_Collections_IList_Contains_m524B6DEDCF030862D76E60DE0EF23CE305052A16 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureList_m6FCDB06F594222F9584291F20B3DA2FF4E5CE718(__this, NULL);
		RuntimeObject* L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(3 /* System.Boolean System.Collections.IList::Contains(System.Object) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Int32 LitJson.JsonData::System.Collections.IList.IndexOf(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonData_System_Collections_IList_IndexOf_mC8D5D8C8B485992303ACF9F535A63BEBABDAC186 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureList_m6FCDB06F594222F9584291F20B3DA2FF4E5CE718(__this, NULL);
		RuntimeObject* L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(7 /* System.Int32 System.Collections.IList::IndexOf(System.Object) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void LitJson.JsonData::System.Collections.IList.Insert(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_System_Collections_IList_Insert_m968CA5587708151BD18906CD3A30CA3BB452D4F1 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureList_m6FCDB06F594222F9584291F20B3DA2FF4E5CE718(__this, NULL);
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, RuntimeObject* >::Invoke(8 /* System.Void System.Collections.IList::Insert(System.Int32,System.Object) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		__this->___json_7 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___json_7), (void*)(String_t*)NULL);
		return;
	}
}
// System.Void LitJson.JsonData::System.Collections.IList.Remove(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_System_Collections_IList_Remove_m6BE0CE268E656B03AFDF0E8F532C2D7C2A35611E (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureList_m6FCDB06F594222F9584291F20B3DA2FF4E5CE718(__this, NULL);
		RuntimeObject* L_1 = ___0_value;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void System.Collections.IList::Remove(System.Object) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_0, L_1);
		__this->___json_7 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___json_7), (void*)(String_t*)NULL);
		return;
	}
}
// System.Void LitJson.JsonData::System.Collections.IList.RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_System_Collections_IList_RemoveAt_mE575B66B97A5547B92B86551F53E8316411A1A4F (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureList_m6FCDB06F594222F9584291F20B3DA2FF4E5CE718(__this, NULL);
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(10 /* System.Void System.Collections.IList::RemoveAt(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_0, L_1);
		__this->___json_7 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___json_7), (void*)(String_t*)NULL);
		return;
	}
}
// System.Collections.IDictionaryEnumerator LitJson.JsonData::System.Collections.Specialized.IOrderedDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_System_Collections_Specialized_IOrderedDictionary_GetEnumerator_m277AB6743B8845FE83E7DB3A71456CAAFB8620D5 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tE918F8F2362B68438A431F84E92E542A23B318B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OrderedDictionaryEnumerator_t557577F1E3C3DC7E5A3BFA6B12F2E0F7921D9C18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureDictionary_m402293ECDF1F18AE8CA8259A102E698ADD3A8EB2(__this, NULL);
		RuntimeObject* L_1 = __this->___object_list_9;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::GetEnumerator() */, IEnumerable_1_tE918F8F2362B68438A431F84E92E542A23B318B6_il2cpp_TypeInfo_var, L_1);
		OrderedDictionaryEnumerator_t557577F1E3C3DC7E5A3BFA6B12F2E0F7921D9C18* L_3 = (OrderedDictionaryEnumerator_t557577F1E3C3DC7E5A3BFA6B12F2E0F7921D9C18*)il2cpp_codegen_object_new(OrderedDictionaryEnumerator_t557577F1E3C3DC7E5A3BFA6B12F2E0F7921D9C18_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		OrderedDictionaryEnumerator__ctor_mE835230F6C9BF7EBC082A282BE74976A450B07A1(L_3, L_2, NULL);
		return L_3;
	}
}
// System.Void LitJson.JsonData::System.Collections.Specialized.IOrderedDictionary.Insert(System.Int32,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_System_Collections_Specialized_IOrderedDictionary_Insert_m453944A5175BF515C00BCC24BBE6D1A0121EC0B5 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, int32_t ___0_idx, RuntimeObject* ___1_key, RuntimeObject* ___2_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tCE0C7B37A9126CC0CB3277FBC9C4B9161B866C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mF8563179C2DDD7A9FDB625D79ABD337FB772A683_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	JsonData_t3C51D89A19D30A47A74617107D861959322307F1* V_1 = NULL;
	KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0 = ___1_key;
		V_0 = ((String_t*)CastclassSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = ___2_value;
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_2;
		L_2 = JsonData_ToJsonData_mD42F841238609F7087B993D39CC6EC3F39F8BACC(__this, L_1, NULL);
		V_1 = L_2;
		String_t* L_3 = V_0;
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_4 = V_1;
		JsonData_set_Item_m6FE3B6A0E6C79F7B3661945A402CBEAB66371202(__this, L_3, L_4, NULL);
		String_t* L_5 = V_0;
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_6 = V_1;
		KeyValuePair_2__ctor_mF8563179C2DDD7A9FDB625D79ABD337FB772A683((&V_2), L_5, L_6, KeyValuePair_2__ctor_mF8563179C2DDD7A9FDB625D79ABD337FB772A683_RuntimeMethod_var);
		RuntimeObject* L_7 = __this->___object_list_9;
		int32_t L_8 = ___0_idx;
		KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 L_9 = V_2;
		NullCheck(L_7);
		InterfaceActionInvoker2< int32_t, KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 >::Invoke(3 /* System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::Insert(System.Int32,T) */, IList_1_tCE0C7B37A9126CC0CB3277FBC9C4B9161B866C32_il2cpp_TypeInfo_var, L_7, L_8, L_9);
		return;
	}
}
// System.Void LitJson.JsonData::System.Collections.Specialized.IOrderedDictionary.RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_System_Collections_Specialized_IOrderedDictionary_RemoveAt_m276C779F61AFC7AA2ABC0866BB71FCAF219AF060 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, int32_t ___0_idx, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t8B67C0BACED3ABBE0BB390A264074F9245F22842_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tCE0C7B37A9126CC0CB3277FBC9C4B9161B866C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mB20EAD0A1F549096009239692374BA2D53CC56C8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureDictionary_m402293ECDF1F18AE8CA8259A102E698ADD3A8EB2(__this, NULL);
		RuntimeObject* L_1 = __this->___inst_object_5;
		RuntimeObject* L_2 = __this->___object_list_9;
		int32_t L_3 = ___0_idx;
		NullCheck(L_2);
		KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 L_4;
		L_4 = InterfaceFuncInvoker1< KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Item(System.Int32) */, IList_1_tCE0C7B37A9126CC0CB3277FBC9C4B9161B866C32_il2cpp_TypeInfo_var, L_2, L_3);
		V_0 = L_4;
		String_t* L_5;
		L_5 = KeyValuePair_2_get_Key_mB20EAD0A1F549096009239692374BA2D53CC56C8_inline((&V_0), KeyValuePair_2_get_Key_mB20EAD0A1F549096009239692374BA2D53CC56C8_RuntimeMethod_var);
		NullCheck(L_1);
		bool L_6;
		L_6 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData>::Remove(TKey) */, IDictionary_2_t8B67C0BACED3ABBE0BB390A264074F9245F22842_il2cpp_TypeInfo_var, L_1, L_5);
		RuntimeObject* L_7 = __this->___object_list_9;
		int32_t L_8 = ___0_idx;
		NullCheck(L_7);
		InterfaceActionInvoker1< int32_t >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::RemoveAt(System.Int32) */, IList_1_tCE0C7B37A9126CC0CB3277FBC9C4B9161B866C32_il2cpp_TypeInfo_var, L_7, L_8);
		return;
	}
}
// System.Int32 LitJson.JsonData::ValueAsInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonData_ValueAsInt_mC5F061F1DB52BF81897109616FF2E7B03A43D725 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->___type_8;
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = __this->___inst_int_3;
		G_B3_0 = L_1;
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		return G_B3_0;
	}
}
// System.Int64 LitJson.JsonData::ValueAsLong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t JsonData_ValueAsLong_m64BEA2ECDB9F46C766BE5515F3A3C28901578A36 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	int64_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->___type_8;
		if ((!(((uint32_t)L_0) == ((uint32_t)5))))
		{
			goto IL_0017;
		}
	}
	{
		int64_t L_1 = __this->___inst_long_4;
		G_B3_0 = L_1;
		goto IL_0019;
	}

IL_0017:
	{
		G_B3_0 = ((int64_t)0);
	}

IL_0019:
	{
		return G_B3_0;
	}
}
// System.Boolean LitJson.JsonData::ValueAsBoolean()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_ValueAsBoolean_m007498D834CB2356DD2FFE21D2595218BEFA40A3 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->___type_8;
		if ((!(((uint32_t)L_0) == ((uint32_t)7))))
		{
			goto IL_0017;
		}
	}
	{
		bool L_1 = __this->___inst_boolean_1;
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		return (bool)G_B3_0;
	}
}
// System.Double LitJson.JsonData::ValueAsDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double JsonData_ValueAsDouble_m0BD59F37300109E044C5EB9E290C90A44E09FF99 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	double G_B3_0 = 0.0;
	{
		int32_t L_0 = __this->___type_8;
		if ((!(((uint32_t)L_0) == ((uint32_t)6))))
		{
			goto IL_0017;
		}
	}
	{
		double L_1 = __this->___inst_double_2;
		G_B3_0 = L_1;
		goto IL_0020;
	}

IL_0017:
	{
		G_B3_0 = (0.0);
	}

IL_0020:
	{
		return G_B3_0;
	}
}
// System.String LitJson.JsonData::ValueAsString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonData_ValueAsString_mA88781F7789BAF4688249A378F61A0FD9B40A2DE (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	{
		int32_t L_0 = __this->___type_8;
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_0017;
		}
	}
	{
		String_t* L_1 = __this->___inst_string_6;
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0017:
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.Collections.Generic.IList`1<LitJson.JsonData> LitJson.JsonData::ValueAsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_ValueAsArray_mC5C84587DB04BFC047A16516D6C7C003051CF885 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		int32_t L_0 = __this->___type_8;
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_1 = __this->___inst_array_0;
		V_0 = L_1;
		RuntimeObject* L_2 = V_0;
		G_B3_0 = L_2;
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = ((RuntimeObject*)(NULL));
	}

IL_001a:
	{
		return G_B3_0;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData> LitJson.JsonData::ValueAsObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_ValueAsObject_m37545EE771E8C7419246F8AF52749F533851E07E (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		int32_t L_0 = __this->___type_8;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_1 = __this->___inst_object_5;
		V_0 = L_1;
		RuntimeObject* L_2 = V_0;
		G_B3_0 = L_2;
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = ((RuntimeObject*)(NULL));
	}

IL_001a:
	{
		return G_B3_0;
	}
}
// System.Void LitJson.JsonData::PrintJsonTypeMemory(LitJson.JsonType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_PrintJsonTypeMemory_mB872435FEBB7CF9E03E46F9F0FF5FD4D541788EC (int32_t ___0_t, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Int32 LitJson.JsonData::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonData_get_Count_m59A660054922D869F9CC95947848D1829AD2680C (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureCollection_mFB01D813BC8765113931EF533783BA5BC764C283(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean LitJson.JsonData::get_IsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsArray_m37BA31D547428C52C0F4A1923598DC36124033DC (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___type_8;
		return (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
	}
}
// System.Boolean LitJson.JsonData::get_IsBoolean()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsBoolean_mA02E81165515B6A3FC71FC03A85734E9905FE450 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___type_8;
		return (bool)((((int32_t)L_0) == ((int32_t)7))? 1 : 0);
	}
}
// System.Boolean LitJson.JsonData::get_IsDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsDouble_m36490E724869C57CC7CCDBA30430FCB5A3E4602A (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___type_8;
		return (bool)((((int32_t)L_0) == ((int32_t)6))? 1 : 0);
	}
}
// System.Boolean LitJson.JsonData::get_IsInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsInt_m094B3A225B2B50F0123D1BAB1012D5E652C200B7 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___type_8;
		return (bool)((((int32_t)L_0) == ((int32_t)4))? 1 : 0);
	}
}
// System.Boolean LitJson.JsonData::get_IsLong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsLong_m082D69215FD4794AF4B026BFEB5BF72A6FD1CEBD (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___type_8;
		return (bool)((((int32_t)L_0) == ((int32_t)5))? 1 : 0);
	}
}
// System.Boolean LitJson.JsonData::get_IsObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsObject_mF608D1B4942FFA43A6E4D27DAD8243343AAEC0D3 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___type_8;
		return (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean LitJson.JsonData::get_IsString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsString_m5F2D19AC3F87FB3D76F1FDAA9D6B2CF3564977FF (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___type_8;
		return (bool)((((int32_t)L_0) == ((int32_t)3))? 1 : 0);
	}
}
// System.Void LitJson.JsonData::DLOG(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_DLOG_m023911D00F4766EC148A869D2E3D5E74D5E92155 (String_t* ___0_str, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// LitJson.JsonData LitJson.JsonData::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonData_t3C51D89A19D30A47A74617107D861959322307F1* JsonData_get_Item_m6A08F7BE15696506EC603C2464772EE42AC216E7 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, String_t* ___0_prop_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t8B67C0BACED3ABBE0BB390A264074F9245F22842_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FDBCAC73EFAEC70FABB5B26409911A2BCC55B44);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B9E9A2C5E31742E65966C199480343A968BE2CF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4076FB7A81E0ECCB3522A3F4255886AD85D85905);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DF685091771A18E38BD7386A978D86E63623EBA);
		s_Il2CppMethodInitialized = true;
	}
	JsonData_t3C51D89A19D30A47A74617107D861959322307F1* V_0 = NULL;
	{
		JsonData_DLOG_m023911D00F4766EC148A869D2E3D5E74D5E92155(_stringLiteral7DF685091771A18E38BD7386A978D86E63623EBA, NULL);
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureDictionary_m402293ECDF1F18AE8CA8259A102E698ADD3A8EB2(__this, NULL);
		JsonData_DLOG_m023911D00F4766EC148A869D2E3D5E74D5E92155(_stringLiteral4076FB7A81E0ECCB3522A3F4255886AD85D85905, NULL);
		V_0 = (JsonData_t3C51D89A19D30A47A74617107D861959322307F1*)NULL;
		RuntimeObject* L_1 = __this->___inst_object_5;
		String_t* L_2 = ___0_prop_name;
		NullCheck(L_1);
		bool L_3;
		L_3 = InterfaceFuncInvoker2< bool, String_t*, JsonData_t3C51D89A19D30A47A74617107D861959322307F1** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData>::TryGetValue(TKey,TValue&) */, IDictionary_2_t8B67C0BACED3ABBE0BB390A264074F9245F22842_il2cpp_TypeInfo_var, L_1, L_2, (&V_0));
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		JsonData_DLOG_m023911D00F4766EC148A869D2E3D5E74D5E92155(_stringLiteral3B9E9A2C5E31742E65966C199480343A968BE2CF, NULL);
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_4 = V_0;
		return L_4;
	}

IL_003c:
	{
		String_t* L_5 = ___0_prop_name;
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral2FDBCAC73EFAEC70FABB5B26409911A2BCC55B44, L_5, NULL);
		JsonData_DLOG_m023911D00F4766EC148A869D2E3D5E74D5E92155(L_6, NULL);
		return (JsonData_t3C51D89A19D30A47A74617107D861959322307F1*)NULL;
	}
}
// System.Void LitJson.JsonData::set_Item(System.String,LitJson.JsonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_set_Item_m6FE3B6A0E6C79F7B3661945A402CBEAB66371202 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, String_t* ___0_prop_name, JsonData_t3C51D89A19D30A47A74617107D861959322307F1* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t76010575BE25258AB4D5EFFF458A7FCD2F1030A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t8B67C0BACED3ABBE0BB390A264074F9245F22842_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tCE0C7B37A9126CC0CB3277FBC9C4B9161B866C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mF8563179C2DDD7A9FDB625D79ABD337FB772A683_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mB20EAD0A1F549096009239692374BA2D53CC56C8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureDictionary_m402293ECDF1F18AE8CA8259A102E698ADD3A8EB2(__this, NULL);
		String_t* L_1 = ___0_prop_name;
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_2 = ___1_value;
		KeyValuePair_2__ctor_mF8563179C2DDD7A9FDB625D79ABD337FB772A683((&V_0), L_1, L_2, KeyValuePair_2__ctor_mF8563179C2DDD7A9FDB625D79ABD337FB772A683_RuntimeMethod_var);
		RuntimeObject* L_3 = __this->___inst_object_5;
		String_t* L_4 = ___0_prop_name;
		NullCheck(L_3);
		bool L_5;
		L_5 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData>::ContainsKey(TKey) */, IDictionary_2_t8B67C0BACED3ABBE0BB390A264074F9245F22842_il2cpp_TypeInfo_var, L_3, L_4);
		if (!L_5)
		{
			goto IL_0073;
		}
	}
	{
		V_1 = 0;
		goto IL_005d;
	}

IL_0028:
	{
		RuntimeObject* L_6 = __this->___object_list_9;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 L_8;
		L_8 = InterfaceFuncInvoker1< KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Item(System.Int32) */, IList_1_tCE0C7B37A9126CC0CB3277FBC9C4B9161B866C32_il2cpp_TypeInfo_var, L_6, L_7);
		V_2 = L_8;
		String_t* L_9;
		L_9 = KeyValuePair_2_get_Key_mB20EAD0A1F549096009239692374BA2D53CC56C8_inline((&V_2), KeyValuePair_2_get_Key_mB20EAD0A1F549096009239692374BA2D53CC56C8_RuntimeMethod_var);
		String_t* L_10 = ___0_prop_name;
		bool L_11;
		L_11 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, L_10, NULL);
		if (!L_11)
		{
			goto IL_0059;
		}
	}
	{
		RuntimeObject* L_12 = __this->___object_list_9;
		int32_t L_13 = V_1;
		KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 L_14 = V_0;
		NullCheck(L_12);
		InterfaceActionInvoker2< int32_t, KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::set_Item(System.Int32,T) */, IList_1_tCE0C7B37A9126CC0CB3277FBC9C4B9161B866C32_il2cpp_TypeInfo_var, L_12, L_13, L_14);
		goto IL_006e;
	}

IL_0059:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_005d:
	{
		int32_t L_16 = V_1;
		RuntimeObject* L_17 = __this->___object_list_9;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Count() */, ICollection_1_t76010575BE25258AB4D5EFFF458A7FCD2F1030A7_il2cpp_TypeInfo_var, L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_0028;
		}
	}

IL_006e:
	{
		goto IL_007f;
	}

IL_0073:
	{
		RuntimeObject* L_19 = __this->___object_list_9;
		KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 L_20 = V_0;
		NullCheck(L_19);
		InterfaceActionInvoker1< KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::Add(T) */, ICollection_1_t76010575BE25258AB4D5EFFF458A7FCD2F1030A7_il2cpp_TypeInfo_var, L_19, L_20);
	}

IL_007f:
	{
		RuntimeObject* L_21 = __this->___inst_object_5;
		String_t* L_22 = ___0_prop_name;
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_23 = ___1_value;
		NullCheck(L_21);
		InterfaceActionInvoker2< String_t*, JsonData_t3C51D89A19D30A47A74617107D861959322307F1* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData>::set_Item(TKey,TValue) */, IDictionary_2_t8B67C0BACED3ABBE0BB390A264074F9245F22842_il2cpp_TypeInfo_var, L_21, L_22, L_23);
		__this->___json_7 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___json_7), (void*)(String_t*)NULL);
		return;
	}
}
// LitJson.JsonData LitJson.JsonData::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonData_t3C51D89A19D30A47A74617107D861959322307F1* JsonData_get_Item_m86C371130EC3E4EC35A09E33C860CD825276A10D (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t0E22BD75314F60626B98C2C1FA5B2634BA7F5A82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tCE0C7B37A9126CC0CB3277FBC9C4B9161B866C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m1AF62875E8518A1790EFF3FBB65608529D80A79E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureCollection_mFB01D813BC8765113931EF533783BA5BC764C283(__this, NULL);
		int32_t L_1 = __this->___type_8;
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_2 = __this->___inst_array_0;
		int32_t L_3 = ___0_index;
		NullCheck(L_2);
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_4;
		L_4 = InterfaceFuncInvoker1< JsonData_t3C51D89A19D30A47A74617107D861959322307F1*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<LitJson.JsonData>::get_Item(System.Int32) */, IList_1_t0E22BD75314F60626B98C2C1FA5B2634BA7F5A82_il2cpp_TypeInfo_var, L_2, L_3);
		return L_4;
	}

IL_0020:
	{
		RuntimeObject* L_5 = __this->___object_list_9;
		int32_t L_6 = ___0_index;
		NullCheck(L_5);
		KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 L_7;
		L_7 = InterfaceFuncInvoker1< KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Item(System.Int32) */, IList_1_tCE0C7B37A9126CC0CB3277FBC9C4B9161B866C32_il2cpp_TypeInfo_var, L_5, L_6);
		V_0 = L_7;
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_8;
		L_8 = KeyValuePair_2_get_Value_m1AF62875E8518A1790EFF3FBB65608529D80A79E_inline((&V_0), KeyValuePair_2_get_Value_m1AF62875E8518A1790EFF3FBB65608529D80A79E_RuntimeMethod_var);
		return L_8;
	}
}
// System.Void LitJson.JsonData::set_Item(System.Int32,LitJson.JsonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_set_Item_m874D334A667986B4FBC1515687EF6B551D71FAE8 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, int32_t ___0_index, JsonData_t3C51D89A19D30A47A74617107D861959322307F1* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t8B67C0BACED3ABBE0BB390A264074F9245F22842_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t0E22BD75314F60626B98C2C1FA5B2634BA7F5A82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tCE0C7B37A9126CC0CB3277FBC9C4B9161B866C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mF8563179C2DDD7A9FDB625D79ABD337FB772A683_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mB20EAD0A1F549096009239692374BA2D53CC56C8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureCollection_mFB01D813BC8765113931EF533783BA5BC764C283(__this, NULL);
		int32_t L_1 = __this->___type_8;
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject* L_2 = __this->___inst_array_0;
		int32_t L_3 = ___0_index;
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_4 = ___1_value;
		NullCheck(L_2);
		InterfaceActionInvoker2< int32_t, JsonData_t3C51D89A19D30A47A74617107D861959322307F1* >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<LitJson.JsonData>::set_Item(System.Int32,T) */, IList_1_t0E22BD75314F60626B98C2C1FA5B2634BA7F5A82_il2cpp_TypeInfo_var, L_2, L_3, L_4);
		goto IL_0061;
	}

IL_0025:
	{
		RuntimeObject* L_5 = __this->___object_list_9;
		int32_t L_6 = ___0_index;
		NullCheck(L_5);
		KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 L_7;
		L_7 = InterfaceFuncInvoker1< KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Item(System.Int32) */, IList_1_tCE0C7B37A9126CC0CB3277FBC9C4B9161B866C32_il2cpp_TypeInfo_var, L_5, L_6);
		V_0 = L_7;
		String_t* L_8;
		L_8 = KeyValuePair_2_get_Key_mB20EAD0A1F549096009239692374BA2D53CC56C8_inline((&V_0), KeyValuePair_2_get_Key_mB20EAD0A1F549096009239692374BA2D53CC56C8_RuntimeMethod_var);
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_9 = ___1_value;
		KeyValuePair_2__ctor_mF8563179C2DDD7A9FDB625D79ABD337FB772A683((&V_1), L_8, L_9, KeyValuePair_2__ctor_mF8563179C2DDD7A9FDB625D79ABD337FB772A683_RuntimeMethod_var);
		RuntimeObject* L_10 = __this->___object_list_9;
		int32_t L_11 = ___0_index;
		KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 L_12 = V_1;
		NullCheck(L_10);
		InterfaceActionInvoker2< int32_t, KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::set_Item(System.Int32,T) */, IList_1_tCE0C7B37A9126CC0CB3277FBC9C4B9161B866C32_il2cpp_TypeInfo_var, L_10, L_11, L_12);
		RuntimeObject* L_13 = __this->___inst_object_5;
		String_t* L_14;
		L_14 = KeyValuePair_2_get_Key_mB20EAD0A1F549096009239692374BA2D53CC56C8_inline((&V_0), KeyValuePair_2_get_Key_mB20EAD0A1F549096009239692374BA2D53CC56C8_RuntimeMethod_var);
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_15 = ___1_value;
		NullCheck(L_13);
		InterfaceActionInvoker2< String_t*, JsonData_t3C51D89A19D30A47A74617107D861959322307F1* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData>::set_Item(TKey,TValue) */, IDictionary_2_t8B67C0BACED3ABBE0BB390A264074F9245F22842_il2cpp_TypeInfo_var, L_13, L_14, L_15);
	}

IL_0061:
	{
		__this->___json_7 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___json_7), (void*)(String_t*)NULL);
		return;
	}
}
// System.Collections.ICollection LitJson.JsonData::EnsureCollection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_EnsureCollection_mFB01D813BC8765113931EF533783BA5BC764C283 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->___type_8;
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0018;
		}
	}
	{
		RuntimeObject* L_1 = __this->___inst_array_0;
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var));
	}

IL_0018:
	{
		int32_t L_2 = __this->___type_8;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_3 = __this->___inst_object_5;
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_3, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var));
	}

IL_0030:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5149D2AD92135C0DFA7131CADBFCC669275E96B5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData_EnsureCollection_mFB01D813BC8765113931EF533783BA5BC764C283_RuntimeMethod_var)));
	}
}
// System.Collections.IDictionary LitJson.JsonData::EnsureDictionary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_EnsureDictionary_m402293ECDF1F18AE8CA8259A102E698ADD3A8EB2 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m69403AE90D12CA520ABB728A1557B42580BBC7DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDF79546961566D2D6F7C4155F7ED851428AA9931_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m53AA73BE6E2FF2045F347EBCEE46E8E4EE524E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tFC3915CEAB0CCCC11D0AB7F2D3717177D1111111_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->___type_8;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0018;
		}
	}
	{
		RuntimeObject* L_1 = __this->___inst_object_5;
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_1, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var));
	}

IL_0018:
	{
		int32_t L_2 = __this->___type_8;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6DEED36FFF14869BC9ABC87FCC45B3DA6985BEEC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData_EnsureDictionary_m402293ECDF1F18AE8CA8259A102E698ADD3A8EB2_RuntimeMethod_var)));
	}

IL_002e:
	{
		__this->___type_8 = 1;
		Dictionary_2_tDF79546961566D2D6F7C4155F7ED851428AA9931* L_4 = (Dictionary_2_tDF79546961566D2D6F7C4155F7ED851428AA9931*)il2cpp_codegen_object_new(Dictionary_2_tDF79546961566D2D6F7C4155F7ED851428AA9931_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Dictionary_2__ctor_m69403AE90D12CA520ABB728A1557B42580BBC7DC(L_4, Dictionary_2__ctor_m69403AE90D12CA520ABB728A1557B42580BBC7DC_RuntimeMethod_var);
		__this->___inst_object_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inst_object_5), (void*)L_4);
		List_1_tFC3915CEAB0CCCC11D0AB7F2D3717177D1111111* L_5 = (List_1_tFC3915CEAB0CCCC11D0AB7F2D3717177D1111111*)il2cpp_codegen_object_new(List_1_tFC3915CEAB0CCCC11D0AB7F2D3717177D1111111_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m53AA73BE6E2FF2045F347EBCEE46E8E4EE524E5F(L_5, List_1__ctor_m53AA73BE6E2FF2045F347EBCEE46E8E4EE524E5F_RuntimeMethod_var);
		__this->___object_list_9 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___object_list_9), (void*)L_5);
		RuntimeObject* L_6 = __this->___inst_object_5;
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_6, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var));
	}
}
// System.Collections.IList LitJson.JsonData::EnsureList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_EnsureList_m6FCDB06F594222F9584291F20B3DA2FF4E5CE718 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m71FFC1A9C81BB314F91B10BE885521A22E708BF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF2E1AB00AE46093D3DBEBFF23EE42498976376CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->___type_8;
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0018;
		}
	}
	{
		RuntimeObject* L_1 = __this->___inst_array_0;
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_1, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
	}

IL_0018:
	{
		int32_t L_2 = __this->___type_8;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6BAB8F53EE6BDD0369569E27A174F474EA370914)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData_EnsureList_m6FCDB06F594222F9584291F20B3DA2FF4E5CE718_RuntimeMethod_var)));
	}

IL_002e:
	{
		__this->___type_8 = 2;
		List_1_tF2E1AB00AE46093D3DBEBFF23EE42498976376CA* L_4 = (List_1_tF2E1AB00AE46093D3DBEBFF23EE42498976376CA*)il2cpp_codegen_object_new(List_1_tF2E1AB00AE46093D3DBEBFF23EE42498976376CA_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_m71FFC1A9C81BB314F91B10BE885521A22E708BF8(L_4, List_1__ctor_m71FFC1A9C81BB314F91B10BE885521A22E708BF8_RuntimeMethod_var);
		__this->___inst_array_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inst_array_0), (void*)L_4);
		RuntimeObject* L_5 = __this->___inst_array_0;
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_5, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
	}
}
// LitJson.JsonData LitJson.JsonData::ToJsonData(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonData_t3C51D89A19D30A47A74617107D861959322307F1* JsonData_ToJsonData_mD42F841238609F7087B993D39CC6EC3F39F8BACC (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_obj;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (JsonData_t3C51D89A19D30A47A74617107D861959322307F1*)NULL;
	}

IL_0008:
	{
		RuntimeObject* L_1 = ___0_obj;
		if (!((JsonData_t3C51D89A19D30A47A74617107D861959322307F1*)IsInstClass((RuntimeObject*)L_1, JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_2 = ___0_obj;
		return ((JsonData_t3C51D89A19D30A47A74617107D861959322307F1*)CastclassClass((RuntimeObject*)L_2, JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var));
	}

IL_001a:
	{
		RuntimeObject* L_3 = ___0_obj;
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_4 = (JsonData_t3C51D89A19D30A47A74617107D861959322307F1*)il2cpp_codegen_object_new(JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		JsonData__ctor_mA02A77C55F31BBE7F62D84ADEAC445BB4D6BF6F0(L_4, L_3, NULL);
		return L_4;
	}
}
// System.Void LitJson.JsonData::WriteJson2(LitJson.JsonType,LitJson.JsonData,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_WriteJson2_m1A8279BE69453B3FCA2175A7A6C3CB2D8C97E3CC (int32_t ___0_t, JsonData_t3C51D89A19D30A47A74617107D861959322307F1* ___1_obj, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___2_writer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t985709A916F4830CF54F2EB0DE74174B85F2414C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t25804F9E75602AB0E9BBE15E15AA81B10A0A1FCD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonType_t9CFC52444C5F4ADB07D070974C5E58842A9AB006_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65178450579333918C3BDA9FEBAE91C079EABDE7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D9FB48D8A068EC2148400327674524D1B988AC3);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	JsonData_t3C51D89A19D30A47A74617107D861959322307F1* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB V_6;
	memset((&V_6), 0, sizeof(V_6));
	JsonData_t3C51D89A19D30A47A74617107D861959322307F1* V_7 = NULL;
	RuntimeObject* V_8 = NULL;
	{
		int32_t L_0 = ___0_t;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(JsonType_t9CFC52444C5F4ADB07D070974C5E58842A9AB006_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(_stringLiteral65178450579333918C3BDA9FEBAE91C079EABDE7, L_2, NULL);
		JsonData_DLOG_m023911D00F4766EC148A869D2E3D5E74D5E92155(L_3, NULL);
		int32_t L_4 = ___0_t;
		JsonData_PrintJsonTypeMemory_mB872435FEBB7CF9E03E46F9F0FF5FD4D541788EC(L_4, NULL);
		int32_t L_5 = ___0_t;
		V_0 = L_5;
		int32_t L_6 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, 1)))
		{
			case 0:
			{
				goto IL_00f6;
			}
			case 1:
			{
				goto IL_009b;
			}
			case 2:
			{
				goto IL_0046;
			}
			case 3:
			{
				goto IL_0079;
			}
			case 4:
			{
				goto IL_008a;
			}
			case 5:
			{
				goto IL_0068;
			}
			case 6:
			{
				goto IL_0057;
			}
		}
	}
	{
		goto IL_0046;
	}

IL_0046:
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_7 = ___2_writer;
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_8 = ___1_obj;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = JsonData_ValueAsString_mA88781F7789BAF4688249A378F61A0FD9B40A2DE(L_8, NULL);
		NullCheck(L_7);
		JsonWriter_Write_mC6C394BE18186CAEB8597055057A1AECDEE56916(L_7, L_9, NULL);
		goto IL_01a2;
	}

IL_0057:
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_10 = ___2_writer;
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_11 = ___1_obj;
		NullCheck(L_11);
		bool L_12;
		L_12 = JsonData_ValueAsBoolean_m007498D834CB2356DD2FFE21D2595218BEFA40A3(L_11, NULL);
		NullCheck(L_10);
		JsonWriter_Write_mFACCB1B6087CE1C66A68CE3BA2AF9844F7F31D8C(L_10, L_12, NULL);
		goto IL_01a2;
	}

IL_0068:
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_13 = ___2_writer;
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_14 = ___1_obj;
		NullCheck(L_14);
		double L_15;
		L_15 = JsonData_ValueAsDouble_m0BD59F37300109E044C5EB9E290C90A44E09FF99(L_14, NULL);
		NullCheck(L_13);
		JsonWriter_Write_m657048A70C011FC85FD3773A026EC0B21462AB4D(L_13, L_15, NULL);
		goto IL_01a2;
	}

IL_0079:
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_16 = ___2_writer;
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_17 = ___1_obj;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = JsonData_ValueAsInt_mC5F061F1DB52BF81897109616FF2E7B03A43D725(L_17, NULL);
		NullCheck(L_16);
		JsonWriter_Write_m3A3246FEFCA9BCEB4F3E7D2D5AC0FF49B8BBD3A7(L_16, L_18, NULL);
		goto IL_01a2;
	}

IL_008a:
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_19 = ___2_writer;
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_20 = ___1_obj;
		NullCheck(L_20);
		int64_t L_21;
		L_21 = JsonData_ValueAsLong_m64BEA2ECDB9F46C766BE5515F3A3C28901578A36(L_20, NULL);
		NullCheck(L_19);
		JsonWriter_Write_m500833BCB5B21114C1C8A3FA7DAAF6A1EAD2A3D4(L_19, L_21, NULL);
		goto IL_01a2;
	}

IL_009b:
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_22 = ___2_writer;
		NullCheck(L_22);
		JsonWriter_WriteArrayStart_mF4AB20790AB8817BCCEEB5FA649832890D5AADEB(L_22, NULL);
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_23 = ___1_obj;
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = JsonData_ValueAsArray_mC5C84587DB04BFC047A16516D6C7C003051CF885(L_23, NULL);
		V_1 = L_24;
		RuntimeObject* L_25 = V_1;
		if (!L_25)
		{
			goto IL_00eb;
		}
	}
	{
		RuntimeObject* L_26 = V_1;
		NullCheck(L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<LitJson.JsonData>::GetEnumerator() */, IEnumerable_1_t985709A916F4830CF54F2EB0DE74174B85F2414C_il2cpp_TypeInfo_var, L_26);
		V_2 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00de:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_28 = V_2;
					if (!L_28)
					{
						goto IL_00ea;
					}
				}
				{
					RuntimeObject* L_29 = V_2;
					NullCheck(L_29);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_29);
				}

IL_00ea:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00ce_1;
			}

IL_00ba_1:
			{
				RuntimeObject* L_30 = V_2;
				NullCheck(L_30);
				JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_31;
				L_31 = InterfaceFuncInvoker0< JsonData_t3C51D89A19D30A47A74617107D861959322307F1* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<LitJson.JsonData>::get_Current() */, IEnumerator_1_t25804F9E75602AB0E9BBE15E15AA81B10A0A1FCD_il2cpp_TypeInfo_var, L_30);
				V_3 = L_31;
				JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_32 = V_3;
				NullCheck(L_32);
				int32_t L_33;
				L_33 = JsonData_GetJsonType_m7313142A8EEFA586606A2F25157426C377A6096C_inline(L_32, NULL);
				JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_34 = V_3;
				JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_35 = ___2_writer;
				JsonData_WriteJson2_m1A8279BE69453B3FCA2175A7A6C3CB2D8C97E3CC(L_33, L_34, L_35, NULL);
			}

IL_00ce_1:
			{
				RuntimeObject* L_36 = V_2;
				NullCheck(L_36);
				bool L_37;
				L_37 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_36);
				if (L_37)
				{
					goto IL_00ba_1;
				}
			}
			{
				goto IL_00eb;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00eb:
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_38 = ___2_writer;
		NullCheck(L_38);
		JsonWriter_WriteArrayEnd_mE8262D6AC279897DA41D549CE12A8EA3054777B5(L_38, NULL);
		goto IL_01a2;
	}

IL_00f6:
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_39 = ___2_writer;
		NullCheck(L_39);
		JsonWriter_WriteObjectStart_m90F3A0A19C03EA7CF90017768E3FA217E4038688(L_39, NULL);
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_40 = ___1_obj;
		NullCheck(L_40);
		RuntimeObject* L_41;
		L_41 = JsonData_ValueAsObject_m37545EE771E8C7419246F8AF52749F533851E07E(L_40, NULL);
		V_4 = L_41;
		RuntimeObject* L_42 = V_4;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_42, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var)));
		RuntimeObject* L_43;
		L_43 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(9 /* System.Collections.IDictionaryEnumerator System.Collections.IDictionary::GetEnumerator() */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_42, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var)));
		V_5 = L_43;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0180:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_44 = V_5;
					RuntimeObject* L_45 = ((RuntimeObject*)IsInst((RuntimeObject*)L_44, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					V_8 = L_45;
					if (!L_45)
					{
						goto IL_0196;
					}
				}
				{
					RuntimeObject* L_46 = V_8;
					NullCheck(L_46);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_46);
				}

IL_0196:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_016f_1;
			}

IL_0117_1:
			{
				RuntimeObject* L_47 = V_5;
				NullCheck(L_47);
				RuntimeObject* L_48;
				L_48 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_47);
				V_6 = ((*(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)((DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)UnBox(L_48, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var))));
				JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_49 = ___2_writer;
				RuntimeObject* L_50;
				L_50 = DictionaryEntry_get_Key_m09845C00732E530E6FCB9042079E90D3912215FE_inline((&V_6), NULL);
				NullCheck(L_49);
				JsonWriter_WritePropertyName_m5646EF1771ABCFCCAAD52086AAE3387579E158E0(L_49, ((String_t*)CastclassSealed((RuntimeObject*)L_50, String_t_il2cpp_TypeInfo_var)), NULL);
				RuntimeObject* L_51;
				L_51 = DictionaryEntry_get_Key_m09845C00732E530E6FCB9042079E90D3912215FE_inline((&V_6), NULL);
				String_t* L_52;
				L_52 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral9D9FB48D8A068EC2148400327674524D1B988AC3, ((String_t*)CastclassSealed((RuntimeObject*)L_51, String_t_il2cpp_TypeInfo_var)), NULL);
				JsonData_DLOG_m023911D00F4766EC148A869D2E3D5E74D5E92155(L_52, NULL);
				RuntimeObject* L_53;
				L_53 = DictionaryEntry_get_Value_m75FD18FE968AE131F28AA2CB0DF4895EBA39075E_inline((&V_6), NULL);
				V_7 = ((JsonData_t3C51D89A19D30A47A74617107D861959322307F1*)CastclassClass((RuntimeObject*)L_53, JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var));
				JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_54 = V_7;
				NullCheck(L_54);
				int32_t L_55;
				L_55 = JsonData_GetJsonType_m7313142A8EEFA586606A2F25157426C377A6096C_inline(L_54, NULL);
				JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_56 = V_7;
				JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_57 = ___2_writer;
				JsonData_WriteJson2_m1A8279BE69453B3FCA2175A7A6C3CB2D8C97E3CC(L_55, L_56, L_57, NULL);
			}

IL_016f_1:
			{
				RuntimeObject* L_58 = V_5;
				NullCheck(L_58);
				bool L_59;
				L_59 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_58);
				if (L_59)
				{
					goto IL_0117_1;
				}
			}
			{
				goto IL_0197;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0197:
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_60 = ___2_writer;
		NullCheck(L_60);
		JsonWriter_WriteObjectEnd_m7B1F539A650AC9AA9413B9C3FF1DAA27834141AF(L_60, NULL);
		goto IL_01a2;
	}

IL_01a2:
	{
		return;
	}
}
// System.Void LitJson.JsonData::WriteJson(LitJson.IJsonWrapper,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_WriteJson_mD307B7581AE536A21EA9F30B270BC5393B335356 (RuntimeObject* ___0_obj, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___1_writer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJsonWrapper_t447B39837883BA1281A17C3D6BA122AD22837DD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonType_t9CFC52444C5F4ADB07D070974C5E58842A9AB006_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral464EA4526685475D814F5FF8C1459165CBF8967A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D9FB48D8A068EC2148400327674524D1B988AC3);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(10 /* LitJson.JsonType LitJson.IJsonWrapper::GetJsonType() */, IJsonWrapper_t447B39837883BA1281A17C3D6BA122AD22837DD9_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(JsonType_t9CFC52444C5F4ADB07D070974C5E58842A9AB006_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5;
		L_5 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(_stringLiteral464EA4526685475D814F5FF8C1459165CBF8967A, L_4, NULL);
		JsonData_DLOG_m023911D00F4766EC148A869D2E3D5E74D5E92155(L_5, NULL);
		int32_t L_6 = V_0;
		JsonData_PrintJsonTypeMemory_mB872435FEBB7CF9E03E46F9F0FF5FD4D541788EC(L_6, NULL);
		int32_t L_7 = V_0;
		V_1 = L_7;
		int32_t L_8 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_8, 1)))
		{
			case 0:
			{
				goto IL_00f8;
			}
			case 1:
			{
				goto IL_00a2;
			}
			case 2:
			{
				goto IL_004d;
			}
			case 3:
			{
				goto IL_0080;
			}
			case 4:
			{
				goto IL_0091;
			}
			case 5:
			{
				goto IL_006f;
			}
			case 6:
			{
				goto IL_005e;
			}
		}
	}
	{
		goto IL_018b;
	}

IL_004d:
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_9 = ___1_writer;
		RuntimeObject* L_10 = ___0_obj;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = InterfaceFuncInvoker0< String_t* >::Invoke(12 /* System.String LitJson.IJsonWrapper::GetString() */, IJsonWrapper_t447B39837883BA1281A17C3D6BA122AD22837DD9_il2cpp_TypeInfo_var, L_10);
		NullCheck(L_9);
		JsonWriter_Write_mC6C394BE18186CAEB8597055057A1AECDEE56916(L_9, L_11, NULL);
		goto IL_0190;
	}

IL_005e:
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_12 = ___1_writer;
		RuntimeObject* L_13 = ___0_obj;
		NullCheck(L_13);
		bool L_14;
		L_14 = InterfaceFuncInvoker0< bool >::Invoke(7 /* System.Boolean LitJson.IJsonWrapper::GetBoolean() */, IJsonWrapper_t447B39837883BA1281A17C3D6BA122AD22837DD9_il2cpp_TypeInfo_var, L_13);
		NullCheck(L_12);
		JsonWriter_Write_mFACCB1B6087CE1C66A68CE3BA2AF9844F7F31D8C(L_12, L_14, NULL);
		goto IL_0190;
	}

IL_006f:
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_15 = ___1_writer;
		RuntimeObject* L_16 = ___0_obj;
		NullCheck(L_16);
		double L_17;
		L_17 = InterfaceFuncInvoker0< double >::Invoke(8 /* System.Double LitJson.IJsonWrapper::GetDouble() */, IJsonWrapper_t447B39837883BA1281A17C3D6BA122AD22837DD9_il2cpp_TypeInfo_var, L_16);
		NullCheck(L_15);
		JsonWriter_Write_m657048A70C011FC85FD3773A026EC0B21462AB4D(L_15, L_17, NULL);
		goto IL_0190;
	}

IL_0080:
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_18 = ___1_writer;
		RuntimeObject* L_19 = ___0_obj;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = InterfaceFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 LitJson.IJsonWrapper::GetInt() */, IJsonWrapper_t447B39837883BA1281A17C3D6BA122AD22837DD9_il2cpp_TypeInfo_var, L_19);
		NullCheck(L_18);
		JsonWriter_Write_m3A3246FEFCA9BCEB4F3E7D2D5AC0FF49B8BBD3A7(L_18, L_20, NULL);
		goto IL_0190;
	}

IL_0091:
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_21 = ___1_writer;
		RuntimeObject* L_22 = ___0_obj;
		NullCheck(L_22);
		int64_t L_23;
		L_23 = InterfaceFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 LitJson.IJsonWrapper::GetLong() */, IJsonWrapper_t447B39837883BA1281A17C3D6BA122AD22837DD9_il2cpp_TypeInfo_var, L_22);
		NullCheck(L_21);
		JsonWriter_Write_m500833BCB5B21114C1C8A3FA7DAAF6A1EAD2A3D4(L_21, L_23, NULL);
		goto IL_0190;
	}

IL_00a2:
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_24 = ___1_writer;
		NullCheck(L_24);
		JsonWriter_WriteArrayStart_mF4AB20790AB8817BCCEEB5FA649832890D5AADEB(L_24, NULL);
		RuntimeObject* L_25 = ___0_obj;
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, L_25);
		V_2 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_27 = V_2;
					RuntimeObject* L_28 = ((RuntimeObject*)IsInst((RuntimeObject*)L_27, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					V_4 = L_28;
					if (!L_28)
					{
						goto IL_00ec;
					}
				}
				{
					RuntimeObject* L_29 = V_4;
					NullCheck(L_29);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_29);
				}

IL_00ec:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00c7_1;
			}

IL_00b4_1:
			{
				RuntimeObject* L_30 = V_2;
				NullCheck(L_30);
				RuntimeObject* L_31;
				L_31 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_30);
				V_3 = L_31;
				RuntimeObject* L_32 = V_3;
				JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_33 = ___1_writer;
				JsonData_WriteJson_mD307B7581AE536A21EA9F30B270BC5393B335356(((JsonData_t3C51D89A19D30A47A74617107D861959322307F1*)CastclassClass((RuntimeObject*)L_32, JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var)), L_33, NULL);
			}

IL_00c7_1:
			{
				RuntimeObject* L_34 = V_2;
				NullCheck(L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_34);
				if (L_35)
				{
					goto IL_00b4_1;
				}
			}
			{
				goto IL_00ed;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ed:
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_36 = ___1_writer;
		NullCheck(L_36);
		JsonWriter_WriteArrayEnd_mE8262D6AC279897DA41D549CE12A8EA3054777B5(L_36, NULL);
		goto IL_0190;
	}

IL_00f8:
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_37 = ___1_writer;
		NullCheck(L_37);
		JsonWriter_WriteObjectStart_m90F3A0A19C03EA7CF90017768E3FA217E4038688(L_37, NULL);
		RuntimeObject* L_38 = ___0_obj;
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(9 /* System.Collections.IDictionaryEnumerator System.Collections.IDictionary::GetEnumerator() */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_38);
		V_5 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0169:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_40 = V_5;
					RuntimeObject* L_41 = ((RuntimeObject*)IsInst((RuntimeObject*)L_40, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					V_7 = L_41;
					if (!L_41)
					{
						goto IL_017f;
					}
				}
				{
					RuntimeObject* L_42 = V_7;
					NullCheck(L_42);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_42);
				}

IL_017f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0158_1;
			}

IL_010b_1:
			{
				RuntimeObject* L_43 = V_5;
				NullCheck(L_43);
				RuntimeObject* L_44;
				L_44 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_43);
				V_6 = ((*(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)((DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)UnBox(L_44, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var))));
				JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_45 = ___1_writer;
				RuntimeObject* L_46;
				L_46 = DictionaryEntry_get_Key_m09845C00732E530E6FCB9042079E90D3912215FE_inline((&V_6), NULL);
				NullCheck(L_45);
				JsonWriter_WritePropertyName_m5646EF1771ABCFCCAAD52086AAE3387579E158E0(L_45, ((String_t*)CastclassSealed((RuntimeObject*)L_46, String_t_il2cpp_TypeInfo_var)), NULL);
				RuntimeObject* L_47;
				L_47 = DictionaryEntry_get_Key_m09845C00732E530E6FCB9042079E90D3912215FE_inline((&V_6), NULL);
				String_t* L_48;
				L_48 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral9D9FB48D8A068EC2148400327674524D1B988AC3, ((String_t*)CastclassSealed((RuntimeObject*)L_47, String_t_il2cpp_TypeInfo_var)), NULL);
				JsonData_DLOG_m023911D00F4766EC148A869D2E3D5E74D5E92155(L_48, NULL);
				RuntimeObject* L_49;
				L_49 = DictionaryEntry_get_Value_m75FD18FE968AE131F28AA2CB0DF4895EBA39075E_inline((&V_6), NULL);
				JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_50 = ___1_writer;
				JsonData_WriteJson_mD307B7581AE536A21EA9F30B270BC5393B335356(((JsonData_t3C51D89A19D30A47A74617107D861959322307F1*)CastclassClass((RuntimeObject*)L_49, JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var)), L_50, NULL);
			}

IL_0158_1:
			{
				RuntimeObject* L_51 = V_5;
				NullCheck(L_51);
				bool L_52;
				L_52 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_51);
				if (L_52)
				{
					goto IL_010b_1;
				}
			}
			{
				goto IL_0180;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0180:
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_53 = ___1_writer;
		NullCheck(L_53);
		JsonWriter_WriteObjectEnd_m7B1F539A650AC9AA9413B9C3FF1DAA27834141AF(L_53, NULL);
		goto IL_0190;
	}

IL_018b:
	{
		goto IL_0190;
	}

IL_0190:
	{
		return;
	}
}
// System.Int32 LitJson.JsonData::Add(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonData_Add_mA88DA1756863A2C121F7D72986EDF2EF6E0B88E1 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JsonData_t3C51D89A19D30A47A74617107D861959322307F1* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_value;
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_1;
		L_1 = JsonData_ToJsonData_mD42F841238609F7087B993D39CC6EC3F39F8BACC(__this, L_0, NULL);
		V_0 = L_1;
		__this->___json_7 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___json_7), (void*)(String_t*)NULL);
		RuntimeObject* L_2;
		L_2 = JsonData_EnsureList_m6FCDB06F594222F9584291F20B3DA2FF4E5CE718(__this, NULL);
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_2, L_3);
		return L_4;
	}
}
// System.Void LitJson.JsonData::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_Clear_m8CBDDC3858610406EB362973D8DFCB2A7D6F98CC (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = JsonData_get_IsObject_mF608D1B4942FFA43A6E4D27DAD8243343AAEC0D3(__this, NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		InterfaceActionInvoker0::Invoke(6 /* System.Void System.Collections.IDictionary::Clear() */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, __this);
		return;
	}

IL_0012:
	{
		bool L_1;
		L_1 = JsonData_get_IsArray_m37BA31D547428C52C0F4A1923598DC36124033DC(__this, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		InterfaceActionInvoker0::Invoke(4 /* System.Void System.Collections.IList::Clear() */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, __this);
		return;
	}

IL_0024:
	{
		return;
	}
}
// System.Boolean LitJson.JsonData::Equals(LitJson.JsonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_Equals_m7369F0352ABADD880C05AC75E5B755FC38A60B45 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, JsonData_t3C51D89A19D30A47A74617107D861959322307F1* ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_0 = ___0_x;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (bool)0;
	}

IL_0008:
	{
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_1 = ___0_x;
		NullCheck(L_1);
		int32_t L_2 = L_1->___type_8;
		int32_t L_3 = __this->___type_8;
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_001b;
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		int32_t L_4 = __this->___type_8;
		V_0 = L_4;
		int32_t L_5 = V_0;
		switch (L_5)
		{
			case 0:
			{
				goto IL_004d;
			}
			case 1:
			{
				goto IL_004f;
			}
			case 2:
			{
				goto IL_0061;
			}
			case 3:
			{
				goto IL_0073;
			}
			case 4:
			{
				goto IL_0085;
			}
			case 5:
			{
				goto IL_0097;
			}
			case 6:
			{
				goto IL_00a9;
			}
			case 7:
			{
				goto IL_00bb;
			}
		}
	}
	{
		goto IL_00cd;
	}

IL_004d:
	{
		return (bool)1;
	}

IL_004f:
	{
		RuntimeObject* L_6 = __this->___inst_object_5;
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_7 = ___0_x;
		NullCheck(L_7);
		RuntimeObject* L_8 = L_7->___inst_object_5;
		NullCheck(L_6);
		bool L_9;
		L_9 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_6, L_8);
		return L_9;
	}

IL_0061:
	{
		RuntimeObject* L_10 = __this->___inst_array_0;
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_11 = ___0_x;
		NullCheck(L_11);
		RuntimeObject* L_12 = L_11->___inst_array_0;
		NullCheck(L_10);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_10, L_12);
		return L_13;
	}

IL_0073:
	{
		String_t* L_14 = __this->___inst_string_6;
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_15 = ___0_x;
		NullCheck(L_15);
		String_t* L_16 = L_15->___inst_string_6;
		NullCheck(L_14);
		bool L_17;
		L_17 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_14, L_16, NULL);
		return L_17;
	}

IL_0085:
	{
		int32_t* L_18 = (int32_t*)(&__this->___inst_int_3);
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_19 = ___0_x;
		NullCheck(L_19);
		int32_t L_20 = L_19->___inst_int_3;
		bool L_21;
		L_21 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722(L_18, L_20, NULL);
		return L_21;
	}

IL_0097:
	{
		int64_t* L_22 = (int64_t*)(&__this->___inst_long_4);
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_23 = ___0_x;
		NullCheck(L_23);
		int64_t L_24 = L_23->___inst_long_4;
		bool L_25;
		L_25 = Int64_Equals_mBAEB8FFBE12F6A5876473B4B40E1BD316658873E(L_22, L_24, NULL);
		return L_25;
	}

IL_00a9:
	{
		double* L_26 = (double*)(&__this->___inst_double_2);
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_27 = ___0_x;
		NullCheck(L_27);
		double L_28 = L_27->___inst_double_2;
		bool L_29;
		L_29 = Double_Equals_mAB526D98719C44EA42107A297B23A739F2E14138(L_26, L_28, NULL);
		return L_29;
	}

IL_00bb:
	{
		bool* L_30 = (bool*)(&__this->___inst_boolean_1);
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_31 = ___0_x;
		NullCheck(L_31);
		bool L_32 = L_31->___inst_boolean_1;
		il2cpp_codegen_runtime_class_init_inline(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = Boolean_Equals_mC020D5EB2F64274CD623E8449E8777A70BEC6CC9(L_30, L_32, NULL);
		return L_33;
	}

IL_00cd:
	{
		return (bool)0;
	}
}
// LitJson.JsonType LitJson.JsonData::GetJsonType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonData_GetJsonType_m7313142A8EEFA586606A2F25157426C377A6096C (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___type_8;
		return L_0;
	}
}
// System.Void LitJson.JsonData::SetJsonType(LitJson.JsonType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_SetJsonType_m1E8E1D8FA51CA48796DB13ECD7DA808A7576A7C3 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, int32_t ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m69403AE90D12CA520ABB728A1557B42580BBC7DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDF79546961566D2D6F7C4155F7ED851428AA9931_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m53AA73BE6E2FF2045F347EBCEE46E8E4EE524E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m71FFC1A9C81BB314F91B10BE885521A22E708BF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF2E1AB00AE46093D3DBEBFF23EE42498976376CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tFC3915CEAB0CCCC11D0AB7F2D3717177D1111111_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___type_8;
		int32_t L_1 = ___0_type;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		int32_t L_2 = ___0_type;
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (L_3)
		{
			case 0:
			{
				goto IL_003a;
			}
			case 1:
			{
				goto IL_003f;
			}
			case 2:
			{
				goto IL_005a;
			}
			case 3:
			{
				goto IL_006a;
			}
			case 4:
			{
				goto IL_0076;
			}
			case 5:
			{
				goto IL_0082;
			}
			case 6:
			{
				goto IL_008f;
			}
			case 7:
			{
				goto IL_00a3;
			}
		}
	}
	{
		goto IL_00af;
	}

IL_003a:
	{
		goto IL_00af;
	}

IL_003f:
	{
		Dictionary_2_tDF79546961566D2D6F7C4155F7ED851428AA9931* L_4 = (Dictionary_2_tDF79546961566D2D6F7C4155F7ED851428AA9931*)il2cpp_codegen_object_new(Dictionary_2_tDF79546961566D2D6F7C4155F7ED851428AA9931_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Dictionary_2__ctor_m69403AE90D12CA520ABB728A1557B42580BBC7DC(L_4, Dictionary_2__ctor_m69403AE90D12CA520ABB728A1557B42580BBC7DC_RuntimeMethod_var);
		__this->___inst_object_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inst_object_5), (void*)L_4);
		List_1_tFC3915CEAB0CCCC11D0AB7F2D3717177D1111111* L_5 = (List_1_tFC3915CEAB0CCCC11D0AB7F2D3717177D1111111*)il2cpp_codegen_object_new(List_1_tFC3915CEAB0CCCC11D0AB7F2D3717177D1111111_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m53AA73BE6E2FF2045F347EBCEE46E8E4EE524E5F(L_5, List_1__ctor_m53AA73BE6E2FF2045F347EBCEE46E8E4EE524E5F_RuntimeMethod_var);
		__this->___object_list_9 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___object_list_9), (void*)L_5);
		goto IL_00af;
	}

IL_005a:
	{
		List_1_tF2E1AB00AE46093D3DBEBFF23EE42498976376CA* L_6 = (List_1_tF2E1AB00AE46093D3DBEBFF23EE42498976376CA*)il2cpp_codegen_object_new(List_1_tF2E1AB00AE46093D3DBEBFF23EE42498976376CA_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		List_1__ctor_m71FFC1A9C81BB314F91B10BE885521A22E708BF8(L_6, List_1__ctor_m71FFC1A9C81BB314F91B10BE885521A22E708BF8_RuntimeMethod_var);
		__this->___inst_array_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inst_array_0), (void*)L_6);
		goto IL_00af;
	}

IL_006a:
	{
		__this->___inst_string_6 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inst_string_6), (void*)(String_t*)NULL);
		goto IL_00af;
	}

IL_0076:
	{
		__this->___inst_int_3 = 0;
		goto IL_00af;
	}

IL_0082:
	{
		__this->___inst_long_4 = ((int64_t)0);
		goto IL_00af;
	}

IL_008f:
	{
		__this->___inst_double_2 = (0.0);
		goto IL_00af;
	}

IL_00a3:
	{
		__this->___inst_boolean_1 = (bool)0;
		goto IL_00af;
	}

IL_00af:
	{
		int32_t L_7 = ___0_type;
		__this->___type_8 = L_7;
		return;
	}
}
// System.String LitJson.JsonData::ToJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonData_ToJson_m658608ADAC4FD37098A16F86171C6BEDAE6E4C30 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonType_t9CFC52444C5F4ADB07D070974C5E58842A9AB006_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringWriter_tF48052BE4F980E5C85403221E835768E4156267D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB44026C99001F09F5D70AE0AE9300ACDF0D6A660);
		s_Il2CppMethodInitialized = true;
	}
	StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* V_0 = NULL;
	JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* V_1 = NULL;
	{
		String_t* L_0 = __this->___json_7;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_1 = __this->___json_7;
		return L_1;
	}

IL_0012:
	{
		StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* L_2 = (StringWriter_tF48052BE4F980E5C85403221E835768E4156267D*)il2cpp_codegen_object_new(StringWriter_tF48052BE4F980E5C85403221E835768E4156267D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		StringWriter__ctor_m072DFF5FFA84EBA7C38B282975D053E738C56E6D(L_2, NULL);
		V_0 = L_2;
		StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* L_3 = V_0;
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_4 = (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F*)il2cpp_codegen_object_new(JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		JsonWriter__ctor_m59AEC417CBCF6AB49675BCCFD00F274C31D3585E(L_4, L_3, NULL);
		V_1 = L_4;
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_5 = V_1;
		NullCheck(L_5);
		JsonWriter_set_Validate_mA5EE11772D5EEEDBF8653894C89D686A6B184F7B_inline(L_5, (bool)0, NULL);
		int32_t L_6 = __this->___type_8;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(JsonType_t9CFC52444C5F4ADB07D070974C5E58842A9AB006_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(_stringLiteralB44026C99001F09F5D70AE0AE9300ACDF0D6A660, L_8, NULL);
		JsonData_DLOG_m023911D00F4766EC148A869D2E3D5E74D5E92155(L_9, NULL);
		int32_t L_10 = __this->___type_8;
		JsonData_PrintJsonTypeMemory_mB872435FEBB7CF9E03E46F9F0FF5FD4D541788EC(L_10, NULL);
		int32_t L_11 = __this->___type_8;
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_12 = V_1;
		JsonData_WriteJson2_m1A8279BE69453B3FCA2175A7A6C3CB2D8C97E3CC(L_11, __this, L_12, NULL);
		StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* L_13 = V_0;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_13);
		__this->___json_7 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___json_7), (void*)L_14);
		String_t* L_15 = __this->___json_7;
		return L_15;
	}
}
// System.Void LitJson.JsonData::ToJson(LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_ToJson_m179225C968B6EE68507BB3694882E41DA05DA4C4 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___0_writer, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_0 = ___0_writer;
		NullCheck(L_0);
		bool L_1;
		L_1 = JsonWriter_get_Validate_m28498F5A80E666297849E7C4F723F48A0B9A4DF6_inline(L_0, NULL);
		V_0 = L_1;
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_2 = ___0_writer;
		NullCheck(L_2);
		JsonWriter_set_Validate_mA5EE11772D5EEEDBF8653894C89D686A6B184F7B_inline(L_2, (bool)0, NULL);
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_3 = ___0_writer;
		JsonData_WriteJson_mD307B7581AE536A21EA9F30B270BC5393B335356(__this, L_3, NULL);
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_4 = ___0_writer;
		bool L_5 = V_0;
		NullCheck(L_4);
		JsonWriter_set_Validate_mA5EE11772D5EEEDBF8653894C89D686A6B184F7B_inline(L_4, L_5, NULL);
		return;
	}
}
// System.String LitJson.JsonData::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonData_ToString_m7F6F96196EDD1B0767AED023EC8640959B6D9382 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45C6FAA87CD0123CD17D47EA53DEAA5A748C6A04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBC2182A95A29E2752FA60C92F779B599B7B43ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE53B6FBD162C91AD5A0438452E33647A61BBA15D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___type_8;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 1)))
		{
			case 0:
			{
				goto IL_0066;
			}
			case 1:
			{
				goto IL_0030;
			}
			case 2:
			{
				goto IL_006c;
			}
			case 3:
			{
				goto IL_004e;
			}
			case 4:
			{
				goto IL_005a;
			}
			case 5:
			{
				goto IL_0042;
			}
			case 6:
			{
				goto IL_0036;
			}
		}
	}
	{
		goto IL_0073;
	}

IL_0030:
	{
		return _stringLiteral45C6FAA87CD0123CD17D47EA53DEAA5A748C6A04;
	}

IL_0036:
	{
		bool* L_2 = (bool*)(&__this->___inst_boolean_1);
		il2cpp_codegen_runtime_class_init_inline(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63(L_2, NULL);
		return L_3;
	}

IL_0042:
	{
		double* L_4 = (double*)(&__this->___inst_double_2);
		String_t* L_5;
		L_5 = Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339(L_4, NULL);
		return L_5;
	}

IL_004e:
	{
		int32_t* L_6 = (int32_t*)(&__this->___inst_int_3);
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_6, NULL);
		return L_7;
	}

IL_005a:
	{
		int64_t* L_8 = (int64_t*)(&__this->___inst_long_4);
		String_t* L_9;
		L_9 = Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B(L_8, NULL);
		return L_9;
	}

IL_0066:
	{
		return _stringLiteralE53B6FBD162C91AD5A0438452E33647A61BBA15D;
	}

IL_006c:
	{
		String_t* L_10 = __this->___inst_string_6;
		return L_10;
	}

IL_0073:
	{
		return _stringLiteralBBC2182A95A29E2752FA60C92F779B599B7B43ED;
	}
}
// LitJson.JsonData LitJson.JsonData::op_Implicit(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonData_t3C51D89A19D30A47A74617107D861959322307F1* JsonData_op_Implicit_mC871BF156436DB7DD31D0967362C7BAB23E86B05 (bool ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___0_data;
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_1 = (JsonData_t3C51D89A19D30A47A74617107D861959322307F1*)il2cpp_codegen_object_new(JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JsonData__ctor_mEB4115AF975189279CB57527850DDAD9230D3D2B(L_1, L_0, NULL);
		return L_1;
	}
}
// LitJson.JsonData LitJson.JsonData::op_Implicit(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonData_t3C51D89A19D30A47A74617107D861959322307F1* JsonData_op_Implicit_m377181AA771E477D2580E05604879C58F4941DB1 (double ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___0_data;
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_1 = (JsonData_t3C51D89A19D30A47A74617107D861959322307F1*)il2cpp_codegen_object_new(JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JsonData__ctor_m8A0A37263CACAC98E364B72BDF9929433707D6F7(L_1, L_0, NULL);
		return L_1;
	}
}
// LitJson.JsonData LitJson.JsonData::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonData_t3C51D89A19D30A47A74617107D861959322307F1* JsonData_op_Implicit_mAD4D2BC9F43B7F67F2625B50A37FFF2D63411C15 (int32_t ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_data;
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_1 = (JsonData_t3C51D89A19D30A47A74617107D861959322307F1*)il2cpp_codegen_object_new(JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JsonData__ctor_m53BBD8B0DF27C525C5CD4BFD9E5C2EC09A106F78(L_1, L_0, NULL);
		return L_1;
	}
}
// LitJson.JsonData LitJson.JsonData::op_Implicit(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonData_t3C51D89A19D30A47A74617107D861959322307F1* JsonData_op_Implicit_m0905FE3F4BBE5483C3175B5AAE0C2AD84ECEC29D (int64_t ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = ___0_data;
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_1 = (JsonData_t3C51D89A19D30A47A74617107D861959322307F1*)il2cpp_codegen_object_new(JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JsonData__ctor_mB54717B470C1218DF181039F1A12F9BACD000462(L_1, L_0, NULL);
		return L_1;
	}
}
// LitJson.JsonData LitJson.JsonData::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonData_t3C51D89A19D30A47A74617107D861959322307F1* JsonData_op_Implicit_mD978DF7CE7E49EA637E536F5A410FDFF68ACFABE (String_t* ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_data;
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_1 = (JsonData_t3C51D89A19D30A47A74617107D861959322307F1*)il2cpp_codegen_object_new(JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JsonData__ctor_m9FAA8A904760EDD166AA91A84184FB51FB68E3F3(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Boolean LitJson.JsonData::op_Explicit(LitJson.JsonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_op_Explicit_mA048CAEE607C55B0E82B2051CDC921A7E54A9AD4 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* ___0_data, const RuntimeMethod* method) 
{
	{
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___type_8;
		if ((((int32_t)L_1) == ((int32_t)7)))
		{
			goto IL_0017;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB3AF6981667F40A32E02D8E30F7F87E6D80E0C8B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData_op_Explicit_mA048CAEE607C55B0E82B2051CDC921A7E54A9AD4_RuntimeMethod_var)));
	}

IL_0017:
	{
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_3 = ___0_data;
		NullCheck(L_3);
		bool L_4 = L_3->___inst_boolean_1;
		return L_4;
	}
}
// System.Double LitJson.JsonData::op_Explicit(LitJson.JsonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double JsonData_op_Explicit_m91889F4D3822778AFF7632F5B30BD281EA937F09 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* ___0_data, const RuntimeMethod* method) 
{
	{
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___type_8;
		if ((((int32_t)L_1) == ((int32_t)6)))
		{
			goto IL_0017;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB3AF6981667F40A32E02D8E30F7F87E6D80E0C8B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData_op_Explicit_m91889F4D3822778AFF7632F5B30BD281EA937F09_RuntimeMethod_var)));
	}

IL_0017:
	{
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_3 = ___0_data;
		NullCheck(L_3);
		double L_4 = L_3->___inst_double_2;
		return L_4;
	}
}
// System.Int32 LitJson.JsonData::op_Explicit(LitJson.JsonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonData_op_Explicit_m94F189BE9636A52B7E699F988282EAEF9342751D (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* ___0_data, const RuntimeMethod* method) 
{
	{
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___type_8;
		if ((((int32_t)L_1) == ((int32_t)4)))
		{
			goto IL_0017;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAC752DDD9E7D71113EA72864BE92198866B1D658)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData_op_Explicit_m94F189BE9636A52B7E699F988282EAEF9342751D_RuntimeMethod_var)));
	}

IL_0017:
	{
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_3 = ___0_data;
		NullCheck(L_3);
		int32_t L_4 = L_3->___inst_int_3;
		return L_4;
	}
}
// System.Int64 LitJson.JsonData::op_Explicit(LitJson.JsonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t JsonData_op_Explicit_m0A788F49E28DE18F33D851EF8C95D496A2275B48 (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* ___0_data, const RuntimeMethod* method) 
{
	{
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___type_8;
		if ((((int32_t)L_1) == ((int32_t)5)))
		{
			goto IL_0017;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAC752DDD9E7D71113EA72864BE92198866B1D658)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData_op_Explicit_m0A788F49E28DE18F33D851EF8C95D496A2275B48_RuntimeMethod_var)));
	}

IL_0017:
	{
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_3 = ___0_data;
		NullCheck(L_3);
		int64_t L_4 = L_3->___inst_long_4;
		return L_4;
	}
}
// System.String LitJson.JsonData::op_Explicit(LitJson.JsonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonData_op_Explicit_m7AD19ED5C99B6C2BEAC71AD2C892C86ED3F8F55C (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* ___0_data, const RuntimeMethod* method) 
{
	{
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___type_8;
		if ((((int32_t)L_1) == ((int32_t)3)))
		{
			goto IL_0017;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral13026DD559AA5A6B131F15B7DB4105EA898DA4D9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData_op_Explicit_m7AD19ED5C99B6C2BEAC71AD2C892C86ED3F8F55C_RuntimeMethod_var)));
	}

IL_0017:
	{
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_3 = ___0_data;
		NullCheck(L_3);
		String_t* L_4 = L_3->___inst_string_6;
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LitJson.JsonData/BlackBox::.ctor(LitJson.IJsonWrapper,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlackBox__ctor_m437C729305AA061396BE3A38E0A726D46DA1AEEB (BlackBox_t5B6E59097EE44D502385DD31F784B3BD2E71E1AB* __this, RuntimeObject* ___0__obj, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___1__writer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0__obj;
		__this->___obj_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___obj_0), (void*)L_0);
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_1 = ___1__writer;
		__this->___writer_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___writer_1), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LitJson.OrderedDictionaryEnumerator::.ctor(System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionaryEnumerator__ctor_mE835230F6C9BF7EBC082A282BE74976A450B07A1 (OrderedDictionaryEnumerator_t557577F1E3C3DC7E5A3BFA6B12F2E0F7921D9C18* __this, RuntimeObject* ___0_enumerator, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_enumerator;
		__this->___list_enumerator_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___list_enumerator_0), (void*)L_0);
		return;
	}
}
// System.Object LitJson.OrderedDictionaryEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OrderedDictionaryEnumerator_get_Current_m26CAEFF45373A3A4EB6AA364345D4728F9616E6D (OrderedDictionaryEnumerator_t557577F1E3C3DC7E5A3BFA6B12F2E0F7921D9C18* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_0;
		L_0 = OrderedDictionaryEnumerator_get_Entry_mD2E0B7A30035474EB30FC5AB71B4C299E0C9124A(__this, NULL);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_1 = L_0;
		RuntimeObject* L_2 = Box(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.DictionaryEntry LitJson.OrderedDictionaryEnumerator::get_Entry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB OrderedDictionaryEnumerator_get_Entry_mD2E0B7A30035474EB30FC5AB71B4C299E0C9124A (OrderedDictionaryEnumerator_t557577F1E3C3DC7E5A3BFA6B12F2E0F7921D9C18* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tA8D764B99B6196299ECE08BCBA02AB2EE733CB1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mB20EAD0A1F549096009239692374BA2D53CC56C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m1AF62875E8518A1790EFF3FBB65608529D80A79E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = __this->___list_enumerator_0;
		NullCheck(L_0);
		KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 L_1;
		L_1 = InterfaceFuncInvoker0< KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Current() */, IEnumerator_1_tA8D764B99B6196299ECE08BCBA02AB2EE733CB1D_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		String_t* L_2;
		L_2 = KeyValuePair_2_get_Key_mB20EAD0A1F549096009239692374BA2D53CC56C8_inline((&V_0), KeyValuePair_2_get_Key_mB20EAD0A1F549096009239692374BA2D53CC56C8_RuntimeMethod_var);
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_3;
		L_3 = KeyValuePair_2_get_Value_m1AF62875E8518A1790EFF3FBB65608529D80A79E_inline((&V_0), KeyValuePair_2_get_Value_m1AF62875E8518A1790EFF3FBB65608529D80A79E_RuntimeMethod_var);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_4;
		memset((&L_4), 0, sizeof(L_4));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_4), L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Object LitJson.OrderedDictionaryEnumerator::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OrderedDictionaryEnumerator_get_Key_mD0051B27FCA09C476E348C40D1B8E8E48F3B8F9B (OrderedDictionaryEnumerator_t557577F1E3C3DC7E5A3BFA6B12F2E0F7921D9C18* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tA8D764B99B6196299ECE08BCBA02AB2EE733CB1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mB20EAD0A1F549096009239692374BA2D53CC56C8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = __this->___list_enumerator_0;
		NullCheck(L_0);
		KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 L_1;
		L_1 = InterfaceFuncInvoker0< KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Current() */, IEnumerator_1_tA8D764B99B6196299ECE08BCBA02AB2EE733CB1D_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		String_t* L_2;
		L_2 = KeyValuePair_2_get_Key_mB20EAD0A1F549096009239692374BA2D53CC56C8_inline((&V_0), KeyValuePair_2_get_Key_mB20EAD0A1F549096009239692374BA2D53CC56C8_RuntimeMethod_var);
		return L_2;
	}
}
// System.Object LitJson.OrderedDictionaryEnumerator::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OrderedDictionaryEnumerator_get_Value_m666D246C6E8795EACCD622E49139F5B0A1AD8D2D (OrderedDictionaryEnumerator_t557577F1E3C3DC7E5A3BFA6B12F2E0F7921D9C18* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tA8D764B99B6196299ECE08BCBA02AB2EE733CB1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m1AF62875E8518A1790EFF3FBB65608529D80A79E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = __this->___list_enumerator_0;
		NullCheck(L_0);
		KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 L_1;
		L_1 = InterfaceFuncInvoker0< KeyValuePair_2_tD14DA6ABC98E0FEBB8117715BDF4DD11B9397F28 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Current() */, IEnumerator_1_tA8D764B99B6196299ECE08BCBA02AB2EE733CB1D_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_2;
		L_2 = KeyValuePair_2_get_Value_m1AF62875E8518A1790EFF3FBB65608529D80A79E_inline((&V_0), KeyValuePair_2_get_Value_m1AF62875E8518A1790EFF3FBB65608529D80A79E_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean LitJson.OrderedDictionaryEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OrderedDictionaryEnumerator_MoveNext_m0862F64D1B571A878D85F0EA7B91F84C44A02B61 (OrderedDictionaryEnumerator_t557577F1E3C3DC7E5A3BFA6B12F2E0F7921D9C18* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___list_enumerator_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void LitJson.OrderedDictionaryEnumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionaryEnumerator_Reset_m28A5AD433A2A8AF31DEF35FA549C0FFB356A3533 (OrderedDictionaryEnumerator_t557577F1E3C3DC7E5A3BFA6B12F2E0F7921D9C18* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___list_enumerator_0;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Collections.IEnumerator::Reset() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LitJson.JsonException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_m6E6F4D1266048142B4B1E1A049E9DA1FEC803381 (JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76* __this, const RuntimeMethod* method) 
{
	{
		ApplicationException__ctor_m481B0251BEC0BF28EAAF3FCB11A47EFCB2E56E2A(__this, NULL);
		return;
	}
}
// System.Void LitJson.JsonException::.ctor(LitJson.ParserToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_mD4207AFB58089E76BB79C31BDF909450FEE2E55C (JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76* __this, int32_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParserToken_t028CC13C177D864835928A77CF1DD250271E3570_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D59E6177FAE880C9EF94663465FEEDCD97D999F);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_token;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(ParserToken_t028CC13C177D864835928A77CF1DD250271E3570_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral1D59E6177FAE880C9EF94663465FEEDCD97D999F, L_2, NULL);
		ApplicationException__ctor_mE51100DFCDB0A0DF23B482CC43EC8E396BE7BE82(__this, L_3, NULL);
		return;
	}
}
// System.Void LitJson.JsonException::.ctor(LitJson.ParserToken,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_mD12D72A1D7949F48B846F1207BFA40EB8CB61E23 (JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76* __this, int32_t ___0_token, Exception_t* ___1_inner_exception, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParserToken_t028CC13C177D864835928A77CF1DD250271E3570_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D59E6177FAE880C9EF94663465FEEDCD97D999F);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_token;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(ParserToken_t028CC13C177D864835928A77CF1DD250271E3570_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral1D59E6177FAE880C9EF94663465FEEDCD97D999F, L_2, NULL);
		Exception_t* L_4 = ___1_inner_exception;
		ApplicationException__ctor_m924E77609BAFA0595453363EB8B7BCCBA03B32DD(__this, L_3, L_4, NULL);
		return;
	}
}
// System.Void LitJson.JsonException::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_m267C4D3DA6783E685C755BEB2B354A15AB620363 (JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76* __this, int32_t ___0_c, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8515553A5B3BDCBB0920E96A5FD0FC34F11C2713);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_c;
		Il2CppChar L_1 = ((Il2CppChar)((int32_t)(uint16_t)L_0));
		RuntimeObject* L_2 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral8515553A5B3BDCBB0920E96A5FD0FC34F11C2713, L_2, NULL);
		ApplicationException__ctor_mE51100DFCDB0A0DF23B482CC43EC8E396BE7BE82(__this, L_3, NULL);
		return;
	}
}
// System.Void LitJson.JsonException::.ctor(System.Int32,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_mED383F0F7C13BE261BA2CDE530CA8535A0B7D0BD (JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76* __this, int32_t ___0_c, Exception_t* ___1_inner_exception, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8515553A5B3BDCBB0920E96A5FD0FC34F11C2713);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_c;
		Il2CppChar L_1 = ((Il2CppChar)((int32_t)(uint16_t)L_0));
		RuntimeObject* L_2 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral8515553A5B3BDCBB0920E96A5FD0FC34F11C2713, L_2, NULL);
		Exception_t* L_4 = ___1_inner_exception;
		ApplicationException__ctor_m924E77609BAFA0595453363EB8B7BCCBA03B32DD(__this, L_3, L_4, NULL);
		return;
	}
}
// System.Void LitJson.JsonException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_m400377A21C20F6CAEE97CE7958869D819BB94BB5 (JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_message;
		ApplicationException__ctor_mE51100DFCDB0A0DF23B482CC43EC8E396BE7BE82(__this, L_0, NULL);
		return;
	}
}
// System.Void LitJson.JsonException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_m14A2679E4D43BF656B5DFD019E9BEA7A80BFB6F4 (JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76* __this, String_t* ___0_message, Exception_t* ___1_inner_exception, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_message;
		Exception_t* L_1 = ___1_inner_exception;
		ApplicationException__ctor_m924E77609BAFA0595453363EB8B7BCCBA03B32DD(__this, L_0, L_1, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: LitJson.PropertyMetadata
IL2CPP_EXTERN_C void PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D_marshal_pinvoke(const PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D& unmarshaled, PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Info_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Info' of type 'PropertyMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Info_0Exception, NULL);
}
IL2CPP_EXTERN_C void PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D_marshal_pinvoke_back(const PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D_marshaled_pinvoke& marshaled, PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D& unmarshaled)
{
	Exception_t* ___Info_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Info' of type 'PropertyMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Info_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LitJson.PropertyMetadata
IL2CPP_EXTERN_C void PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D_marshal_pinvoke_cleanup(PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: LitJson.PropertyMetadata
IL2CPP_EXTERN_C void PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D_marshal_com(const PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D& unmarshaled, PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D_marshaled_com& marshaled)
{
	Exception_t* ___Info_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Info' of type 'PropertyMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Info_0Exception, NULL);
}
IL2CPP_EXTERN_C void PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D_marshal_com_back(const PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D_marshaled_com& marshaled, PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D& unmarshaled)
{
	Exception_t* ___Info_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Info' of type 'PropertyMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Info_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LitJson.PropertyMetadata
IL2CPP_EXTERN_C void PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D_marshal_com_cleanup(PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: LitJson.ArrayMetadata
IL2CPP_EXTERN_C void ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D_marshal_pinvoke(const ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D& unmarshaled, ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D_marshaled_pinvoke& marshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ArrayMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
IL2CPP_EXTERN_C void ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D_marshal_pinvoke_back(const ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D_marshaled_pinvoke& marshaled, ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D& unmarshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ArrayMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LitJson.ArrayMetadata
IL2CPP_EXTERN_C void ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D_marshal_pinvoke_cleanup(ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: LitJson.ArrayMetadata
IL2CPP_EXTERN_C void ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D_marshal_com(const ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D& unmarshaled, ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D_marshaled_com& marshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ArrayMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
IL2CPP_EXTERN_C void ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D_marshal_com_back(const ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D_marshaled_com& marshaled, ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D& unmarshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ArrayMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LitJson.ArrayMetadata
IL2CPP_EXTERN_C void ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D_marshal_com_cleanup(ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D_marshaled_com& marshaled)
{
}
// System.Type LitJson.ArrayMetadata::get_ElementType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* ArrayMetadata_get_ElementType_m95F881ADA6D1906BDDAD52E328AEFF30ECA46226 (ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_t3C51D89A19D30A47A74617107D861959322307F1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = __this->___element_type_0;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (JsonData_t3C51D89A19D30A47A74617107D861959322307F1_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		return L_2;
	}

IL_0016:
	{
		Type_t* L_3 = __this->___element_type_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  Type_t* ArrayMetadata_get_ElementType_m95F881ADA6D1906BDDAD52E328AEFF30ECA46226_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = ArrayMetadata_get_ElementType_m95F881ADA6D1906BDDAD52E328AEFF30ECA46226(_thisAdjusted, method);
	return _returnValue;
}
// System.Void LitJson.ArrayMetadata::set_ElementType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayMetadata_set_ElementType_m5832C95BFE5A1BAE4F2A604A74935918F18C6FB3 (ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___0_value;
		__this->___element_type_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___element_type_0), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void ArrayMetadata_set_ElementType_m5832C95BFE5A1BAE4F2A604A74935918F18C6FB3_AdjustorThunk (RuntimeObject* __this, Type_t* ___0_value, const RuntimeMethod* method)
{
	ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D*>(__this + _offset);
	ArrayMetadata_set_ElementType_m5832C95BFE5A1BAE4F2A604A74935918F18C6FB3_inline(_thisAdjusted, ___0_value, method);
}
// System.Boolean LitJson.ArrayMetadata::get_IsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArrayMetadata_get_IsArray_mF60D16C73C7A336444DAC740B3D6A84AD4AA40D2 (ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___is_array_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool ArrayMetadata_get_IsArray_mF60D16C73C7A336444DAC740B3D6A84AD4AA40D2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D*>(__this + _offset);
	bool _returnValue;
	_returnValue = ArrayMetadata_get_IsArray_mF60D16C73C7A336444DAC740B3D6A84AD4AA40D2_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void LitJson.ArrayMetadata::set_IsArray(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayMetadata_set_IsArray_m80C5694C47BE321F66F82FC47D554982E5F47AEE (ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___is_array_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void ArrayMetadata_set_IsArray_m80C5694C47BE321F66F82FC47D554982E5F47AEE_AdjustorThunk (RuntimeObject* __this, bool ___0_value, const RuntimeMethod* method)
{
	ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D*>(__this + _offset);
	ArrayMetadata_set_IsArray_m80C5694C47BE321F66F82FC47D554982E5F47AEE_inline(_thisAdjusted, ___0_value, method);
}
// System.Boolean LitJson.ArrayMetadata::get_IsList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArrayMetadata_get_IsList_m65D206DDD4278B4A0DF41E61799AE51EAA23BA7F (ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___is_list_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool ArrayMetadata_get_IsList_m65D206DDD4278B4A0DF41E61799AE51EAA23BA7F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D*>(__this + _offset);
	bool _returnValue;
	_returnValue = ArrayMetadata_get_IsList_m65D206DDD4278B4A0DF41E61799AE51EAA23BA7F_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void LitJson.ArrayMetadata::set_IsList(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayMetadata_set_IsList_mE4168A68921BFBA7306369E7BFDFD10CC59083C2 (ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___is_list_2 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void ArrayMetadata_set_IsList_mE4168A68921BFBA7306369E7BFDFD10CC59083C2_AdjustorThunk (RuntimeObject* __this, bool ___0_value, const RuntimeMethod* method)
{
	ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D*>(__this + _offset);
	ArrayMetadata_set_IsList_mE4168A68921BFBA7306369E7BFDFD10CC59083C2_inline(_thisAdjusted, ___0_value, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: LitJson.ObjectMetadata
IL2CPP_EXTERN_C void ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661_marshal_pinvoke(const ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661& unmarshaled, ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661_marshaled_pinvoke& marshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ObjectMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
IL2CPP_EXTERN_C void ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661_marshal_pinvoke_back(const ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661_marshaled_pinvoke& marshaled, ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661& unmarshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ObjectMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LitJson.ObjectMetadata
IL2CPP_EXTERN_C void ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661_marshal_pinvoke_cleanup(ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: LitJson.ObjectMetadata
IL2CPP_EXTERN_C void ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661_marshal_com(const ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661& unmarshaled, ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661_marshaled_com& marshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ObjectMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
IL2CPP_EXTERN_C void ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661_marshal_com_back(const ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661_marshaled_com& marshaled, ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661& unmarshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ObjectMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LitJson.ObjectMetadata
IL2CPP_EXTERN_C void ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661_marshal_com_cleanup(ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661_marshaled_com& marshaled)
{
}
// System.Type LitJson.ObjectMetadata::get_ElementType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* ObjectMetadata_get_ElementType_mEC34F3956588C3B5C7EB07A112A7797BF8935BEE (ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_t3C51D89A19D30A47A74617107D861959322307F1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = __this->___element_type_0;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (JsonData_t3C51D89A19D30A47A74617107D861959322307F1_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		return L_2;
	}

IL_0016:
	{
		Type_t* L_3 = __this->___element_type_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  Type_t* ObjectMetadata_get_ElementType_mEC34F3956588C3B5C7EB07A112A7797BF8935BEE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = ObjectMetadata_get_ElementType_mEC34F3956588C3B5C7EB07A112A7797BF8935BEE(_thisAdjusted, method);
	return _returnValue;
}
// System.Void LitJson.ObjectMetadata::set_ElementType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectMetadata_set_ElementType_m5AF14DA94DE8B13F68D6913AA0487B6C412A9355 (ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___0_value;
		__this->___element_type_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___element_type_0), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void ObjectMetadata_set_ElementType_m5AF14DA94DE8B13F68D6913AA0487B6C412A9355_AdjustorThunk (RuntimeObject* __this, Type_t* ___0_value, const RuntimeMethod* method)
{
	ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661*>(__this + _offset);
	ObjectMetadata_set_ElementType_m5AF14DA94DE8B13F68D6913AA0487B6C412A9355_inline(_thisAdjusted, ___0_value, method);
}
// System.Boolean LitJson.ObjectMetadata::get_IsDictionary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ObjectMetadata_get_IsDictionary_mC66AF9CA841EC0386F35FAD3DA899EB5C0DB082E (ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___is_dictionary_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool ObjectMetadata_get_IsDictionary_mC66AF9CA841EC0386F35FAD3DA899EB5C0DB082E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661*>(__this + _offset);
	bool _returnValue;
	_returnValue = ObjectMetadata_get_IsDictionary_mC66AF9CA841EC0386F35FAD3DA899EB5C0DB082E_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void LitJson.ObjectMetadata::set_IsDictionary(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectMetadata_set_IsDictionary_mA0408F3F69CBF5C14DEC1CD12FBD4B9830F91151 (ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___is_dictionary_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void ObjectMetadata_set_IsDictionary_mA0408F3F69CBF5C14DEC1CD12FBD4B9830F91151_AdjustorThunk (RuntimeObject* __this, bool ___0_value, const RuntimeMethod* method)
{
	ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661*>(__this + _offset);
	ObjectMetadata_set_IsDictionary_mA0408F3F69CBF5C14DEC1CD12FBD4B9830F91151_inline(_thisAdjusted, ___0_value, method);
}
// System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata> LitJson.ObjectMetadata::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ObjectMetadata_get_Properties_m8E9F8EDA9F12FD110E25D5785F084C1A8B393805 (ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___properties_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ObjectMetadata_get_Properties_m8E9F8EDA9F12FD110E25D5785F084C1A8B393805_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = ObjectMetadata_get_Properties_m8E9F8EDA9F12FD110E25D5785F084C1A8B393805_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void LitJson.ObjectMetadata::set_Properties(System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectMetadata_set_Properties_m6DD2CBC23136F0B020069E54BDF7A1BCCCF31FE6 (ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___properties_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___properties_2), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void ObjectMetadata_set_Properties_m6DD2CBC23136F0B020069E54BDF7A1BCCCF31FE6_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661*>(__this + _offset);
	ObjectMetadata_set_Properties_m6DD2CBC23136F0B020069E54BDF7A1BCCCF31FE6_inline(_thisAdjusted, ___0_value, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ExporterFunc_Invoke_mE96AA8DA43B26B809D4D5D09A1A22966C81D2BDD_Multicast(ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* __this, RuntimeObject* ___0_obj, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___1_writer, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* currentDelegate = reinterpret_cast<ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_obj, ___1_writer, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ExporterFunc_Invoke_mE96AA8DA43B26B809D4D5D09A1A22966C81D2BDD_OpenInst(ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* __this, RuntimeObject* ___0_obj, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___1_writer, const RuntimeMethod* method)
{
	NullCheck(___0_obj);
	typedef void (*FunctionPointerType) (RuntimeObject*, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_obj, ___1_writer, method);
}
void ExporterFunc_Invoke_mE96AA8DA43B26B809D4D5D09A1A22966C81D2BDD_OpenStatic(ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* __this, RuntimeObject* ___0_obj, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___1_writer, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_obj, ___1_writer, method);
}
void ExporterFunc_Invoke_mE96AA8DA43B26B809D4D5D09A1A22966C81D2BDD_OpenStaticInvoker(ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* __this, RuntimeObject* ___0_obj, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___1_writer, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_obj, ___1_writer);
}
void ExporterFunc_Invoke_mE96AA8DA43B26B809D4D5D09A1A22966C81D2BDD_ClosedStaticInvoker(ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* __this, RuntimeObject* ___0_obj, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___1_writer, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, RuntimeObject*, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_obj, ___1_writer);
}
void ExporterFunc_Invoke_mE96AA8DA43B26B809D4D5D09A1A22966C81D2BDD_OpenVirtual(ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* __this, RuntimeObject* ___0_obj, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___1_writer, const RuntimeMethod* method)
{
	NullCheck(___0_obj);
	VirtualActionInvoker1< JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_obj, ___1_writer);
}
void ExporterFunc_Invoke_mE96AA8DA43B26B809D4D5D09A1A22966C81D2BDD_OpenInterface(ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* __this, RuntimeObject* ___0_obj, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___1_writer, const RuntimeMethod* method)
{
	NullCheck(___0_obj);
	InterfaceActionInvoker1< JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_obj, ___1_writer);
}
void ExporterFunc_Invoke_mE96AA8DA43B26B809D4D5D09A1A22966C81D2BDD_OpenGenericVirtual(ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* __this, RuntimeObject* ___0_obj, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___1_writer, const RuntimeMethod* method)
{
	NullCheck(___0_obj);
	GenericVirtualActionInvoker1< JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* >::Invoke(method, ___0_obj, ___1_writer);
}
void ExporterFunc_Invoke_mE96AA8DA43B26B809D4D5D09A1A22966C81D2BDD_OpenGenericInterface(ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* __this, RuntimeObject* ___0_obj, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___1_writer, const RuntimeMethod* method)
{
	NullCheck(___0_obj);
	GenericInterfaceActionInvoker1< JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* >::Invoke(method, ___0_obj, ___1_writer);
}
// System.Void LitJson.ExporterFunc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExporterFunc__ctor_mE42C7A27446C000BC923E32171289DA0E9CDC5D2 (ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ExporterFunc_Invoke_mE96AA8DA43B26B809D4D5D09A1A22966C81D2BDD_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ExporterFunc_Invoke_mE96AA8DA43B26B809D4D5D09A1A22966C81D2BDD_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ExporterFunc_Invoke_mE96AA8DA43B26B809D4D5D09A1A22966C81D2BDD_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&ExporterFunc_Invoke_mE96AA8DA43B26B809D4D5D09A1A22966C81D2BDD_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ExporterFunc_Invoke_mE96AA8DA43B26B809D4D5D09A1A22966C81D2BDD_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&ExporterFunc_Invoke_mE96AA8DA43B26B809D4D5D09A1A22966C81D2BDD_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ExporterFunc_Invoke_mE96AA8DA43B26B809D4D5D09A1A22966C81D2BDD_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ExporterFunc_Invoke_mE96AA8DA43B26B809D4D5D09A1A22966C81D2BDD_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ExporterFunc_Invoke_mE96AA8DA43B26B809D4D5D09A1A22966C81D2BDD_Multicast;
}
// System.Void LitJson.ExporterFunc::Invoke(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExporterFunc_Invoke_mE96AA8DA43B26B809D4D5D09A1A22966C81D2BDD (ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* __this, RuntimeObject* ___0_obj, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___1_writer, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, ___1_writer, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult LitJson.ExporterFunc::BeginInvoke(System.Object,LitJson.JsonWriter,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExporterFunc_BeginInvoke_mBA6940F67F0CDB782296CFA12D84BB9B57938AA8 (ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* __this, RuntimeObject* ___0_obj, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___1_writer, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___0_obj;
	__d_args[1] = ___1_writer;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void LitJson.ExporterFunc::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExporterFunc_EndInvoke_m5C0A1A181C17D6913DD424D7C4185B25CF052A25 (ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
RuntimeObject* ImporterFunc_Invoke_m143089455BBD8920FDB4F1B683E685B50FB8077A_Multicast(ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* __this, RuntimeObject* ___0_input, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	RuntimeObject* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* currentDelegate = reinterpret_cast<ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5*>(delegatesToInvoke[i]);
		typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_input, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
RuntimeObject* ImporterFunc_Invoke_m143089455BBD8920FDB4F1B683E685B50FB8077A_OpenInst(ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* __this, RuntimeObject* ___0_input, const RuntimeMethod* method)
{
	NullCheck(___0_input);
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_input, method);
}
RuntimeObject* ImporterFunc_Invoke_m143089455BBD8920FDB4F1B683E685B50FB8077A_OpenStatic(ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* __this, RuntimeObject* ___0_input, const RuntimeMethod* method)
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_input, method);
}
RuntimeObject* ImporterFunc_Invoke_m143089455BBD8920FDB4F1B683E685B50FB8077A_OpenStaticInvoker(ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* __this, RuntimeObject* ___0_input, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_input);
}
RuntimeObject* ImporterFunc_Invoke_m143089455BBD8920FDB4F1B683E685B50FB8077A_ClosedStaticInvoker(ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* __this, RuntimeObject* ___0_input, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_input);
}
RuntimeObject* ImporterFunc_Invoke_m143089455BBD8920FDB4F1B683E685B50FB8077A_OpenVirtual(ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* __this, RuntimeObject* ___0_input, const RuntimeMethod* method)
{
	NullCheck(___0_input);
	return VirtualFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_input);
}
RuntimeObject* ImporterFunc_Invoke_m143089455BBD8920FDB4F1B683E685B50FB8077A_OpenInterface(ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* __this, RuntimeObject* ___0_input, const RuntimeMethod* method)
{
	NullCheck(___0_input);
	return InterfaceFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_input);
}
RuntimeObject* ImporterFunc_Invoke_m143089455BBD8920FDB4F1B683E685B50FB8077A_OpenGenericVirtual(ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* __this, RuntimeObject* ___0_input, const RuntimeMethod* method)
{
	NullCheck(___0_input);
	return GenericVirtualFuncInvoker0< RuntimeObject* >::Invoke(method, ___0_input);
}
RuntimeObject* ImporterFunc_Invoke_m143089455BBD8920FDB4F1B683E685B50FB8077A_OpenGenericInterface(ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* __this, RuntimeObject* ___0_input, const RuntimeMethod* method)
{
	NullCheck(___0_input);
	return GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(method, ___0_input);
}
// System.Void LitJson.ImporterFunc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImporterFunc__ctor_m630470C9B15EC4550BDC9B0A860B2F9C3B66C029 (ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ImporterFunc_Invoke_m143089455BBD8920FDB4F1B683E685B50FB8077A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ImporterFunc_Invoke_m143089455BBD8920FDB4F1B683E685B50FB8077A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ImporterFunc_Invoke_m143089455BBD8920FDB4F1B683E685B50FB8077A_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&ImporterFunc_Invoke_m143089455BBD8920FDB4F1B683E685B50FB8077A_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ImporterFunc_Invoke_m143089455BBD8920FDB4F1B683E685B50FB8077A_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&ImporterFunc_Invoke_m143089455BBD8920FDB4F1B683E685B50FB8077A_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ImporterFunc_Invoke_m143089455BBD8920FDB4F1B683E685B50FB8077A_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ImporterFunc_Invoke_m143089455BBD8920FDB4F1B683E685B50FB8077A_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ImporterFunc_Invoke_m143089455BBD8920FDB4F1B683E685B50FB8077A_Multicast;
}
// System.Object LitJson.ImporterFunc::Invoke(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ImporterFunc_Invoke_m143089455BBD8920FDB4F1B683E685B50FB8077A (ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* __this, RuntimeObject* ___0_input, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_input, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult LitJson.ImporterFunc::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ImporterFunc_BeginInvoke_mD7CF3CA8BCE43B4C7C2CB4539FCC07CFB3B459C2 (ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* __this, RuntimeObject* ___0_input, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_input;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Object LitJson.ImporterFunc::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ImporterFunc_EndInvoke_mBA9C97FCC0F1A51B4F9ADBA9C3C71B2992B8C853 (ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return (RuntimeObject*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
RuntimeObject* WrapperFactory_Invoke_mDEC930B07F8B4652EBECE1E6386E92701A93C7D5_Multicast(WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	RuntimeObject* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* currentDelegate = reinterpret_cast<WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD*>(delegatesToInvoke[i]);
		typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
RuntimeObject* WrapperFactory_Invoke_mDEC930B07F8B4652EBECE1E6386E92701A93C7D5_OpenInst(WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* __this, const RuntimeMethod* method)
{
	typedef RuntimeObject* (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
RuntimeObject* WrapperFactory_Invoke_mDEC930B07F8B4652EBECE1E6386E92701A93C7D5_OpenStatic(WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* __this, const RuntimeMethod* method)
{
	typedef RuntimeObject* (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
RuntimeObject* WrapperFactory_Invoke_mDEC930B07F8B4652EBECE1E6386E92701A93C7D5_OpenStaticInvoker(WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker0< RuntimeObject* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL);
}
RuntimeObject* WrapperFactory_Invoke_mDEC930B07F8B4652EBECE1E6386E92701A93C7D5_ClosedStaticInvoker(WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
// System.Void LitJson.WrapperFactory::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapperFactory__ctor_mDCB80755422A0F810CF4702BBE931A9B4AE5C809 (WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WrapperFactory_Invoke_mDEC930B07F8B4652EBECE1E6386E92701A93C7D5_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WrapperFactory_Invoke_mDEC930B07F8B4652EBECE1E6386E92701A93C7D5_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WrapperFactory_Invoke_mDEC930B07F8B4652EBECE1E6386E92701A93C7D5_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&WrapperFactory_Invoke_mDEC930B07F8B4652EBECE1E6386E92701A93C7D5_Multicast;
}
// LitJson.IJsonWrapper LitJson.WrapperFactory::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WrapperFactory_Invoke_mDEC930B07F8B4652EBECE1E6386E92701A93C7D5 (WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* __this, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult LitJson.WrapperFactory::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WrapperFactory_BeginInvoke_mEFD9FE53CFC5454AAEB8B36D92C3328E55C03066 (WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// LitJson.IJsonWrapper LitJson.WrapperFactory::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WrapperFactory_EndInvoke_m425C49E08B2DAB9EE155560276880757C783AE55 (WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return (RuntimeObject*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LitJson.JsonMapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper__ctor_m4EFA59D3C6A7E23D70386738A91ACDCF437E6E8A (JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper__cctor_mB5697D724FF6E6DB1BBAB0F6128A410F9D2E124A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m186154EAD1DF359706A7CF36C6BD7F5ACC47CFB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m224AC90EC65DF7D2F4D85F0DDEC5FECC74920277_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3D7546A6DF9CDDA353873ECE10E542AD6406A825_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m95FEBED8F3E1B9BB1282B2C7E18C736BDC259D49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mB364E5DE0CF679AC362662B5C96B6A6FB6B12AB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mFDB6B4CAA4E2AE6E8C2EA0D6D7DE7172BF609E65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t13D69527163788C316AD7673426765F0A3E018A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t51F843E5AA0162639CFD12BF0859C4C0FF822998_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tAA76A881C8942A9F8F63F6BEE2A572DCF133AB93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tB42EF32D51D7595BF925017BF4A743C5B97C9053_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tD786692960EC82E79B160F75E780BA867D6C1BBD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tD8EF042176D7CCA0618F7F42494A6AAD68478914_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___array_metadata_lock_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___array_metadata_lock_7), (void*)L_0);
		RuntimeObject* L_1 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_1, NULL);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___conv_ops_lock_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___conv_ops_lock_9), (void*)L_1);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___object_metadata_lock_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___object_metadata_lock_11), (void*)L_2);
		RuntimeObject* L_3 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_3, NULL);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___type_properties_lock_13 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___type_properties_lock_13), (void*)L_3);
		RuntimeObject* L_4 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_4, NULL);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___static_writer_lock_15 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___static_writer_lock_15), (void*)L_4);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_5, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___static_err_stack_16 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___static_err_stack_16), (void*)L_5);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___max_nesting_depth_0 = ((int32_t)100);
		Dictionary_2_tB42EF32D51D7595BF925017BF4A743C5B97C9053* L_6 = (Dictionary_2_tB42EF32D51D7595BF925017BF4A743C5B97C9053*)il2cpp_codegen_object_new(Dictionary_2_tB42EF32D51D7595BF925017BF4A743C5B97C9053_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Dictionary_2__ctor_m186154EAD1DF359706A7CF36C6BD7F5ACC47CFB7(L_6, Dictionary_2__ctor_m186154EAD1DF359706A7CF36C6BD7F5ACC47CFB7_RuntimeMethod_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___array_metadata_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___array_metadata_6), (void*)L_6);
		Dictionary_2_tD786692960EC82E79B160F75E780BA867D6C1BBD* L_7 = (Dictionary_2_tD786692960EC82E79B160F75E780BA867D6C1BBD*)il2cpp_codegen_object_new(Dictionary_2_tD786692960EC82E79B160F75E780BA867D6C1BBD_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Dictionary_2__ctor_mFDB6B4CAA4E2AE6E8C2EA0D6D7DE7172BF609E65(L_7, Dictionary_2__ctor_mFDB6B4CAA4E2AE6E8C2EA0D6D7DE7172BF609E65_RuntimeMethod_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___conv_ops_8 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___conv_ops_8), (void*)L_7);
		Dictionary_2_tD8EF042176D7CCA0618F7F42494A6AAD68478914* L_8 = (Dictionary_2_tD8EF042176D7CCA0618F7F42494A6AAD68478914*)il2cpp_codegen_object_new(Dictionary_2_tD8EF042176D7CCA0618F7F42494A6AAD68478914_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Dictionary_2__ctor_m3D7546A6DF9CDDA353873ECE10E542AD6406A825(L_8, Dictionary_2__ctor_m3D7546A6DF9CDDA353873ECE10E542AD6406A825_RuntimeMethod_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___object_metadata_10 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___object_metadata_10), (void*)L_8);
		Dictionary_2_tAA76A881C8942A9F8F63F6BEE2A572DCF133AB93* L_9 = (Dictionary_2_tAA76A881C8942A9F8F63F6BEE2A572DCF133AB93*)il2cpp_codegen_object_new(Dictionary_2_tAA76A881C8942A9F8F63F6BEE2A572DCF133AB93_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Dictionary_2__ctor_mB364E5DE0CF679AC362662B5C96B6A6FB6B12AB8(L_9, Dictionary_2__ctor_mB364E5DE0CF679AC362662B5C96B6A6FB6B12AB8_RuntimeMethod_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___type_properties_12 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___type_properties_12), (void*)L_9);
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_10 = (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F*)il2cpp_codegen_object_new(JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		JsonWriter__ctor_mFF4C2DE4CAD061714750C2D87291FCF9D0AE4EF0(L_10, NULL);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___static_writer_14 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___static_writer_14), (void*)L_10);
		il2cpp_codegen_runtime_class_init_inline(DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A_il2cpp_TypeInfo_var);
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_11;
		L_11 = DateTimeFormatInfo_get_InvariantInfo_m24804C20A94D2952323C82193D4A59ADF171C8AA(NULL);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___datetime_format_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___datetime_format_1), (void*)L_11);
		Dictionary_2_t13D69527163788C316AD7673426765F0A3E018A0* L_12 = (Dictionary_2_t13D69527163788C316AD7673426765F0A3E018A0*)il2cpp_codegen_object_new(Dictionary_2_t13D69527163788C316AD7673426765F0A3E018A0_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Dictionary_2__ctor_m224AC90EC65DF7D2F4D85F0DDEC5FECC74920277(L_12, Dictionary_2__ctor_m224AC90EC65DF7D2F4D85F0DDEC5FECC74920277_RuntimeMethod_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___base_exporters_table_2 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___base_exporters_table_2), (void*)L_12);
		Dictionary_2_t13D69527163788C316AD7673426765F0A3E018A0* L_13 = (Dictionary_2_t13D69527163788C316AD7673426765F0A3E018A0*)il2cpp_codegen_object_new(Dictionary_2_t13D69527163788C316AD7673426765F0A3E018A0_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Dictionary_2__ctor_m224AC90EC65DF7D2F4D85F0DDEC5FECC74920277(L_13, Dictionary_2__ctor_m224AC90EC65DF7D2F4D85F0DDEC5FECC74920277_RuntimeMethod_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___custom_exporters_table_3 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___custom_exporters_table_3), (void*)L_13);
		Dictionary_2_t51F843E5AA0162639CFD12BF0859C4C0FF822998* L_14 = (Dictionary_2_t51F843E5AA0162639CFD12BF0859C4C0FF822998*)il2cpp_codegen_object_new(Dictionary_2_t51F843E5AA0162639CFD12BF0859C4C0FF822998_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Dictionary_2__ctor_m95FEBED8F3E1B9BB1282B2C7E18C736BDC259D49(L_14, Dictionary_2__ctor_m95FEBED8F3E1B9BB1282B2C7E18C736BDC259D49_RuntimeMethod_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___base_importers_table_4 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___base_importers_table_4), (void*)L_14);
		Dictionary_2_t51F843E5AA0162639CFD12BF0859C4C0FF822998* L_15 = (Dictionary_2_t51F843E5AA0162639CFD12BF0859C4C0FF822998*)il2cpp_codegen_object_new(Dictionary_2_t51F843E5AA0162639CFD12BF0859C4C0FF822998_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Dictionary_2__ctor_m95FEBED8F3E1B9BB1282B2C7E18C736BDC259D49(L_15, Dictionary_2__ctor_m95FEBED8F3E1B9BB1282B2C7E18C736BDC259D49_RuntimeMethod_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___custom_importers_table_5 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___custom_importers_table_5), (void*)L_15);
		JsonMapper_RegisterBaseExporters_m1866D55E6CA556A86EB3F4E4C484706A596A34D9(NULL);
		JsonMapper_RegisterBaseImporters_m108AF061EDD0D019D96B7276A59E909010EF6F79(NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::AddArrayMetadata(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_AddArrayMetadata_mE3410659CA2904A58B6870D8AD254B2AC926871B (Type_t* ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t8918FFC362E99797BB0E47D0D787D923EC3C8AAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6F02FE6CD732AB22BD11BE4254D9546F3BEEE58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5DF53EB5CC9A30D6CA4EECD8F9C4882ABF00BB6);
		s_Il2CppMethodInitialized = true;
	}
	ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* V_1 = NULL;
	int32_t V_2 = 0;
	PropertyInfo_t* V_3 = NULL;
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___array_metadata_6;
		Type_t* L_1 = ___0_type;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, Type_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,LitJson.ArrayMetadata>::ContainsKey(TKey) */, IDictionary_2_t8918FFC362E99797BB0E47D0D787D923EC3C8AAA_il2cpp_TypeInfo_var, L_0, L_1);
		if (!L_2)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D));
		Type_t* L_3 = ___0_type;
		NullCheck(L_3);
		bool L_4;
		L_4 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_3, NULL);
		ArrayMetadata_set_IsArray_m80C5694C47BE321F66F82FC47D554982E5F47AEE_inline((&V_0), L_4, NULL);
		Type_t* L_5 = ___0_type;
		NullCheck(L_5);
		Type_t* L_6;
		L_6 = Type_GetInterface_m536A2DE796291194A1EAE035EE3742D3A220854E(L_5, _stringLiteralD5DF53EB5CC9A30D6CA4EECD8F9C4882ABF00BB6, NULL);
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		ArrayMetadata_set_IsList_mE4168A68921BFBA7306369E7BFDFD10CC59083C2_inline((&V_0), (bool)1, NULL);
	}

IL_003e:
	{
		Type_t* L_7 = ___0_type;
		NullCheck(L_7);
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_8;
		L_8 = Type_GetProperties_m090A935168ED8AEE2CE95BDF6D69F3AAAF71B2D6(L_7, NULL);
		V_1 = L_8;
		V_2 = 0;
		goto IL_00aa;
	}

IL_004c:
	{
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_9 = V_1;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		PropertyInfo_t* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		PropertyInfo_t* L_13 = V_3;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_13);
		bool L_15;
		L_15 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_14, _stringLiteralB6F02FE6CD732AB22BD11BE4254D9546F3BEEE58, NULL);
		if (!L_15)
		{
			goto IL_006a;
		}
	}
	{
		goto IL_00a6;
	}

IL_006a:
	{
		PropertyInfo_t* L_16 = V_3;
		NullCheck(L_16);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_17;
		L_17 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(17 /* System.Reflection.ParameterInfo[] System.Reflection.PropertyInfo::GetIndexParameters() */, L_16);
		V_4 = L_17;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_18 = V_4;
		NullCheck(L_18);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))) == ((int32_t)1)))
		{
			goto IL_0081;
		}
	}
	{
		goto IL_00a6;
	}

IL_0081:
	{
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_19 = V_4;
		NullCheck(L_19);
		int32_t L_20 = 0;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_21);
		Type_t* L_22;
		L_22 = VirtualFuncInvoker0< Type_t* >::Invoke(11 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_21);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		if ((!(((RuntimeObject*)(Type_t*)L_22) == ((RuntimeObject*)(Type_t*)L_24))))
		{
			goto IL_00a6;
		}
	}
	{
		PropertyInfo_t* L_25 = V_3;
		NullCheck(L_25);
		Type_t* L_26;
		L_26 = VirtualFuncInvoker0< Type_t* >::Invoke(16 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_25);
		ArrayMetadata_set_ElementType_m5832C95BFE5A1BAE4F2A604A74935918F18C6FB3_inline((&V_0), L_26, NULL);
	}

IL_00a6:
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_00aa:
	{
		int32_t L_28 = V_2;
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_29 = V_1;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_004c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_30 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___array_metadata_lock_7;
		V_5 = L_30;
		RuntimeObject* L_31 = V_5;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93(L_31, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00e2:
			{// begin finally (depth: 1)
				RuntimeObject* L_32 = V_5;
				Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_32, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
				RuntimeObject* L_33 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___array_metadata_6;
				Type_t* L_34 = ___0_type;
				ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D L_35 = V_0;
				NullCheck(L_33);
				InterfaceActionInvoker2< Type_t*, ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ArrayMetadata>::Add(TKey,TValue) */, IDictionary_2_t8918FFC362E99797BB0E47D0D787D923EC3C8AAA_il2cpp_TypeInfo_var, L_33, L_34, L_35);
				goto IL_00dd_1;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_00d2_1;
				}
				throw e;
			}

CATCH_00d2_1:
			{// begin catch(System.ArgumentException)
				{
					ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_36 = ((ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)IL2CPP_GET_ACTIVE_EXCEPTION(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*));;
					IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
					goto IL_00ea;
				}
				{
					;// IL_00d8: leave IL_00dd

				}
			}// end catch (depth: 2)

IL_00dd_1:
			{
				goto IL_00ea;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ea:
	{
		return;
	}
}
// System.Void LitJson.JsonMapper::AddObjectMetadata(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_AddObjectMetadata_m9A5768B60C9F0965DA9CD72412DE5371AA9A756C (Type_t* ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mE6A439BEA4E21EF9C6E01E19390EE90B680DD348_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tD88E8C222DEDEFACEF548AAB380B9ED228B42954_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tBDC061B9374E6628F4296689FB32A9C598E45C4B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tC6EEF4DE19255D76EDF497CDE277E5578CB81EB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B4852B6F2412388B50C99BF806BFE926E4FFEA5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6F02FE6CD732AB22BD11BE4254D9546F3BEEE58);
		s_Il2CppMethodInitialized = true;
	}
	ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661 V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* V_1 = NULL;
	int32_t V_2 = 0;
	PropertyInfo_t* V_3 = NULL;
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* V_4 = NULL;
	PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D V_5;
	memset((&V_5), 0, sizeof(V_5));
	FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* V_6 = NULL;
	int32_t V_7 = 0;
	FieldInfo_t* V_8 = NULL;
	PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D V_9;
	memset((&V_9), 0, sizeof(V_9));
	RuntimeObject* V_10 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___object_metadata_10;
		Type_t* L_1 = ___0_type;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, Type_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,LitJson.ObjectMetadata>::ContainsKey(TKey) */, IDictionary_2_tBDC061B9374E6628F4296689FB32A9C598E45C4B_il2cpp_TypeInfo_var, L_0, L_1);
		if (!L_2)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661));
		Type_t* L_3 = ___0_type;
		NullCheck(L_3);
		Type_t* L_4;
		L_4 = Type_GetInterface_m536A2DE796291194A1EAE035EE3742D3A220854E(L_3, _stringLiteral0B4852B6F2412388B50C99BF806BFE926E4FFEA5, NULL);
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		ObjectMetadata_set_IsDictionary_mA0408F3F69CBF5C14DEC1CD12FBD4B9830F91151_inline((&V_0), (bool)1, NULL);
	}

IL_0031:
	{
		Dictionary_2_tD88E8C222DEDEFACEF548AAB380B9ED228B42954* L_5 = (Dictionary_2_tD88E8C222DEDEFACEF548AAB380B9ED228B42954*)il2cpp_codegen_object_new(Dictionary_2_tD88E8C222DEDEFACEF548AAB380B9ED228B42954_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Dictionary_2__ctor_mE6A439BEA4E21EF9C6E01E19390EE90B680DD348(L_5, Dictionary_2__ctor_mE6A439BEA4E21EF9C6E01E19390EE90B680DD348_RuntimeMethod_var);
		ObjectMetadata_set_Properties_m6DD2CBC23136F0B020069E54BDF7A1BCCCF31FE6_inline((&V_0), L_5, NULL);
		Type_t* L_6 = ___0_type;
		NullCheck(L_6);
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_7;
		L_7 = Type_GetProperties_m090A935168ED8AEE2CE95BDF6D69F3AAAF71B2D6(L_6, NULL);
		V_1 = L_7;
		V_2 = 0;
		goto IL_00da;
	}

IL_004b:
	{
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		PropertyInfo_t* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = L_11;
		PropertyInfo_t* L_12 = V_3;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_12);
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralB6F02FE6CD732AB22BD11BE4254D9546F3BEEE58, NULL);
		if (!L_14)
		{
			goto IL_00a5;
		}
	}
	{
		PropertyInfo_t* L_15 = V_3;
		NullCheck(L_15);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_16;
		L_16 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(17 /* System.Reflection.ParameterInfo[] System.Reflection.PropertyInfo::GetIndexParameters() */, L_15);
		V_4 = L_16;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_17 = V_4;
		NullCheck(L_17);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))) == ((int32_t)1)))
		{
			goto IL_007b;
		}
	}
	{
		goto IL_00d6;
	}

IL_007b:
	{
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_18 = V_4;
		NullCheck(L_18);
		int32_t L_19 = 0;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		Type_t* L_21;
		L_21 = VirtualFuncInvoker0< Type_t* >::Invoke(11 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_20);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		if ((!(((RuntimeObject*)(Type_t*)L_21) == ((RuntimeObject*)(Type_t*)L_23))))
		{
			goto IL_00a0;
		}
	}
	{
		PropertyInfo_t* L_24 = V_3;
		NullCheck(L_24);
		Type_t* L_25;
		L_25 = VirtualFuncInvoker0< Type_t* >::Invoke(16 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_24);
		ObjectMetadata_set_ElementType_m5AF14DA94DE8B13F68D6913AA0487B6C412A9355_inline((&V_0), L_25, NULL);
	}

IL_00a0:
	{
		goto IL_00d6;
	}

IL_00a5:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D));
		PropertyInfo_t* L_26 = V_3;
		(&V_5)->___Info_0 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_5)->___Info_0), (void*)L_26);
		PropertyInfo_t* L_27 = V_3;
		NullCheck(L_27);
		Type_t* L_28;
		L_28 = VirtualFuncInvoker0< Type_t* >::Invoke(16 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_27);
		(&V_5)->___Type_2 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_5)->___Type_2), (void*)L_28);
		RuntimeObject* L_29;
		L_29 = ObjectMetadata_get_Properties_m8E9F8EDA9F12FD110E25D5785F084C1A8B393805_inline((&V_0), NULL);
		PropertyInfo_t* L_30 = V_3;
		NullCheck(L_30);
		String_t* L_31;
		L_31 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_30);
		PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D L_32 = V_5;
		NullCheck(L_29);
		InterfaceActionInvoker2< String_t*, PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata>::Add(TKey,TValue) */, IDictionary_2_tC6EEF4DE19255D76EDF497CDE277E5578CB81EB2_il2cpp_TypeInfo_var, L_29, L_31, L_32);
	}

IL_00d6:
	{
		int32_t L_33 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00da:
	{
		int32_t L_34 = V_2;
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_35 = V_1;
		NullCheck(L_35);
		if ((((int32_t)L_34) < ((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length)))))
		{
			goto IL_004b;
		}
	}
	{
		Type_t* L_36 = ___0_type;
		NullCheck(L_36);
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_37;
		L_37 = Type_GetFields_mC0570FF1986A6D93FA7976303B44B2FF8D0BC77F(L_36, NULL);
		V_6 = L_37;
		V_7 = 0;
		goto IL_013c;
	}

IL_00f3:
	{
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_38 = V_6;
		int32_t L_39 = V_7;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		FieldInfo_t* L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		V_8 = L_41;
		il2cpp_codegen_initobj((&V_9), sizeof(PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D));
		FieldInfo_t* L_42 = V_8;
		(&V_9)->___Info_0 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_9)->___Info_0), (void*)L_42);
		(&V_9)->___IsField_1 = (bool)1;
		FieldInfo_t* L_43 = V_8;
		NullCheck(L_43);
		Type_t* L_44;
		L_44 = VirtualFuncInvoker0< Type_t* >::Invoke(17 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_43);
		(&V_9)->___Type_2 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_9)->___Type_2), (void*)L_44);
		RuntimeObject* L_45;
		L_45 = ObjectMetadata_get_Properties_m8E9F8EDA9F12FD110E25D5785F084C1A8B393805_inline((&V_0), NULL);
		FieldInfo_t* L_46 = V_8;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_46);
		PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D L_48 = V_9;
		NullCheck(L_45);
		InterfaceActionInvoker2< String_t*, PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata>::Add(TKey,TValue) */, IDictionary_2_tC6EEF4DE19255D76EDF497CDE277E5578CB81EB2_il2cpp_TypeInfo_var, L_45, L_47, L_48);
		int32_t L_49 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_013c:
	{
		int32_t L_50 = V_7;
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_51 = V_6;
		NullCheck(L_51);
		if ((((int32_t)L_50) < ((int32_t)((int32_t)(((RuntimeArray*)L_51)->max_length)))))
		{
			goto IL_00f3;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_52 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___object_metadata_lock_11;
		V_10 = L_52;
		RuntimeObject* L_53 = V_10;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93(L_53, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0176:
			{// begin finally (depth: 1)
				RuntimeObject* L_54 = V_10;
				Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_54, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
				RuntimeObject* L_55 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___object_metadata_10;
				Type_t* L_56 = ___0_type;
				ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661 L_57 = V_0;
				NullCheck(L_55);
				InterfaceActionInvoker2< Type_t*, ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661 >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ObjectMetadata>::Add(TKey,TValue) */, IDictionary_2_tBDC061B9374E6628F4296689FB32A9C598E45C4B_il2cpp_TypeInfo_var, L_55, L_56, L_57);
				goto IL_0171_1;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0166_1;
				}
				throw e;
			}

CATCH_0166_1:
			{// begin catch(System.ArgumentException)
				{
					ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_58 = ((ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)IL2CPP_GET_ACTIVE_EXCEPTION(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*));;
					IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
					goto IL_017e;
				}
				{
					;// IL_016c: leave IL_0171

				}
			}// end catch (depth: 2)

IL_0171_1:
			{
				goto IL_017e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_017e:
	{
		return;
	}
}
// System.Void LitJson.JsonMapper::AddTypeProperties(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_AddTypeProperties_m24B07F9D8AE8CE6C178AF8E6FD44BDF6A4A84389 (Type_t* ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tE29700207988CC46641C84FE3D958DAF55F9ECDE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t02C6BF8BB03B58DD552B193E9CABACD0AF9CCFA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mAAC32D144B3A74FCD65A76B4CA7CB1D2024A1E3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3F16D5D88FAFD68886DA28A9E82E74E30BE371F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6F02FE6CD732AB22BD11BE4254D9546F3BEEE58);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* V_1 = NULL;
	int32_t V_2 = 0;
	PropertyInfo_t* V_3 = NULL;
	PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D V_4;
	memset((&V_4), 0, sizeof(V_4));
	FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* V_5 = NULL;
	int32_t V_6 = 0;
	FieldInfo_t* V_7 = NULL;
	PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D V_8;
	memset((&V_8), 0, sizeof(V_8));
	RuntimeObject* V_9 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___type_properties_12;
		Type_t* L_1 = ___0_type;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, Type_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::ContainsKey(TKey) */, IDictionary_2_t02C6BF8BB03B58DD552B193E9CABACD0AF9CCFA4_il2cpp_TypeInfo_var, L_0, L_1);
		if (!L_2)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		List_1_t3F16D5D88FAFD68886DA28A9E82E74E30BE371F8* L_3 = (List_1_t3F16D5D88FAFD68886DA28A9E82E74E30BE371F8*)il2cpp_codegen_object_new(List_1_t3F16D5D88FAFD68886DA28A9E82E74E30BE371F8_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_mAAC32D144B3A74FCD65A76B4CA7CB1D2024A1E3A(L_3, List_1__ctor_mAAC32D144B3A74FCD65A76B4CA7CB1D2024A1E3A_RuntimeMethod_var);
		V_0 = L_3;
		Type_t* L_4 = ___0_type;
		NullCheck(L_4);
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_5;
		L_5 = Type_GetProperties_m090A935168ED8AEE2CE95BDF6D69F3AAAF71B2D6(L_4, NULL);
		V_1 = L_5;
		V_2 = 0;
		goto IL_0067;
	}

IL_0025:
	{
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_6 = V_1;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		PropertyInfo_t* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		PropertyInfo_t* L_10 = V_3;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_10);
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralB6F02FE6CD732AB22BD11BE4254D9546F3BEEE58, NULL);
		if (!L_12)
		{
			goto IL_0043;
		}
	}
	{
		goto IL_0063;
	}

IL_0043:
	{
		il2cpp_codegen_initobj((&V_4), sizeof(PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D));
		PropertyInfo_t* L_13 = V_3;
		(&V_4)->___Info_0 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_4)->___Info_0), (void*)L_13);
		(&V_4)->___IsField_1 = (bool)0;
		RuntimeObject* L_14 = V_0;
		PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D L_15 = V_4;
		NullCheck(L_14);
		InterfaceActionInvoker1< PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<LitJson.PropertyMetadata>::Add(T) */, ICollection_1_tE29700207988CC46641C84FE3D958DAF55F9ECDE_il2cpp_TypeInfo_var, L_14, L_15);
	}

IL_0063:
	{
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0067:
	{
		int32_t L_17 = V_2;
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_18 = V_1;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_0025;
		}
	}
	{
		Type_t* L_19 = ___0_type;
		NullCheck(L_19);
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_20;
		L_20 = Type_GetFields_mC0570FF1986A6D93FA7976303B44B2FF8D0BC77F(L_19, NULL);
		V_5 = L_20;
		V_6 = 0;
		goto IL_00ae;
	}

IL_0080:
	{
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_21 = V_5;
		int32_t L_22 = V_6;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		FieldInfo_t* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_7 = L_24;
		il2cpp_codegen_initobj((&V_8), sizeof(PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D));
		FieldInfo_t* L_25 = V_7;
		(&V_8)->___Info_0 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_8)->___Info_0), (void*)L_25);
		(&V_8)->___IsField_1 = (bool)1;
		RuntimeObject* L_26 = V_0;
		PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D L_27 = V_8;
		NullCheck(L_26);
		InterfaceActionInvoker1< PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<LitJson.PropertyMetadata>::Add(T) */, ICollection_1_tE29700207988CC46641C84FE3D958DAF55F9ECDE_il2cpp_TypeInfo_var, L_26, L_27);
		int32_t L_28 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00ae:
	{
		int32_t L_29 = V_6;
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_30 = V_5;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_0080;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_31 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___type_properties_lock_13;
		V_9 = L_31;
		RuntimeObject* L_32 = V_9;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93(L_32, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00e8:
			{// begin finally (depth: 1)
				RuntimeObject* L_33 = V_9;
				Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_33, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
				RuntimeObject* L_34 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___type_properties_12;
				Type_t* L_35 = ___0_type;
				RuntimeObject* L_36 = V_0;
				NullCheck(L_34);
				InterfaceActionInvoker2< Type_t*, RuntimeObject* >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::Add(TKey,TValue) */, IDictionary_2_t02C6BF8BB03B58DD552B193E9CABACD0AF9CCFA4_il2cpp_TypeInfo_var, L_34, L_35, L_36);
				goto IL_00e3_1;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_00d8_1;
				}
				throw e;
			}

CATCH_00d8_1:
			{// begin catch(System.ArgumentException)
				{
					ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_37 = ((ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)IL2CPP_GET_ACTIVE_EXCEPTION(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*));;
					IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
					goto IL_00f0;
				}
				{
					;// IL_00de: leave IL_00e3

				}
			}// end catch (depth: 2)

IL_00e3_1:
			{
				goto IL_00f0;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f0:
	{
		return;
	}
}
// System.Reflection.MethodInfo LitJson.JsonMapper::GetConvOp(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* JsonMapper_GetConvOp_mA86D07E06B99E4CA3C35F70E294950C288086F8F (Type_t* ___0_t1, Type_t* ___1_t2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m57E4DE0721BD2D645AF3036D988B131AAB138227_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tB7188876A70AC81C939F78F9171156E43ED476CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t3CC56282CC2E992AD8F56406430E76F0711457AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tE7FFBD71D86A280E4B101DF2F8E59C9FFFAA4C29_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral437906DA6527EA9BAA9A971EC5171183BEB85B59);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	MethodInfo_t* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	MethodInfo_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___conv_ops_lock_9;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93(L_1, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{// begin finally (depth: 1)
				RuntimeObject* L_2 = V_0;
				Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
				RuntimeObject* L_3 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___conv_ops_8;
				Type_t* L_4 = ___0_t1;
				NullCheck(L_3);
				bool L_5;
				L_5 = InterfaceFuncInvoker1< bool, Type_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>::ContainsKey(TKey) */, IDictionary_2_tE7FFBD71D86A280E4B101DF2F8E59C9FFFAA4C29_il2cpp_TypeInfo_var, L_3, L_4);
				if (L_5)
				{
					goto IL_002c_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
				RuntimeObject* L_6 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___conv_ops_8;
				Type_t* L_7 = ___0_t1;
				Dictionary_2_tB7188876A70AC81C939F78F9171156E43ED476CB* L_8 = (Dictionary_2_tB7188876A70AC81C939F78F9171156E43ED476CB*)il2cpp_codegen_object_new(Dictionary_2_tB7188876A70AC81C939F78F9171156E43ED476CB_il2cpp_TypeInfo_var);
				NullCheck(L_8);
				Dictionary_2__ctor_m57E4DE0721BD2D645AF3036D988B131AAB138227(L_8, Dictionary_2__ctor_m57E4DE0721BD2D645AF3036D988B131AAB138227_RuntimeMethod_var);
				NullCheck(L_6);
				InterfaceActionInvoker2< Type_t*, RuntimeObject* >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>::Add(TKey,TValue) */, IDictionary_2_tE7FFBD71D86A280E4B101DF2F8E59C9FFFAA4C29_il2cpp_TypeInfo_var, L_6, L_7, L_8);
			}

IL_002c_1:
			{
				goto IL_0038;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0038:
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_9 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___conv_ops_8;
		Type_t* L_10 = ___0_t1;
		NullCheck(L_9);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker1< RuntimeObject*, Type_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>::get_Item(TKey) */, IDictionary_2_tE7FFBD71D86A280E4B101DF2F8E59C9FFFAA4C29_il2cpp_TypeInfo_var, L_9, L_10);
		Type_t* L_12 = ___1_t2;
		NullCheck(L_11);
		bool L_13;
		L_13 = InterfaceFuncInvoker1< bool, Type_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>::ContainsKey(TKey) */, IDictionary_2_t3CC56282CC2E992AD8F56406430E76F0711457AC_il2cpp_TypeInfo_var, L_11, L_12);
		if (!L_13)
		{
			goto IL_0060;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_14 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___conv_ops_8;
		Type_t* L_15 = ___0_t1;
		NullCheck(L_14);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker1< RuntimeObject*, Type_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>::get_Item(TKey) */, IDictionary_2_tE7FFBD71D86A280E4B101DF2F8E59C9FFFAA4C29_il2cpp_TypeInfo_var, L_14, L_15);
		Type_t* L_17 = ___1_t2;
		NullCheck(L_16);
		MethodInfo_t* L_18;
		L_18 = InterfaceFuncInvoker1< MethodInfo_t*, Type_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>::get_Item(TKey) */, IDictionary_2_t3CC56282CC2E992AD8F56406430E76F0711457AC_il2cpp_TypeInfo_var, L_16, L_17);
		return L_18;
	}

IL_0060:
	{
		Type_t* L_19 = ___0_t1;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_20 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_21 = L_20;
		Type_t* L_22 = ___1_t2;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_22);
		NullCheck(L_19);
		MethodInfo_t* L_23;
		L_23 = Type_GetMethod_m9E8E55EC8316CE8A2851B62AD4C73E841FEAC2EA(L_19, _stringLiteral437906DA6527EA9BAA9A971EC5171183BEB85B59, L_21, NULL);
		V_1 = L_23;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_24 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___conv_ops_lock_9;
		V_2 = L_24;
		RuntimeObject* L_25 = V_2;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93(L_25, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00bb:
			{// begin finally (depth: 1)
				RuntimeObject* L_26 = V_2;
				Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_26, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
				RuntimeObject* L_27 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___conv_ops_8;
				Type_t* L_28 = ___0_t1;
				NullCheck(L_27);
				RuntimeObject* L_29;
				L_29 = InterfaceFuncInvoker1< RuntimeObject*, Type_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>::get_Item(TKey) */, IDictionary_2_tE7FFBD71D86A280E4B101DF2F8E59C9FFFAA4C29_il2cpp_TypeInfo_var, L_27, L_28);
				Type_t* L_30 = ___1_t2;
				MethodInfo_t* L_31 = V_1;
				NullCheck(L_29);
				InterfaceActionInvoker2< Type_t*, MethodInfo_t* >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>::Add(TKey,TValue) */, IDictionary_2_t3CC56282CC2E992AD8F56406430E76F0711457AC_il2cpp_TypeInfo_var, L_29, L_30, L_31);
				goto IL_00b6_1;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0099_1;
				}
				throw e;
			}

CATCH_0099_1:
			{// begin catch(System.ArgumentException)
				{
					ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_32 = ((ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)IL2CPP_GET_ACTIVE_EXCEPTION(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*));;
					il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var)));
					RuntimeObject* L_33 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))))->___conv_ops_8;
					Type_t* L_34 = ___0_t1;
					NullCheck(L_33);
					RuntimeObject* L_35;
					L_35 = InterfaceFuncInvoker1< RuntimeObject*, Type_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>::get_Item(TKey) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IDictionary_2_tE7FFBD71D86A280E4B101DF2F8E59C9FFFAA4C29_il2cpp_TypeInfo_var)), L_33, L_34);
					Type_t* L_36 = ___1_t2;
					NullCheck(L_35);
					MethodInfo_t* L_37;
					L_37 = InterfaceFuncInvoker1< MethodInfo_t*, Type_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>::get_Item(TKey) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IDictionary_2_t3CC56282CC2E992AD8F56406430E76F0711457AC_il2cpp_TypeInfo_var)), L_35, L_36);
					V_3 = L_37;
					IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
					goto IL_00c4;
				}
				{
					;// IL_00b1: leave IL_00b6

				}
			}// end catch (depth: 2)

IL_00b6_1:
			{
				goto IL_00c2;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00c2:
	{
		MethodInfo_t* L_38 = V_1;
		return L_38;
	}

IL_00c4:
	{
		MethodInfo_t* L_39 = V_3;
		return L_39;
	}
}
// System.Object LitJson.JsonMapper::ReadValue(System.Type,LitJson.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_ReadValue_m12EFFE983BBE0A9254AA072EFEFB7A6156F094E6 (Type_t* ___0_inst_type, JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* ___1_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FieldInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t0BD8FD9B6F60BD6B18C6D1CD2BE215E7F97D3D63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t14E89C96BA24B565BED22155CB0969211ADEB1AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t8918FFC362E99797BB0E47D0D787D923EC3C8AAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tBDC061B9374E6628F4296689FB32A9C598E45C4B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tC6EEF4DE19255D76EDF497CDE277E5578CB81EB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral709B8FFB36A9C2A4ADB7BD81DE14F1AAE07AD798);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB6E8D33884A8AB4625102A8EEE80D34FD589540);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2B624A34AE5F3AF1DE39F5AA12C5DBF59299E28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7E5EFDC670ACA0D3155DEFB95477AD16E9744EB);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* V_1 = NULL;
	ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* V_2 = NULL;
	MethodInfo_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	Type_t* V_7 = NULL;
	RuntimeObject* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661 V_11;
	memset((&V_11), 0, sizeof(V_11));
	String_t* V_12 = NULL;
	PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D V_13;
	memset((&V_13), 0, sizeof(V_13));
	PropertyInfo_t* V_14 = NULL;
	{
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_0 = ___1_reader;
		NullCheck(L_0);
		bool L_1;
		L_1 = JsonReader_Read_mD8D28369934A79C6A0125279F425E48D1D35AE7B(L_0, NULL);
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_2 = ___1_reader;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = JsonReader_get_Token_m519B39A4B87C3A9A7B424AECAE7FDA64B946E975_inline(L_2, NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)5))))
		{
			goto IL_0015;
		}
	}
	{
		return NULL;
	}

IL_0015:
	{
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_4 = ___1_reader;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = JsonReader_get_Token_m519B39A4B87C3A9A7B424AECAE7FDA64B946E975_inline(L_4, NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0044;
		}
	}
	{
		Type_t* L_6 = ___0_inst_type;
		NullCheck(L_6);
		bool L_7;
		L_7 = Type_get_IsClass_mACC1E0E79C9996ADE9973F81971B740132B64549(L_6, NULL);
		if (L_7)
		{
			goto IL_0042;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_8 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___static_err_stack_16;
		Type_t* L_9 = ___0_inst_type;
		String_t* L_10;
		L_10 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralC2B624A34AE5F3AF1DE39F5AA12C5DBF59299E28, L_9, NULL);
		NullCheck(L_8);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_8, L_10, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
	}

IL_0042:
	{
		return NULL;
	}

IL_0044:
	{
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_11 = ___1_reader;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = JsonReader_get_Token_m519B39A4B87C3A9A7B424AECAE7FDA64B946E975_inline(L_11, NULL);
		if ((((int32_t)L_12) == ((int32_t)8)))
		{
			goto IL_0082;
		}
	}
	{
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_13 = ___1_reader;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = JsonReader_get_Token_m519B39A4B87C3A9A7B424AECAE7FDA64B946E975_inline(L_13, NULL);
		if ((((int32_t)L_14) == ((int32_t)6)))
		{
			goto IL_0082;
		}
	}
	{
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_15 = ___1_reader;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = JsonReader_get_Token_m519B39A4B87C3A9A7B424AECAE7FDA64B946E975_inline(L_15, NULL);
		if ((((int32_t)L_16) == ((int32_t)7)))
		{
			goto IL_0082;
		}
	}
	{
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_17 = ___1_reader;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = JsonReader_get_Token_m519B39A4B87C3A9A7B424AECAE7FDA64B946E975_inline(L_17, NULL);
		if ((((int32_t)L_18) == ((int32_t)((int32_t)9))))
		{
			goto IL_0082;
		}
	}
	{
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_19 = ___1_reader;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = JsonReader_get_Token_m519B39A4B87C3A9A7B424AECAE7FDA64B946E975_inline(L_19, NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0184;
		}
	}

IL_0082:
	{
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_21 = ___1_reader;
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = JsonReader_get_Value_mF219BCB43B2F020C1B67935AA63A40ECD1EE4C05_inline(L_21, NULL);
		NullCheck(L_22);
		Type_t* L_23;
		L_23 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_22, NULL);
		V_0 = L_23;
		Type_t* L_24 = ___0_inst_type;
		Type_t* L_25 = V_0;
		NullCheck(L_24);
		bool L_26;
		L_26 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_24, L_25);
		if (!L_26)
		{
			goto IL_00a1;
		}
	}
	{
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_27 = ___1_reader;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = JsonReader_get_Value_mF219BCB43B2F020C1B67935AA63A40ECD1EE4C05_inline(L_27, NULL);
		return L_28;
	}

IL_00a1:
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_29 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___custom_importers_table_5;
		Type_t* L_30 = V_0;
		NullCheck(L_29);
		bool L_31;
		L_31 = InterfaceFuncInvoker1< bool, Type_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::ContainsKey(TKey) */, IDictionary_2_t0BD8FD9B6F60BD6B18C6D1CD2BE215E7F97D3D63_il2cpp_TypeInfo_var, L_29, L_30);
		if (!L_31)
		{
			goto IL_00e6;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_32 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___custom_importers_table_5;
		Type_t* L_33 = V_0;
		NullCheck(L_32);
		RuntimeObject* L_34;
		L_34 = InterfaceFuncInvoker1< RuntimeObject*, Type_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::get_Item(TKey) */, IDictionary_2_t0BD8FD9B6F60BD6B18C6D1CD2BE215E7F97D3D63_il2cpp_TypeInfo_var, L_32, L_33);
		Type_t* L_35 = ___0_inst_type;
		NullCheck(L_34);
		bool L_36;
		L_36 = InterfaceFuncInvoker1< bool, Type_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>::ContainsKey(TKey) */, IDictionary_2_t14E89C96BA24B565BED22155CB0969211ADEB1AB_il2cpp_TypeInfo_var, L_34, L_35);
		if (!L_36)
		{
			goto IL_00e6;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_37 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___custom_importers_table_5;
		Type_t* L_38 = V_0;
		NullCheck(L_37);
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker1< RuntimeObject*, Type_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::get_Item(TKey) */, IDictionary_2_t0BD8FD9B6F60BD6B18C6D1CD2BE215E7F97D3D63_il2cpp_TypeInfo_var, L_37, L_38);
		Type_t* L_40 = ___0_inst_type;
		NullCheck(L_39);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_41;
		L_41 = InterfaceFuncInvoker1< ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5*, Type_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>::get_Item(TKey) */, IDictionary_2_t14E89C96BA24B565BED22155CB0969211ADEB1AB_il2cpp_TypeInfo_var, L_39, L_40);
		V_1 = L_41;
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_42 = V_1;
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_43 = ___1_reader;
		NullCheck(L_43);
		RuntimeObject* L_44;
		L_44 = JsonReader_get_Value_mF219BCB43B2F020C1B67935AA63A40ECD1EE4C05_inline(L_43, NULL);
		NullCheck(L_42);
		RuntimeObject* L_45;
		L_45 = ImporterFunc_Invoke_m143089455BBD8920FDB4F1B683E685B50FB8077A_inline(L_42, L_44, NULL);
		return L_45;
	}

IL_00e6:
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_46 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___base_importers_table_4;
		Type_t* L_47 = V_0;
		NullCheck(L_46);
		bool L_48;
		L_48 = InterfaceFuncInvoker1< bool, Type_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::ContainsKey(TKey) */, IDictionary_2_t0BD8FD9B6F60BD6B18C6D1CD2BE215E7F97D3D63_il2cpp_TypeInfo_var, L_46, L_47);
		if (!L_48)
		{
			goto IL_012b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_49 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___base_importers_table_4;
		Type_t* L_50 = V_0;
		NullCheck(L_49);
		RuntimeObject* L_51;
		L_51 = InterfaceFuncInvoker1< RuntimeObject*, Type_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::get_Item(TKey) */, IDictionary_2_t0BD8FD9B6F60BD6B18C6D1CD2BE215E7F97D3D63_il2cpp_TypeInfo_var, L_49, L_50);
		Type_t* L_52 = ___0_inst_type;
		NullCheck(L_51);
		bool L_53;
		L_53 = InterfaceFuncInvoker1< bool, Type_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>::ContainsKey(TKey) */, IDictionary_2_t14E89C96BA24B565BED22155CB0969211ADEB1AB_il2cpp_TypeInfo_var, L_51, L_52);
		if (!L_53)
		{
			goto IL_012b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_54 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___base_importers_table_4;
		Type_t* L_55 = V_0;
		NullCheck(L_54);
		RuntimeObject* L_56;
		L_56 = InterfaceFuncInvoker1< RuntimeObject*, Type_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::get_Item(TKey) */, IDictionary_2_t0BD8FD9B6F60BD6B18C6D1CD2BE215E7F97D3D63_il2cpp_TypeInfo_var, L_54, L_55);
		Type_t* L_57 = ___0_inst_type;
		NullCheck(L_56);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_58;
		L_58 = InterfaceFuncInvoker1< ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5*, Type_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>::get_Item(TKey) */, IDictionary_2_t14E89C96BA24B565BED22155CB0969211ADEB1AB_il2cpp_TypeInfo_var, L_56, L_57);
		V_2 = L_58;
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_59 = V_2;
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_60 = ___1_reader;
		NullCheck(L_60);
		RuntimeObject* L_61;
		L_61 = JsonReader_get_Value_mF219BCB43B2F020C1B67935AA63A40ECD1EE4C05_inline(L_60, NULL);
		NullCheck(L_59);
		RuntimeObject* L_62;
		L_62 = ImporterFunc_Invoke_m143089455BBD8920FDB4F1B683E685B50FB8077A_inline(L_59, L_61, NULL);
		return L_62;
	}

IL_012b:
	{
		Type_t* L_63 = ___0_inst_type;
		NullCheck(L_63);
		bool L_64;
		L_64 = VirtualFuncInvoker0< bool >::Invoke(68 /* System.Boolean System.Type::get_IsEnum() */, L_63);
		if (!L_64)
		{
			goto IL_0143;
		}
	}
	{
		Type_t* L_65 = ___0_inst_type;
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_66 = ___1_reader;
		NullCheck(L_66);
		RuntimeObject* L_67;
		L_67 = JsonReader_get_Value_mF219BCB43B2F020C1B67935AA63A40ECD1EE4C05_inline(L_66, NULL);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_68;
		L_68 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_65, L_67, NULL);
		return L_68;
	}

IL_0143:
	{
		Type_t* L_69 = ___0_inst_type;
		Type_t* L_70 = V_0;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		MethodInfo_t* L_71;
		L_71 = JsonMapper_GetConvOp_mA86D07E06B99E4CA3C35F70E294950C288086F8F(L_69, L_70, NULL);
		V_3 = L_71;
		MethodInfo_t* L_72 = V_3;
		if (!L_72)
		{
			goto IL_0168;
		}
	}
	{
		MethodInfo_t* L_73 = V_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_74 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_75 = L_74;
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_76 = ___1_reader;
		NullCheck(L_76);
		RuntimeObject* L_77;
		L_77 = JsonReader_get_Value_mF219BCB43B2F020C1B67935AA63A40ECD1EE4C05_inline(L_76, NULL);
		NullCheck(L_75);
		ArrayElementTypeCheck (L_75, L_77);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_77);
		NullCheck(L_73);
		RuntimeObject* L_78;
		L_78 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_73, NULL, L_75, NULL);
		return L_78;
	}

IL_0168:
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_79 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___static_err_stack_16;
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_80 = ___1_reader;
		NullCheck(L_80);
		RuntimeObject* L_81;
		L_81 = JsonReader_get_Value_mF219BCB43B2F020C1B67935AA63A40ECD1EE4C05_inline(L_80, NULL);
		Type_t* L_82 = V_0;
		Type_t* L_83 = ___0_inst_type;
		String_t* L_84;
		L_84 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteralF7E5EFDC670ACA0D3155DEFB95477AD16E9744EB, L_81, L_82, L_83, NULL);
		NullCheck(L_79);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_79, L_84, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
	}

IL_0184:
	{
		V_4 = NULL;
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_85 = ___1_reader;
		NullCheck(L_85);
		int32_t L_86;
		L_86 = JsonReader_get_Token_m519B39A4B87C3A9A7B424AECAE7FDA64B946E975_inline(L_85, NULL);
		if ((!(((uint32_t)L_86) == ((uint32_t)4))))
		{
			goto IL_028f;
		}
	}
	{
		Type_t* L_87 = ___0_inst_type;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		JsonMapper_AddArrayMetadata_mE3410659CA2904A58B6870D8AD254B2AC926871B(L_87, NULL);
		RuntimeObject* L_88 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___array_metadata_6;
		Type_t* L_89 = ___0_inst_type;
		NullCheck(L_88);
		ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D L_90;
		L_90 = InterfaceFuncInvoker1< ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D, Type_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.Type,LitJson.ArrayMetadata>::get_Item(TKey) */, IDictionary_2_t8918FFC362E99797BB0E47D0D787D923EC3C8AAA_il2cpp_TypeInfo_var, L_88, L_89);
		V_5 = L_90;
		bool L_91;
		L_91 = ArrayMetadata_get_IsArray_mF60D16C73C7A336444DAC740B3D6A84AD4AA40D2_inline((&V_5), NULL);
		if (L_91)
		{
			goto IL_01d3;
		}
	}
	{
		bool L_92;
		L_92 = ArrayMetadata_get_IsList_m65D206DDD4278B4A0DF41E61799AE51EAA23BA7F_inline((&V_5), NULL);
		if (L_92)
		{
			goto IL_01d3;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_93 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___static_err_stack_16;
		Type_t* L_94 = ___0_inst_type;
		String_t* L_95;
		L_95 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralAB6E8D33884A8AB4625102A8EEE80D34FD589540, L_94, NULL);
		NullCheck(L_93);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_93, L_95, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
	}

IL_01d3:
	{
		bool L_96;
		L_96 = ArrayMetadata_get_IsArray_mF60D16C73C7A336444DAC740B3D6A84AD4AA40D2_inline((&V_5), NULL);
		if (L_96)
		{
			goto IL_01fa;
		}
	}
	{
		Type_t* L_97 = ___0_inst_type;
		RuntimeObject* L_98;
		L_98 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_97, NULL);
		V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_98, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		Type_t* L_99;
		L_99 = ArrayMetadata_get_ElementType_m95F881ADA6D1906BDDAD52E328AEFF30ECA46226((&V_5), NULL);
		V_7 = L_99;
		goto IL_0209;
	}

IL_01fa:
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_100 = (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)il2cpp_codegen_object_new(ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		NullCheck(L_100);
		ArrayList__ctor_m07DC369002304B483B9FC41DBDAF4A25AC3C9F80(L_100, NULL);
		V_6 = L_100;
		Type_t* L_101 = ___0_inst_type;
		NullCheck(L_101);
		Type_t* L_102;
		L_102 = VirtualFuncInvoker0< Type_t* >::Invoke(46 /* System.Type System.Type::GetElementType() */, L_101);
		V_7 = L_102;
	}

IL_0209:
	{
		Type_t* L_103 = V_7;
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_104 = ___1_reader;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_105;
		L_105 = JsonMapper_ReadValue_m12EFFE983BBE0A9254AA072EFEFB7A6156F094E6(L_103, L_104, NULL);
		V_8 = L_105;
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_106 = ___1_reader;
		NullCheck(L_106);
		int32_t L_107;
		L_107 = JsonReader_get_Token_m519B39A4B87C3A9A7B424AECAE7FDA64B946E975_inline(L_106, NULL);
		if ((!(((uint32_t)L_107) == ((uint32_t)5))))
		{
			goto IL_0224;
		}
	}
	{
		goto IL_0233;
	}

IL_0224:
	{
		RuntimeObject* L_108 = V_6;
		RuntimeObject* L_109 = V_8;
		NullCheck(L_108);
		int32_t L_110;
		L_110 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_108, L_109);
		goto IL_0209;
	}

IL_0233:
	{
		bool L_111;
		L_111 = ArrayMetadata_get_IsArray_mF60D16C73C7A336444DAC740B3D6A84AD4AA40D2_inline((&V_5), NULL);
		if (!L_111)
		{
			goto IL_0286;
		}
	}
	{
		RuntimeObject* L_112 = V_6;
		NullCheck(L_112);
		int32_t L_113;
		L_113 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_112);
		V_9 = L_113;
		Type_t* L_114 = V_7;
		int32_t L_115 = V_9;
		RuntimeArray* L_116;
		L_116 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_114, L_115, NULL);
		V_4 = L_116;
		V_10 = 0;
		goto IL_0278;
	}

IL_025b:
	{
		RuntimeObject* L_117 = V_4;
		RuntimeObject* L_118 = V_6;
		int32_t L_119 = V_10;
		NullCheck(L_118);
		RuntimeObject* L_120;
		L_120 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_118, L_119);
		int32_t L_121 = V_10;
		NullCheck(((RuntimeArray*)CastclassClass((RuntimeObject*)L_117, RuntimeArray_il2cpp_TypeInfo_var)));
		Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8(((RuntimeArray*)CastclassClass((RuntimeObject*)L_117, RuntimeArray_il2cpp_TypeInfo_var)), L_120, L_121, NULL);
		int32_t L_122 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_122, 1));
	}

IL_0278:
	{
		int32_t L_123 = V_10;
		int32_t L_124 = V_9;
		if ((((int32_t)L_123) < ((int32_t)L_124)))
		{
			goto IL_025b;
		}
	}
	{
		goto IL_028a;
	}

IL_0286:
	{
		RuntimeObject* L_125 = V_6;
		V_4 = L_125;
	}

IL_028a:
	{
		goto IL_03ce;
	}

IL_028f:
	{
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_126 = ___1_reader;
		NullCheck(L_126);
		int32_t L_127;
		L_127 = JsonReader_get_Token_m519B39A4B87C3A9A7B424AECAE7FDA64B946E975_inline(L_126, NULL);
		if ((!(((uint32_t)L_127) == ((uint32_t)1))))
		{
			goto IL_03ce;
		}
	}
	{
		Type_t* L_128 = ___0_inst_type;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		JsonMapper_AddObjectMetadata_m9A5768B60C9F0965DA9CD72412DE5371AA9A756C(L_128, NULL);
		RuntimeObject* L_129 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___object_metadata_10;
		Type_t* L_130 = ___0_inst_type;
		NullCheck(L_129);
		ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661 L_131;
		L_131 = InterfaceFuncInvoker1< ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661, Type_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.Type,LitJson.ObjectMetadata>::get_Item(TKey) */, IDictionary_2_tBDC061B9374E6628F4296689FB32A9C598E45C4B_il2cpp_TypeInfo_var, L_129, L_130);
		V_11 = L_131;
		Type_t* L_132 = ___0_inst_type;
		RuntimeObject* L_133;
		L_133 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_132, NULL);
		V_4 = L_133;
	}

IL_02b6:
	{
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_134 = ___1_reader;
		NullCheck(L_134);
		bool L_135;
		L_135 = JsonReader_Read_mD8D28369934A79C6A0125279F425E48D1D35AE7B(L_134, NULL);
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_136 = ___1_reader;
		NullCheck(L_136);
		int32_t L_137;
		L_137 = JsonReader_get_Token_m519B39A4B87C3A9A7B424AECAE7FDA64B946E975_inline(L_136, NULL);
		if ((!(((uint32_t)L_137) == ((uint32_t)3))))
		{
			goto IL_02ce;
		}
	}
	{
		goto IL_03ce;
	}

IL_02ce:
	{
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_138 = ___1_reader;
		NullCheck(L_138);
		RuntimeObject* L_139;
		L_139 = JsonReader_get_Value_mF219BCB43B2F020C1B67935AA63A40ECD1EE4C05_inline(L_138, NULL);
		V_12 = ((String_t*)CastclassSealed((RuntimeObject*)L_139, String_t_il2cpp_TypeInfo_var));
		RuntimeObject* L_140;
		L_140 = ObjectMetadata_get_Properties_m8E9F8EDA9F12FD110E25D5785F084C1A8B393805_inline((&V_11), NULL);
		String_t* L_141 = V_12;
		NullCheck(L_140);
		bool L_142;
		L_142 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata>::ContainsKey(TKey) */, IDictionary_2_tC6EEF4DE19255D76EDF497CDE277E5578CB81EB2_il2cpp_TypeInfo_var, L_140, L_141);
		if (!L_142)
		{
			goto IL_0378;
		}
	}
	{
		RuntimeObject* L_143;
		L_143 = ObjectMetadata_get_Properties_m8E9F8EDA9F12FD110E25D5785F084C1A8B393805_inline((&V_11), NULL);
		String_t* L_144 = V_12;
		NullCheck(L_143);
		PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D L_145;
		L_145 = InterfaceFuncInvoker1< PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D, String_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata>::get_Item(TKey) */, IDictionary_2_tC6EEF4DE19255D76EDF497CDE277E5578CB81EB2_il2cpp_TypeInfo_var, L_143, L_144);
		V_13 = L_145;
		bool L_146 = (&V_13)->___IsField_1;
		if (!L_146)
		{
			goto IL_032f;
		}
	}
	{
		MemberInfo_t* L_147 = (&V_13)->___Info_0;
		RuntimeObject* L_148 = V_4;
		Type_t* L_149 = (&V_13)->___Type_2;
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_150 = ___1_reader;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_151;
		L_151 = JsonMapper_ReadValue_m12EFFE983BBE0A9254AA072EFEFB7A6156F094E6(L_149, L_150, NULL);
		NullCheck(((FieldInfo_t*)CastclassClass((RuntimeObject*)L_147, FieldInfo_t_il2cpp_TypeInfo_var)));
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(((FieldInfo_t*)CastclassClass((RuntimeObject*)L_147, FieldInfo_t_il2cpp_TypeInfo_var)), L_148, L_151, NULL);
		goto IL_0373;
	}

IL_032f:
	{
		MemberInfo_t* L_152 = (&V_13)->___Info_0;
		V_14 = ((PropertyInfo_t*)CastclassClass((RuntimeObject*)L_152, PropertyInfo_t_il2cpp_TypeInfo_var));
		PropertyInfo_t* L_153 = V_14;
		NullCheck(L_153);
		bool L_154;
		L_154 = VirtualFuncInvoker0< bool >::Invoke(19 /* System.Boolean System.Reflection.PropertyInfo::get_CanWrite() */, L_153);
		if (!L_154)
		{
			goto IL_0365;
		}
	}
	{
		PropertyInfo_t* L_155 = V_14;
		RuntimeObject* L_156 = V_4;
		Type_t* L_157 = (&V_13)->___Type_2;
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_158 = ___1_reader;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_159;
		L_159 = JsonMapper_ReadValue_m12EFFE983BBE0A9254AA072EFEFB7A6156F094E6(L_157, L_158, NULL);
		NullCheck(L_155);
		VirtualActionInvoker3< RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(26 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, L_155, L_156, L_159, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
		goto IL_0373;
	}

IL_0365:
	{
		Type_t* L_160 = (&V_13)->___Type_2;
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_161 = ___1_reader;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_162;
		L_162 = JsonMapper_ReadValue_m12EFFE983BBE0A9254AA072EFEFB7A6156F094E6(L_160, L_161, NULL);
	}

IL_0373:
	{
		goto IL_03c9;
	}

IL_0378:
	{
		bool L_163;
		L_163 = ObjectMetadata_get_IsDictionary_mC66AF9CA841EC0386F35FAD3DA899EB5C0DB082E_inline((&V_11), NULL);
		if (L_163)
		{
			goto IL_03ae;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_164 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___static_err_stack_16;
		String_t* L_165 = V_12;
		Type_t* L_166 = ___0_inst_type;
		String_t* L_167;
		L_167 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral709B8FFB36A9C2A4ADB7BD81DE14F1AAE07AD798, L_165, L_166, NULL);
		NullCheck(L_164);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_164, L_167, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		Type_t* L_168;
		L_168 = ObjectMetadata_get_ElementType_mEC34F3956588C3B5C7EB07A112A7797BF8935BEE((&V_11), NULL);
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_169 = ___1_reader;
		RuntimeObject* L_170;
		L_170 = JsonMapper_ReadValue_m12EFFE983BBE0A9254AA072EFEFB7A6156F094E6(L_168, L_169, NULL);
		goto IL_03c9;
	}

IL_03ae:
	{
		RuntimeObject* L_171 = V_4;
		String_t* L_172 = V_12;
		Type_t* L_173;
		L_173 = ObjectMetadata_get_ElementType_mEC34F3956588C3B5C7EB07A112A7797BF8935BEE((&V_11), NULL);
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_174 = ___1_reader;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_175;
		L_175 = JsonMapper_ReadValue_m12EFFE983BBE0A9254AA072EFEFB7A6156F094E6(L_173, L_174, NULL);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_171, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(5 /* System.Void System.Collections.IDictionary::Add(System.Object,System.Object) */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_171, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var)), L_172, L_175);
	}

IL_03c9:
	{
		goto IL_02b6;
	}

IL_03ce:
	{
		RuntimeObject* L_176 = V_4;
		return L_176;
	}
}
// LitJson.IJsonWrapper LitJson.JsonMapper::ReadValue(LitJson.WrapperFactory,LitJson.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_ReadValue_m1E79EF3FC740E018A6C14D7D4A5D9FBE12239856 (WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* ___0_factory, JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* ___1_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJsonWrapper_t447B39837883BA1281A17C3D6BA122AD22837DD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_0 = ___1_reader;
		NullCheck(L_0);
		bool L_1;
		L_1 = JsonReader_Read_mD8D28369934A79C6A0125279F425E48D1D35AE7B(L_0, NULL);
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_2 = ___1_reader;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = JsonReader_get_Token_m519B39A4B87C3A9A7B424AECAE7FDA64B946E975_inline(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)5)))
		{
			goto IL_0020;
		}
	}
	{
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_4 = ___1_reader;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = JsonReader_get_Token_m519B39A4B87C3A9A7B424AECAE7FDA64B946E975_inline(L_4, NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0022;
		}
	}

IL_0020:
	{
		return (RuntimeObject*)NULL;
	}

IL_0022:
	{
		WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* L_6 = ___0_factory;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = WrapperFactory_Invoke_mDEC930B07F8B4652EBECE1E6386E92701A93C7D5_inline(L_6, NULL);
		V_0 = L_7;
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_8 = ___1_reader;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = JsonReader_get_Token_m519B39A4B87C3A9A7B424AECAE7FDA64B946E975_inline(L_8, NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_0049;
		}
	}
	{
		RuntimeObject* L_10 = V_0;
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_11 = ___1_reader;
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = JsonReader_get_Value_mF219BCB43B2F020C1B67935AA63A40ECD1EE4C05_inline(L_11, NULL);
		NullCheck(L_10);
		InterfaceActionInvoker1< String_t* >::Invoke(18 /* System.Void LitJson.IJsonWrapper::SetString(System.String) */, IJsonWrapper_t447B39837883BA1281A17C3D6BA122AD22837DD9_il2cpp_TypeInfo_var, L_10, ((String_t*)CastclassSealed((RuntimeObject*)L_12, String_t_il2cpp_TypeInfo_var)));
		RuntimeObject* L_13 = V_0;
		return L_13;
	}

IL_0049:
	{
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_14 = ___1_reader;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = JsonReader_get_Token_m519B39A4B87C3A9A7B424AECAE7FDA64B946E975_inline(L_14, NULL);
		if ((!(((uint32_t)L_15) == ((uint32_t)8))))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_16 = V_0;
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_17 = ___1_reader;
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = JsonReader_get_Value_mF219BCB43B2F020C1B67935AA63A40ECD1EE4C05_inline(L_17, NULL);
		NullCheck(L_16);
		InterfaceActionInvoker1< double >::Invoke(14 /* System.Void LitJson.IJsonWrapper::SetDouble(System.Double) */, IJsonWrapper_t447B39837883BA1281A17C3D6BA122AD22837DD9_il2cpp_TypeInfo_var, L_16, ((*(double*)((double*)(double*)UnBox(L_18, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var)))));
		RuntimeObject* L_19 = V_0;
		return L_19;
	}

IL_0068:
	{
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_20 = ___1_reader;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = JsonReader_get_Token_m519B39A4B87C3A9A7B424AECAE7FDA64B946E975_inline(L_20, NULL);
		if ((!(((uint32_t)L_21) == ((uint32_t)6))))
		{
			goto IL_0087;
		}
	}
	{
		RuntimeObject* L_22 = V_0;
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_23 = ___1_reader;
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = JsonReader_get_Value_mF219BCB43B2F020C1B67935AA63A40ECD1EE4C05_inline(L_23, NULL);
		NullCheck(L_22);
		InterfaceActionInvoker1< int32_t >::Invoke(15 /* System.Void LitJson.IJsonWrapper::SetInt(System.Int32) */, IJsonWrapper_t447B39837883BA1281A17C3D6BA122AD22837DD9_il2cpp_TypeInfo_var, L_22, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_24, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))));
		RuntimeObject* L_25 = V_0;
		return L_25;
	}

IL_0087:
	{
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_26 = ___1_reader;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = JsonReader_get_Token_m519B39A4B87C3A9A7B424AECAE7FDA64B946E975_inline(L_26, NULL);
		if ((!(((uint32_t)L_27) == ((uint32_t)7))))
		{
			goto IL_00a6;
		}
	}
	{
		RuntimeObject* L_28 = V_0;
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_29 = ___1_reader;
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = JsonReader_get_Value_mF219BCB43B2F020C1B67935AA63A40ECD1EE4C05_inline(L_29, NULL);
		NullCheck(L_28);
		InterfaceActionInvoker1< int64_t >::Invoke(17 /* System.Void LitJson.IJsonWrapper::SetLong(System.Int64) */, IJsonWrapper_t447B39837883BA1281A17C3D6BA122AD22837DD9_il2cpp_TypeInfo_var, L_28, ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_30, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var)))));
		RuntimeObject* L_31 = V_0;
		return L_31;
	}

IL_00a6:
	{
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_32 = ___1_reader;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = JsonReader_get_Token_m519B39A4B87C3A9A7B424AECAE7FDA64B946E975_inline(L_32, NULL);
		if ((!(((uint32_t)L_33) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_00c6;
		}
	}
	{
		RuntimeObject* L_34 = V_0;
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_35 = ___1_reader;
		NullCheck(L_35);
		RuntimeObject* L_36;
		L_36 = JsonReader_get_Value_mF219BCB43B2F020C1B67935AA63A40ECD1EE4C05_inline(L_35, NULL);
		NullCheck(L_34);
		InterfaceActionInvoker1< bool >::Invoke(13 /* System.Void LitJson.IJsonWrapper::SetBoolean(System.Boolean) */, IJsonWrapper_t447B39837883BA1281A17C3D6BA122AD22837DD9_il2cpp_TypeInfo_var, L_34, ((*(bool*)((bool*)(bool*)UnBox(L_36, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))));
		RuntimeObject* L_37 = V_0;
		return L_37;
	}

IL_00c6:
	{
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_38 = ___1_reader;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = JsonReader_get_Token_m519B39A4B87C3A9A7B424AECAE7FDA64B946E975_inline(L_38, NULL);
		if ((!(((uint32_t)L_39) == ((uint32_t)4))))
		{
			goto IL_0104;
		}
	}
	{
		RuntimeObject* L_40 = V_0;
		NullCheck(L_40);
		InterfaceActionInvoker1< int32_t >::Invoke(16 /* System.Void LitJson.IJsonWrapper::SetJsonType(LitJson.JsonType) */, IJsonWrapper_t447B39837883BA1281A17C3D6BA122AD22837DD9_il2cpp_TypeInfo_var, L_40, 2);
	}

IL_00d9:
	{
		WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* L_41 = ___0_factory;
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_42 = ___1_reader;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_43;
		L_43 = JsonMapper_ReadValue_m1E79EF3FC740E018A6C14D7D4A5D9FBE12239856(L_41, L_42, NULL);
		V_1 = L_43;
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_44 = ___1_reader;
		NullCheck(L_44);
		int32_t L_45;
		L_45 = JsonReader_get_Token_m519B39A4B87C3A9A7B424AECAE7FDA64B946E975_inline(L_44, NULL);
		if ((!(((uint32_t)L_45) == ((uint32_t)5))))
		{
			goto IL_00f2;
		}
	}
	{
		goto IL_00ff;
	}

IL_00f2:
	{
		RuntimeObject* L_46 = V_0;
		RuntimeObject* L_47 = V_1;
		NullCheck(L_46);
		int32_t L_48;
		L_48 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_46, L_47);
		goto IL_00d9;
	}

IL_00ff:
	{
		goto IL_014e;
	}

IL_0104:
	{
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_49 = ___1_reader;
		NullCheck(L_49);
		int32_t L_50;
		L_50 = JsonReader_get_Token_m519B39A4B87C3A9A7B424AECAE7FDA64B946E975_inline(L_49, NULL);
		if ((!(((uint32_t)L_50) == ((uint32_t)1))))
		{
			goto IL_014e;
		}
	}
	{
		RuntimeObject* L_51 = V_0;
		NullCheck(L_51);
		InterfaceActionInvoker1< int32_t >::Invoke(16 /* System.Void LitJson.IJsonWrapper::SetJsonType(LitJson.JsonType) */, IJsonWrapper_t447B39837883BA1281A17C3D6BA122AD22837DD9_il2cpp_TypeInfo_var, L_51, 1);
	}

IL_0117:
	{
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_52 = ___1_reader;
		NullCheck(L_52);
		bool L_53;
		L_53 = JsonReader_Read_mD8D28369934A79C6A0125279F425E48D1D35AE7B(L_52, NULL);
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_54 = ___1_reader;
		NullCheck(L_54);
		int32_t L_55;
		L_55 = JsonReader_get_Token_m519B39A4B87C3A9A7B424AECAE7FDA64B946E975_inline(L_54, NULL);
		if ((!(((uint32_t)L_55) == ((uint32_t)3))))
		{
			goto IL_012f;
		}
	}
	{
		goto IL_014e;
	}

IL_012f:
	{
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_56 = ___1_reader;
		NullCheck(L_56);
		RuntimeObject* L_57;
		L_57 = JsonReader_get_Value_mF219BCB43B2F020C1B67935AA63A40ECD1EE4C05_inline(L_56, NULL);
		V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_57, String_t_il2cpp_TypeInfo_var));
		RuntimeObject* L_58 = V_0;
		String_t* L_59 = V_2;
		WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* L_60 = ___0_factory;
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_61 = ___1_reader;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_62;
		L_62 = JsonMapper_ReadValue_m1E79EF3FC740E018A6C14D7D4A5D9FBE12239856(L_60, L_61, NULL);
		NullCheck(L_58);
		InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(1 /* System.Void System.Collections.IDictionary::set_Item(System.Object,System.Object) */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_58, L_59, L_62);
		goto IL_0117;
	}

IL_014e:
	{
		RuntimeObject* L_63 = V_0;
		return L_63;
	}
}
// System.Void LitJson.JsonMapper::RegisterBaseExporters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_RegisterBaseExporters_m1866D55E6CA556A86EB3F4E4C484706A596A34D9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t74600F66BA04DC423A37DB24919A3C9D56D75B43_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseExportersU3Em__0_mA532619A7EC7C9DEF4D6EB38B4DCFC147410C780_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseExportersU3Em__1_m110FF8AA5363BCD46796FAD1F2D8FED836BFDDBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseExportersU3Em__2_m0FD239C7D31079CE0675AFB2A018A1FC3F43B011_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseExportersU3Em__3_mA29C3028DA92212563CFE9D81330CF54DAB65B8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseExportersU3Em__4_mCBDFEBE0258C9356C1344220ED444CE561296DAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseExportersU3Em__5_mF9877906A7374E0EF585198C87932BA56E702E16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseExportersU3Em__6_m990DB5417D13B4039F5ECF7EE748C4A26358B8CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseExportersU3Em__7_mCADDB28F9A068F794CFFCA92C11FEAB6789505F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseExportersU3Em__8_mDA9844C013501A93EB4D8E6EAEE1F16FF13A6575_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Type_t* G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	Type_t* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	Type_t* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	Type_t* G_B6_0 = NULL;
	RuntimeObject* G_B6_1 = NULL;
	Type_t* G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	Type_t* G_B8_0 = NULL;
	RuntimeObject* G_B8_1 = NULL;
	Type_t* G_B7_0 = NULL;
	RuntimeObject* G_B7_1 = NULL;
	Type_t* G_B10_0 = NULL;
	RuntimeObject* G_B10_1 = NULL;
	Type_t* G_B9_0 = NULL;
	RuntimeObject* G_B9_1 = NULL;
	Type_t* G_B12_0 = NULL;
	RuntimeObject* G_B12_1 = NULL;
	Type_t* G_B11_0 = NULL;
	RuntimeObject* G_B11_1 = NULL;
	Type_t* G_B14_0 = NULL;
	RuntimeObject* G_B14_1 = NULL;
	Type_t* G_B13_0 = NULL;
	RuntimeObject* G_B13_1 = NULL;
	Type_t* G_B16_0 = NULL;
	RuntimeObject* G_B16_1 = NULL;
	Type_t* G_B15_0 = NULL;
	RuntimeObject* G_B15_1 = NULL;
	Type_t* G_B18_0 = NULL;
	RuntimeObject* G_B18_1 = NULL;
	Type_t* G_B17_0 = NULL;
	RuntimeObject* G_B17_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___base_exporters_table_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_3 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache11_17;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_3)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0027;
		}
	}
	{
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_4 = (ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A*)il2cpp_codegen_object_new(ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ExporterFunc__ctor_mE42C7A27446C000BC923E32171289DA0E9CDC5D2(L_4, NULL, (intptr_t)((void*)JsonMapper_U3CRegisterBaseExportersU3Em__0_mA532619A7EC7C9DEF4D6EB38B4DCFC147410C780_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache11_17 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache11_17), (void*)L_4);
		G_B2_0 = G_B1_0;
		G_B2_1 = G_B1_1;
	}

IL_0027:
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_5 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache11_17;
		NullCheck(G_B2_1);
		InterfaceActionInvoker2< Type_t*, ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(TKey,TValue) */, IDictionary_2_t74600F66BA04DC423A37DB24919A3C9D56D75B43_il2cpp_TypeInfo_var, G_B2_1, G_B2_0, L_5);
		RuntimeObject* L_6 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___base_exporters_table_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_9 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache12_18;
		G_B3_0 = L_8;
		G_B3_1 = L_6;
		if (L_9)
		{
			G_B4_0 = L_8;
			G_B4_1 = L_6;
			goto IL_0058;
		}
	}
	{
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_10 = (ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A*)il2cpp_codegen_object_new(ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		ExporterFunc__ctor_mE42C7A27446C000BC923E32171289DA0E9CDC5D2(L_10, NULL, (intptr_t)((void*)JsonMapper_U3CRegisterBaseExportersU3Em__1_m110FF8AA5363BCD46796FAD1F2D8FED836BFDDBF_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache12_18 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache12_18), (void*)L_10);
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
	}

IL_0058:
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_11 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache12_18;
		NullCheck(G_B4_1);
		InterfaceActionInvoker2< Type_t*, ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(TKey,TValue) */, IDictionary_2_t74600F66BA04DC423A37DB24919A3C9D56D75B43_il2cpp_TypeInfo_var, G_B4_1, G_B4_0, L_11);
		RuntimeObject* L_12 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___base_exporters_table_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_15 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache13_19;
		G_B5_0 = L_14;
		G_B5_1 = L_12;
		if (L_15)
		{
			G_B6_0 = L_14;
			G_B6_1 = L_12;
			goto IL_0089;
		}
	}
	{
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_16 = (ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A*)il2cpp_codegen_object_new(ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		ExporterFunc__ctor_mE42C7A27446C000BC923E32171289DA0E9CDC5D2(L_16, NULL, (intptr_t)((void*)JsonMapper_U3CRegisterBaseExportersU3Em__2_m0FD239C7D31079CE0675AFB2A018A1FC3F43B011_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache13_19 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache13_19), (void*)L_16);
		G_B6_0 = G_B5_0;
		G_B6_1 = G_B5_1;
	}

IL_0089:
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_17 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache13_19;
		NullCheck(G_B6_1);
		InterfaceActionInvoker2< Type_t*, ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(TKey,TValue) */, IDictionary_2_t74600F66BA04DC423A37DB24919A3C9D56D75B43_il2cpp_TypeInfo_var, G_B6_1, G_B6_0, L_17);
		RuntimeObject* L_18 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___base_exporters_table_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_21 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache14_20;
		G_B7_0 = L_20;
		G_B7_1 = L_18;
		if (L_21)
		{
			G_B8_0 = L_20;
			G_B8_1 = L_18;
			goto IL_00ba;
		}
	}
	{
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_22 = (ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A*)il2cpp_codegen_object_new(ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		ExporterFunc__ctor_mE42C7A27446C000BC923E32171289DA0E9CDC5D2(L_22, NULL, (intptr_t)((void*)JsonMapper_U3CRegisterBaseExportersU3Em__3_mA29C3028DA92212563CFE9D81330CF54DAB65B8B_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache14_20 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache14_20), (void*)L_22);
		G_B8_0 = G_B7_0;
		G_B8_1 = G_B7_1;
	}

IL_00ba:
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_23 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache14_20;
		NullCheck(G_B8_1);
		InterfaceActionInvoker2< Type_t*, ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(TKey,TValue) */, IDictionary_2_t74600F66BA04DC423A37DB24919A3C9D56D75B43_il2cpp_TypeInfo_var, G_B8_1, G_B8_0, L_23);
		RuntimeObject* L_24 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___base_exporters_table_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_27 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache15_21;
		G_B9_0 = L_26;
		G_B9_1 = L_24;
		if (L_27)
		{
			G_B10_0 = L_26;
			G_B10_1 = L_24;
			goto IL_00eb;
		}
	}
	{
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_28 = (ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A*)il2cpp_codegen_object_new(ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		ExporterFunc__ctor_mE42C7A27446C000BC923E32171289DA0E9CDC5D2(L_28, NULL, (intptr_t)((void*)JsonMapper_U3CRegisterBaseExportersU3Em__4_mCBDFEBE0258C9356C1344220ED444CE561296DAF_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache15_21 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache15_21), (void*)L_28);
		G_B10_0 = G_B9_0;
		G_B10_1 = G_B9_1;
	}

IL_00eb:
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_29 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache15_21;
		NullCheck(G_B10_1);
		InterfaceActionInvoker2< Type_t*, ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(TKey,TValue) */, IDictionary_2_t74600F66BA04DC423A37DB24919A3C9D56D75B43_il2cpp_TypeInfo_var, G_B10_1, G_B10_0, L_29);
		RuntimeObject* L_30 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___base_exporters_table_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_33 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache16_22;
		G_B11_0 = L_32;
		G_B11_1 = L_30;
		if (L_33)
		{
			G_B12_0 = L_32;
			G_B12_1 = L_30;
			goto IL_011c;
		}
	}
	{
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_34 = (ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A*)il2cpp_codegen_object_new(ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A_il2cpp_TypeInfo_var);
		NullCheck(L_34);
		ExporterFunc__ctor_mE42C7A27446C000BC923E32171289DA0E9CDC5D2(L_34, NULL, (intptr_t)((void*)JsonMapper_U3CRegisterBaseExportersU3Em__5_mF9877906A7374E0EF585198C87932BA56E702E16_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache16_22 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache16_22), (void*)L_34);
		G_B12_0 = G_B11_0;
		G_B12_1 = G_B11_1;
	}

IL_011c:
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_35 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache16_22;
		NullCheck(G_B12_1);
		InterfaceActionInvoker2< Type_t*, ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(TKey,TValue) */, IDictionary_2_t74600F66BA04DC423A37DB24919A3C9D56D75B43_il2cpp_TypeInfo_var, G_B12_1, G_B12_0, L_35);
		RuntimeObject* L_36 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___base_exporters_table_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_39 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache17_23;
		G_B13_0 = L_38;
		G_B13_1 = L_36;
		if (L_39)
		{
			G_B14_0 = L_38;
			G_B14_1 = L_36;
			goto IL_014d;
		}
	}
	{
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_40 = (ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A*)il2cpp_codegen_object_new(ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		ExporterFunc__ctor_mE42C7A27446C000BC923E32171289DA0E9CDC5D2(L_40, NULL, (intptr_t)((void*)JsonMapper_U3CRegisterBaseExportersU3Em__6_m990DB5417D13B4039F5ECF7EE748C4A26358B8CD_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache17_23 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache17_23), (void*)L_40);
		G_B14_0 = G_B13_0;
		G_B14_1 = G_B13_1;
	}

IL_014d:
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_41 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache17_23;
		NullCheck(G_B14_1);
		InterfaceActionInvoker2< Type_t*, ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(TKey,TValue) */, IDictionary_2_t74600F66BA04DC423A37DB24919A3C9D56D75B43_il2cpp_TypeInfo_var, G_B14_1, G_B14_0, L_41);
		RuntimeObject* L_42 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___base_exporters_table_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_43, NULL);
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_45 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache18_24;
		G_B15_0 = L_44;
		G_B15_1 = L_42;
		if (L_45)
		{
			G_B16_0 = L_44;
			G_B16_1 = L_42;
			goto IL_017e;
		}
	}
	{
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_46 = (ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A*)il2cpp_codegen_object_new(ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A_il2cpp_TypeInfo_var);
		NullCheck(L_46);
		ExporterFunc__ctor_mE42C7A27446C000BC923E32171289DA0E9CDC5D2(L_46, NULL, (intptr_t)((void*)JsonMapper_U3CRegisterBaseExportersU3Em__7_mCADDB28F9A068F794CFFCA92C11FEAB6789505F4_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache18_24 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache18_24), (void*)L_46);
		G_B16_0 = G_B15_0;
		G_B16_1 = G_B15_1;
	}

IL_017e:
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_47 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache18_24;
		NullCheck(G_B16_1);
		InterfaceActionInvoker2< Type_t*, ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(TKey,TValue) */, IDictionary_2_t74600F66BA04DC423A37DB24919A3C9D56D75B43_il2cpp_TypeInfo_var, G_B16_1, G_B16_0, L_47);
		RuntimeObject* L_48 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___base_exporters_table_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_51 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache19_25;
		G_B17_0 = L_50;
		G_B17_1 = L_48;
		if (L_51)
		{
			G_B18_0 = L_50;
			G_B18_1 = L_48;
			goto IL_01af;
		}
	}
	{
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_52 = (ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A*)il2cpp_codegen_object_new(ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A_il2cpp_TypeInfo_var);
		NullCheck(L_52);
		ExporterFunc__ctor_mE42C7A27446C000BC923E32171289DA0E9CDC5D2(L_52, NULL, (intptr_t)((void*)JsonMapper_U3CRegisterBaseExportersU3Em__8_mDA9844C013501A93EB4D8E6EAEE1F16FF13A6575_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache19_25 = L_52;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache19_25), (void*)L_52);
		G_B18_0 = G_B17_0;
		G_B18_1 = G_B17_1;
	}

IL_01af:
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_53 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache19_25;
		NullCheck(G_B18_1);
		InterfaceActionInvoker2< Type_t*, ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(TKey,TValue) */, IDictionary_2_t74600F66BA04DC423A37DB24919A3C9D56D75B43_il2cpp_TypeInfo_var, G_B18_1, G_B18_0, L_53);
		return;
	}
}
// System.Void LitJson.JsonMapper::RegisterBaseImporters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_RegisterBaseImporters_m108AF061EDD0D019D96B7276A59E909010EF6F79 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseImportersU3Em__10_m373921C4F987CB8342108CA7B892AFC9359FEA94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseImportersU3Em__11_m3DB56AA4D337205711CC07D354E67D28C1C1C586_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseImportersU3Em__12_m31F2706B1EDA98CF528C80328ACB64DBF7A3B95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseImportersU3Em__13_m881B1EBE03FFD1ECAAEAD3FB23ACA14D2F639B07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseImportersU3Em__14_mDD8CDBB9BBD6B45989EDBA945F727DE509618E2C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseImportersU3Em__9_mAA0E4C56A03D5340767AF319EF2E3A1FAEF97E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseImportersU3Em__A_mA1F5749E268B8573AE59CA4AFDA294E06C5B495D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseImportersU3Em__B_m3ADD4F61880F2DBF16970403F0C4AB6D0CA5C866_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseImportersU3Em__C_m8F5FA54FC18A79A77BD4A8063E6EFDD101FBE7A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseImportersU3Em__D_m82DF7F475A2E0DA9EB74C493C41475475EC56DF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseImportersU3Em__E_mFF7D39CF1F9C6539031853BF7282E96823BFDD6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseImportersU3Em__F_mBD6BB1B68A7163693A2F8207F22CA0E9DBD1CDB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_0 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache1A_26;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_1 = (ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5*)il2cpp_codegen_object_new(ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ImporterFunc__ctor_m630470C9B15EC4550BDC9B0A860B2F9C3B66C029(L_1, NULL, (intptr_t)((void*)JsonMapper_U3CRegisterBaseImportersU3Em__9_mAA0E4C56A03D5340767AF319EF2E3A1FAEF97E83_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache1A_26 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache1A_26), (void*)L_1);
	}

IL_0018:
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_2 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache1A_26;
		V_0 = L_2;
		RuntimeObject* L_3 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___base_importers_table_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_8 = V_0;
		JsonMapper_RegisterImporter_m091B42BD8AE8DBD08A21E950E11677E1B87363ED(L_3, L_5, L_7, L_8, NULL);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_9 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache1B_27;
		if (L_9)
		{
			goto IL_0055;
		}
	}
	{
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_10 = (ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5*)il2cpp_codegen_object_new(ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		ImporterFunc__ctor_m630470C9B15EC4550BDC9B0A860B2F9C3B66C029(L_10, NULL, (intptr_t)((void*)JsonMapper_U3CRegisterBaseImportersU3Em__A_mA1F5749E268B8573AE59CA4AFDA294E06C5B495D_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache1B_27 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache1B_27), (void*)L_10);
	}

IL_0055:
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_11 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache1B_27;
		V_0 = L_11;
		RuntimeObject* L_12 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___base_importers_table_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_17 = V_0;
		JsonMapper_RegisterImporter_m091B42BD8AE8DBD08A21E950E11677E1B87363ED(L_12, L_14, L_16, L_17, NULL);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_18 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache1C_28;
		if (L_18)
		{
			goto IL_0092;
		}
	}
	{
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_19 = (ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5*)il2cpp_codegen_object_new(ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		ImporterFunc__ctor_m630470C9B15EC4550BDC9B0A860B2F9C3B66C029(L_19, NULL, (intptr_t)((void*)JsonMapper_U3CRegisterBaseImportersU3Em__B_m3ADD4F61880F2DBF16970403F0C4AB6D0CA5C866_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache1C_28 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache1C_28), (void*)L_19);
	}

IL_0092:
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_20 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache1C_28;
		V_0 = L_20;
		RuntimeObject* L_21 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___base_importers_table_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_26 = V_0;
		JsonMapper_RegisterImporter_m091B42BD8AE8DBD08A21E950E11677E1B87363ED(L_21, L_23, L_25, L_26, NULL);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_27 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache1D_29;
		if (L_27)
		{
			goto IL_00cf;
		}
	}
	{
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_28 = (ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5*)il2cpp_codegen_object_new(ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		ImporterFunc__ctor_m630470C9B15EC4550BDC9B0A860B2F9C3B66C029(L_28, NULL, (intptr_t)((void*)JsonMapper_U3CRegisterBaseImportersU3Em__C_m8F5FA54FC18A79A77BD4A8063E6EFDD101FBE7A9_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache1D_29 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache1D_29), (void*)L_28);
	}

IL_00cf:
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_29 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache1D_29;
		V_0 = L_29;
		RuntimeObject* L_30 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___base_importers_table_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_33 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_34;
		L_34 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_33, NULL);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_35 = V_0;
		JsonMapper_RegisterImporter_m091B42BD8AE8DBD08A21E950E11677E1B87363ED(L_30, L_32, L_34, L_35, NULL);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_36 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache1E_30;
		if (L_36)
		{
			goto IL_010c;
		}
	}
	{
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_37 = (ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5*)il2cpp_codegen_object_new(ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		ImporterFunc__ctor_m630470C9B15EC4550BDC9B0A860B2F9C3B66C029(L_37, NULL, (intptr_t)((void*)JsonMapper_U3CRegisterBaseImportersU3Em__D_m82DF7F475A2E0DA9EB74C493C41475475EC56DF7_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache1E_30 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache1E_30), (void*)L_37);
	}

IL_010c:
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_38 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache1E_30;
		V_0 = L_38;
		RuntimeObject* L_39 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___base_importers_table_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_44 = V_0;
		JsonMapper_RegisterImporter_m091B42BD8AE8DBD08A21E950E11677E1B87363ED(L_39, L_41, L_43, L_44, NULL);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_45 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache1F_31;
		if (L_45)
		{
			goto IL_0149;
		}
	}
	{
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_46 = (ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5*)il2cpp_codegen_object_new(ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5_il2cpp_TypeInfo_var);
		NullCheck(L_46);
		ImporterFunc__ctor_m630470C9B15EC4550BDC9B0A860B2F9C3B66C029(L_46, NULL, (intptr_t)((void*)JsonMapper_U3CRegisterBaseImportersU3Em__E_mFF7D39CF1F9C6539031853BF7282E96823BFDD6F_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache1F_31 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache1F_31), (void*)L_46);
	}

IL_0149:
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_47 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache1F_31;
		V_0 = L_47;
		RuntimeObject* L_48 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___base_importers_table_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_51 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_52;
		L_52 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_51, NULL);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_53 = V_0;
		JsonMapper_RegisterImporter_m091B42BD8AE8DBD08A21E950E11677E1B87363ED(L_48, L_50, L_52, L_53, NULL);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_54 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache20_32;
		if (L_54)
		{
			goto IL_0186;
		}
	}
	{
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_55 = (ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5*)il2cpp_codegen_object_new(ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5_il2cpp_TypeInfo_var);
		NullCheck(L_55);
		ImporterFunc__ctor_m630470C9B15EC4550BDC9B0A860B2F9C3B66C029(L_55, NULL, (intptr_t)((void*)JsonMapper_U3CRegisterBaseImportersU3Em__F_mBD6BB1B68A7163693A2F8207F22CA0E9DBD1CDB3_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache20_32 = L_55;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache20_32), (void*)L_55);
	}

IL_0186:
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_56 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache20_32;
		V_0 = L_56;
		RuntimeObject* L_57 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___base_importers_table_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_59;
		L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_61;
		L_61 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_60, NULL);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_62 = V_0;
		JsonMapper_RegisterImporter_m091B42BD8AE8DBD08A21E950E11677E1B87363ED(L_57, L_59, L_61, L_62, NULL);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_63 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache21_33;
		if (L_63)
		{
			goto IL_01c3;
		}
	}
	{
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_64 = (ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5*)il2cpp_codegen_object_new(ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5_il2cpp_TypeInfo_var);
		NullCheck(L_64);
		ImporterFunc__ctor_m630470C9B15EC4550BDC9B0A860B2F9C3B66C029(L_64, NULL, (intptr_t)((void*)JsonMapper_U3CRegisterBaseImportersU3Em__10_m373921C4F987CB8342108CA7B892AFC9359FEA94_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache21_33 = L_64;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache21_33), (void*)L_64);
	}

IL_01c3:
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_65 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache21_33;
		V_0 = L_65;
		RuntimeObject* L_66 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___base_importers_table_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_67 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_68;
		L_68 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_67, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_69 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_70;
		L_70 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_69, NULL);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_71 = V_0;
		JsonMapper_RegisterImporter_m091B42BD8AE8DBD08A21E950E11677E1B87363ED(L_66, L_68, L_70, L_71, NULL);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_72 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache22_34;
		if (L_72)
		{
			goto IL_0200;
		}
	}
	{
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_73 = (ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5*)il2cpp_codegen_object_new(ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5_il2cpp_TypeInfo_var);
		NullCheck(L_73);
		ImporterFunc__ctor_m630470C9B15EC4550BDC9B0A860B2F9C3B66C029(L_73, NULL, (intptr_t)((void*)JsonMapper_U3CRegisterBaseImportersU3Em__11_m3DB56AA4D337205711CC07D354E67D28C1C1C586_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache22_34 = L_73;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache22_34), (void*)L_73);
	}

IL_0200:
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_74 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache22_34;
		V_0 = L_74;
		RuntimeObject* L_75 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___base_importers_table_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_76 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_77;
		L_77 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_76, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_78 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_79;
		L_79 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_78, NULL);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_80 = V_0;
		JsonMapper_RegisterImporter_m091B42BD8AE8DBD08A21E950E11677E1B87363ED(L_75, L_77, L_79, L_80, NULL);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_81 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache23_35;
		if (L_81)
		{
			goto IL_023d;
		}
	}
	{
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_82 = (ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5*)il2cpp_codegen_object_new(ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5_il2cpp_TypeInfo_var);
		NullCheck(L_82);
		ImporterFunc__ctor_m630470C9B15EC4550BDC9B0A860B2F9C3B66C029(L_82, NULL, (intptr_t)((void*)JsonMapper_U3CRegisterBaseImportersU3Em__12_m31F2706B1EDA98CF528C80328ACB64DBF7A3B95D_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache23_35 = L_82;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache23_35), (void*)L_82);
	}

IL_023d:
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_83 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache23_35;
		V_0 = L_83;
		RuntimeObject* L_84 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___base_importers_table_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_85 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_86;
		L_86 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_85, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_87 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_88;
		L_88 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_87, NULL);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_89 = V_0;
		JsonMapper_RegisterImporter_m091B42BD8AE8DBD08A21E950E11677E1B87363ED(L_84, L_86, L_88, L_89, NULL);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_90 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache24_36;
		if (L_90)
		{
			goto IL_027a;
		}
	}
	{
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_91 = (ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5*)il2cpp_codegen_object_new(ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5_il2cpp_TypeInfo_var);
		NullCheck(L_91);
		ImporterFunc__ctor_m630470C9B15EC4550BDC9B0A860B2F9C3B66C029(L_91, NULL, (intptr_t)((void*)JsonMapper_U3CRegisterBaseImportersU3Em__13_m881B1EBE03FFD1ECAAEAD3FB23ACA14D2F639B07_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache24_36 = L_91;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache24_36), (void*)L_91);
	}

IL_027a:
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_92 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache24_36;
		V_0 = L_92;
		RuntimeObject* L_93 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___base_importers_table_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_94 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_95;
		L_95 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_94, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_96 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_97;
		L_97 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_96, NULL);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_98 = V_0;
		JsonMapper_RegisterImporter_m091B42BD8AE8DBD08A21E950E11677E1B87363ED(L_93, L_95, L_97, L_98, NULL);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_99 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache25_37;
		if (L_99)
		{
			goto IL_02b7;
		}
	}
	{
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_100 = (ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5*)il2cpp_codegen_object_new(ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5_il2cpp_TypeInfo_var);
		NullCheck(L_100);
		ImporterFunc__ctor_m630470C9B15EC4550BDC9B0A860B2F9C3B66C029(L_100, NULL, (intptr_t)((void*)JsonMapper_U3CRegisterBaseImportersU3Em__14_mDD8CDBB9BBD6B45989EDBA945F727DE509618E2C_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache25_37 = L_100;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache25_37), (void*)L_100);
	}

IL_02b7:
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_101 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache25_37;
		V_0 = L_101;
		RuntimeObject* L_102 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___base_importers_table_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_103 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_104;
		L_104 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_103, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_105 = { reinterpret_cast<intptr_t> (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var) };
		Type_t* L_106;
		L_106 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_105, NULL);
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_107 = V_0;
		JsonMapper_RegisterImporter_m091B42BD8AE8DBD08A21E950E11677E1B87363ED(L_102, L_104, L_106, L_107, NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::RegisterImporter(System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>,System.Type,System.Type,LitJson.ImporterFunc)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_RegisterImporter_m091B42BD8AE8DBD08A21E950E11677E1B87363ED (RuntimeObject* ___0_table, Type_t* ___1_json_type, Type_t* ___2_value_type, ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* ___3_importer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m7B6BA98348249476333A6F6C3EFB7E2ABAEF49A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9017400E4435187C1FB3841B4F5843B94836A625_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t0BD8FD9B6F60BD6B18C6D1CD2BE215E7F97D3D63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t14E89C96BA24B565BED22155CB0969211ADEB1AB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_table;
		Type_t* L_1 = ___1_json_type;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, Type_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::ContainsKey(TKey) */, IDictionary_2_t0BD8FD9B6F60BD6B18C6D1CD2BE215E7F97D3D63_il2cpp_TypeInfo_var, L_0, L_1);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		RuntimeObject* L_3 = ___0_table;
		Type_t* L_4 = ___1_json_type;
		Dictionary_2_t9017400E4435187C1FB3841B4F5843B94836A625* L_5 = (Dictionary_2_t9017400E4435187C1FB3841B4F5843B94836A625*)il2cpp_codegen_object_new(Dictionary_2_t9017400E4435187C1FB3841B4F5843B94836A625_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Dictionary_2__ctor_m7B6BA98348249476333A6F6C3EFB7E2ABAEF49A5(L_5, Dictionary_2__ctor_m7B6BA98348249476333A6F6C3EFB7E2ABAEF49A5_RuntimeMethod_var);
		NullCheck(L_3);
		InterfaceActionInvoker2< Type_t*, RuntimeObject* >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::Add(TKey,TValue) */, IDictionary_2_t0BD8FD9B6F60BD6B18C6D1CD2BE215E7F97D3D63_il2cpp_TypeInfo_var, L_3, L_4, L_5);
	}

IL_0018:
	{
		RuntimeObject* L_6 = ___0_table;
		Type_t* L_7 = ___1_json_type;
		NullCheck(L_6);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker1< RuntimeObject*, Type_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::get_Item(TKey) */, IDictionary_2_t0BD8FD9B6F60BD6B18C6D1CD2BE215E7F97D3D63_il2cpp_TypeInfo_var, L_6, L_7);
		Type_t* L_9 = ___2_value_type;
		ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* L_10 = ___3_importer;
		NullCheck(L_8);
		InterfaceActionInvoker2< Type_t*, ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>::set_Item(TKey,TValue) */, IDictionary_2_t14E89C96BA24B565BED22155CB0969211ADEB1AB_il2cpp_TypeInfo_var, L_8, L_9, L_10);
		return;
	}
}
// System.Void LitJson.JsonMapper::WriteValue(System.Object,LitJson.JsonWriter,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_WriteValue_m143881E655EEAE7440BFE564E13A2580A021DBDE (RuntimeObject* ___0_obj, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___1_writer, bool ___2_writer_is_private, int32_t ___3_depth, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FieldInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t02C6BF8BB03B58DD552B193E9CABACD0AF9CCFA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t74600F66BA04DC423A37DB24919A3C9D56D75B43_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tDFAB6A0EC1A6A40B5D759F32652B70BD609099EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t05B5613D1899393C5D9EB2B8AE7E874C4C23ED6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJsonWrapper_t447B39837883BA1281A17C3D6BA122AD22837DD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB V_7;
	memset((&V_7), 0, sizeof(V_7));
	RuntimeObject* V_8 = NULL;
	Type_t* V_9 = NULL;
	ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* V_10 = NULL;
	ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* V_11 = NULL;
	Type_t* V_12 = NULL;
	RuntimeObject* V_13 = NULL;
	RuntimeObject* V_14 = NULL;
	PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D V_15;
	memset((&V_15), 0, sizeof(V_15));
	PropertyInfo_t* V_16 = NULL;
	{
		int32_t L_0 = ___3_depth;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		int32_t L_1 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___max_nesting_depth_0;
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_0021;
		}
	}
	{
		RuntimeObject* L_2 = ___0_obj;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_2, NULL);
		String_t* L_4;
		L_4 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral456BA6DFA4ECDFAAD0D654A1EC48EE0C8CB90B18)), L_3, NULL);
		JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76* L_5 = (JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		JsonException__ctor_m400377A21C20F6CAEE97CE7958869D819BB94BB5(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonMapper_WriteValue_m143881E655EEAE7440BFE564E13A2580A021DBDE_RuntimeMethod_var)));
	}

IL_0021:
	{
		RuntimeObject* L_6 = ___0_obj;
		if (L_6)
		{
			goto IL_002f;
		}
	}
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_7 = ___1_writer;
		NullCheck(L_7);
		JsonWriter_Write_mC6C394BE18186CAEB8597055057A1AECDEE56916(L_7, (String_t*)NULL, NULL);
		return;
	}

IL_002f:
	{
		RuntimeObject* L_8 = ___0_obj;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_8, IJsonWrapper_t447B39837883BA1281A17C3D6BA122AD22837DD9_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		bool L_9 = ___2_writer_is_private;
		if (!L_9)
		{
			goto IL_005b;
		}
	}
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_10 = ___1_writer;
		NullCheck(L_10);
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_11;
		L_11 = JsonWriter_get_TextWriter_m8C5C9441F52C2813A2A3A1834E7A8A3AF2CF875F_inline(L_10, NULL);
		RuntimeObject* L_12 = ___0_obj;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_12, IJsonWrapper_t447B39837883BA1281A17C3D6BA122AD22837DD9_il2cpp_TypeInfo_var)));
		String_t* L_13;
		L_13 = InterfaceFuncInvoker0< String_t* >::Invoke(19 /* System.String LitJson.IJsonWrapper::ToJson() */, IJsonWrapper_t447B39837883BA1281A17C3D6BA122AD22837DD9_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_12, IJsonWrapper_t447B39837883BA1281A17C3D6BA122AD22837DD9_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		VirtualActionInvoker1< String_t* >::Invoke(16 /* System.Void System.IO.TextWriter::Write(System.String) */, L_11, L_13);
		goto IL_0067;
	}

IL_005b:
	{
		RuntimeObject* L_14 = ___0_obj;
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_15 = ___1_writer;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_14, IJsonWrapper_t447B39837883BA1281A17C3D6BA122AD22837DD9_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker1< JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* >::Invoke(20 /* System.Void LitJson.IJsonWrapper::ToJson(LitJson.JsonWriter) */, IJsonWrapper_t447B39837883BA1281A17C3D6BA122AD22837DD9_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_14, IJsonWrapper_t447B39837883BA1281A17C3D6BA122AD22837DD9_il2cpp_TypeInfo_var)), L_15);
	}

IL_0067:
	{
		return;
	}

IL_0068:
	{
		RuntimeObject* L_16 = ___0_obj;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_16, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0080;
		}
	}
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_17 = ___1_writer;
		RuntimeObject* L_18 = ___0_obj;
		NullCheck(L_17);
		JsonWriter_Write_mC6C394BE18186CAEB8597055057A1AECDEE56916(L_17, ((String_t*)CastclassSealed((RuntimeObject*)L_18, String_t_il2cpp_TypeInfo_var)), NULL);
		return;
	}

IL_0080:
	{
		RuntimeObject* L_19 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_19, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var)))
		{
			goto IL_0098;
		}
	}
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_20 = ___1_writer;
		RuntimeObject* L_21 = ___0_obj;
		NullCheck(L_20);
		JsonWriter_Write_m657048A70C011FC85FD3773A026EC0B21462AB4D(L_20, ((*(double*)((double*)(double*)UnBox(L_21, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var)))), NULL);
		return;
	}

IL_0098:
	{
		RuntimeObject* L_22 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_22, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))
		{
			goto IL_00b0;
		}
	}
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_23 = ___1_writer;
		RuntimeObject* L_24 = ___0_obj;
		NullCheck(L_23);
		JsonWriter_Write_m3A3246FEFCA9BCEB4F3E7D2D5AC0FF49B8BBD3A7(L_23, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_24, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))), NULL);
		return;
	}

IL_00b0:
	{
		RuntimeObject* L_25 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_25, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))
		{
			goto IL_00c8;
		}
	}
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_26 = ___1_writer;
		RuntimeObject* L_27 = ___0_obj;
		NullCheck(L_26);
		JsonWriter_Write_mFACCB1B6087CE1C66A68CE3BA2AF9844F7F31D8C(L_26, ((*(bool*)((bool*)(bool*)UnBox(L_27, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))), NULL);
		return;
	}

IL_00c8:
	{
		RuntimeObject* L_28 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_28, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var)))
		{
			goto IL_00e0;
		}
	}
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_29 = ___1_writer;
		RuntimeObject* L_30 = ___0_obj;
		NullCheck(L_29);
		JsonWriter_Write_m500833BCB5B21114C1C8A3FA7DAAF6A1EAD2A3D4(L_29, ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_30, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var)))), NULL);
		return;
	}

IL_00e0:
	{
		RuntimeObject* L_31 = ___0_obj;
		if (!((RuntimeArray*)IsInstClass((RuntimeObject*)L_31, RuntimeArray_il2cpp_TypeInfo_var)))
		{
			goto IL_013f;
		}
	}
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_32 = ___1_writer;
		NullCheck(L_32);
		JsonWriter_WriteArrayStart_mF4AB20790AB8817BCCEEB5FA649832890D5AADEB(L_32, NULL);
		RuntimeObject* L_33 = ___0_obj;
		NullCheck(((RuntimeArray*)CastclassClass((RuntimeObject*)L_33, RuntimeArray_il2cpp_TypeInfo_var)));
		RuntimeObject* L_34;
		L_34 = Array_GetEnumerator_mDB7E2AF23F2BDC715D429C71CA3B8D0151F0DC1E(((RuntimeArray*)CastclassClass((RuntimeObject*)L_33, RuntimeArray_il2cpp_TypeInfo_var)), NULL);
		V_0 = L_34;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0124:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_35 = V_0;
					RuntimeObject* L_36 = ((RuntimeObject*)IsInst((RuntimeObject*)L_35, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					V_2 = L_36;
					if (!L_36)
					{
						goto IL_0137;
					}
				}
				{
					RuntimeObject* L_37 = V_2;
					NullCheck(L_37);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_37);
				}

IL_0137:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0114_1;
			}

IL_0102_1:
			{
				RuntimeObject* L_38 = V_0;
				NullCheck(L_38);
				RuntimeObject* L_39;
				L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_38);
				V_1 = L_39;
				RuntimeObject* L_40 = V_1;
				JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_41 = ___1_writer;
				bool L_42 = ___2_writer_is_private;
				int32_t L_43 = ___3_depth;
				il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
				JsonMapper_WriteValue_m143881E655EEAE7440BFE564E13A2580A021DBDE(L_40, L_41, L_42, ((int32_t)il2cpp_codegen_add(L_43, 1)), NULL);
			}

IL_0114_1:
			{
				RuntimeObject* L_44 = V_0;
				NullCheck(L_44);
				bool L_45;
				L_45 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_44);
				if (L_45)
				{
					goto IL_0102_1;
				}
			}
			{
				goto IL_0138;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0138:
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_46 = ___1_writer;
		NullCheck(L_46);
		JsonWriter_WriteArrayEnd_mE8262D6AC279897DA41D549CE12A8EA3054777B5(L_46, NULL);
		return;
	}

IL_013f:
	{
		RuntimeObject* L_47 = ___0_obj;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_47, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var)))
		{
			goto IL_01a2;
		}
	}
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_48 = ___1_writer;
		NullCheck(L_48);
		JsonWriter_WriteArrayStart_mF4AB20790AB8817BCCEEB5FA649832890D5AADEB(L_48, NULL);
		RuntimeObject* L_49 = ___0_obj;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_49, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var)));
		RuntimeObject* L_50;
		L_50 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_49, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var)));
		V_3 = L_50;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0185:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_51 = V_3;
					RuntimeObject* L_52 = ((RuntimeObject*)IsInst((RuntimeObject*)L_51, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					V_5 = L_52;
					if (!L_52)
					{
						goto IL_019a;
					}
				}
				{
					RuntimeObject* L_53 = V_5;
					NullCheck(L_53);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_53);
				}

IL_019a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0175_1;
			}

IL_0161_1:
			{
				RuntimeObject* L_54 = V_3;
				NullCheck(L_54);
				RuntimeObject* L_55;
				L_55 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_54);
				V_4 = L_55;
				RuntimeObject* L_56 = V_4;
				JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_57 = ___1_writer;
				bool L_58 = ___2_writer_is_private;
				int32_t L_59 = ___3_depth;
				il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
				JsonMapper_WriteValue_m143881E655EEAE7440BFE564E13A2580A021DBDE(L_56, L_57, L_58, ((int32_t)il2cpp_codegen_add(L_59, 1)), NULL);
			}

IL_0175_1:
			{
				RuntimeObject* L_60 = V_3;
				NullCheck(L_60);
				bool L_61;
				L_61 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_60);
				if (L_61)
				{
					goto IL_0161_1;
				}
			}
			{
				goto IL_019b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_019b:
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_62 = ___1_writer;
		NullCheck(L_62);
		JsonWriter_WriteArrayEnd_mE8262D6AC279897DA41D549CE12A8EA3054777B5(L_62, NULL);
		return;
	}

IL_01a2:
	{
		RuntimeObject* L_63 = ___0_obj;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_63, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var)))
		{
			goto IL_0225;
		}
	}
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_64 = ___1_writer;
		NullCheck(L_64);
		JsonWriter_WriteObjectStart_m90F3A0A19C03EA7CF90017768E3FA217E4038688(L_64, NULL);
		RuntimeObject* L_65 = ___0_obj;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_65, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var)));
		RuntimeObject* L_66;
		L_66 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(9 /* System.Collections.IDictionaryEnumerator System.Collections.IDictionary::GetEnumerator() */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_65, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var)));
		V_6 = L_66;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0207:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_67 = V_6;
					RuntimeObject* L_68 = ((RuntimeObject*)IsInst((RuntimeObject*)L_67, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					V_8 = L_68;
					if (!L_68)
					{
						goto IL_021d;
					}
				}
				{
					RuntimeObject* L_69 = V_8;
					NullCheck(L_69);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_69);
				}

IL_021d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_01f6_1;
			}

IL_01c5_1:
			{
				RuntimeObject* L_70 = V_6;
				NullCheck(L_70);
				RuntimeObject* L_71;
				L_71 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_70);
				V_7 = ((*(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)((DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)UnBox(L_71, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var))));
				JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_72 = ___1_writer;
				RuntimeObject* L_73;
				L_73 = DictionaryEntry_get_Key_m09845C00732E530E6FCB9042079E90D3912215FE_inline((&V_7), NULL);
				NullCheck(L_72);
				JsonWriter_WritePropertyName_m5646EF1771ABCFCCAAD52086AAE3387579E158E0(L_72, ((String_t*)CastclassSealed((RuntimeObject*)L_73, String_t_il2cpp_TypeInfo_var)), NULL);
				RuntimeObject* L_74;
				L_74 = DictionaryEntry_get_Value_m75FD18FE968AE131F28AA2CB0DF4895EBA39075E_inline((&V_7), NULL);
				JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_75 = ___1_writer;
				bool L_76 = ___2_writer_is_private;
				int32_t L_77 = ___3_depth;
				il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
				JsonMapper_WriteValue_m143881E655EEAE7440BFE564E13A2580A021DBDE(L_74, L_75, L_76, ((int32_t)il2cpp_codegen_add(L_77, 1)), NULL);
			}

IL_01f6_1:
			{
				RuntimeObject* L_78 = V_6;
				NullCheck(L_78);
				bool L_79;
				L_79 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_78);
				if (L_79)
				{
					goto IL_01c5_1;
				}
			}
			{
				goto IL_021e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_021e:
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_80 = ___1_writer;
		NullCheck(L_80);
		JsonWriter_WriteObjectEnd_m7B1F539A650AC9AA9413B9C3FF1DAA27834141AF(L_80, NULL);
		return;
	}

IL_0225:
	{
		RuntimeObject* L_81 = ___0_obj;
		NullCheck(L_81);
		Type_t* L_82;
		L_82 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_81, NULL);
		V_9 = L_82;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_83 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___custom_exporters_table_3;
		Type_t* L_84 = V_9;
		NullCheck(L_83);
		bool L_85;
		L_85 = InterfaceFuncInvoker1< bool, Type_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::ContainsKey(TKey) */, IDictionary_2_t74600F66BA04DC423A37DB24919A3C9D56D75B43_il2cpp_TypeInfo_var, L_83, L_84);
		if (!L_85)
		{
			goto IL_0256;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_86 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___custom_exporters_table_3;
		Type_t* L_87 = V_9;
		NullCheck(L_86);
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_88;
		L_88 = InterfaceFuncInvoker1< ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A*, Type_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::get_Item(TKey) */, IDictionary_2_t74600F66BA04DC423A37DB24919A3C9D56D75B43_il2cpp_TypeInfo_var, L_86, L_87);
		V_10 = L_88;
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_89 = V_10;
		RuntimeObject* L_90 = ___0_obj;
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_91 = ___1_writer;
		NullCheck(L_89);
		ExporterFunc_Invoke_mE96AA8DA43B26B809D4D5D09A1A22966C81D2BDD_inline(L_89, L_90, L_91, NULL);
		return;
	}

IL_0256:
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_92 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___base_exporters_table_2;
		Type_t* L_93 = V_9;
		NullCheck(L_92);
		bool L_94;
		L_94 = InterfaceFuncInvoker1< bool, Type_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::ContainsKey(TKey) */, IDictionary_2_t74600F66BA04DC423A37DB24919A3C9D56D75B43_il2cpp_TypeInfo_var, L_92, L_93);
		if (!L_94)
		{
			goto IL_027f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_95 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___base_exporters_table_2;
		Type_t* L_96 = V_9;
		NullCheck(L_95);
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_97;
		L_97 = InterfaceFuncInvoker1< ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A*, Type_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::get_Item(TKey) */, IDictionary_2_t74600F66BA04DC423A37DB24919A3C9D56D75B43_il2cpp_TypeInfo_var, L_95, L_96);
		V_11 = L_97;
		ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* L_98 = V_11;
		RuntimeObject* L_99 = ___0_obj;
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_100 = ___1_writer;
		NullCheck(L_98);
		ExporterFunc_Invoke_mE96AA8DA43B26B809D4D5D09A1A22966C81D2BDD_inline(L_98, L_99, L_100, NULL);
		return;
	}

IL_027f:
	{
		RuntimeObject* L_101 = ___0_obj;
		if (!((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)IsInstClass((RuntimeObject*)L_101, Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var)))
		{
			goto IL_02e4;
		}
	}
	{
		Type_t* L_102 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		Type_t* L_103;
		L_103 = Enum_GetUnderlyingType_mEDDDC2C9F74ECC841E65E401C3703D59C37CBB05(L_102, NULL);
		V_12 = L_103;
		Type_t* L_104 = V_12;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_105 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_106;
		L_106 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_105, NULL);
		if ((((RuntimeObject*)(Type_t*)L_104) == ((RuntimeObject*)(Type_t*)L_106)))
		{
			goto IL_02c6;
		}
	}
	{
		Type_t* L_107 = V_12;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_108 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_109;
		L_109 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_108, NULL);
		if ((((RuntimeObject*)(Type_t*)L_107) == ((RuntimeObject*)(Type_t*)L_109)))
		{
			goto IL_02c6;
		}
	}
	{
		Type_t* L_110 = V_12;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_111 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_112;
		L_112 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_111, NULL);
		if ((!(((RuntimeObject*)(Type_t*)L_110) == ((RuntimeObject*)(Type_t*)L_112))))
		{
			goto IL_02d7;
		}
	}

IL_02c6:
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_113 = ___1_writer;
		RuntimeObject* L_114 = ___0_obj;
		NullCheck(L_113);
		JsonWriter_Write_mA2318C6CCFB4A565564457D435FF8EDEDB0F6EAB(L_113, ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_114, UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var)))), NULL);
		goto IL_02e3;
	}

IL_02d7:
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_115 = ___1_writer;
		RuntimeObject* L_116 = ___0_obj;
		NullCheck(L_115);
		JsonWriter_Write_m3A3246FEFCA9BCEB4F3E7D2D5AC0FF49B8BBD3A7(L_115, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_116, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))), NULL);
	}

IL_02e3:
	{
		return;
	}

IL_02e4:
	{
		Type_t* L_117 = V_9;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		JsonMapper_AddTypeProperties_m24B07F9D8AE8CE6C178AF8E6FD44BDF6A4A84389(L_117, NULL);
		RuntimeObject* L_118 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___type_properties_12;
		Type_t* L_119 = V_9;
		NullCheck(L_118);
		RuntimeObject* L_120;
		L_120 = InterfaceFuncInvoker1< RuntimeObject*, Type_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::get_Item(TKey) */, IDictionary_2_t02C6BF8BB03B58DD552B193E9CABACD0AF9CCFA4_il2cpp_TypeInfo_var, L_118, L_119);
		V_13 = L_120;
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_121 = ___1_writer;
		NullCheck(L_121);
		JsonWriter_WriteObjectStart_m90F3A0A19C03EA7CF90017768E3FA217E4038688(L_121, NULL);
		RuntimeObject* L_122 = V_13;
		NullCheck(L_122);
		RuntimeObject* L_123;
		L_123 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<LitJson.PropertyMetadata>::GetEnumerator() */, IEnumerable_1_tDFAB6A0EC1A6A40B5D759F32652B70BD609099EE_il2cpp_TypeInfo_var, L_122);
		V_14 = L_123;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03a5:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_124 = V_14;
					if (!L_124)
					{
						goto IL_03b3;
					}
				}
				{
					RuntimeObject* L_125 = V_14;
					NullCheck(L_125);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_125);
				}

IL_03b3:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0394_1;
			}

IL_030d_1:
			{
				RuntimeObject* L_126 = V_14;
				NullCheck(L_126);
				PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D L_127;
				L_127 = InterfaceFuncInvoker0< PropertyMetadata_t39488BB7A97631357ACA1E4409FA30D92DC4564D >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<LitJson.PropertyMetadata>::get_Current() */, IEnumerator_1_t05B5613D1899393C5D9EB2B8AE7E874C4C23ED6C_il2cpp_TypeInfo_var, L_126);
				V_15 = L_127;
				bool L_128 = (&V_15)->___IsField_1;
				if (!L_128)
				{
					goto IL_0355_1;
				}
			}
			{
				JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_129 = ___1_writer;
				MemberInfo_t* L_130 = (&V_15)->___Info_0;
				NullCheck(L_130);
				String_t* L_131;
				L_131 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_130);
				NullCheck(L_129);
				JsonWriter_WritePropertyName_m5646EF1771ABCFCCAAD52086AAE3387579E158E0(L_129, L_131, NULL);
				MemberInfo_t* L_132 = (&V_15)->___Info_0;
				RuntimeObject* L_133 = ___0_obj;
				NullCheck(((FieldInfo_t*)CastclassClass((RuntimeObject*)L_132, FieldInfo_t_il2cpp_TypeInfo_var)));
				RuntimeObject* L_134;
				L_134 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(25 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, ((FieldInfo_t*)CastclassClass((RuntimeObject*)L_132, FieldInfo_t_il2cpp_TypeInfo_var)), L_133);
				JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_135 = ___1_writer;
				bool L_136 = ___2_writer_is_private;
				int32_t L_137 = ___3_depth;
				il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
				JsonMapper_WriteValue_m143881E655EEAE7440BFE564E13A2580A021DBDE(L_134, L_135, L_136, ((int32_t)il2cpp_codegen_add(L_137, 1)), NULL);
				goto IL_0394_1;
			}

IL_0355_1:
			{
				MemberInfo_t* L_138 = (&V_15)->___Info_0;
				V_16 = ((PropertyInfo_t*)CastclassClass((RuntimeObject*)L_138, PropertyInfo_t_il2cpp_TypeInfo_var));
				PropertyInfo_t* L_139 = V_16;
				NullCheck(L_139);
				bool L_140;
				L_140 = VirtualFuncInvoker0< bool >::Invoke(18 /* System.Boolean System.Reflection.PropertyInfo::get_CanRead() */, L_139);
				if (!L_140)
				{
					goto IL_0394_1;
				}
			}
			{
				JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_141 = ___1_writer;
				MemberInfo_t* L_142 = (&V_15)->___Info_0;
				NullCheck(L_142);
				String_t* L_143;
				L_143 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_142);
				NullCheck(L_141);
				JsonWriter_WritePropertyName_m5646EF1771ABCFCCAAD52086AAE3387579E158E0(L_141, L_143, NULL);
				PropertyInfo_t* L_144 = V_16;
				RuntimeObject* L_145 = ___0_obj;
				NullCheck(L_144);
				RuntimeObject* L_146;
				L_146 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(24 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_144, L_145, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
				JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_147 = ___1_writer;
				bool L_148 = ___2_writer_is_private;
				int32_t L_149 = ___3_depth;
				il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
				JsonMapper_WriteValue_m143881E655EEAE7440BFE564E13A2580A021DBDE(L_146, L_147, L_148, ((int32_t)il2cpp_codegen_add(L_149, 1)), NULL);
			}

IL_0394_1:
			{
				RuntimeObject* L_150 = V_14;
				NullCheck(L_150);
				bool L_151;
				L_151 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_150);
				if (L_151)
				{
					goto IL_030d_1;
				}
			}
			{
				goto IL_03b4;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03b4:
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_152 = ___1_writer;
		NullCheck(L_152);
		JsonWriter_WriteObjectEnd_m7B1F539A650AC9AA9413B9C3FF1DAA27834141AF(L_152, NULL);
		return;
	}
}
// System.String LitJson.JsonMapper::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonMapper_ToJson_m47E09DCA4D412AB6D98769A2A5544C6D65155811 (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___static_writer_lock_15;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93(L_1, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{// begin finally (depth: 1)
				RuntimeObject* L_2 = V_0;
				Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
				JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_3 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___static_writer_14;
				NullCheck(L_3);
				JsonWriter_Reset_mCFA289C24C9ECEE98AD50E970F0D1F032F7E1989(L_3, NULL);
				RuntimeObject* L_4 = ___0_obj;
				JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_5 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___static_writer_14;
				JsonMapper_WriteValue_m143881E655EEAE7440BFE564E13A2580A021DBDE(L_4, L_5, (bool)1, 0, NULL);
				JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_6 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___static_writer_14;
				NullCheck(L_6);
				String_t* L_7;
				L_7 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
				V_1 = L_7;
				goto IL_003f;
			}
			{
				;// IL_0033: leave IL_003f

			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003f:
	{
		String_t* L_8 = V_1;
		return L_8;
	}
}
// System.Void LitJson.JsonMapper::ToJson(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_ToJson_m3FBB1723553372CD6BACDEB43C496AA7264BBA63 (RuntimeObject* ___0_obj, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___1_writer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_obj;
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_1 = ___1_writer;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		JsonMapper_WriteValue_m143881E655EEAE7440BFE564E13A2580A021DBDE(L_0, L_1, (bool)0, 0, NULL);
		return;
	}
}
// LitJson.JsonData LitJson.JsonMapper::ToObject(LitJson.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonData_t3C51D89A19D30A47A74617107D861959322307F1* JsonMapper_ToObject_m6A0C017074DC44C7B7EAA323071870B8EA987FA5 (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CToObjectU3Em__15_mC1C337655E42A4F849ACD7335C8271278B0A1542_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* L_0 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache26_38;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* L_1 = (WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD*)il2cpp_codegen_object_new(WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		WrapperFactory__ctor_mDCB80755422A0F810CF4702BBE931A9B4AE5C809(L_1, NULL, (intptr_t)((void*)JsonMapper_U3CToObjectU3Em__15_mC1C337655E42A4F849ACD7335C8271278B0A1542_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache26_38 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache26_38), (void*)L_1);
	}

IL_0018:
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* L_2 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache26_38;
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_3 = ___0_reader;
		RuntimeObject* L_4;
		L_4 = JsonMapper_ToWrapper_m28AEBBDAD4A1AC70073753BC264C59020323B8A1(L_2, L_3, NULL);
		return ((JsonData_t3C51D89A19D30A47A74617107D861959322307F1*)CastclassClass((RuntimeObject*)L_4, JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var));
	}
}
// LitJson.JsonData LitJson.JsonMapper::ToObject(System.IO.TextReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonData_t3C51D89A19D30A47A74617107D861959322307F1* JsonMapper_ToObject_m3F247D9F223246365382A07DA1BB60C14A177CAE (TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CToObjectU3Em__16_m8DA1098B91A6C53C80739287E9B586FEA13E4CC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* V_0 = NULL;
	{
		TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* L_0 = ___0_reader;
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_1 = (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD*)il2cpp_codegen_object_new(JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JsonReader__ctor_m796FB622ADB958C9EC9B9F937C12B72B6424DE3A(L_1, L_0, NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* L_2 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache27_39;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* L_3 = (WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD*)il2cpp_codegen_object_new(WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WrapperFactory__ctor_mDCB80755422A0F810CF4702BBE931A9B4AE5C809(L_3, NULL, (intptr_t)((void*)JsonMapper_U3CToObjectU3Em__16_m8DA1098B91A6C53C80739287E9B586FEA13E4CC0_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache27_39 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache27_39), (void*)L_3);
	}

IL_001f:
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* L_4 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache27_39;
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_5 = V_0;
		RuntimeObject* L_6;
		L_6 = JsonMapper_ToWrapper_m28AEBBDAD4A1AC70073753BC264C59020323B8A1(L_4, L_5, NULL);
		return ((JsonData_t3C51D89A19D30A47A74617107D861959322307F1*)CastclassClass((RuntimeObject*)L_6, JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var));
	}
}
// LitJson.JsonData LitJson.JsonMapper::ToObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonData_t3C51D89A19D30A47A74617107D861959322307F1* JsonMapper_ToObject_m4CE0C423373F28612B2140D6D1A3DCE4F9161FBA (String_t* ___0_json, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CToObjectU3Em__17_mBE9335E726649414F7F89885844EBCA138B6DCCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* L_0 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache28_40;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* L_1 = (WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD*)il2cpp_codegen_object_new(WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		WrapperFactory__ctor_mDCB80755422A0F810CF4702BBE931A9B4AE5C809(L_1, NULL, (intptr_t)((void*)JsonMapper_U3CToObjectU3Em__17_mBE9335E726649414F7F89885844EBCA138B6DCCF_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache28_40 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache28_40), (void*)L_1);
	}

IL_0018:
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* L_2 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache28_40;
		String_t* L_3 = ___0_json;
		RuntimeObject* L_4;
		L_4 = JsonMapper_ToWrapper_mA6DFAACCFE4197B6B71E3AB7B325EF9C5D0739E6(L_2, L_3, NULL);
		return ((JsonData_t3C51D89A19D30A47A74617107D861959322307F1*)CastclassClass((RuntimeObject*)L_4, JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var));
	}
}
// LitJson.IJsonWrapper LitJson.JsonMapper::ToWrapper(LitJson.WrapperFactory,LitJson.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_ToWrapper_m28AEBBDAD4A1AC70073753BC264C59020323B8A1 (WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* ___0_factory, JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* ___1_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* L_0 = ___0_factory;
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_1 = ___1_reader;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_2;
		L_2 = JsonMapper_ReadValue_m1E79EF3FC740E018A6C14D7D4A5D9FBE12239856(L_0, L_1, NULL);
		return L_2;
	}
}
// LitJson.IJsonWrapper LitJson.JsonMapper::ToWrapper(LitJson.WrapperFactory,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_ToWrapper_mA6DFAACCFE4197B6B71E3AB7B325EF9C5D0739E6 (WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* ___0_factory, String_t* ___1_json, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* V_0 = NULL;
	{
		String_t* L_0 = ___1_json;
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_1 = (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD*)il2cpp_codegen_object_new(JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JsonReader__ctor_mA7B3448630453E385BCAADCA985410AFFCE4ACC3(L_1, L_0, NULL);
		V_0 = L_1;
		WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* L_2 = ___0_factory;
		JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = JsonMapper_ReadValue_m1E79EF3FC740E018A6C14D7D4A5D9FBE12239856(L_2, L_3, NULL);
		return L_4;
	}
}
// System.Void LitJson.JsonMapper::UnregisterExporters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_UnregisterExporters_m8F552F5571351C749E0610D98C679CD8242D0443 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t3D10824E2D7EC716BB4188AE53FF69437B9FDED5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___custom_exporters_table_3;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Type,LitJson.ExporterFunc>>::Clear() */, ICollection_1_t3D10824E2D7EC716BB4188AE53FF69437B9FDED5_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void LitJson.JsonMapper::UnregisterImporters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_UnregisterImporters_m7FEEE56F8530938EC1FBE2AFB0846355E4E591B9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tD9AFA6DDEDB81906ED90E6DD2E1A6E8CB9A28A97_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___custom_importers_table_5;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>>::Clear() */, ICollection_1_tD9AFA6DDEDB81906ED90E6DD2E1A6E8CB9A28A97_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void LitJson.JsonMapper::ClearErrorStack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_ClearErrorStack_m6C0C5FF04D06B1234F1CCF90C288A8DB63FDB888 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___static_err_stack_16;
		NullCheck(L_0);
		List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_inline(L_0, List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		return;
	}
}
// System.String LitJson.JsonMapper::GetInterpretError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonMapper_GetInterpretError_mD486B670A9B3DA3E0846FF0A53ADE1206FA70774 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_0 = L_0;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___static_err_stack_16;
		NullCheck(L_1);
		Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 L_2;
		L_2 = List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D(L_1, List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7((&V_1), Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002b_1;
			}

IL_0016_1:
			{
				String_t* L_3;
				L_3 = Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline((&V_1), Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
				V_2 = L_3;
				String_t* L_4 = V_0;
				String_t* L_5 = V_2;
				String_t* L_6;
				L_6 = Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF(NULL);
				String_t* L_7;
				L_7 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_4, L_5, L_6, NULL);
				V_0 = L_7;
			}

IL_002b_1:
			{
				bool L_8;
				L_8 = Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED((&V_1), Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_0016_1;
				}
			}
			{
				goto IL_004a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004a:
	{
		String_t* L_9 = V_0;
		return L_9;
	}
}
// System.Boolean LitJson.JsonMapper::HasInterpretError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMapper_HasInterpretError_m88BF937DD42BC0512909304DBB338770CD9EA022 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___static_err_stack_16;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_0, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		return (bool)((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__0(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_U3CRegisterBaseExportersU3Em__0_mA532619A7EC7C9DEF4D6EB38B4DCFC147410C780 (RuntimeObject* ___0_obj, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___1_writer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_0 = ___1_writer;
		RuntimeObject* L_1 = ___0_obj;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Convert_ToInt32_mD8869793A34ED86D38EFDF4BFCDD8D03FBBCCAB6(((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var)))), NULL);
		NullCheck(L_0);
		JsonWriter_Write_m3A3246FEFCA9BCEB4F3E7D2D5AC0FF49B8BBD3A7(L_0, L_2, NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__1(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_U3CRegisterBaseExportersU3Em__1_m110FF8AA5363BCD46796FAD1F2D8FED836BFDDBF (RuntimeObject* ___0_obj, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___1_writer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_0 = ___1_writer;
		RuntimeObject* L_1 = ___0_obj;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Convert_ToString_m8270C8361D2796C5C4659D441829CAFEEFBAC91C(((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_1, Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var)))), NULL);
		NullCheck(L_0);
		JsonWriter_Write_mC6C394BE18186CAEB8597055057A1AECDEE56916(L_0, L_2, NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__2(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_U3CRegisterBaseExportersU3Em__2_m0FD239C7D31079CE0675AFB2A018A1FC3F43B011 (RuntimeObject* ___0_obj, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___1_writer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_0 = ___1_writer;
		RuntimeObject* L_1 = ___0_obj;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___datetime_format_1;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = Convert_ToString_m942B26CABBBFDCE9F1E647B15CA98F03D50976A0(((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox(L_1, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var)))), L_2, NULL);
		NullCheck(L_0);
		JsonWriter_Write_mC6C394BE18186CAEB8597055057A1AECDEE56916(L_0, L_3, NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__3(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_U3CRegisterBaseExportersU3Em__3_mA29C3028DA92212563CFE9D81330CF54DAB65B8B (RuntimeObject* ___0_obj, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___1_writer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_0 = ___1_writer;
		RuntimeObject* L_1 = ___0_obj;
		NullCheck(L_0);
		JsonWriter_Write_m2042A55B478D11A2C4BB399CE96C17DB3D85133A(L_0, ((*(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)((Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)UnBox(L_1, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var)))), NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__4(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_U3CRegisterBaseExportersU3Em__4_mCBDFEBE0258C9356C1344220ED444CE561296DAF (RuntimeObject* ___0_obj, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___1_writer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_0 = ___1_writer;
		RuntimeObject* L_1 = ___0_obj;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Convert_ToInt32_m9FD81A0DC7D2A34B74068ACA2F311270937DA2A2(((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_1, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var)))), NULL);
		NullCheck(L_0);
		JsonWriter_Write_m3A3246FEFCA9BCEB4F3E7D2D5AC0FF49B8BBD3A7(L_0, L_2, NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__5(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_U3CRegisterBaseExportersU3Em__5_mF9877906A7374E0EF585198C87932BA56E702E16 (RuntimeObject* ___0_obj, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___1_writer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_0 = ___1_writer;
		RuntimeObject* L_1 = ___0_obj;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Convert_ToInt32_m708CB4FF71A3D4E08CBAAF70F290D093BD80AFCC(((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_1, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var)))), NULL);
		NullCheck(L_0);
		JsonWriter_Write_m3A3246FEFCA9BCEB4F3E7D2D5AC0FF49B8BBD3A7(L_0, L_2, NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__6(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_U3CRegisterBaseExportersU3Em__6_m990DB5417D13B4039F5ECF7EE748C4A26358B8CD (RuntimeObject* ___0_obj, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___1_writer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_0 = ___1_writer;
		RuntimeObject* L_1 = ___0_obj;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Convert_ToInt32_m350A3CBA3E031A3D53D14062D7E4ABB4A33F5438(((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_1, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var)))), NULL);
		NullCheck(L_0);
		JsonWriter_Write_m3A3246FEFCA9BCEB4F3E7D2D5AC0FF49B8BBD3A7(L_0, L_2, NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__7(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_U3CRegisterBaseExportersU3Em__7_mCADDB28F9A068F794CFFCA92C11FEAB6789505F4 (RuntimeObject* ___0_obj, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___1_writer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_0 = ___1_writer;
		RuntimeObject* L_1 = ___0_obj;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint64_t L_2;
		L_2 = Convert_ToUInt64_m91C774E0D3AA8368D12AB8E2036E823C4FA9CB92(((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_1, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)))), NULL);
		NullCheck(L_0);
		JsonWriter_Write_mA2318C6CCFB4A565564457D435FF8EDEDB0F6EAB(L_0, L_2, NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__8(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_U3CRegisterBaseExportersU3Em__8_mDA9844C013501A93EB4D8E6EAEE1F16FF13A6575 (RuntimeObject* ___0_obj, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___1_writer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* L_0 = ___1_writer;
		RuntimeObject* L_1 = ___0_obj;
		NullCheck(L_0);
		JsonWriter_Write_mA2318C6CCFB4A565564457D435FF8EDEDB0F6EAB(L_0, ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_1, UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var)))), NULL);
		return;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__9(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_U3CRegisterBaseImportersU3Em__9_mAA0E4C56A03D5340767AF319EF2E3A1FAEF97E83 (RuntimeObject* ___0_input, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_input;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint8_t L_1;
		L_1 = Convert_ToByte_mB200A29D6E5CE42D564544DF1DC8852BF3582833(((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_0, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))), NULL);
		uint8_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__A(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_U3CRegisterBaseImportersU3Em__A_mA1F5749E268B8573AE59CA4AFDA294E06C5B495D (RuntimeObject* ___0_input, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_input;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint64_t L_1;
		L_1 = Convert_ToUInt64_m53C3A45C87A06F25957619222B04EABFD214373C(((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_0, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))), NULL);
		uint64_t L_2 = L_1;
		RuntimeObject* L_3 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__B(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_U3CRegisterBaseImportersU3Em__B_m3ADD4F61880F2DBF16970403F0C4AB6D0CA5C866 (RuntimeObject* ___0_input, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_input;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int8_t L_1;
		L_1 = Convert_ToSByte_mA336C42E413A5559B3F47FCD8B45EDB538693E63(((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_0, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))), NULL);
		int8_t L_2 = L_1;
		RuntimeObject* L_3 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__C(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_U3CRegisterBaseImportersU3Em__C_m8F5FA54FC18A79A77BD4A8063E6EFDD101FBE7A9 (RuntimeObject* ___0_input, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_input;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int16_t L_1;
		L_1 = Convert_ToInt16_mF65D8227B8B6F0E30A135BC5F01F1562455AD382(((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_0, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))), NULL);
		int16_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__D(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_U3CRegisterBaseImportersU3Em__D_m82DF7F475A2E0DA9EB74C493C41475475EC56DF7 (RuntimeObject* ___0_input, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_input;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint16_t L_1;
		L_1 = Convert_ToUInt16_mA3ABC9268BA473D6F1C7801248D3200734180B2B(((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_0, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))), NULL);
		uint16_t L_2 = L_1;
		RuntimeObject* L_3 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__E(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_U3CRegisterBaseImportersU3Em__E_mFF7D39CF1F9C6539031853BF7282E96823BFDD6F (RuntimeObject* ___0_input, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_input;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint32_t L_1;
		L_1 = Convert_ToUInt32_m3BD840FA8B5073EDD04AD3D3A044785EB00511A3(((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_0, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))), NULL);
		uint32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__F(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_U3CRegisterBaseImportersU3Em__F_mBD6BB1B68A7163693A2F8207F22CA0E9DBD1CDB3 (RuntimeObject* ___0_input, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_input;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Convert_ToSingle_mE54B145DE1F8A182C3D1A66AEF3A95CB399C28CE(((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_0, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))), NULL);
		float L_2 = L_1;
		RuntimeObject* L_3 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__10(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_U3CRegisterBaseImportersU3Em__10_m373921C4F987CB8342108CA7B892AFC9359FEA94 (RuntimeObject* ___0_input, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_input;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = Convert_ToDouble_m21A92C91FFDA003BD27748AA55CA0A7D6C0E6694(((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_0, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))), NULL);
		double L_2 = L_1;
		RuntimeObject* L_3 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__11(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_U3CRegisterBaseImportersU3Em__11_m3DB56AA4D337205711CC07D354E67D28C1C1C586 (RuntimeObject* ___0_input, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_input;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_1;
		L_1 = Convert_ToDecimal_mAF1D2181BB8C5D3F25C0963245437B4AF4E6C575(((*(double*)((double*)(double*)UnBox(L_0, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var)))), NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_2 = L_1;
		RuntimeObject* L_3 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__12(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_U3CRegisterBaseImportersU3Em__12_m31F2706B1EDA98CF528C80328ACB64DBF7A3B95D (RuntimeObject* ___0_input, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_input;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint32_t L_1;
		L_1 = Convert_ToUInt32_m8754C042D71DB6C81EB54D85B73B7EC2710E4FA0(((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_0, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var)))), NULL);
		uint32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__13(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_U3CRegisterBaseImportersU3Em__13_m881B1EBE03FFD1ECAAEAD3FB23ACA14D2F639B07 (RuntimeObject* ___0_input, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_input;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Il2CppChar L_1;
		L_1 = Convert_ToChar_m1F2BBA9AD900A2570DE55F3E315BA7D9277E8230(((String_t*)CastclassSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)), NULL);
		Il2CppChar L_2 = L_1;
		RuntimeObject* L_3 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__14(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_U3CRegisterBaseImportersU3Em__14_mDD8CDBB9BBD6B45989EDBA945F727DE509618E2C (RuntimeObject* ___0_input, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_input;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var))->___datetime_format_1;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2;
		L_2 = Convert_ToDateTime_mA5FF0ECBE84ECB78B337E4E101423CC9AA95C8C3(((String_t*)CastclassSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)), L_1, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_3 = L_2;
		RuntimeObject* L_4 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}
}
// LitJson.IJsonWrapper LitJson.JsonMapper::<ToObject>m__15()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_U3CToObjectU3Em__15_mC1C337655E42A4F849ACD7335C8271278B0A1542 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_0 = (JsonData_t3C51D89A19D30A47A74617107D861959322307F1*)il2cpp_codegen_object_new(JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JsonData__ctor_m6811B52CF3A742B6E425A0C8C02A7F475EC70C22(L_0, NULL);
		return L_0;
	}
}
// LitJson.IJsonWrapper LitJson.JsonMapper::<ToObject>m__16()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_U3CToObjectU3Em__16_m8DA1098B91A6C53C80739287E9B586FEA13E4CC0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_0 = (JsonData_t3C51D89A19D30A47A74617107D861959322307F1*)il2cpp_codegen_object_new(JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JsonData__ctor_m6811B52CF3A742B6E425A0C8C02A7F475EC70C22(L_0, NULL);
		return L_0;
	}
}
// LitJson.IJsonWrapper LitJson.JsonMapper::<ToObject>m__17()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_U3CToObjectU3Em__17_mBE9335E726649414F7F89885844EBCA138B6DCCF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonData_t3C51D89A19D30A47A74617107D861959322307F1* L_0 = (JsonData_t3C51D89A19D30A47A74617107D861959322307F1*)il2cpp_codegen_object_new(JsonData_t3C51D89A19D30A47A74617107D861959322307F1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JsonData__ctor_m6811B52CF3A742B6E425A0C8C02A7F475EC70C22(L_0, NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LitJson.JsonReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader__ctor_mA7B3448630453E385BCAADCA985410AFFCE4ACC3 (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* __this, String_t* ___0_json_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_json_text;
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_1 = (StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8*)il2cpp_codegen_object_new(StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringReader__ctor_m72556EC1062F49E05CF41B0825AC7FA2DB2A81C0(L_1, L_0, NULL);
		JsonReader__ctor_mDC4C842CE01B549E193647B6BFEE5420187C446A(__this, L_1, (bool)1, NULL);
		return;
	}
}
// System.Void LitJson.JsonReader::.ctor(System.IO.TextReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader__ctor_m796FB622ADB958C9EC9B9F937C12B72B6424DE3A (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* __this, TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___0_reader, const RuntimeMethod* method) 
{
	{
		TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* L_0 = ___0_reader;
		JsonReader__ctor_mDC4C842CE01B549E193647B6BFEE5420187C446A(__this, L_0, (bool)0, NULL);
		return;
	}
}
// System.Void LitJson.JsonReader::.ctor(System.IO.TextReader,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader__ctor_mDC4C842CE01B549E193647B6BFEE5420187C446A (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* __this, TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___0_reader, bool ___1_owned, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_mF63AE96E8925749CDACE05B89002A389DDD748D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* L_0 = ___0_reader;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECAC83771A00C701043A940F621CC1C765D30D31)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonReader__ctor_mDC4C842CE01B549E193647B6BFEE5420187C446A_RuntimeMethod_var)));
	}

IL_0017:
	{
		__this->___parser_in_string_7 = (bool)0;
		__this->___parser_return_8 = (bool)0;
		__this->___read_started_9 = (bool)0;
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_2 = (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6*)il2cpp_codegen_object_new(Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Stack_1__ctor_mF63AE96E8925749CDACE05B89002A389DDD748D1(L_2, Stack_1__ctor_mF63AE96E8925749CDACE05B89002A389DDD748D1_RuntimeMethod_var);
		__this->___automaton_stack_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___automaton_stack_1), (void*)L_2);
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_3 = __this->___automaton_stack_1;
		NullCheck(L_3);
		Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA(L_3, ((int32_t)65553), Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_RuntimeMethod_var);
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_4 = __this->___automaton_stack_1;
		NullCheck(L_4);
		Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA(L_4, ((int32_t)65543), Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_RuntimeMethod_var);
		TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* L_5 = ___0_reader;
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_6 = (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9*)il2cpp_codegen_object_new(Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Lexer__ctor_mEF8BD28E77BCC5B98C34C9CE51CD2DCF786CA5A9(L_6, L_5, NULL);
		__this->___lexer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lexer_6), (void*)L_6);
		__this->___end_of_input_5 = (bool)0;
		__this->___end_of_json_4 = (bool)0;
		TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* L_7 = ___0_reader;
		__this->___reader_10 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reader_10), (void*)L_7);
		bool L_8 = ___1_owned;
		__this->___reader_is_owned_11 = L_8;
		return;
	}
}
// System.Void LitJson.JsonReader::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader__cctor_mA3D3F44D91D95EE86E0813A91391537E68F2EF5E (const RuntimeMethod* method) 
{
	{
		JsonReader_PopulateParseTable_mCC3169C58AC1DD19682E113FF9AD2F71BF95980C(NULL);
		return;
	}
}
// System.Boolean LitJson.JsonReader::get_AllowComments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonReader_get_AllowComments_mC545DEA4DEF8BD93D5697DB9AFDEE65AE4EFA6F6 (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* __this, const RuntimeMethod* method) 
{
	{
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_0 = __this->___lexer_6;
		NullCheck(L_0);
		bool L_1;
		L_1 = Lexer_get_AllowComments_m0810E49622D9958F3C841466EEE6A9695B09F8AB_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void LitJson.JsonReader::set_AllowComments(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_set_AllowComments_m33ED48F247F6DA42BA8A583170D31BA4C51C30E4 (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_0 = __this->___lexer_6;
		bool L_1 = ___0_value;
		NullCheck(L_0);
		Lexer_set_AllowComments_mD446284CCEBEE8C862E32DCC4C3503D0BA8AF25A_inline(L_0, L_1, NULL);
		return;
	}
}
// System.Boolean LitJson.JsonReader::get_AllowSingleQuotedStrings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonReader_get_AllowSingleQuotedStrings_mEDC14EF3B3F603B0C152CAFFD5BFFC8CF0BEE8C6 (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* __this, const RuntimeMethod* method) 
{
	{
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_0 = __this->___lexer_6;
		NullCheck(L_0);
		bool L_1;
		L_1 = Lexer_get_AllowSingleQuotedStrings_m1A632DD60FDED6764AEF678AA716DDB98103A763_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void LitJson.JsonReader::set_AllowSingleQuotedStrings(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_set_AllowSingleQuotedStrings_mA3BC7969C81E0D65C419DA9986921287B19A368D (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_0 = __this->___lexer_6;
		bool L_1 = ___0_value;
		NullCheck(L_0);
		Lexer_set_AllowSingleQuotedStrings_mA18FE918B277D75318D4DB37638C04173C05A305_inline(L_0, L_1, NULL);
		return;
	}
}
// System.Boolean LitJson.JsonReader::get_EndOfInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonReader_get_EndOfInput_m95CB8B1F42A424E1A08288A8DA2DD93B6386C2CE (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___end_of_input_5;
		return L_0;
	}
}
// System.Boolean LitJson.JsonReader::get_EndOfJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonReader_get_EndOfJson_m22A0E4F711E833BFD49D80CC442191260EAAB13C (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___end_of_json_4;
		return L_0;
	}
}
// LitJson.JsonToken LitJson.JsonReader::get_Token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonReader_get_Token_m519B39A4B87C3A9A7B424AECAE7FDA64B946E975 (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___token_13;
		return L_0;
	}
}
// System.Object LitJson.JsonReader::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonReader_get_Value_mF219BCB43B2F020C1B67935AA63A40ECD1EE4C05 (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___token_value_12;
		return L_0;
	}
}
// System.Void LitJson.JsonReader::PopulateParseTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_PopulateParseTable_mCC3169C58AC1DD19682E113FF9AD2F71BF95980C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mF37C098D396E6388CF354D6F37970685A85B6FC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t403ABC2FA2D9740F9ADD28DB8815C00EE2DB4249_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3EU7B18f18ac2U2Df585U2D405aU2Dac91U2Dbcb41785a078U7D_tACFC88B052112E097360D2A31C5DC6CFC2372D2C____U24fieldU2D0_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3EU7B18f18ac2U2Df585U2D405aU2Dac91U2Dbcb41785a078U7D_tACFC88B052112E097360D2A31C5DC6CFC2372D2C____U24fieldU2D1_1_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3EU7B18f18ac2U2Df585U2D405aU2Dac91U2Dbcb41785a078U7D_tACFC88B052112E097360D2A31C5DC6CFC2372D2C____U24fieldU2D2_2_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3EU7B18f18ac2U2Df585U2D405aU2Dac91U2Dbcb41785a078U7D_tACFC88B052112E097360D2A31C5DC6CFC2372D2C____U24fieldU2D3_3_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3EU7B18f18ac2U2Df585U2D405aU2Dac91U2Dbcb41785a078U7D_tACFC88B052112E097360D2A31C5DC6CFC2372D2C____U24fieldU2D4_4_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3EU7B18f18ac2U2Df585U2D405aU2Dac91U2Dbcb41785a078U7D_tACFC88B052112E097360D2A31C5DC6CFC2372D2C____U24fieldU2D5_5_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3EU7B18f18ac2U2Df585U2D405aU2Dac91U2Dbcb41785a078U7D_tACFC88B052112E097360D2A31C5DC6CFC2372D2C____U24fieldU2D6_6_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3EU7B18f18ac2U2Df585U2D405aU2Dac91U2Dbcb41785a078U7D_tACFC88B052112E097360D2A31C5DC6CFC2372D2C____U24fieldU2D7_7_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3EU7B18f18ac2U2Df585U2D405aU2Dac91U2Dbcb41785a078U7D_tACFC88B052112E097360D2A31C5DC6CFC2372D2C____U24fieldU2D8_8_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3EU7B18f18ac2U2Df585U2D405aU2Dac91U2Dbcb41785a078U7D_tACFC88B052112E097360D2A31C5DC6CFC2372D2C____U24fieldU2D9_9_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3EU7B18f18ac2U2Df585U2D405aU2Dac91U2Dbcb41785a078U7D_tACFC88B052112E097360D2A31C5DC6CFC2372D2C____U24fieldU2DA_10_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3EU7B18f18ac2U2Df585U2D405aU2Dac91U2Dbcb41785a078U7D_tACFC88B052112E097360D2A31C5DC6CFC2372D2C____U24fieldU2DB_11_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t403ABC2FA2D9740F9ADD28DB8815C00EE2DB4249* L_0 = (Dictionary_2_t403ABC2FA2D9740F9ADD28DB8815C00EE2DB4249*)il2cpp_codegen_object_new(Dictionary_2_t403ABC2FA2D9740F9ADD28DB8815C00EE2DB4249_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mF37C098D396E6388CF354D6F37970685A85B6FC0(L_0, Dictionary_2__ctor_mF37C098D396E6388CF354D6F37970685A85B6FC0_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD_il2cpp_TypeInfo_var);
		((JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD_il2cpp_TypeInfo_var))->___parse_table_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD_il2cpp_TypeInfo_var))->___parse_table_0), (void*)L_0);
		JsonReader_TableAddRow_m22740E32484278985D3C41B39D5BE6CFD7EFBE1F(((int32_t)65548), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)91));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = L_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)65549));
		JsonReader_TableAddCol_m4A0AD9C37635A1C83AF78E463F603162DB292700(((int32_t)65548), ((int32_t)91), L_3, NULL);
		JsonReader_TableAddRow_m22740E32484278985D3C41B39D5BE6CFD7EFBE1F(((int32_t)65549), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_6 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B18f18ac2U2Df585U2D405aU2Dac91U2Dbcb41785a078U7D_tACFC88B052112E097360D2A31C5DC6CFC2372D2C____U24fieldU2D0_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_5, L_6, NULL);
		JsonReader_TableAddCol_m4A0AD9C37635A1C83AF78E463F603162DB292700(((int32_t)65549), ((int32_t)34), L_5, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = L_7;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_9 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B18f18ac2U2Df585U2D405aU2Dac91U2Dbcb41785a078U7D_tACFC88B052112E097360D2A31C5DC6CFC2372D2C____U24fieldU2D1_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_8, L_9, NULL);
		JsonReader_TableAddCol_m4A0AD9C37635A1C83AF78E463F603162DB292700(((int32_t)65549), ((int32_t)91), L_8, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = L_10;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)93));
		JsonReader_TableAddCol_m4A0AD9C37635A1C83AF78E463F603162DB292700(((int32_t)65549), ((int32_t)93), L_11, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = L_12;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_14 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B18f18ac2U2Df585U2D405aU2Dac91U2Dbcb41785a078U7D_tACFC88B052112E097360D2A31C5DC6CFC2372D2C____U24fieldU2D2_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_13, L_14, NULL);
		JsonReader_TableAddCol_m4A0AD9C37635A1C83AF78E463F603162DB292700(((int32_t)65549), ((int32_t)123), L_13, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = L_15;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_17 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B18f18ac2U2Df585U2D405aU2Dac91U2Dbcb41785a078U7D_tACFC88B052112E097360D2A31C5DC6CFC2372D2C____U24fieldU2D3_3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_16, L_17, NULL);
		JsonReader_TableAddCol_m4A0AD9C37635A1C83AF78E463F603162DB292700(((int32_t)65549), ((int32_t)65537), L_16, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = L_18;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_20 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B18f18ac2U2Df585U2D405aU2Dac91U2Dbcb41785a078U7D_tACFC88B052112E097360D2A31C5DC6CFC2372D2C____U24fieldU2D4_4_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_19, L_20, NULL);
		JsonReader_TableAddCol_m4A0AD9C37635A1C83AF78E463F603162DB292700(((int32_t)65549), ((int32_t)65538), L_19, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = L_21;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_23 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B18f18ac2U2Df585U2D405aU2Dac91U2Dbcb41785a078U7D_tACFC88B052112E097360D2A31C5DC6CFC2372D2C____U24fieldU2D5_5_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_22, L_23, NULL);
		JsonReader_TableAddCol_m4A0AD9C37635A1C83AF78E463F603162DB292700(((int32_t)65549), ((int32_t)65539), L_22, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = L_24;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_26 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B18f18ac2U2Df585U2D405aU2Dac91U2Dbcb41785a078U7D_tACFC88B052112E097360D2A31C5DC6CFC2372D2C____U24fieldU2D6_6_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_25, L_26, NULL);
		JsonReader_TableAddCol_m4A0AD9C37635A1C83AF78E463F603162DB292700(((int32_t)65549), ((int32_t)65540), L_25, NULL);
		JsonReader_TableAddRow_m22740E32484278985D3C41B39D5BE6CFD7EFBE1F(((int32_t)65544), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = L_27;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)123));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = L_28;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)65545));
		JsonReader_TableAddCol_m4A0AD9C37635A1C83AF78E463F603162DB292700(((int32_t)65544), ((int32_t)123), L_29, NULL);
		JsonReader_TableAddRow_m22740E32484278985D3C41B39D5BE6CFD7EFBE1F(((int32_t)65545), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = L_30;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_32 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B18f18ac2U2Df585U2D405aU2Dac91U2Dbcb41785a078U7D_tACFC88B052112E097360D2A31C5DC6CFC2372D2C____U24fieldU2D7_7_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_31, L_32, NULL);
		JsonReader_TableAddCol_m4A0AD9C37635A1C83AF78E463F603162DB292700(((int32_t)65545), ((int32_t)34), L_31, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = L_33;
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)125));
		JsonReader_TableAddCol_m4A0AD9C37635A1C83AF78E463F603162DB292700(((int32_t)65545), ((int32_t)125), L_34, NULL);
		JsonReader_TableAddRow_m22740E32484278985D3C41B39D5BE6CFD7EFBE1F(((int32_t)65546), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = L_35;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_37 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B18f18ac2U2Df585U2D405aU2Dac91U2Dbcb41785a078U7D_tACFC88B052112E097360D2A31C5DC6CFC2372D2C____U24fieldU2D8_8_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_36, L_37, NULL);
		JsonReader_TableAddCol_m4A0AD9C37635A1C83AF78E463F603162DB292700(((int32_t)65546), ((int32_t)34), L_36, NULL);
		JsonReader_TableAddRow_m22740E32484278985D3C41B39D5BE6CFD7EFBE1F(((int32_t)65547), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = L_38;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_40 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B18f18ac2U2Df585U2D405aU2Dac91U2Dbcb41785a078U7D_tACFC88B052112E097360D2A31C5DC6CFC2372D2C____U24fieldU2D9_9_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_39, L_40, NULL);
		JsonReader_TableAddCol_m4A0AD9C37635A1C83AF78E463F603162DB292700(((int32_t)65547), ((int32_t)44), L_39, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = L_41;
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65554));
		JsonReader_TableAddCol_m4A0AD9C37635A1C83AF78E463F603162DB292700(((int32_t)65547), ((int32_t)125), L_42, NULL);
		JsonReader_TableAddRow_m22740E32484278985D3C41B39D5BE6CFD7EFBE1F(((int32_t)65552), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_44 = L_43;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_45 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B18f18ac2U2Df585U2D405aU2Dac91U2Dbcb41785a078U7D_tACFC88B052112E097360D2A31C5DC6CFC2372D2C____U24fieldU2DA_10_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_44, L_45, NULL);
		JsonReader_TableAddCol_m4A0AD9C37635A1C83AF78E463F603162DB292700(((int32_t)65552), ((int32_t)34), L_44, NULL);
		JsonReader_TableAddRow_m22740E32484278985D3C41B39D5BE6CFD7EFBE1F(((int32_t)65543), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_47 = L_46;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65548));
		JsonReader_TableAddCol_m4A0AD9C37635A1C83AF78E463F603162DB292700(((int32_t)65543), ((int32_t)91), L_47, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_48 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = L_48;
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65544));
		JsonReader_TableAddCol_m4A0AD9C37635A1C83AF78E463F603162DB292700(((int32_t)65543), ((int32_t)123), L_49, NULL);
		JsonReader_TableAddRow_m22740E32484278985D3C41B39D5BE6CFD7EFBE1F(((int32_t)65550), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_50 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_51 = L_50;
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65552));
		JsonReader_TableAddCol_m4A0AD9C37635A1C83AF78E463F603162DB292700(((int32_t)65550), ((int32_t)34), L_51, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_52 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = L_52;
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65548));
		JsonReader_TableAddCol_m4A0AD9C37635A1C83AF78E463F603162DB292700(((int32_t)65550), ((int32_t)91), L_53, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = L_54;
		NullCheck(L_55);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65544));
		JsonReader_TableAddCol_m4A0AD9C37635A1C83AF78E463F603162DB292700(((int32_t)65550), ((int32_t)123), L_55, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = L_56;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65537));
		JsonReader_TableAddCol_m4A0AD9C37635A1C83AF78E463F603162DB292700(((int32_t)65550), ((int32_t)65537), L_57, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_59 = L_58;
		NullCheck(L_59);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65538));
		JsonReader_TableAddCol_m4A0AD9C37635A1C83AF78E463F603162DB292700(((int32_t)65550), ((int32_t)65538), L_59, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_61 = L_60;
		NullCheck(L_61);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65539));
		JsonReader_TableAddCol_m4A0AD9C37635A1C83AF78E463F603162DB292700(((int32_t)65550), ((int32_t)65539), L_61, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_62 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_63 = L_62;
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65540));
		JsonReader_TableAddCol_m4A0AD9C37635A1C83AF78E463F603162DB292700(((int32_t)65550), ((int32_t)65540), L_63, NULL);
		JsonReader_TableAddRow_m22740E32484278985D3C41B39D5BE6CFD7EFBE1F(((int32_t)65551), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_64 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_65 = L_64;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_66 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B18f18ac2U2Df585U2D405aU2Dac91U2Dbcb41785a078U7D_tACFC88B052112E097360D2A31C5DC6CFC2372D2C____U24fieldU2DB_11_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_65, L_66, NULL);
		JsonReader_TableAddCol_m4A0AD9C37635A1C83AF78E463F603162DB292700(((int32_t)65551), ((int32_t)44), L_65, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_67 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_68 = L_67;
		NullCheck(L_68);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65554));
		JsonReader_TableAddCol_m4A0AD9C37635A1C83AF78E463F603162DB292700(((int32_t)65551), ((int32_t)93), L_68, NULL);
		return;
	}
}
// System.Void LitJson.JsonReader::TableAddCol(LitJson.ParserToken,System.Int32,System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_TableAddCol_m4A0AD9C37635A1C83AF78E463F603162DB292700 (int32_t ___0_row, int32_t ___1_col, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_symbols, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t9503DE0744217071D554CC415B2890C454070024_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tAD4D3CC9C1631510439F3806F67FAA90CE4C4313_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD_il2cpp_TypeInfo_var))->___parse_table_0;
		int32_t L_1 = ___0_row;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::get_Item(TKey) */, IDictionary_2_t9503DE0744217071D554CC415B2890C454070024_il2cpp_TypeInfo_var, L_0, L_1);
		int32_t L_3 = ___1_col;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ___2_symbols;
		NullCheck(L_2);
		InterfaceActionInvoker2< int32_t, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>::Add(TKey,TValue) */, IDictionary_2_tAD4D3CC9C1631510439F3806F67FAA90CE4C4313_il2cpp_TypeInfo_var, L_2, L_3, L_4);
		return;
	}
}
// System.Void LitJson.JsonReader::TableAddRow(LitJson.ParserToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_TableAddRow_m22740E32484278985D3C41B39D5BE6CFD7EFBE1F (int32_t ___0_rule, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3F530E7CD9CC3EB97DCC6E1669EAB9FCE984FA9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t9503DE0744217071D554CC415B2890C454070024_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD_il2cpp_TypeInfo_var))->___parse_table_0;
		int32_t L_1 = ___0_rule;
		Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9* L_2 = (Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9*)il2cpp_codegen_object_new(Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m3F530E7CD9CC3EB97DCC6E1669EAB9FCE984FA9A(L_2, Dictionary_2__ctor_m3F530E7CD9CC3EB97DCC6E1669EAB9FCE984FA9A_RuntimeMethod_var);
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, RuntimeObject* >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::Add(TKey,TValue) */, IDictionary_2_t9503DE0744217071D554CC415B2890C454070024_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Void LitJson.JsonReader::ProcessNumber(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_ProcessNumber_mF3EF4D91F87594C1D6357FDE08D539DDB66A624D (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* __this, String_t* ___0_number, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	{
		String_t* L_0 = ___0_number;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_0, ((int32_t)46), NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_002a;
		}
	}
	{
		String_t* L_2 = ___0_number;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_2, ((int32_t)101), NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_002a;
		}
	}
	{
		String_t* L_4 = ___0_number;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_4, ((int32_t)69), NULL);
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_004b;
		}
	}

IL_002a:
	{
		String_t* L_6 = ___0_number;
		bool L_7;
		L_7 = Double_TryParse_m60AD55BC181D70F661BC2A2294E66B5466C3C018(L_6, (&V_0), NULL);
		if (!L_7)
		{
			goto IL_004b;
		}
	}
	{
		__this->___token_13 = 8;
		double L_8 = V_0;
		double L_9 = L_8;
		RuntimeObject* L_10 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_9);
		__this->___token_value_12 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___token_value_12), (void*)L_10);
		return;
	}

IL_004b:
	{
		String_t* L_11 = ___0_number;
		bool L_12;
		L_12 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_11, (&V_1), NULL);
		if (!L_12)
		{
			goto IL_006c;
		}
	}
	{
		__this->___token_13 = 6;
		int32_t L_13 = V_1;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		__this->___token_value_12 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___token_value_12), (void*)L_15);
		return;
	}

IL_006c:
	{
		String_t* L_16 = ___0_number;
		bool L_17;
		L_17 = Int64_TryParse_m3FC0128C89CC2331239FC2A0A749BF33455F03D2(L_16, (&V_2), NULL);
		if (!L_17)
		{
			goto IL_008d;
		}
	}
	{
		__this->___token_13 = 7;
		int64_t L_18 = V_2;
		int64_t L_19 = L_18;
		RuntimeObject* L_20 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_19);
		__this->___token_value_12 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___token_value_12), (void*)L_20);
		return;
	}

IL_008d:
	{
		__this->___token_13 = 6;
		int32_t L_21 = 0;
		RuntimeObject* L_22 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_21);
		__this->___token_value_12 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___token_value_12), (void*)L_22);
		return;
	}
}
// System.Void LitJson.JsonReader::ProcessSymbol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_ProcessSymbol_m0E855A59E8E386619529E923A6A9BABFEE63769C (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->___current_symbol_3;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)91)))))
		{
			goto IL_0020;
		}
	}
	{
		__this->___token_13 = 4;
		__this->___parser_return_8 = (bool)1;
		goto IL_01b8;
	}

IL_0020:
	{
		int32_t L_1 = __this->___current_symbol_3;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)93)))))
		{
			goto IL_0040;
		}
	}
	{
		__this->___token_13 = 5;
		__this->___parser_return_8 = (bool)1;
		goto IL_01b8;
	}

IL_0040:
	{
		int32_t L_2 = __this->___current_symbol_3;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)123)))))
		{
			goto IL_0060;
		}
	}
	{
		__this->___token_13 = 1;
		__this->___parser_return_8 = (bool)1;
		goto IL_01b8;
	}

IL_0060:
	{
		int32_t L_3 = __this->___current_symbol_3;
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)125)))))
		{
			goto IL_0080;
		}
	}
	{
		__this->___token_13 = 3;
		__this->___parser_return_8 = (bool)1;
		goto IL_01b8;
	}

IL_0080:
	{
		int32_t L_4 = __this->___current_symbol_3;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_00ca;
		}
	}
	{
		bool L_5 = __this->___parser_in_string_7;
		if (!L_5)
		{
			goto IL_00ab;
		}
	}
	{
		__this->___parser_in_string_7 = (bool)0;
		__this->___parser_return_8 = (bool)1;
		goto IL_00c5;
	}

IL_00ab:
	{
		int32_t L_6 = __this->___token_13;
		if (L_6)
		{
			goto IL_00be;
		}
	}
	{
		__this->___token_13 = ((int32_t)9);
	}

IL_00be:
	{
		__this->___parser_in_string_7 = (bool)1;
	}

IL_00c5:
	{
		goto IL_01b8;
	}

IL_00ca:
	{
		int32_t L_7 = __this->___current_symbol_3;
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)65541)))))
		{
			goto IL_00f0;
		}
	}
	{
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_8 = __this->___lexer_6;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Lexer_get_StringValue_mE4230649FF6DC2B66F9FAA021BB30FC8B7EBA5FF_inline(L_8, NULL);
		__this->___token_value_12 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___token_value_12), (void*)L_9);
		goto IL_01b8;
	}

IL_00f0:
	{
		int32_t L_10 = __this->___current_symbol_3;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)65539)))))
		{
			goto IL_0120;
		}
	}
	{
		__this->___token_13 = ((int32_t)10);
		bool L_11 = ((bool)0);
		RuntimeObject* L_12 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_11);
		__this->___token_value_12 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___token_value_12), (void*)L_12);
		__this->___parser_return_8 = (bool)1;
		goto IL_01b8;
	}

IL_0120:
	{
		int32_t L_13 = __this->___current_symbol_3;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)65540)))))
		{
			goto IL_0144;
		}
	}
	{
		__this->___token_13 = ((int32_t)11);
		__this->___parser_return_8 = (bool)1;
		goto IL_01b8;
	}

IL_0144:
	{
		int32_t L_14 = __this->___current_symbol_3;
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)65537)))))
		{
			goto IL_0171;
		}
	}
	{
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_15 = __this->___lexer_6;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = Lexer_get_StringValue_mE4230649FF6DC2B66F9FAA021BB30FC8B7EBA5FF_inline(L_15, NULL);
		JsonReader_ProcessNumber_mF3EF4D91F87594C1D6357FDE08D539DDB66A624D(__this, L_16, NULL);
		__this->___parser_return_8 = (bool)1;
		goto IL_01b8;
	}

IL_0171:
	{
		int32_t L_17 = __this->___current_symbol_3;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)65546)))))
		{
			goto IL_018d;
		}
	}
	{
		__this->___token_13 = 2;
		goto IL_01b8;
	}

IL_018d:
	{
		int32_t L_18 = __this->___current_symbol_3;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)65538)))))
		{
			goto IL_01b8;
		}
	}
	{
		__this->___token_13 = ((int32_t)10);
		bool L_19 = ((bool)1);
		RuntimeObject* L_20 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_19);
		__this->___token_value_12 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___token_value_12), (void*)L_20);
		__this->___parser_return_8 = (bool)1;
	}

IL_01b8:
	{
		return;
	}
}
// System.Boolean LitJson.JsonReader::ReadToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonReader_ReadToken_m5C6E65529B9286DFC6270FE4A926FA12620894B9 (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___end_of_input_5;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_1 = __this->___lexer_6;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_NextToken_m1FC49AB01B8C3D281961541D1D7D1A8721B06083(L_1, NULL);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_3 = __this->___lexer_6;
		NullCheck(L_3);
		bool L_4;
		L_4 = Lexer_get_EndOfInput_m450A1AC83F893FDE38826AFD2A726428956491AC_inline(L_3, NULL);
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		JsonReader_Close_m91AEDB0DE517F63898D830A3140B83032CFE8F2F(__this, NULL);
		return (bool)0;
	}

IL_0031:
	{
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_5 = __this->___lexer_6;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Lexer_get_Token_m77727EC36916D1258709D74850710E0487B67F99_inline(L_5, NULL);
		__this->___current_input_2 = L_6;
		return (bool)1;
	}
}
// System.Void LitJson.JsonReader::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_Close_m91AEDB0DE517F63898D830A3140B83032CFE8F2F (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___end_of_input_5;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		__this->___end_of_input_5 = (bool)1;
		__this->___end_of_json_4 = (bool)1;
		bool L_1 = __this->___reader_is_owned_11;
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* L_2 = __this->___reader_10;
		NullCheck(L_2);
		VirtualActionInvoker0::Invoke(7 /* System.Void System.IO.TextReader::Close() */, L_2);
	}

IL_0030:
	{
		__this->___reader_10 = (TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reader_10), (void*)(TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7*)NULL);
		return;
	}
}
// System.Boolean LitJson.JsonReader::Read()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonReader_Read_mD8D28369934A79C6A0125279F425E48D1D35AE7B (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t9503DE0744217071D554CC415B2890C454070024_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tAD4D3CC9C1631510439F3806F67FAA90CE4C4313_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Clear_mEE1C6E0AF654AE01D41D12DAF62217D4FE3930E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Peek_m919AA48BFC239B260BB6A0639B8E027B60CB8B66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E* V_1 = NULL;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		bool L_0 = __this->___end_of_input_5;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		bool L_1 = __this->___end_of_json_4;
		if (!L_1)
		{
			goto IL_004a;
		}
	}
	{
		__this->___end_of_json_4 = (bool)0;
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_2 = __this->___automaton_stack_1;
		NullCheck(L_2);
		Stack_1_Clear_mEE1C6E0AF654AE01D41D12DAF62217D4FE3930E0(L_2, Stack_1_Clear_mEE1C6E0AF654AE01D41D12DAF62217D4FE3930E0_RuntimeMethod_var);
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_3 = __this->___automaton_stack_1;
		NullCheck(L_3);
		Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA(L_3, ((int32_t)65553), Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_RuntimeMethod_var);
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_4 = __this->___automaton_stack_1;
		NullCheck(L_4);
		Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA(L_4, ((int32_t)65543), Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_RuntimeMethod_var);
	}

IL_004a:
	{
		__this->___parser_in_string_7 = (bool)0;
		__this->___parser_return_8 = (bool)0;
		__this->___token_13 = 0;
		__this->___token_value_12 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___token_value_12), (void*)NULL);
		bool L_5 = __this->___read_started_9;
		if (L_5)
		{
			goto IL_0085;
		}
	}
	{
		__this->___read_started_9 = (bool)1;
		bool L_6;
		L_6 = JsonReader_ReadToken_m5C6E65529B9286DFC6270FE4A926FA12620894B9(__this, NULL);
		if (L_6)
		{
			goto IL_0085;
		}
	}
	{
		return (bool)0;
	}

IL_0085:
	{
		bool L_7 = __this->___parser_return_8;
		if (!L_7)
		{
			goto IL_00ae;
		}
	}
	{
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_8 = __this->___automaton_stack_1;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Stack_1_Peek_m919AA48BFC239B260BB6A0639B8E027B60CB8B66(L_8, Stack_1_Peek_m919AA48BFC239B260BB6A0639B8E027B60CB8B66_RuntimeMethod_var);
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)65553)))))
		{
			goto IL_00ac;
		}
	}
	{
		__this->___end_of_json_4 = (bool)1;
	}

IL_00ac:
	{
		return (bool)1;
	}

IL_00ae:
	{
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_10 = __this->___automaton_stack_1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748(L_10, Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748_RuntimeMethod_var);
		__this->___current_symbol_3 = L_11;
		JsonReader_ProcessSymbol_m0E855A59E8E386619529E923A6A9BABFEE63769C(__this, NULL);
		int32_t L_12 = __this->___current_symbol_3;
		int32_t L_13 = __this->___current_input_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0115;
		}
	}
	{
		bool L_14;
		L_14 = JsonReader_ReadToken_m5C6E65529B9286DFC6270FE4A926FA12620894B9(__this, NULL);
		if (L_14)
		{
			goto IL_0110;
		}
	}
	{
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_15 = __this->___automaton_stack_1;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = Stack_1_Peek_m919AA48BFC239B260BB6A0639B8E027B60CB8B66(L_15, Stack_1_Peek_m919AA48BFC239B260BB6A0639B8E027B60CB8B66_RuntimeMethod_var);
		if ((((int32_t)L_16) == ((int32_t)((int32_t)65553))))
		{
			goto IL_0101;
		}
	}
	{
		JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76* L_17 = (JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76_il2cpp_TypeInfo_var)));
		NullCheck(L_17);
		JsonException__ctor_m400377A21C20F6CAEE97CE7958869D819BB94BB5(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7B6EE056E549534162451A09C7F0AFAC372DBD06)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonReader_Read_mD8D28369934A79C6A0125279F425E48D1D35AE7B_RuntimeMethod_var)));
	}

IL_0101:
	{
		bool L_18 = __this->___parser_return_8;
		if (!L_18)
		{
			goto IL_010e;
		}
	}
	{
		return (bool)1;
	}

IL_010e:
	{
		return (bool)0;
	}

IL_0110:
	{
		goto IL_0085;
	}

IL_0115:
	try
	{// begin try (depth: 1)

IL_0115_1:
		il2cpp_codegen_runtime_class_init_inline(JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD_il2cpp_TypeInfo_var);
		RuntimeObject* L_19 = ((JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD_il2cpp_TypeInfo_var))->___parse_table_0;
		int32_t L_20 = __this->___current_symbol_3;
		NullCheck(L_19);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::get_Item(TKey) */, IDictionary_2_t9503DE0744217071D554CC415B2890C454070024_il2cpp_TypeInfo_var, L_19, L_20);
		int32_t L_22 = __this->___current_input_2;
		NullCheck(L_21);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23;
		L_23 = InterfaceFuncInvoker1< Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>::get_Item(TKey) */, IDictionary_2_tAD4D3CC9C1631510439F3806F67FAA90CE4C4313_il2cpp_TypeInfo_var, L_21, L_22);
		V_0 = L_23;
		goto IL_0149;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0136;
		}
		throw e;
	}

CATCH_0136:
	{// begin catch(System.Collections.Generic.KeyNotFoundException)
		{
			KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E* L_24 = ((KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E*)IL2CPP_GET_ACTIVE_EXCEPTION(KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E*));;
			V_1 = L_24;
			int32_t L_25 = __this->___current_input_2;
			KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E* L_26 = V_1;
			JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76* L_27 = (JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76_il2cpp_TypeInfo_var)));
			NullCheck(L_27);
			JsonException__ctor_mD12D72A1D7949F48B846F1207BFA40EB8CB61E23(L_27, L_25, L_26, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonReader_Read_mD8D28369934A79C6A0125279F425E48D1D35AE7B_RuntimeMethod_var)));
		}
		{
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0149;
		}
	}// end catch (depth: 1)

IL_0149:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = V_0;
		NullCheck(L_28);
		int32_t L_29 = 0;
		int32_t L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		if ((!(((uint32_t)L_30) == ((uint32_t)((int32_t)65554)))))
		{
			goto IL_015b;
		}
	}
	{
		goto IL_0085;
	}

IL_015b:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		NullCheck(L_31);
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_31)->max_length)), 1));
		goto IL_0178;
	}

IL_0166:
	{
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_32 = __this->___automaton_stack_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_0;
		int32_t L_34 = V_2;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		int32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		NullCheck(L_32);
		Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA(L_32, L_36, Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_RuntimeMethod_var);
		int32_t L_37 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_37, 1));
	}

IL_0178:
	{
		int32_t L_38 = V_2;
		if ((((int32_t)L_38) >= ((int32_t)0)))
		{
			goto IL_0166;
		}
	}
	{
		goto IL_0085;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LitJson.WriterContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriterContext__ctor_m776EF36E46B33DFC054B4AD1E6F3139B038AF037 (WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LitJson.JsonWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter__ctor_mFF4C2DE4CAD061714750C2D87291FCF9D0AE4EF0 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringWriter_tF48052BE4F980E5C85403221E835768E4156267D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		__this->___inst_string_builder_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inst_string_builder_7), (void*)L_0);
		StringBuilder_t* L_1 = __this->___inst_string_builder_7;
		StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* L_2 = (StringWriter_tF48052BE4F980E5C85403221E835768E4156267D*)il2cpp_codegen_object_new(StringWriter_tF48052BE4F980E5C85403221E835768E4156267D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		StringWriter__ctor_mF38CB8046B79DEF523E427B7F41CA3135671D0C8(L_2, L_1, NULL);
		__this->___writer_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___writer_10), (void*)L_2);
		JsonWriter_Init_m9DD0FC6AED98A7D661B9374FFDFF534411DDB838(__this, NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::.ctor(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter__ctor_m25FA80F1F771C70FB5353B2C9B592DB260A56B52 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, StringBuilder_t* ___0_sb, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringWriter_tF48052BE4F980E5C85403221E835768E4156267D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t* L_0 = ___0_sb;
		StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* L_1 = (StringWriter_tF48052BE4F980E5C85403221E835768E4156267D*)il2cpp_codegen_object_new(StringWriter_tF48052BE4F980E5C85403221E835768E4156267D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringWriter__ctor_mF38CB8046B79DEF523E427B7F41CA3135671D0C8(L_1, L_0, NULL);
		JsonWriter__ctor_m59AEC417CBCF6AB49675BCCFD00F274C31D3585E(__this, L_1, NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::.ctor(System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter__ctor_m59AEC417CBCF6AB49675BCCFD00F274C31D3585E (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___0_writer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_0 = ___0_writer;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral638C5441E8427B2B9D2C941DDBF958579B5FE3F0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriter__ctor_m59AEC417CBCF6AB49675BCCFD00F274C31D3585E_RuntimeMethod_var)));
	}

IL_0017:
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_2 = ___0_writer;
		__this->___writer_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___writer_10), (void*)L_2);
		JsonWriter_Init_m9DD0FC6AED98A7D661B9374FFDFF534411DDB838(__this, NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter__cctor_m64A42C0DCDC27BC8FFB605455420856AC720739F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_0;
		L_0 = NumberFormatInfo_get_InvariantInfo_m4689F466D2607C7369BCE394E3FB3681A6E644FA(NULL);
		((JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_il2cpp_TypeInfo_var))->___number_format_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_il2cpp_TypeInfo_var))->___number_format_0), (void*)L_0);
		return;
	}
}
// System.Int32 LitJson.JsonWriter::get_IndentValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonWriter_get_IndentValue_mF2FD1FADA3207ECD754534B9D5E65CC12A770182 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___indent_value_6;
		return L_0;
	}
}
// System.Void LitJson.JsonWriter::set_IndentValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_set_IndentValue_m50BCF8F90DF5E4EB581AEC9B320FAF57960B7A92 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___indentation_5;
		int32_t L_1 = __this->___indent_value_6;
		int32_t L_2 = ___0_value;
		__this->___indentation_5 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(L_0/L_1)), L_2));
		int32_t L_3 = ___0_value;
		__this->___indent_value_6 = L_3;
		return;
	}
}
// System.Boolean LitJson.JsonWriter::get_PrettyPrint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonWriter_get_PrettyPrint_mD81B92E6DF9C1A37598BB57E018818E616472446 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___pretty_print_8;
		return L_0;
	}
}
// System.Void LitJson.JsonWriter::set_PrettyPrint(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_set_PrettyPrint_mF46CF67E6862407E9B7BCF628F99BA071B4EE25C (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___pretty_print_8 = L_0;
		return;
	}
}
// System.IO.TextWriter LitJson.JsonWriter::get_TextWriter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* JsonWriter_get_TextWriter_m8C5C9441F52C2813A2A3A1834E7A8A3AF2CF875F (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, const RuntimeMethod* method) 
{
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_0 = __this->___writer_10;
		return L_0;
	}
}
// System.Boolean LitJson.JsonWriter::get_Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonWriter_get_Validate_m28498F5A80E666297849E7C4F723F48A0B9A4DF6 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___validate_9;
		return L_0;
	}
}
// System.Void LitJson.JsonWriter::set_Validate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_set_Validate_mA5EE11772D5EEEDBF8653894C89D686A6B184F7B (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___validate_9 = L_0;
		return;
	}
}
// System.Void LitJson.JsonWriter::DoValidation(LitJson.Condition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_DoValidation_m3F03AD6E422930F933D182AD01154E08F32EFF3B (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, int32_t ___0_cond, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_0 = __this->___context_1;
		NullCheck(L_0);
		bool L_1 = L_0->___ExpectingValue_3;
		if (L_1)
		{
			goto IL_0023;
		}
	}
	{
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_2 = __this->___context_1;
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_3 = L_2;
		NullCheck(L_3);
		int32_t L_4 = L_3->___Count_0;
		NullCheck(L_3);
		L_3->___Count_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0023:
	{
		bool L_5 = __this->___validate_9;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		return;
	}

IL_002f:
	{
		bool L_6 = __this->___has_reached_end_3;
		if (!L_6)
		{
			goto IL_0045;
		}
	}
	{
		JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76* L_7 = (JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		JsonException__ctor_m400377A21C20F6CAEE97CE7958869D819BB94BB5(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8E284AA45C643AAA8D3553AA7AB6A1C3BC3E32D1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriter_DoValidation_m3F03AD6E422930F933D182AD01154E08F32EFF3B_RuntimeMethod_var)));
	}

IL_0045:
	{
		int32_t L_8 = ___0_cond;
		V_0 = L_8;
		int32_t L_9 = V_0;
		switch (L_9)
		{
			case 0:
			{
				goto IL_0066;
			}
			case 1:
			{
				goto IL_0086;
			}
			case 2:
			{
				goto IL_00b6;
			}
			case 3:
			{
				goto IL_00e6;
			}
			case 4:
			{
				goto IL_0116;
			}
		}
	}
	{
		goto IL_0156;
	}

IL_0066:
	{
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_10 = __this->___context_1;
		NullCheck(L_10);
		bool L_11 = L_10->___InArray_1;
		if (L_11)
		{
			goto IL_0081;
		}
	}
	{
		JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76* L_12 = (JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		JsonException__ctor_m400377A21C20F6CAEE97CE7958869D819BB94BB5(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral057118C49B28F31FA4955B194753088DDCD94999)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriter_DoValidation_m3F03AD6E422930F933D182AD01154E08F32EFF3B_RuntimeMethod_var)));
	}

IL_0081:
	{
		goto IL_0156;
	}

IL_0086:
	{
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_13 = __this->___context_1;
		NullCheck(L_13);
		bool L_14 = L_13->___InObject_2;
		if (!L_14)
		{
			goto IL_00a6;
		}
	}
	{
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_15 = __this->___context_1;
		NullCheck(L_15);
		bool L_16 = L_15->___ExpectingValue_3;
		if (!L_16)
		{
			goto IL_00b1;
		}
	}

IL_00a6:
	{
		JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76* L_17 = (JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76_il2cpp_TypeInfo_var)));
		NullCheck(L_17);
		JsonException__ctor_m400377A21C20F6CAEE97CE7958869D819BB94BB5(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCEE7535349ADB76DD55B08451D311FC3CF06A19C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriter_DoValidation_m3F03AD6E422930F933D182AD01154E08F32EFF3B_RuntimeMethod_var)));
	}

IL_00b1:
	{
		goto IL_0156;
	}

IL_00b6:
	{
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_18 = __this->___context_1;
		NullCheck(L_18);
		bool L_19 = L_18->___InObject_2;
		if (!L_19)
		{
			goto IL_00e1;
		}
	}
	{
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_20 = __this->___context_1;
		NullCheck(L_20);
		bool L_21 = L_20->___ExpectingValue_3;
		if (L_21)
		{
			goto IL_00e1;
		}
	}
	{
		JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76* L_22 = (JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76_il2cpp_TypeInfo_var)));
		NullCheck(L_22);
		JsonException__ctor_m400377A21C20F6CAEE97CE7958869D819BB94BB5(L_22, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCDA723AA4DBB226A906416AA9BF1C2D4CEC53C89)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriter_DoValidation_m3F03AD6E422930F933D182AD01154E08F32EFF3B_RuntimeMethod_var)));
	}

IL_00e1:
	{
		goto IL_0156;
	}

IL_00e6:
	{
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_23 = __this->___context_1;
		NullCheck(L_23);
		bool L_24 = L_23->___InObject_2;
		if (!L_24)
		{
			goto IL_0106;
		}
	}
	{
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_25 = __this->___context_1;
		NullCheck(L_25);
		bool L_26 = L_25->___ExpectingValue_3;
		if (!L_26)
		{
			goto IL_0111;
		}
	}

IL_0106:
	{
		JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76* L_27 = (JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76_il2cpp_TypeInfo_var)));
		NullCheck(L_27);
		JsonException__ctor_m400377A21C20F6CAEE97CE7958869D819BB94BB5(L_27, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral84BE6DF7F5E86A94476E7ED44C8A9ACA10E6236A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriter_DoValidation_m3F03AD6E422930F933D182AD01154E08F32EFF3B_RuntimeMethod_var)));
	}

IL_0111:
	{
		goto IL_0156;
	}

IL_0116:
	{
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_28 = __this->___context_1;
		NullCheck(L_28);
		bool L_29 = L_28->___InArray_1;
		if (L_29)
		{
			goto IL_0151;
		}
	}
	{
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_30 = __this->___context_1;
		NullCheck(L_30);
		bool L_31 = L_30->___InObject_2;
		if (!L_31)
		{
			goto IL_0146;
		}
	}
	{
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_32 = __this->___context_1;
		NullCheck(L_32);
		bool L_33 = L_32->___ExpectingValue_3;
		if (L_33)
		{
			goto IL_0151;
		}
	}

IL_0146:
	{
		JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76* L_34 = (JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76_il2cpp_TypeInfo_var)));
		NullCheck(L_34);
		JsonException__ctor_m400377A21C20F6CAEE97CE7958869D819BB94BB5(L_34, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC63496F78F80F09E4841EF5CD0DA8DAF7028FB4B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_34, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriter_DoValidation_m3F03AD6E422930F933D182AD01154E08F32EFF3B_RuntimeMethod_var)));
	}

IL_0151:
	{
		goto IL_0156;
	}

IL_0156:
	{
		return;
	}
}
// System.Void LitJson.JsonWriter::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Init_m9DD0FC6AED98A7D661B9374FFDFF534411DDB838 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_mCC27D4FD504E058A5A42BE3285782C44D715DF4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_m2A8D4EF841D474ABBD42CA0BE7389F3C1A1A31E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___has_reached_end_3 = (bool)0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->___hex_seq_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hex_seq_4), (void*)L_0);
		__this->___indentation_5 = 0;
		__this->___indent_value_6 = 4;
		__this->___pretty_print_8 = (bool)0;
		__this->___validate_9 = (bool)1;
		Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD* L_1 = (Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD*)il2cpp_codegen_object_new(Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Stack_1__ctor_m2A8D4EF841D474ABBD42CA0BE7389F3C1A1A31E7(L_1, Stack_1__ctor_m2A8D4EF841D474ABBD42CA0BE7389F3C1A1A31E7_RuntimeMethod_var);
		__this->___ctx_stack_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ctx_stack_2), (void*)L_1);
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_2 = (WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F*)il2cpp_codegen_object_new(WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		WriterContext__ctor_m776EF36E46B33DFC054B4AD1E6F3139B038AF037(L_2, NULL);
		__this->___context_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___context_1), (void*)L_2);
		Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD* L_3 = __this->___ctx_stack_2;
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_4 = __this->___context_1;
		NullCheck(L_3);
		Stack_1_Push_mCC27D4FD504E058A5A42BE3285782C44D715DF4A(L_3, L_4, Stack_1_Push_mCC27D4FD504E058A5A42BE3285782C44D715DF4A_RuntimeMethod_var);
		return;
	}
}
// System.Void LitJson.JsonWriter::IntToHex(System.Int32,System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_IntToHex_mF5E06CC13D2F0D5229D2BD63C5FD75D07CD2E2FE (int32_t ___0_n, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___1_hex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_1 = 0;
		goto IL_0039;
	}

IL_0007:
	{
		int32_t L_0 = ___0_n;
		V_0 = ((int32_t)(L_0%((int32_t)16)));
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0023;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = ___1_hex;
		int32_t L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(3, L_3))), (Il2CppChar)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(((int32_t)48), L_4))));
		goto IL_0030;
	}

IL_0023:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = ___1_hex;
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(3, L_6))), (Il2CppChar)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(((int32_t)65), ((int32_t)il2cpp_codegen_subtract(L_7, ((int32_t)10)))))));
	}

IL_0030:
	{
		int32_t L_8 = ___0_n;
		___0_n = ((int32_t)(L_8>>4));
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0039:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) < ((int32_t)4)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void LitJson.JsonWriter::Indent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Indent_m139D71DBB2C331C1C9A23D48AD0B607D10D8FEFA (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___pretty_print_8;
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = __this->___indentation_5;
		int32_t L_2 = __this->___indent_value_6;
		__this->___indentation_5 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
	}

IL_001e:
	{
		return;
	}
}
// System.Void LitJson.JsonWriter::Put(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Put_mFABB67DDE2B46F39CB3BD04A8A883D908934CDF0 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, String_t* ___0_str, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		bool L_0 = __this->___pretty_print_8;
		if (!L_0)
		{
			goto IL_003f;
		}
	}
	{
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_1 = __this->___context_1;
		NullCheck(L_1);
		bool L_2 = L_1->___ExpectingValue_3;
		if (L_2)
		{
			goto IL_003f;
		}
	}
	{
		V_0 = 0;
		goto IL_0033;
	}

IL_0022:
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_3 = __this->___writer_10;
		NullCheck(L_3);
		VirtualActionInvoker1< Il2CppChar >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_3, ((int32_t)32));
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0033:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = __this->___indentation_5;
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_0022;
		}
	}

IL_003f:
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_7 = __this->___writer_10;
		String_t* L_8 = ___0_str;
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(16 /* System.Void System.IO.TextWriter::Write(System.String) */, L_7, L_8);
		return;
	}
}
// System.Void LitJson.JsonWriter::PutNewline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_PutNewline_mFE1588405B1DBE7ADC65A867FB1DB57A0D9CD3C4 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, const RuntimeMethod* method) 
{
	{
		JsonWriter_PutNewline_mC6A36636BB9D628BCAB9C2F1B4C27546A9D07100(__this, (bool)1, NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::PutNewline(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_PutNewline_mC6A36636BB9D628BCAB9C2F1B4C27546A9D07100 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, bool ___0_add_comma, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_add_comma;
		if (!L_0)
		{
			goto IL_0034;
		}
	}
	{
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_1 = __this->___context_1;
		NullCheck(L_1);
		bool L_2 = L_1->___ExpectingValue_3;
		if (L_2)
		{
			goto IL_0034;
		}
	}
	{
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_3 = __this->___context_1;
		NullCheck(L_3);
		int32_t L_4 = L_3->___Count_0;
		if ((((int32_t)L_4) <= ((int32_t)1)))
		{
			goto IL_0034;
		}
	}
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_5 = __this->___writer_10;
		NullCheck(L_5);
		VirtualActionInvoker1< Il2CppChar >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_5, ((int32_t)44));
	}

IL_0034:
	{
		bool L_6 = __this->___pretty_print_8;
		if (!L_6)
		{
			goto IL_005c;
		}
	}
	{
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_7 = __this->___context_1;
		NullCheck(L_7);
		bool L_8 = L_7->___ExpectingValue_3;
		if (L_8)
		{
			goto IL_005c;
		}
	}
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_9 = __this->___writer_10;
		NullCheck(L_9);
		VirtualActionInvoker1< Il2CppChar >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_9, ((int32_t)10));
	}

IL_005c:
	{
		return;
	}
}
// System.Void LitJson.JsonWriter::PutString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_PutString_m8BD1DBB2B72F8027F3B9DE4CD5D4807C5849F3D1 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, String_t* ___0_str, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		JsonWriter_Put_mFABB67DDE2B46F39CB3BD04A8A883D908934CDF0(__this, L_0, NULL);
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_1 = __this->___writer_10;
		NullCheck(L_1);
		VirtualActionInvoker1< Il2CppChar >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_1, ((int32_t)34));
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_2 = __this->___writer_10;
		String_t* L_3 = ___0_str;
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(16 /* System.Void System.IO.TextWriter::Write(System.String) */, L_2, L_3);
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_4 = __this->___writer_10;
		NullCheck(L_4);
		VirtualActionInvoker1< Il2CppChar >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_4, ((int32_t)34));
		return;
	}
}
// System.Void LitJson.JsonWriter::Unindent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Unindent_m2EF20A77048699830DA37601DA2BE20F17B1D5E0 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___pretty_print_8;
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = __this->___indentation_5;
		int32_t L_2 = __this->___indent_value_6;
		__this->___indentation_5 = ((int32_t)il2cpp_codegen_subtract(L_1, L_2));
	}

IL_001e:
	{
		return;
	}
}
// System.String LitJson.JsonWriter::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonWriter_ToString_m787891ECDDA05AC2F51A2571A273ED2A5FF984FC (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t* L_0 = __this->___inst_string_builder_7;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_1;
	}

IL_0011:
	{
		StringBuilder_t* L_2 = __this->___inst_string_builder_7;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		return L_3;
	}
}
// System.Void LitJson.JsonWriter::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Reset_mCFA289C24C9ECEE98AD50E970F0D1F032F7E1989 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Clear_m6ADA89EC27B8CEB290D73A08C00E14FCF1440D65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_mCC27D4FD504E058A5A42BE3285782C44D715DF4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___has_reached_end_3 = (bool)0;
		Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD* L_0 = __this->___ctx_stack_2;
		NullCheck(L_0);
		Stack_1_Clear_m6ADA89EC27B8CEB290D73A08C00E14FCF1440D65(L_0, Stack_1_Clear_m6ADA89EC27B8CEB290D73A08C00E14FCF1440D65_RuntimeMethod_var);
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_1 = (WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F*)il2cpp_codegen_object_new(WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		WriterContext__ctor_m776EF36E46B33DFC054B4AD1E6F3139B038AF037(L_1, NULL);
		__this->___context_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___context_1), (void*)L_1);
		Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD* L_2 = __this->___ctx_stack_2;
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_3 = __this->___context_1;
		NullCheck(L_2);
		Stack_1_Push_mCC27D4FD504E058A5A42BE3285782C44D715DF4A(L_2, L_3, Stack_1_Push_mCC27D4FD504E058A5A42BE3285782C44D715DF4A_RuntimeMethod_var);
		StringBuilder_t* L_4 = __this->___inst_string_builder_7;
		if (!L_4)
		{
			goto IL_0051;
		}
	}
	{
		StringBuilder_t* L_5 = __this->___inst_string_builder_7;
		StringBuilder_t* L_6 = __this->___inst_string_builder_7;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_6, NULL);
		NullCheck(L_5);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90(L_5, 0, L_7, NULL);
	}

IL_0051:
	{
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_mFACCB1B6087CE1C66A68CE3BA2AF9844F7F31D8C (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, bool ___0_boolean, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* G_B2_0 = NULL;
	JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* G_B3_1 = NULL;
	{
		JsonWriter_DoValidation_m3F03AD6E422930F933D182AD01154E08F32EFF3B(__this, 4, NULL);
		JsonWriter_PutNewline_mFE1588405B1DBE7ADC65A867FB1DB57A0D9CD3C4(__this, NULL);
		bool L_0 = ___0_boolean;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_001e;
		}
	}
	{
		G_B3_0 = _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
		G_B3_1 = G_B1_0;
		goto IL_0023;
	}

IL_001e:
	{
		G_B3_0 = _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
		G_B3_1 = G_B2_0;
	}

IL_0023:
	{
		NullCheck(G_B3_1);
		JsonWriter_Put_mFABB67DDE2B46F39CB3BD04A8A883D908934CDF0(G_B3_1, G_B3_0, NULL);
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_1 = __this->___context_1;
		NullCheck(L_1);
		L_1->___ExpectingValue_3 = (bool)0;
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m2042A55B478D11A2C4BB399CE96C17DB3D85133A (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_number, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_m3F03AD6E422930F933D182AD01154E08F32EFF3B(__this, 4, NULL);
		JsonWriter_PutNewline_mFE1588405B1DBE7ADC65A867FB1DB57A0D9CD3C4(__this, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_0 = ___0_number;
		il2cpp_codegen_runtime_class_init_inline(JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_il2cpp_TypeInfo_var);
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_1 = ((JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_il2cpp_TypeInfo_var))->___number_format_0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Convert_ToString_mF6A8BB10515230B099A7EDA9D28C2F8991F758CA(L_0, L_1, NULL);
		JsonWriter_Put_mFABB67DDE2B46F39CB3BD04A8A883D908934CDF0(__this, L_2, NULL);
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_3 = __this->___context_1;
		NullCheck(L_3);
		L_3->___ExpectingValue_3 = (bool)0;
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m657048A70C011FC85FD3773A026EC0B21462AB4D (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, double ___0_number, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC31E66F919D06AD2730738EF7F884271E99BB7DA);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		JsonWriter_DoValidation_m3F03AD6E422930F933D182AD01154E08F32EFF3B(__this, 4, NULL);
		JsonWriter_PutNewline_mFE1588405B1DBE7ADC65A867FB1DB57A0D9CD3C4(__this, NULL);
		double L_0 = ___0_number;
		il2cpp_codegen_runtime_class_init_inline(JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_il2cpp_TypeInfo_var);
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_1 = ((JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_il2cpp_TypeInfo_var))->___number_format_0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Convert_ToString_m7EBE84B1D453D12C9514AD3EF4F6B3F55A5E5C9B(L_0, L_1, NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		JsonWriter_Put_mFABB67DDE2B46F39CB3BD04A8A883D908934CDF0(__this, L_3, NULL);
		String_t* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_4, ((int32_t)46), NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)(-1)))))
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_6, ((int32_t)69), NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)(-1)))))
		{
			goto IL_004c;
		}
	}
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_8 = __this->___writer_10;
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(16 /* System.Void System.IO.TextWriter::Write(System.String) */, L_8, _stringLiteralC31E66F919D06AD2730738EF7F884271E99BB7DA);
	}

IL_004c:
	{
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_9 = __this->___context_1;
		NullCheck(L_9);
		L_9->___ExpectingValue_3 = (bool)0;
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m3A3246FEFCA9BCEB4F3E7D2D5AC0FF49B8BBD3A7 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, int32_t ___0_number, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_m3F03AD6E422930F933D182AD01154E08F32EFF3B(__this, 4, NULL);
		JsonWriter_PutNewline_mFE1588405B1DBE7ADC65A867FB1DB57A0D9CD3C4(__this, NULL);
		int32_t L_0 = ___0_number;
		il2cpp_codegen_runtime_class_init_inline(JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_il2cpp_TypeInfo_var);
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_1 = ((JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_il2cpp_TypeInfo_var))->___number_format_0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Convert_ToString_mC65AC3BEDED3049732E8A67B496AAAEF4C732871(L_0, L_1, NULL);
		JsonWriter_Put_mFABB67DDE2B46F39CB3BD04A8A883D908934CDF0(__this, L_2, NULL);
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_3 = __this->___context_1;
		NullCheck(L_3);
		L_3->___ExpectingValue_3 = (bool)0;
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m500833BCB5B21114C1C8A3FA7DAAF6A1EAD2A3D4 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, int64_t ___0_number, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_m3F03AD6E422930F933D182AD01154E08F32EFF3B(__this, 4, NULL);
		JsonWriter_PutNewline_mFE1588405B1DBE7ADC65A867FB1DB57A0D9CD3C4(__this, NULL);
		int64_t L_0 = ___0_number;
		il2cpp_codegen_runtime_class_init_inline(JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_il2cpp_TypeInfo_var);
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_1 = ((JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_il2cpp_TypeInfo_var))->___number_format_0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Convert_ToString_m03FCA4B41451E9A04705485B1C2FFC3D826B63E1(L_0, L_1, NULL);
		JsonWriter_Put_mFABB67DDE2B46F39CB3BD04A8A883D908934CDF0(__this, L_2, NULL);
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_3 = __this->___context_1;
		NullCheck(L_3);
		L_3->___ExpectingValue_3 = (bool)0;
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_mC6C394BE18186CAEB8597055057A1AECDEE56916 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, String_t* ___0_str, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_m3F03AD6E422930F933D182AD01154E08F32EFF3B(__this, 4, NULL);
		JsonWriter_PutNewline_mFE1588405B1DBE7ADC65A867FB1DB57A0D9CD3C4(__this, NULL);
		String_t* L_0 = ___0_str;
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		JsonWriter_Put_mFABB67DDE2B46F39CB3BD04A8A883D908934CDF0(__this, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, NULL);
		goto IL_002a;
	}

IL_0023:
	{
		String_t* L_1 = ___0_str;
		JsonWriter_PutString_m8BD1DBB2B72F8027F3B9DE4CD5D4807C5849F3D1(__this, L_1, NULL);
	}

IL_002a:
	{
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_2 = __this->___context_1;
		NullCheck(L_2);
		L_2->___ExpectingValue_3 = (bool)0;
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_mA2318C6CCFB4A565564457D435FF8EDEDB0F6EAB (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, uint64_t ___0_number, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_m3F03AD6E422930F933D182AD01154E08F32EFF3B(__this, 4, NULL);
		JsonWriter_PutNewline_mFE1588405B1DBE7ADC65A867FB1DB57A0D9CD3C4(__this, NULL);
		uint64_t L_0 = ___0_number;
		il2cpp_codegen_runtime_class_init_inline(JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_il2cpp_TypeInfo_var);
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_1 = ((JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F_il2cpp_TypeInfo_var))->___number_format_0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Convert_ToString_mB35C9B82D948EFB22F235F65AC3996B9F44C6D38(L_0, L_1, NULL);
		JsonWriter_Put_mFABB67DDE2B46F39CB3BD04A8A883D908934CDF0(__this, L_2, NULL);
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_3 = __this->___context_1;
		NullCheck(L_3);
		L_3->___ExpectingValue_3 = (bool)0;
		return;
	}
}
// System.Void LitJson.JsonWriter::WriteArrayEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteArrayEnd_mE8262D6AC279897DA41D549CE12A8EA3054777B5 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Peek_m20439CD5B4898A681D0F39D58BBC7E2C21CA584C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_m98A1DBF775D66CFC5149DF79AFD2042E2E54ABC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_m145C99D2412AD5B6C8CADF47696A334272AA6EDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_m3F03AD6E422930F933D182AD01154E08F32EFF3B(__this, 0, NULL);
		JsonWriter_PutNewline_mC6A36636BB9D628BCAB9C2F1B4C27546A9D07100(__this, (bool)0, NULL);
		Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD* L_0 = __this->___ctx_stack_2;
		NullCheck(L_0);
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_1;
		L_1 = Stack_1_Pop_m98A1DBF775D66CFC5149DF79AFD2042E2E54ABC2(L_0, Stack_1_Pop_m98A1DBF775D66CFC5149DF79AFD2042E2E54ABC2_RuntimeMethod_var);
		Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD* L_2 = __this->___ctx_stack_2;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Stack_1_get_Count_m145C99D2412AD5B6C8CADF47696A334272AA6EDB_inline(L_2, Stack_1_get_Count_m145C99D2412AD5B6C8CADF47696A334272AA6EDB_RuntimeMethod_var);
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		__this->___has_reached_end_3 = (bool)1;
		goto IL_0054;
	}

IL_0037:
	{
		Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD* L_4 = __this->___ctx_stack_2;
		NullCheck(L_4);
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_5;
		L_5 = Stack_1_Peek_m20439CD5B4898A681D0F39D58BBC7E2C21CA584C(L_4, Stack_1_Peek_m20439CD5B4898A681D0F39D58BBC7E2C21CA584C_RuntimeMethod_var);
		__this->___context_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___context_1), (void*)L_5);
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_6 = __this->___context_1;
		NullCheck(L_6);
		L_6->___ExpectingValue_3 = (bool)0;
	}

IL_0054:
	{
		JsonWriter_Unindent_m2EF20A77048699830DA37601DA2BE20F17B1D5E0(__this, NULL);
		JsonWriter_Put_mFABB67DDE2B46F39CB3BD04A8A883D908934CDF0(__this, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::WriteArrayStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteArrayStart_mF4AB20790AB8817BCCEEB5FA649832890D5AADEB (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_mCC27D4FD504E058A5A42BE3285782C44D715DF4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_m3F03AD6E422930F933D182AD01154E08F32EFF3B(__this, 2, NULL);
		JsonWriter_PutNewline_mFE1588405B1DBE7ADC65A867FB1DB57A0D9CD3C4(__this, NULL);
		JsonWriter_Put_mFABB67DDE2B46F39CB3BD04A8A883D908934CDF0(__this, _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1, NULL);
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_0 = (WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F*)il2cpp_codegen_object_new(WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WriterContext__ctor_m776EF36E46B33DFC054B4AD1E6F3139B038AF037(L_0, NULL);
		__this->___context_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___context_1), (void*)L_0);
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_1 = __this->___context_1;
		NullCheck(L_1);
		L_1->___InArray_1 = (bool)1;
		Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD* L_2 = __this->___ctx_stack_2;
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_3 = __this->___context_1;
		NullCheck(L_2);
		Stack_1_Push_mCC27D4FD504E058A5A42BE3285782C44D715DF4A(L_2, L_3, Stack_1_Push_mCC27D4FD504E058A5A42BE3285782C44D715DF4A_RuntimeMethod_var);
		JsonWriter_Indent_m139D71DBB2C331C1C9A23D48AD0B607D10D8FEFA(__this, NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::WriteObjectEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteObjectEnd_m7B1F539A650AC9AA9413B9C3FF1DAA27834141AF (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Peek_m20439CD5B4898A681D0F39D58BBC7E2C21CA584C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_m98A1DBF775D66CFC5149DF79AFD2042E2E54ABC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_m145C99D2412AD5B6C8CADF47696A334272AA6EDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_m3F03AD6E422930F933D182AD01154E08F32EFF3B(__this, 1, NULL);
		JsonWriter_PutNewline_mC6A36636BB9D628BCAB9C2F1B4C27546A9D07100(__this, (bool)0, NULL);
		Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD* L_0 = __this->___ctx_stack_2;
		NullCheck(L_0);
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_1;
		L_1 = Stack_1_Pop_m98A1DBF775D66CFC5149DF79AFD2042E2E54ABC2(L_0, Stack_1_Pop_m98A1DBF775D66CFC5149DF79AFD2042E2E54ABC2_RuntimeMethod_var);
		Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD* L_2 = __this->___ctx_stack_2;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Stack_1_get_Count_m145C99D2412AD5B6C8CADF47696A334272AA6EDB_inline(L_2, Stack_1_get_Count_m145C99D2412AD5B6C8CADF47696A334272AA6EDB_RuntimeMethod_var);
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		__this->___has_reached_end_3 = (bool)1;
		goto IL_0054;
	}

IL_0037:
	{
		Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD* L_4 = __this->___ctx_stack_2;
		NullCheck(L_4);
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_5;
		L_5 = Stack_1_Peek_m20439CD5B4898A681D0F39D58BBC7E2C21CA584C(L_4, Stack_1_Peek_m20439CD5B4898A681D0F39D58BBC7E2C21CA584C_RuntimeMethod_var);
		__this->___context_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___context_1), (void*)L_5);
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_6 = __this->___context_1;
		NullCheck(L_6);
		L_6->___ExpectingValue_3 = (bool)0;
	}

IL_0054:
	{
		JsonWriter_Unindent_m2EF20A77048699830DA37601DA2BE20F17B1D5E0(__this, NULL);
		JsonWriter_Put_mFABB67DDE2B46F39CB3BD04A8A883D908934CDF0(__this, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::WriteObjectStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteObjectStart_m90F3A0A19C03EA7CF90017768E3FA217E4038688 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_mCC27D4FD504E058A5A42BE3285782C44D715DF4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_m3F03AD6E422930F933D182AD01154E08F32EFF3B(__this, 2, NULL);
		JsonWriter_PutNewline_mFE1588405B1DBE7ADC65A867FB1DB57A0D9CD3C4(__this, NULL);
		JsonWriter_Put_mFABB67DDE2B46F39CB3BD04A8A883D908934CDF0(__this, _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, NULL);
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_0 = (WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F*)il2cpp_codegen_object_new(WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WriterContext__ctor_m776EF36E46B33DFC054B4AD1E6F3139B038AF037(L_0, NULL);
		__this->___context_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___context_1), (void*)L_0);
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_1 = __this->___context_1;
		NullCheck(L_1);
		L_1->___InObject_2 = (bool)1;
		Stack_1_t2CDC562A4A6FD1FE4DE0FC63A08FC106C6A84EFD* L_2 = __this->___ctx_stack_2;
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_3 = __this->___context_1;
		NullCheck(L_2);
		Stack_1_Push_mCC27D4FD504E058A5A42BE3285782C44D715DF4A(L_2, L_3, Stack_1_Push_mCC27D4FD504E058A5A42BE3285782C44D715DF4A_RuntimeMethod_var);
		JsonWriter_Indent_m139D71DBB2C331C1C9A23D48AD0B607D10D8FEFA(__this, NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::WritePropertyName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WritePropertyName_m5646EF1771ABCFCCAAD52086AAE3387579E158E0 (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, String_t* ___0_property_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		JsonWriter_DoValidation_m3F03AD6E422930F933D182AD01154E08F32EFF3B(__this, 3, NULL);
		JsonWriter_PutNewline_mFE1588405B1DBE7ADC65A867FB1DB57A0D9CD3C4(__this, NULL);
		String_t* L_0 = ___0_property_name;
		JsonWriter_PutString_m8BD1DBB2B72F8027F3B9DE4CD5D4807C5849F3D1(__this, L_0, NULL);
		bool L_1 = __this->___pretty_print_8;
		if (!L_1)
		{
			goto IL_008b;
		}
	}
	{
		String_t* L_2 = ___0_property_name;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_4 = __this->___context_1;
		NullCheck(L_4);
		int32_t L_5 = L_4->___Padding_4;
		if ((((int32_t)L_3) <= ((int32_t)L_5)))
		{
			goto IL_0046;
		}
	}
	{
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_6 = __this->___context_1;
		String_t* L_7 = ___0_property_name;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		NullCheck(L_6);
		L_6->___Padding_4 = L_8;
	}

IL_0046:
	{
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_9 = __this->___context_1;
		NullCheck(L_9);
		int32_t L_10 = L_9->___Padding_4;
		String_t* L_11 = ___0_property_name;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_11, NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_10, L_12));
		goto IL_006f;
	}

IL_005e:
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_13 = __this->___writer_10;
		NullCheck(L_13);
		VirtualActionInvoker1< Il2CppChar >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_13, ((int32_t)32));
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}

IL_006f:
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) >= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_16 = __this->___writer_10;
		NullCheck(L_16);
		VirtualActionInvoker1< String_t* >::Invoke(16 /* System.Void System.IO.TextWriter::Write(System.String) */, L_16, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		goto IL_0098;
	}

IL_008b:
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_17 = __this->___writer_10;
		NullCheck(L_17);
		VirtualActionInvoker1< Il2CppChar >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_17, ((int32_t)58));
	}

IL_0098:
	{
		WriterContext_t5E6D8EFF41F41F382870C9F0452344B25B6E666F* L_18 = __this->___context_1;
		NullCheck(L_18);
		L_18->___ExpectingValue_3 = (bool)1;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LitJson.FsmContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmContext__ctor_m65740EA47916AE8C2881DD66B2EEE0CECA3E7189 (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LitJson.Lexer::.ctor(System.IO.TextReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer__ctor_mEF8BD28E77BCC5B98C34C9CE51CD2DCF786CA5A9 (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		__this->___allow_comments_2 = (bool)1;
		__this->___allow_single_quoted_strings_3 = (bool)1;
		__this->___input_buffer_6 = 0;
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_0, ((int32_t)128), NULL);
		__this->___string_buffer_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___string_buffer_10), (void*)L_0);
		__this->___state_9 = 1;
		__this->___end_of_input_4 = (bool)0;
		TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* L_1 = ___0_reader;
		__this->___reader_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reader_8), (void*)L_1);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_2 = (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1*)il2cpp_codegen_object_new(FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		FsmContext__ctor_m65740EA47916AE8C2881DD66B2EEE0CECA3E7189(L_2, NULL);
		__this->___fsm_context_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fsm_context_5), (void*)L_2);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_3 = __this->___fsm_context_5;
		NullCheck(L_3);
		L_3->___L_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___L_2), (void*)__this);
		return;
	}
}
// System.Void LitJson.Lexer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer__cctor_m45DEF85CA6C7779F89F2D875FC750EE22B0B12E9 (const RuntimeMethod* method) 
{
	{
		Lexer_PopulateFsmTables_m4FBE23E5C025665992DDA5398537C9D180A15BF7(NULL);
		return;
	}
}
// System.Boolean LitJson.Lexer::get_AllowComments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_get_AllowComments_m0810E49622D9958F3C841466EEE6A9695B09F8AB (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___allow_comments_2;
		return L_0;
	}
}
// System.Void LitJson.Lexer::set_AllowComments(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer_set_AllowComments_mD446284CCEBEE8C862E32DCC4C3503D0BA8AF25A (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___allow_comments_2 = L_0;
		return;
	}
}
// System.Boolean LitJson.Lexer::get_AllowSingleQuotedStrings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_get_AllowSingleQuotedStrings_m1A632DD60FDED6764AEF678AA716DDB98103A763 (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___allow_single_quoted_strings_3;
		return L_0;
	}
}
// System.Void LitJson.Lexer::set_AllowSingleQuotedStrings(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer_set_AllowSingleQuotedStrings_mA18FE918B277D75318D4DB37638C04173C05A305 (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___allow_single_quoted_strings_3 = L_0;
		return;
	}
}
// System.Boolean LitJson.Lexer::get_EndOfInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_get_EndOfInput_m450A1AC83F893FDE38826AFD2A726428956491AC (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___end_of_input_4;
		return L_0;
	}
}
// System.Int32 LitJson.Lexer::get_Token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lexer_get_Token_m77727EC36916D1258709D74850710E0487B67F99 (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___token_12;
		return L_0;
	}
}
// System.String LitJson.Lexer::get_StringValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Lexer_get_StringValue_mE4230649FF6DC2B66F9FAA021BB30FC8B7EBA5FF (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___string_value_11;
		return L_0;
	}
}
// System.Int32 LitJson.Lexer::HexValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lexer_HexValue_m5FF113620372573CAA3AAA87DE9BFDFE9D1AA83A (int32_t ___0_digit, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_digit;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_1, ((int32_t)65))))
		{
			case 0:
			{
				goto IL_0049;
			}
			case 1:
			{
				goto IL_004c;
			}
			case 2:
			{
				goto IL_004f;
			}
			case 3:
			{
				goto IL_0052;
			}
			case 4:
			{
				goto IL_0055;
			}
			case 5:
			{
				goto IL_0058;
			}
		}
	}
	{
		int32_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_2, ((int32_t)97))))
		{
			case 0:
			{
				goto IL_0049;
			}
			case 1:
			{
				goto IL_004c;
			}
			case 2:
			{
				goto IL_004f;
			}
			case 3:
			{
				goto IL_0052;
			}
			case 4:
			{
				goto IL_0055;
			}
			case 5:
			{
				goto IL_0058;
			}
		}
	}
	{
		goto IL_005b;
	}

IL_0049:
	{
		return ((int32_t)10);
	}

IL_004c:
	{
		return ((int32_t)11);
	}

IL_004f:
	{
		return ((int32_t)12);
	}

IL_0052:
	{
		return ((int32_t)13);
	}

IL_0055:
	{
		return ((int32_t)14);
	}

IL_0058:
	{
		return ((int32_t)15);
	}

IL_005b:
	{
		int32_t L_3 = ___0_digit;
		return ((int32_t)il2cpp_codegen_subtract(L_3, ((int32_t)48)));
	}
}
// System.Void LitJson.Lexer::PopulateFsmTables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer_PopulateFsmTables_m4FBE23E5C025665992DDA5398537C9D180A15BF7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State10_m5904073970AD0D36A52E6EF3528D8932E8588D59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State11_m5A9D0CA38509AB81A532487CF5D2DC65D6B71F04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State12_m958CFDBC029123955374295C3E9913D1599A196D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State13_m560152ABC44290068A66CB6BFC939C5AAFEC51FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State14_m8C25AB90286E32F384E390E17E726F1BC08BC9DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State15_m00E0DE3464F1159F7EB835A3286EFFA40B558403_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State16_m8BD82487456FA900D6BBDED72C8C975696D67804_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State17_mDFB66C6B09C25B8B8CC2EC226F446FEF70AFE493_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State18_m2C29A371734A3AF4B66ACD39EA4356FCEEB42703_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State19_mD468E390FBA1C3B79566FD0CF8AB183BEF7B9A7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State1_m35B7B80F34B274EC767AAE1FB3F61D2DB4A64699_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State20_mB134E41DBE7A01B14B8ADBBEDFAE16596CB76C1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State21_m98740912488BE0C617E7112B1EFA0CC52080297A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State22_m40E243F9BE396E171757231B9D5045880E92EC2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State23_m14C029F3770CEF5E40A14DE7B3D3C2952D9C385F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State24_mD981E66641429ED14661F0D83F155ACB0ADE601E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State25_m846973336CD8B49363EBCFB9EF83676772B9B6F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State26_m464EBDB9597D118A7666A693F407F7E7126752EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State27_mFDC378B071D2ABA7045A6CE1B8AE7C7F40D99638_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State28_m151FEC6858FB9E2A515CABFEFEDE5DAB3F736F91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State2_m205EFB31447C24D81684803A8952AE47F34289E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State3_mD4320873954DA33A7B26AA9B6CF7CD64A8588783_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State4_m88410392996F1D5DAB6DADC91AE16FC7CA54FF86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State5_mA1FA2D1CC7595C3D70A02973568DADDD27CFFA87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State6_m4B7FE39523E86CA3283F618065D8647CCFC6C0B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State7_m5464256E9F4EF412B26461E52B133812F79EFA41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State8_mEE57AB611D759135E18E796C685799AF59653DF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State9_m2A2DF75F8B8AEFAAFF778393AFCC9605ED84C01C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3EU7B18f18ac2U2Df585U2D405aU2Dac91U2Dbcb41785a078U7D_tACFC88B052112E097360D2A31C5DC6CFC2372D2C____U24fieldU2DC_12_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_0 = (StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93*)(StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93*)SZArrayNew(StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93_il2cpp_TypeInfo_var, (uint32_t)((int32_t)28));
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_1 = L_0;
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* L_2 = (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)il2cpp_codegen_object_new(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		StateHandler__ctor_m33A94C96682C78721802E376BDC6673C9CDB08E1(L_2, NULL, (intptr_t)((void*)Lexer_State1_m35B7B80F34B274EC767AAE1FB3F61D2DB4A64699_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)L_2);
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_3 = L_1;
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* L_4 = (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)il2cpp_codegen_object_new(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		StateHandler__ctor_m33A94C96682C78721802E376BDC6673C9CDB08E1(L_4, NULL, (intptr_t)((void*)Lexer_State2_m205EFB31447C24D81684803A8952AE47F34289E2_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)L_4);
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_5 = L_3;
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* L_6 = (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)il2cpp_codegen_object_new(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		StateHandler__ctor_m33A94C96682C78721802E376BDC6673C9CDB08E1(L_6, NULL, (intptr_t)((void*)Lexer_State3_mD4320873954DA33A7B26AA9B6CF7CD64A8588783_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)L_6);
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_7 = L_5;
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* L_8 = (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)il2cpp_codegen_object_new(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		StateHandler__ctor_m33A94C96682C78721802E376BDC6673C9CDB08E1(L_8, NULL, (intptr_t)((void*)Lexer_State4_m88410392996F1D5DAB6DADC91AE16FC7CA54FF86_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)L_8);
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_9 = L_7;
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* L_10 = (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)il2cpp_codegen_object_new(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		StateHandler__ctor_m33A94C96682C78721802E376BDC6673C9CDB08E1(L_10, NULL, (intptr_t)((void*)Lexer_State5_mA1FA2D1CC7595C3D70A02973568DADDD27CFFA87_RuntimeMethod_var), NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)L_10);
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_11 = L_9;
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* L_12 = (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)il2cpp_codegen_object_new(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		StateHandler__ctor_m33A94C96682C78721802E376BDC6673C9CDB08E1(L_12, NULL, (intptr_t)((void*)Lexer_State6_m4B7FE39523E86CA3283F618065D8647CCFC6C0B3_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)L_12);
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_13 = L_11;
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* L_14 = (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)il2cpp_codegen_object_new(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		StateHandler__ctor_m33A94C96682C78721802E376BDC6673C9CDB08E1(L_14, NULL, (intptr_t)((void*)Lexer_State7_m5464256E9F4EF412B26461E52B133812F79EFA41_RuntimeMethod_var), NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)L_14);
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_15 = L_13;
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* L_16 = (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)il2cpp_codegen_object_new(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		StateHandler__ctor_m33A94C96682C78721802E376BDC6673C9CDB08E1(L_16, NULL, (intptr_t)((void*)Lexer_State8_mEE57AB611D759135E18E796C685799AF59653DF1_RuntimeMethod_var), NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(7), (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)L_16);
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_17 = L_15;
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* L_18 = (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)il2cpp_codegen_object_new(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		StateHandler__ctor_m33A94C96682C78721802E376BDC6673C9CDB08E1(L_18, NULL, (intptr_t)((void*)Lexer_State9_m2A2DF75F8B8AEFAAFF778393AFCC9605ED84C01C_RuntimeMethod_var), NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(8), (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)L_18);
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_19 = L_17;
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* L_20 = (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)il2cpp_codegen_object_new(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		StateHandler__ctor_m33A94C96682C78721802E376BDC6673C9CDB08E1(L_20, NULL, (intptr_t)((void*)Lexer_State10_m5904073970AD0D36A52E6EF3528D8932E8588D59_RuntimeMethod_var), NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)L_20);
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_21 = L_19;
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* L_22 = (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)il2cpp_codegen_object_new(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		StateHandler__ctor_m33A94C96682C78721802E376BDC6673C9CDB08E1(L_22, NULL, (intptr_t)((void*)Lexer_State11_m5A9D0CA38509AB81A532487CF5D2DC65D6B71F04_RuntimeMethod_var), NULL);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)L_22);
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_23 = L_21;
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* L_24 = (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)il2cpp_codegen_object_new(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		StateHandler__ctor_m33A94C96682C78721802E376BDC6673C9CDB08E1(L_24, NULL, (intptr_t)((void*)Lexer_State12_m958CFDBC029123955374295C3E9913D1599A196D_RuntimeMethod_var), NULL);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_24);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)L_24);
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_25 = L_23;
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* L_26 = (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)il2cpp_codegen_object_new(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		StateHandler__ctor_m33A94C96682C78721802E376BDC6673C9CDB08E1(L_26, NULL, (intptr_t)((void*)Lexer_State13_m560152ABC44290068A66CB6BFC939C5AAFEC51FF_RuntimeMethod_var), NULL);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_26);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)L_26);
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_27 = L_25;
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* L_28 = (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)il2cpp_codegen_object_new(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		StateHandler__ctor_m33A94C96682C78721802E376BDC6673C9CDB08E1(L_28, NULL, (intptr_t)((void*)Lexer_State14_m8C25AB90286E32F384E390E17E726F1BC08BC9DD_RuntimeMethod_var), NULL);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_28);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)L_28);
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_29 = L_27;
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* L_30 = (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)il2cpp_codegen_object_new(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		StateHandler__ctor_m33A94C96682C78721802E376BDC6673C9CDB08E1(L_30, NULL, (intptr_t)((void*)Lexer_State15_m00E0DE3464F1159F7EB835A3286EFFA40B558403_RuntimeMethod_var), NULL);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_30);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)L_30);
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_31 = L_29;
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* L_32 = (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)il2cpp_codegen_object_new(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		StateHandler__ctor_m33A94C96682C78721802E376BDC6673C9CDB08E1(L_32, NULL, (intptr_t)((void*)Lexer_State16_m8BD82487456FA900D6BBDED72C8C975696D67804_RuntimeMethod_var), NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)L_32);
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_33 = L_31;
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* L_34 = (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)il2cpp_codegen_object_new(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603_il2cpp_TypeInfo_var);
		NullCheck(L_34);
		StateHandler__ctor_m33A94C96682C78721802E376BDC6673C9CDB08E1(L_34, NULL, (intptr_t)((void*)Lexer_State17_mDFB66C6B09C25B8B8CC2EC226F446FEF70AFE493_RuntimeMethod_var), NULL);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_34);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)L_34);
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_35 = L_33;
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* L_36 = (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)il2cpp_codegen_object_new(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603_il2cpp_TypeInfo_var);
		NullCheck(L_36);
		StateHandler__ctor_m33A94C96682C78721802E376BDC6673C9CDB08E1(L_36, NULL, (intptr_t)((void*)Lexer_State18_m2C29A371734A3AF4B66ACD39EA4356FCEEB42703_RuntimeMethod_var), NULL);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_36);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)L_36);
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_37 = L_35;
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* L_38 = (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)il2cpp_codegen_object_new(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603_il2cpp_TypeInfo_var);
		NullCheck(L_38);
		StateHandler__ctor_m33A94C96682C78721802E376BDC6673C9CDB08E1(L_38, NULL, (intptr_t)((void*)Lexer_State19_mD468E390FBA1C3B79566FD0CF8AB183BEF7B9A7C_RuntimeMethod_var), NULL);
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_38);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)L_38);
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_39 = L_37;
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* L_40 = (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)il2cpp_codegen_object_new(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		StateHandler__ctor_m33A94C96682C78721802E376BDC6673C9CDB08E1(L_40, NULL, (intptr_t)((void*)Lexer_State20_mB134E41DBE7A01B14B8ADBBEDFAE16596CB76C1A_RuntimeMethod_var), NULL);
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_40);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)L_40);
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_41 = L_39;
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* L_42 = (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)il2cpp_codegen_object_new(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603_il2cpp_TypeInfo_var);
		NullCheck(L_42);
		StateHandler__ctor_m33A94C96682C78721802E376BDC6673C9CDB08E1(L_42, NULL, (intptr_t)((void*)Lexer_State21_m98740912488BE0C617E7112B1EFA0CC52080297A_RuntimeMethod_var), NULL);
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_42);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)20)), (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)L_42);
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_43 = L_41;
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* L_44 = (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)il2cpp_codegen_object_new(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603_il2cpp_TypeInfo_var);
		NullCheck(L_44);
		StateHandler__ctor_m33A94C96682C78721802E376BDC6673C9CDB08E1(L_44, NULL, (intptr_t)((void*)Lexer_State22_m40E243F9BE396E171757231B9D5045880E92EC2D_RuntimeMethod_var), NULL);
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_44);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)21)), (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)L_44);
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_45 = L_43;
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* L_46 = (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)il2cpp_codegen_object_new(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603_il2cpp_TypeInfo_var);
		NullCheck(L_46);
		StateHandler__ctor_m33A94C96682C78721802E376BDC6673C9CDB08E1(L_46, NULL, (intptr_t)((void*)Lexer_State23_m14C029F3770CEF5E40A14DE7B3D3C2952D9C385F_RuntimeMethod_var), NULL);
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, L_46);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)22)), (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)L_46);
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_47 = L_45;
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* L_48 = (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)il2cpp_codegen_object_new(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603_il2cpp_TypeInfo_var);
		NullCheck(L_48);
		StateHandler__ctor_m33A94C96682C78721802E376BDC6673C9CDB08E1(L_48, NULL, (intptr_t)((void*)Lexer_State24_mD981E66641429ED14661F0D83F155ACB0ADE601E_RuntimeMethod_var), NULL);
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, L_48);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)23)), (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)L_48);
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_49 = L_47;
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* L_50 = (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)il2cpp_codegen_object_new(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603_il2cpp_TypeInfo_var);
		NullCheck(L_50);
		StateHandler__ctor_m33A94C96682C78721802E376BDC6673C9CDB08E1(L_50, NULL, (intptr_t)((void*)Lexer_State25_m846973336CD8B49363EBCFB9EF83676772B9B6F3_RuntimeMethod_var), NULL);
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, L_50);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)24)), (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)L_50);
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_51 = L_49;
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* L_52 = (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)il2cpp_codegen_object_new(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603_il2cpp_TypeInfo_var);
		NullCheck(L_52);
		StateHandler__ctor_m33A94C96682C78721802E376BDC6673C9CDB08E1(L_52, NULL, (intptr_t)((void*)Lexer_State26_m464EBDB9597D118A7666A693F407F7E7126752EB_RuntimeMethod_var), NULL);
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, L_52);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)25)), (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)L_52);
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_53 = L_51;
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* L_54 = (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)il2cpp_codegen_object_new(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603_il2cpp_TypeInfo_var);
		NullCheck(L_54);
		StateHandler__ctor_m33A94C96682C78721802E376BDC6673C9CDB08E1(L_54, NULL, (intptr_t)((void*)Lexer_State27_mFDC378B071D2ABA7045A6CE1B8AE7C7F40D99638_RuntimeMethod_var), NULL);
		NullCheck(L_53);
		ArrayElementTypeCheck (L_53, L_54);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)26)), (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)L_54);
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_55 = L_53;
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* L_56 = (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)il2cpp_codegen_object_new(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603_il2cpp_TypeInfo_var);
		NullCheck(L_56);
		StateHandler__ctor_m33A94C96682C78721802E376BDC6673C9CDB08E1(L_56, NULL, (intptr_t)((void*)Lexer_State28_m151FEC6858FB9E2A515CABFEFEDE5DAB3F736F91_RuntimeMethod_var), NULL);
		NullCheck(L_55);
		ArrayElementTypeCheck (L_55, L_56);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)27)), (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*)L_56);
		il2cpp_codegen_runtime_class_init_inline(Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9_il2cpp_TypeInfo_var);
		((Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9_il2cpp_TypeInfo_var))->___fsm_handler_table_1 = L_55;
		Il2CppCodeGenWriteBarrier((void**)(&((Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9_il2cpp_TypeInfo_var))->___fsm_handler_table_1), (void*)L_55);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)28));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = L_57;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_59 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B18f18ac2U2Df585U2D405aU2Dac91U2Dbcb41785a078U7D_tACFC88B052112E097360D2A31C5DC6CFC2372D2C____U24fieldU2DC_12_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_58, L_59, NULL);
		((Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9_il2cpp_TypeInfo_var))->___fsm_return_table_0 = L_58;
		Il2CppCodeGenWriteBarrier((void**)(&((Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9_il2cpp_TypeInfo_var))->___fsm_return_table_0), (void*)L_58);
		return;
	}
}
// System.Char LitJson.Lexer::ProcessEscChar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Lexer_ProcessEscChar_m1E23F62F3A8846AA52FD98E49917B3A8C9C168E3 (int32_t ___0_esc_char, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_esc_char;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_1, ((int32_t)114))))
		{
			case 0:
			{
				goto IL_0061;
			}
			case 1:
			{
				goto IL_0017;
			}
			case 2:
			{
				goto IL_005e;
			}
		}
	}

IL_0017:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)34))))
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)39))))
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)47))))
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)92))))
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)98))))
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)102))))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)110))))
		{
			goto IL_005b;
		}
	}
	{
		goto IL_0069;
	}

IL_0054:
	{
		int32_t L_9 = ___0_esc_char;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Il2CppChar L_10;
		L_10 = Convert_ToChar_mF1B1B205DDEFDE52251235514E7DAFCAB37D1F24(L_9, NULL);
		return L_10;
	}

IL_005b:
	{
		return ((int32_t)10);
	}

IL_005e:
	{
		return ((int32_t)9);
	}

IL_0061:
	{
		return ((int32_t)13);
	}

IL_0064:
	{
		return 8;
	}

IL_0066:
	{
		return ((int32_t)12);
	}

IL_0069:
	{
		return ((int32_t)63);
	}
}
// System.Boolean LitJson.Lexer::State1(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State1_m35B7B80F34B274EC767AAE1FB3F61D2DB4A64699 (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___0_ctx, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		goto IL_01f7;
	}

IL_0005:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_0 = ___0_ctx;
		NullCheck(L_0);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_1 = L_0->___L_2;
		NullCheck(L_1);
		int32_t L_2 = L_1->___input_char_7;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)32))))
		{
			goto IL_003b;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_3 = ___0_ctx;
		NullCheck(L_3);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)9))))
		{
			goto IL_0040;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_6 = ___0_ctx;
		NullCheck(L_6);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_7 = L_6->___L_2;
		NullCheck(L_7);
		int32_t L_8 = L_7->___input_char_7;
		if ((((int32_t)L_8) > ((int32_t)((int32_t)13))))
		{
			goto IL_0040;
		}
	}

IL_003b:
	{
		goto IL_01f7;
	}

IL_0040:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_9 = ___0_ctx;
		NullCheck(L_9);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_10 = L_9->___L_2;
		NullCheck(L_10);
		int32_t L_11 = L_10->___input_char_7;
		if ((((int32_t)L_11) < ((int32_t)((int32_t)49))))
		{
			goto IL_008a;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_12 = ___0_ctx;
		NullCheck(L_12);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_13 = L_12->___L_2;
		NullCheck(L_13);
		int32_t L_14 = L_13->___input_char_7;
		if ((((int32_t)L_14) > ((int32_t)((int32_t)57))))
		{
			goto IL_008a;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_15 = ___0_ctx;
		NullCheck(L_15);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_16 = L_15->___L_2;
		NullCheck(L_16);
		StringBuilder_t* L_17 = L_16->___string_buffer_10;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_18 = ___0_ctx;
		NullCheck(L_18);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_19 = L_18->___L_2;
		NullCheck(L_19);
		int32_t L_20 = L_19->___input_char_7;
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_17, ((int32_t)(uint16_t)L_20), NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_22 = ___0_ctx;
		NullCheck(L_22);
		L_22->___NextState_1 = 3;
		return (bool)1;
	}

IL_008a:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_23 = ___0_ctx;
		NullCheck(L_23);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_24 = L_23->___L_2;
		NullCheck(L_24);
		int32_t L_25 = L_24->___input_char_7;
		V_0 = L_25;
		int32_t L_26 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_26, ((int32_t)39))))
		{
			case 0:
			{
				goto IL_01a9;
			}
			case 1:
			{
				goto IL_00c7;
			}
			case 2:
			{
				goto IL_00c7;
			}
			case 3:
			{
				goto IL_00c7;
			}
			case 4:
			{
				goto IL_00c7;
			}
			case 5:
			{
				goto IL_012f;
			}
			case 6:
			{
				goto IL_013f;
			}
			case 7:
			{
				goto IL_00c7;
			}
			case 8:
			{
				goto IL_01d9;
			}
			case 9:
			{
				goto IL_0165;
			}
		}
	}

IL_00c7:
	{
		int32_t L_27 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_27, ((int32_t)91))))
		{
			case 0:
			{
				goto IL_012f;
			}
			case 1:
			{
				goto IL_00dc;
			}
			case 2:
			{
				goto IL_012f;
			}
		}
	}

IL_00dc:
	{
		int32_t L_28 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_28, ((int32_t)123))))
		{
			case 0:
			{
				goto IL_012f;
			}
			case 1:
			{
				goto IL_00f1;
			}
			case 2:
			{
				goto IL_012f;
			}
		}
	}

IL_00f1:
	{
		int32_t L_29 = V_0;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)34))))
		{
			goto IL_011e;
		}
	}
	{
		int32_t L_30 = V_0;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)58))))
		{
			goto IL_012f;
		}
	}
	{
		int32_t L_31 = V_0;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)102))))
		{
			goto IL_018b;
		}
	}
	{
		int32_t L_32 = V_0;
		if ((((int32_t)L_32) == ((int32_t)((int32_t)110))))
		{
			goto IL_0195;
		}
	}
	{
		int32_t L_33 = V_0;
		if ((((int32_t)L_33) == ((int32_t)((int32_t)116))))
		{
			goto IL_019f;
		}
	}
	{
		goto IL_01f5;
	}

IL_011e:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_34 = ___0_ctx;
		NullCheck(L_34);
		L_34->___NextState_1 = ((int32_t)19);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_35 = ___0_ctx;
		NullCheck(L_35);
		L_35->___Return_0 = (bool)1;
		return (bool)1;
	}

IL_012f:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_36 = ___0_ctx;
		NullCheck(L_36);
		L_36->___NextState_1 = 1;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_37 = ___0_ctx;
		NullCheck(L_37);
		L_37->___Return_0 = (bool)1;
		return (bool)1;
	}

IL_013f:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_38 = ___0_ctx;
		NullCheck(L_38);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_39 = L_38->___L_2;
		NullCheck(L_39);
		StringBuilder_t* L_40 = L_39->___string_buffer_10;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_41 = ___0_ctx;
		NullCheck(L_41);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_42 = L_41->___L_2;
		NullCheck(L_42);
		int32_t L_43 = L_42->___input_char_7;
		NullCheck(L_40);
		StringBuilder_t* L_44;
		L_44 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_40, ((int32_t)(uint16_t)L_43), NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_45 = ___0_ctx;
		NullCheck(L_45);
		L_45->___NextState_1 = 2;
		return (bool)1;
	}

IL_0165:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_46 = ___0_ctx;
		NullCheck(L_46);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_47 = L_46->___L_2;
		NullCheck(L_47);
		StringBuilder_t* L_48 = L_47->___string_buffer_10;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_49 = ___0_ctx;
		NullCheck(L_49);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_50 = L_49->___L_2;
		NullCheck(L_50);
		int32_t L_51 = L_50->___input_char_7;
		NullCheck(L_48);
		StringBuilder_t* L_52;
		L_52 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_48, ((int32_t)(uint16_t)L_51), NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_53 = ___0_ctx;
		NullCheck(L_53);
		L_53->___NextState_1 = 4;
		return (bool)1;
	}

IL_018b:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_54 = ___0_ctx;
		NullCheck(L_54);
		L_54->___NextState_1 = ((int32_t)12);
		return (bool)1;
	}

IL_0195:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_55 = ___0_ctx;
		NullCheck(L_55);
		L_55->___NextState_1 = ((int32_t)16);
		return (bool)1;
	}

IL_019f:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_56 = ___0_ctx;
		NullCheck(L_56);
		L_56->___NextState_1 = ((int32_t)9);
		return (bool)1;
	}

IL_01a9:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_57 = ___0_ctx;
		NullCheck(L_57);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_58 = L_57->___L_2;
		NullCheck(L_58);
		bool L_59 = L_58->___allow_single_quoted_strings_3;
		if (L_59)
		{
			goto IL_01bb;
		}
	}
	{
		return (bool)0;
	}

IL_01bb:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_60 = ___0_ctx;
		NullCheck(L_60);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_61 = L_60->___L_2;
		NullCheck(L_61);
		L_61->___input_char_7 = ((int32_t)34);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_62 = ___0_ctx;
		NullCheck(L_62);
		L_62->___NextState_1 = ((int32_t)23);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_63 = ___0_ctx;
		NullCheck(L_63);
		L_63->___Return_0 = (bool)1;
		return (bool)1;
	}

IL_01d9:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_64 = ___0_ctx;
		NullCheck(L_64);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_65 = L_64->___L_2;
		NullCheck(L_65);
		bool L_66 = L_65->___allow_comments_2;
		if (L_66)
		{
			goto IL_01eb;
		}
	}
	{
		return (bool)0;
	}

IL_01eb:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_67 = ___0_ctx;
		NullCheck(L_67);
		L_67->___NextState_1 = ((int32_t)25);
		return (bool)1;
	}

IL_01f5:
	{
		return (bool)0;
	}

IL_01f7:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_68 = ___0_ctx;
		NullCheck(L_68);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_69 = L_68->___L_2;
		NullCheck(L_69);
		bool L_70;
		L_70 = Lexer_GetChar_m240416C419AACCDFAD8C74F764421740C53A6253(L_69, NULL);
		if (L_70)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State2(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State2_m205EFB31447C24D81684803A8952AE47F34289E2 (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___0_ctx, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_0 = ___0_ctx;
		NullCheck(L_0);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m240416C419AACCDFAD8C74F764421740C53A6253(L_1, NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_3 = ___0_ctx;
		NullCheck(L_3);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)49))))
		{
			goto IL_0056;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_6 = ___0_ctx;
		NullCheck(L_6);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_7 = L_6->___L_2;
		NullCheck(L_7);
		int32_t L_8 = L_7->___input_char_7;
		if ((((int32_t)L_8) > ((int32_t)((int32_t)57))))
		{
			goto IL_0056;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_9 = ___0_ctx;
		NullCheck(L_9);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_10 = L_9->___L_2;
		NullCheck(L_10);
		StringBuilder_t* L_11 = L_10->___string_buffer_10;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_12 = ___0_ctx;
		NullCheck(L_12);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_13 = L_12->___L_2;
		NullCheck(L_13);
		int32_t L_14 = L_13->___input_char_7;
		NullCheck(L_11);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_11, ((int32_t)(uint16_t)L_14), NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_16 = ___0_ctx;
		NullCheck(L_16);
		L_16->___NextState_1 = 3;
		return (bool)1;
	}

IL_0056:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_17 = ___0_ctx;
		NullCheck(L_17);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_18 = L_17->___L_2;
		NullCheck(L_18);
		int32_t L_19 = L_18->___input_char_7;
		V_0 = L_19;
		int32_t L_20 = V_0;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)48))))
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0095;
	}

IL_006f:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_21 = ___0_ctx;
		NullCheck(L_21);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_22 = L_21->___L_2;
		NullCheck(L_22);
		StringBuilder_t* L_23 = L_22->___string_buffer_10;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_24 = ___0_ctx;
		NullCheck(L_24);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_25 = L_24->___L_2;
		NullCheck(L_25);
		int32_t L_26 = L_25->___input_char_7;
		NullCheck(L_23);
		StringBuilder_t* L_27;
		L_27 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_23, ((int32_t)(uint16_t)L_26), NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_28 = ___0_ctx;
		NullCheck(L_28);
		L_28->___NextState_1 = 4;
		return (bool)1;
	}

IL_0095:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State3(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State3_mD4320873954DA33A7B26AA9B6CF7CD64A8588783 (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___0_ctx, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		goto IL_0140;
	}

IL_0005:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_0 = ___0_ctx;
		NullCheck(L_0);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_1 = L_0->___L_2;
		NullCheck(L_1);
		int32_t L_2 = L_1->___input_char_7;
		if ((((int32_t)L_2) < ((int32_t)((int32_t)48))))
		{
			goto IL_004b;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_3 = ___0_ctx;
		NullCheck(L_3);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		if ((((int32_t)L_5) > ((int32_t)((int32_t)57))))
		{
			goto IL_004b;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_6 = ___0_ctx;
		NullCheck(L_6);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_7 = L_6->___L_2;
		NullCheck(L_7);
		StringBuilder_t* L_8 = L_7->___string_buffer_10;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_9 = ___0_ctx;
		NullCheck(L_9);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_10 = L_9->___L_2;
		NullCheck(L_10);
		int32_t L_11 = L_10->___input_char_7;
		NullCheck(L_8);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_8, ((int32_t)(uint16_t)L_11), NULL);
		goto IL_0140;
	}

IL_004b:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_13 = ___0_ctx;
		NullCheck(L_13);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_14 = L_13->___L_2;
		NullCheck(L_14);
		int32_t L_15 = L_14->___input_char_7;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)32))))
		{
			goto IL_0081;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_16 = ___0_ctx;
		NullCheck(L_16);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_17 = L_16->___L_2;
		NullCheck(L_17);
		int32_t L_18 = L_17->___input_char_7;
		if ((((int32_t)L_18) < ((int32_t)((int32_t)9))))
		{
			goto IL_0091;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_19 = ___0_ctx;
		NullCheck(L_19);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_20 = L_19->___L_2;
		NullCheck(L_20);
		int32_t L_21 = L_20->___input_char_7;
		if ((((int32_t)L_21) > ((int32_t)((int32_t)13))))
		{
			goto IL_0091;
		}
	}

IL_0081:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_22 = ___0_ctx;
		NullCheck(L_22);
		L_22->___Return_0 = (bool)1;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_23 = ___0_ctx;
		NullCheck(L_23);
		L_23->___NextState_1 = 1;
		return (bool)1;
	}

IL_0091:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_24 = ___0_ctx;
		NullCheck(L_24);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_25 = L_24->___L_2;
		NullCheck(L_25);
		int32_t L_26 = L_25->___input_char_7;
		V_0 = L_26;
		int32_t L_27 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_27, ((int32_t)44))))
		{
			case 0:
			{
				goto IL_00d7;
			}
			case 1:
			{
				goto IL_00b2;
			}
			case 2:
			{
				goto IL_00f2;
			}
		}
	}

IL_00b2:
	{
		int32_t L_28 = V_0;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)69))))
		{
			goto IL_0118;
		}
	}
	{
		int32_t L_29 = V_0;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)93))))
		{
			goto IL_00d7;
		}
	}
	{
		int32_t L_30 = V_0;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)101))))
		{
			goto IL_0118;
		}
	}
	{
		int32_t L_31 = V_0;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)125))))
		{
			goto IL_00d7;
		}
	}
	{
		goto IL_013e;
	}

IL_00d7:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_32 = ___0_ctx;
		NullCheck(L_32);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_33 = L_32->___L_2;
		NullCheck(L_33);
		Lexer_UngetChar_m1FBA3B548EFBD21F87308A001FD32ECCCF86C5D4(L_33, NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_34 = ___0_ctx;
		NullCheck(L_34);
		L_34->___Return_0 = (bool)1;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_35 = ___0_ctx;
		NullCheck(L_35);
		L_35->___NextState_1 = 1;
		return (bool)1;
	}

IL_00f2:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_36 = ___0_ctx;
		NullCheck(L_36);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_37 = L_36->___L_2;
		NullCheck(L_37);
		StringBuilder_t* L_38 = L_37->___string_buffer_10;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_39 = ___0_ctx;
		NullCheck(L_39);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_40 = L_39->___L_2;
		NullCheck(L_40);
		int32_t L_41 = L_40->___input_char_7;
		NullCheck(L_38);
		StringBuilder_t* L_42;
		L_42 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_38, ((int32_t)(uint16_t)L_41), NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_43 = ___0_ctx;
		NullCheck(L_43);
		L_43->___NextState_1 = 5;
		return (bool)1;
	}

IL_0118:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_44 = ___0_ctx;
		NullCheck(L_44);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_45 = L_44->___L_2;
		NullCheck(L_45);
		StringBuilder_t* L_46 = L_45->___string_buffer_10;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_47 = ___0_ctx;
		NullCheck(L_47);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_48 = L_47->___L_2;
		NullCheck(L_48);
		int32_t L_49 = L_48->___input_char_7;
		NullCheck(L_46);
		StringBuilder_t* L_50;
		L_50 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_46, ((int32_t)(uint16_t)L_49), NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_51 = ___0_ctx;
		NullCheck(L_51);
		L_51->___NextState_1 = 7;
		return (bool)1;
	}

IL_013e:
	{
		return (bool)0;
	}

IL_0140:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_52 = ___0_ctx;
		NullCheck(L_52);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_53 = L_52->___L_2;
		NullCheck(L_53);
		bool L_54;
		L_54 = Lexer_GetChar_m240416C419AACCDFAD8C74F764421740C53A6253(L_53, NULL);
		if (L_54)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State4(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State4_m88410392996F1D5DAB6DADC91AE16FC7CA54FF86 (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___0_ctx, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_0 = ___0_ctx;
		NullCheck(L_0);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m240416C419AACCDFAD8C74F764421740C53A6253(L_1, NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_3 = ___0_ctx;
		NullCheck(L_3);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)32))))
		{
			goto IL_0042;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_6 = ___0_ctx;
		NullCheck(L_6);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_7 = L_6->___L_2;
		NullCheck(L_7);
		int32_t L_8 = L_7->___input_char_7;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)9))))
		{
			goto IL_0052;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_9 = ___0_ctx;
		NullCheck(L_9);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_10 = L_9->___L_2;
		NullCheck(L_10);
		int32_t L_11 = L_10->___input_char_7;
		if ((((int32_t)L_11) > ((int32_t)((int32_t)13))))
		{
			goto IL_0052;
		}
	}

IL_0042:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_12 = ___0_ctx;
		NullCheck(L_12);
		L_12->___Return_0 = (bool)1;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_13 = ___0_ctx;
		NullCheck(L_13);
		L_13->___NextState_1 = 1;
		return (bool)1;
	}

IL_0052:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_14 = ___0_ctx;
		NullCheck(L_14);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_15 = L_14->___L_2;
		NullCheck(L_15);
		int32_t L_16 = L_15->___input_char_7;
		V_0 = L_16;
		int32_t L_17 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_17, ((int32_t)44))))
		{
			case 0:
			{
				goto IL_0098;
			}
			case 1:
			{
				goto IL_0073;
			}
			case 2:
			{
				goto IL_00b3;
			}
		}
	}

IL_0073:
	{
		int32_t L_18 = V_0;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)69))))
		{
			goto IL_00d9;
		}
	}
	{
		int32_t L_19 = V_0;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)93))))
		{
			goto IL_0098;
		}
	}
	{
		int32_t L_20 = V_0;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)101))))
		{
			goto IL_00d9;
		}
	}
	{
		int32_t L_21 = V_0;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)125))))
		{
			goto IL_0098;
		}
	}
	{
		goto IL_00ff;
	}

IL_0098:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_22 = ___0_ctx;
		NullCheck(L_22);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_23 = L_22->___L_2;
		NullCheck(L_23);
		Lexer_UngetChar_m1FBA3B548EFBD21F87308A001FD32ECCCF86C5D4(L_23, NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_24 = ___0_ctx;
		NullCheck(L_24);
		L_24->___Return_0 = (bool)1;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_25 = ___0_ctx;
		NullCheck(L_25);
		L_25->___NextState_1 = 1;
		return (bool)1;
	}

IL_00b3:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_26 = ___0_ctx;
		NullCheck(L_26);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_27 = L_26->___L_2;
		NullCheck(L_27);
		StringBuilder_t* L_28 = L_27->___string_buffer_10;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_29 = ___0_ctx;
		NullCheck(L_29);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_30 = L_29->___L_2;
		NullCheck(L_30);
		int32_t L_31 = L_30->___input_char_7;
		NullCheck(L_28);
		StringBuilder_t* L_32;
		L_32 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_28, ((int32_t)(uint16_t)L_31), NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_33 = ___0_ctx;
		NullCheck(L_33);
		L_33->___NextState_1 = 5;
		return (bool)1;
	}

IL_00d9:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_34 = ___0_ctx;
		NullCheck(L_34);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_35 = L_34->___L_2;
		NullCheck(L_35);
		StringBuilder_t* L_36 = L_35->___string_buffer_10;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_37 = ___0_ctx;
		NullCheck(L_37);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_38 = L_37->___L_2;
		NullCheck(L_38);
		int32_t L_39 = L_38->___input_char_7;
		NullCheck(L_36);
		StringBuilder_t* L_40;
		L_40 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_36, ((int32_t)(uint16_t)L_39), NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_41 = ___0_ctx;
		NullCheck(L_41);
		L_41->___NextState_1 = 7;
		return (bool)1;
	}

IL_00ff:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State5(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State5_mA1FA2D1CC7595C3D70A02973568DADDD27CFFA87 (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___0_ctx, const RuntimeMethod* method) 
{
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_0 = ___0_ctx;
		NullCheck(L_0);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m240416C419AACCDFAD8C74F764421740C53A6253(L_1, NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_3 = ___0_ctx;
		NullCheck(L_3);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)48))))
		{
			goto IL_0056;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_6 = ___0_ctx;
		NullCheck(L_6);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_7 = L_6->___L_2;
		NullCheck(L_7);
		int32_t L_8 = L_7->___input_char_7;
		if ((((int32_t)L_8) > ((int32_t)((int32_t)57))))
		{
			goto IL_0056;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_9 = ___0_ctx;
		NullCheck(L_9);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_10 = L_9->___L_2;
		NullCheck(L_10);
		StringBuilder_t* L_11 = L_10->___string_buffer_10;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_12 = ___0_ctx;
		NullCheck(L_12);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_13 = L_12->___L_2;
		NullCheck(L_13);
		int32_t L_14 = L_13->___input_char_7;
		NullCheck(L_11);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_11, ((int32_t)(uint16_t)L_14), NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_16 = ___0_ctx;
		NullCheck(L_16);
		L_16->___NextState_1 = 6;
		return (bool)1;
	}

IL_0056:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State6(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State6_m4B7FE39523E86CA3283F618065D8647CCFC6C0B3 (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___0_ctx, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		goto IL_010d;
	}

IL_0005:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_0 = ___0_ctx;
		NullCheck(L_0);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_1 = L_0->___L_2;
		NullCheck(L_1);
		int32_t L_2 = L_1->___input_char_7;
		if ((((int32_t)L_2) < ((int32_t)((int32_t)48))))
		{
			goto IL_004b;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_3 = ___0_ctx;
		NullCheck(L_3);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		if ((((int32_t)L_5) > ((int32_t)((int32_t)57))))
		{
			goto IL_004b;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_6 = ___0_ctx;
		NullCheck(L_6);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_7 = L_6->___L_2;
		NullCheck(L_7);
		StringBuilder_t* L_8 = L_7->___string_buffer_10;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_9 = ___0_ctx;
		NullCheck(L_9);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_10 = L_9->___L_2;
		NullCheck(L_10);
		int32_t L_11 = L_10->___input_char_7;
		NullCheck(L_8);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_8, ((int32_t)(uint16_t)L_11), NULL);
		goto IL_010d;
	}

IL_004b:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_13 = ___0_ctx;
		NullCheck(L_13);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_14 = L_13->___L_2;
		NullCheck(L_14);
		int32_t L_15 = L_14->___input_char_7;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)32))))
		{
			goto IL_0081;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_16 = ___0_ctx;
		NullCheck(L_16);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_17 = L_16->___L_2;
		NullCheck(L_17);
		int32_t L_18 = L_17->___input_char_7;
		if ((((int32_t)L_18) < ((int32_t)((int32_t)9))))
		{
			goto IL_0091;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_19 = ___0_ctx;
		NullCheck(L_19);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_20 = L_19->___L_2;
		NullCheck(L_20);
		int32_t L_21 = L_20->___input_char_7;
		if ((((int32_t)L_21) > ((int32_t)((int32_t)13))))
		{
			goto IL_0091;
		}
	}

IL_0081:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_22 = ___0_ctx;
		NullCheck(L_22);
		L_22->___Return_0 = (bool)1;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_23 = ___0_ctx;
		NullCheck(L_23);
		L_23->___NextState_1 = 1;
		return (bool)1;
	}

IL_0091:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_24 = ___0_ctx;
		NullCheck(L_24);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_25 = L_24->___L_2;
		NullCheck(L_25);
		int32_t L_26 = L_25->___input_char_7;
		V_0 = L_26;
		int32_t L_27 = V_0;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)44))))
		{
			goto IL_00ca;
		}
	}
	{
		int32_t L_28 = V_0;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)69))))
		{
			goto IL_00e5;
		}
	}
	{
		int32_t L_29 = V_0;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)93))))
		{
			goto IL_00ca;
		}
	}
	{
		int32_t L_30 = V_0;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)101))))
		{
			goto IL_00e5;
		}
	}
	{
		int32_t L_31 = V_0;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)125))))
		{
			goto IL_00ca;
		}
	}
	{
		goto IL_010b;
	}

IL_00ca:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_32 = ___0_ctx;
		NullCheck(L_32);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_33 = L_32->___L_2;
		NullCheck(L_33);
		Lexer_UngetChar_m1FBA3B548EFBD21F87308A001FD32ECCCF86C5D4(L_33, NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_34 = ___0_ctx;
		NullCheck(L_34);
		L_34->___Return_0 = (bool)1;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_35 = ___0_ctx;
		NullCheck(L_35);
		L_35->___NextState_1 = 1;
		return (bool)1;
	}

IL_00e5:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_36 = ___0_ctx;
		NullCheck(L_36);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_37 = L_36->___L_2;
		NullCheck(L_37);
		StringBuilder_t* L_38 = L_37->___string_buffer_10;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_39 = ___0_ctx;
		NullCheck(L_39);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_40 = L_39->___L_2;
		NullCheck(L_40);
		int32_t L_41 = L_40->___input_char_7;
		NullCheck(L_38);
		StringBuilder_t* L_42;
		L_42 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_38, ((int32_t)(uint16_t)L_41), NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_43 = ___0_ctx;
		NullCheck(L_43);
		L_43->___NextState_1 = 7;
		return (bool)1;
	}

IL_010b:
	{
		return (bool)0;
	}

IL_010d:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_44 = ___0_ctx;
		NullCheck(L_44);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_45 = L_44->___L_2;
		NullCheck(L_45);
		bool L_46;
		L_46 = Lexer_GetChar_m240416C419AACCDFAD8C74F764421740C53A6253(L_45, NULL);
		if (L_46)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State7(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State7_m5464256E9F4EF412B26461E52B133812F79EFA41 (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___0_ctx, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_0 = ___0_ctx;
		NullCheck(L_0);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m240416C419AACCDFAD8C74F764421740C53A6253(L_1, NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_3 = ___0_ctx;
		NullCheck(L_3);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)48))))
		{
			goto IL_0056;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_6 = ___0_ctx;
		NullCheck(L_6);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_7 = L_6->___L_2;
		NullCheck(L_7);
		int32_t L_8 = L_7->___input_char_7;
		if ((((int32_t)L_8) > ((int32_t)((int32_t)57))))
		{
			goto IL_0056;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_9 = ___0_ctx;
		NullCheck(L_9);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_10 = L_9->___L_2;
		NullCheck(L_10);
		StringBuilder_t* L_11 = L_10->___string_buffer_10;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_12 = ___0_ctx;
		NullCheck(L_12);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_13 = L_12->___L_2;
		NullCheck(L_13);
		int32_t L_14 = L_13->___input_char_7;
		NullCheck(L_11);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_11, ((int32_t)(uint16_t)L_14), NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_16 = ___0_ctx;
		NullCheck(L_16);
		L_16->___NextState_1 = 8;
		return (bool)1;
	}

IL_0056:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_17 = ___0_ctx;
		NullCheck(L_17);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_18 = L_17->___L_2;
		NullCheck(L_18);
		int32_t L_19 = L_18->___input_char_7;
		V_0 = L_19;
		int32_t L_20 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_20, ((int32_t)43))))
		{
			case 0:
			{
				goto IL_007c;
			}
			case 1:
			{
				goto IL_00a2;
			}
			case 2:
			{
				goto IL_007c;
			}
		}
	}
	{
		goto IL_00a2;
	}

IL_007c:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_21 = ___0_ctx;
		NullCheck(L_21);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_22 = L_21->___L_2;
		NullCheck(L_22);
		StringBuilder_t* L_23 = L_22->___string_buffer_10;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_24 = ___0_ctx;
		NullCheck(L_24);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_25 = L_24->___L_2;
		NullCheck(L_25);
		int32_t L_26 = L_25->___input_char_7;
		NullCheck(L_23);
		StringBuilder_t* L_27;
		L_27 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_23, ((int32_t)(uint16_t)L_26), NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_28 = ___0_ctx;
		NullCheck(L_28);
		L_28->___NextState_1 = 8;
		return (bool)1;
	}

IL_00a2:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State8(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State8_mEE57AB611D759135E18E796C685799AF59653DF1 (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___0_ctx, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		goto IL_00d7;
	}

IL_0005:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_0 = ___0_ctx;
		NullCheck(L_0);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_1 = L_0->___L_2;
		NullCheck(L_1);
		int32_t L_2 = L_1->___input_char_7;
		if ((((int32_t)L_2) < ((int32_t)((int32_t)48))))
		{
			goto IL_004b;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_3 = ___0_ctx;
		NullCheck(L_3);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		if ((((int32_t)L_5) > ((int32_t)((int32_t)57))))
		{
			goto IL_004b;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_6 = ___0_ctx;
		NullCheck(L_6);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_7 = L_6->___L_2;
		NullCheck(L_7);
		StringBuilder_t* L_8 = L_7->___string_buffer_10;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_9 = ___0_ctx;
		NullCheck(L_9);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_10 = L_9->___L_2;
		NullCheck(L_10);
		int32_t L_11 = L_10->___input_char_7;
		NullCheck(L_8);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_8, ((int32_t)(uint16_t)L_11), NULL);
		goto IL_00d7;
	}

IL_004b:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_13 = ___0_ctx;
		NullCheck(L_13);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_14 = L_13->___L_2;
		NullCheck(L_14);
		int32_t L_15 = L_14->___input_char_7;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)32))))
		{
			goto IL_0081;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_16 = ___0_ctx;
		NullCheck(L_16);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_17 = L_16->___L_2;
		NullCheck(L_17);
		int32_t L_18 = L_17->___input_char_7;
		if ((((int32_t)L_18) < ((int32_t)((int32_t)9))))
		{
			goto IL_0091;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_19 = ___0_ctx;
		NullCheck(L_19);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_20 = L_19->___L_2;
		NullCheck(L_20);
		int32_t L_21 = L_20->___input_char_7;
		if ((((int32_t)L_21) > ((int32_t)((int32_t)13))))
		{
			goto IL_0091;
		}
	}

IL_0081:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_22 = ___0_ctx;
		NullCheck(L_22);
		L_22->___Return_0 = (bool)1;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_23 = ___0_ctx;
		NullCheck(L_23);
		L_23->___NextState_1 = 1;
		return (bool)1;
	}

IL_0091:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_24 = ___0_ctx;
		NullCheck(L_24);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_25 = L_24->___L_2;
		NullCheck(L_25);
		int32_t L_26 = L_25->___input_char_7;
		V_0 = L_26;
		int32_t L_27 = V_0;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)44))))
		{
			goto IL_00ba;
		}
	}
	{
		int32_t L_28 = V_0;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)93))))
		{
			goto IL_00ba;
		}
	}
	{
		int32_t L_29 = V_0;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)125))))
		{
			goto IL_00ba;
		}
	}
	{
		goto IL_00d5;
	}

IL_00ba:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_30 = ___0_ctx;
		NullCheck(L_30);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_31 = L_30->___L_2;
		NullCheck(L_31);
		Lexer_UngetChar_m1FBA3B548EFBD21F87308A001FD32ECCCF86C5D4(L_31, NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_32 = ___0_ctx;
		NullCheck(L_32);
		L_32->___Return_0 = (bool)1;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_33 = ___0_ctx;
		NullCheck(L_33);
		L_33->___NextState_1 = 1;
		return (bool)1;
	}

IL_00d5:
	{
		return (bool)0;
	}

IL_00d7:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_34 = ___0_ctx;
		NullCheck(L_34);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_35 = L_34->___L_2;
		NullCheck(L_35);
		bool L_36;
		L_36 = Lexer_GetChar_m240416C419AACCDFAD8C74F764421740C53A6253(L_35, NULL);
		if (L_36)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State9(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State9_m2A2DF75F8B8AEFAAFF778393AFCC9605ED84C01C (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___0_ctx, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_0 = ___0_ctx;
		NullCheck(L_0);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m240416C419AACCDFAD8C74F764421740C53A6253(L_1, NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_3 = ___0_ctx;
		NullCheck(L_3);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)114))))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_002f;
	}

IL_0025:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_7 = ___0_ctx;
		NullCheck(L_7);
		L_7->___NextState_1 = ((int32_t)10);
		return (bool)1;
	}

IL_002f:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State10(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State10_m5904073970AD0D36A52E6EF3528D8932E8588D59 (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___0_ctx, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_0 = ___0_ctx;
		NullCheck(L_0);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m240416C419AACCDFAD8C74F764421740C53A6253(L_1, NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_3 = ___0_ctx;
		NullCheck(L_3);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)117))))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_002f;
	}

IL_0025:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_7 = ___0_ctx;
		NullCheck(L_7);
		L_7->___NextState_1 = ((int32_t)11);
		return (bool)1;
	}

IL_002f:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State11(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State11_m5A9D0CA38509AB81A532487CF5D2DC65D6B71F04 (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___0_ctx, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_0 = ___0_ctx;
		NullCheck(L_0);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m240416C419AACCDFAD8C74F764421740C53A6253(L_1, NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_3 = ___0_ctx;
		NullCheck(L_3);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)101))))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_0035;
	}

IL_0025:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_7 = ___0_ctx;
		NullCheck(L_7);
		L_7->___Return_0 = (bool)1;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_8 = ___0_ctx;
		NullCheck(L_8);
		L_8->___NextState_1 = 1;
		return (bool)1;
	}

IL_0035:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State12(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State12_m958CFDBC029123955374295C3E9913D1599A196D (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___0_ctx, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_0 = ___0_ctx;
		NullCheck(L_0);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m240416C419AACCDFAD8C74F764421740C53A6253(L_1, NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_3 = ___0_ctx;
		NullCheck(L_3);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)97))))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_002f;
	}

IL_0025:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_7 = ___0_ctx;
		NullCheck(L_7);
		L_7->___NextState_1 = ((int32_t)13);
		return (bool)1;
	}

IL_002f:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State13(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State13_m560152ABC44290068A66CB6BFC939C5AAFEC51FF (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___0_ctx, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_0 = ___0_ctx;
		NullCheck(L_0);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m240416C419AACCDFAD8C74F764421740C53A6253(L_1, NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_3 = ___0_ctx;
		NullCheck(L_3);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)108))))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_002f;
	}

IL_0025:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_7 = ___0_ctx;
		NullCheck(L_7);
		L_7->___NextState_1 = ((int32_t)14);
		return (bool)1;
	}

IL_002f:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State14(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State14_m8C25AB90286E32F384E390E17E726F1BC08BC9DD (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___0_ctx, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_0 = ___0_ctx;
		NullCheck(L_0);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m240416C419AACCDFAD8C74F764421740C53A6253(L_1, NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_3 = ___0_ctx;
		NullCheck(L_3);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)115))))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_002f;
	}

IL_0025:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_7 = ___0_ctx;
		NullCheck(L_7);
		L_7->___NextState_1 = ((int32_t)15);
		return (bool)1;
	}

IL_002f:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State15(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State15_m00E0DE3464F1159F7EB835A3286EFFA40B558403 (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___0_ctx, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_0 = ___0_ctx;
		NullCheck(L_0);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m240416C419AACCDFAD8C74F764421740C53A6253(L_1, NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_3 = ___0_ctx;
		NullCheck(L_3);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)101))))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_0035;
	}

IL_0025:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_7 = ___0_ctx;
		NullCheck(L_7);
		L_7->___Return_0 = (bool)1;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_8 = ___0_ctx;
		NullCheck(L_8);
		L_8->___NextState_1 = 1;
		return (bool)1;
	}

IL_0035:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State16(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State16_m8BD82487456FA900D6BBDED72C8C975696D67804 (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___0_ctx, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_0 = ___0_ctx;
		NullCheck(L_0);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m240416C419AACCDFAD8C74F764421740C53A6253(L_1, NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_3 = ___0_ctx;
		NullCheck(L_3);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)117))))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_002f;
	}

IL_0025:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_7 = ___0_ctx;
		NullCheck(L_7);
		L_7->___NextState_1 = ((int32_t)17);
		return (bool)1;
	}

IL_002f:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State17(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State17_mDFB66C6B09C25B8B8CC2EC226F446FEF70AFE493 (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___0_ctx, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_0 = ___0_ctx;
		NullCheck(L_0);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m240416C419AACCDFAD8C74F764421740C53A6253(L_1, NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_3 = ___0_ctx;
		NullCheck(L_3);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)108))))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_002f;
	}

IL_0025:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_7 = ___0_ctx;
		NullCheck(L_7);
		L_7->___NextState_1 = ((int32_t)18);
		return (bool)1;
	}

IL_002f:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State18(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State18_m2C29A371734A3AF4B66ACD39EA4356FCEEB42703 (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___0_ctx, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_0 = ___0_ctx;
		NullCheck(L_0);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m240416C419AACCDFAD8C74F764421740C53A6253(L_1, NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_3 = ___0_ctx;
		NullCheck(L_3);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)108))))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_0035;
	}

IL_0025:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_7 = ___0_ctx;
		NullCheck(L_7);
		L_7->___Return_0 = (bool)1;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_8 = ___0_ctx;
		NullCheck(L_8);
		L_8->___NextState_1 = 1;
		return (bool)1;
	}

IL_0035:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State19(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State19_mD468E390FBA1C3B79566FD0CF8AB183BEF7B9A7C (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___0_ctx, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		goto IL_0076;
	}

IL_0005:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_0 = ___0_ctx;
		NullCheck(L_0);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_1 = L_0->___L_2;
		NullCheck(L_1);
		int32_t L_2 = L_1->___input_char_7;
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)34))))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)92))))
		{
			goto IL_0042;
		}
	}
	{
		goto IL_0054;
	}

IL_0026:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_5 = ___0_ctx;
		NullCheck(L_5);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_6 = L_5->___L_2;
		NullCheck(L_6);
		Lexer_UngetChar_m1FBA3B548EFBD21F87308A001FD32ECCCF86C5D4(L_6, NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_7 = ___0_ctx;
		NullCheck(L_7);
		L_7->___Return_0 = (bool)1;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_8 = ___0_ctx;
		NullCheck(L_8);
		L_8->___NextState_1 = ((int32_t)20);
		return (bool)1;
	}

IL_0042:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_9 = ___0_ctx;
		NullCheck(L_9);
		L_9->___StateStack_3 = ((int32_t)19);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_10 = ___0_ctx;
		NullCheck(L_10);
		L_10->___NextState_1 = ((int32_t)21);
		return (bool)1;
	}

IL_0054:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_11 = ___0_ctx;
		NullCheck(L_11);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_12 = L_11->___L_2;
		NullCheck(L_12);
		StringBuilder_t* L_13 = L_12->___string_buffer_10;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_14 = ___0_ctx;
		NullCheck(L_14);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_15 = L_14->___L_2;
		NullCheck(L_15);
		int32_t L_16 = L_15->___input_char_7;
		NullCheck(L_13);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_13, ((int32_t)(uint16_t)L_16), NULL);
		goto IL_0076;
	}

IL_0076:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_18 = ___0_ctx;
		NullCheck(L_18);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_19 = L_18->___L_2;
		NullCheck(L_19);
		bool L_20;
		L_20 = Lexer_GetChar_m240416C419AACCDFAD8C74F764421740C53A6253(L_19, NULL);
		if (L_20)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State20(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State20_mB134E41DBE7A01B14B8ADBBEDFAE16596CB76C1A (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___0_ctx, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_0 = ___0_ctx;
		NullCheck(L_0);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m240416C419AACCDFAD8C74F764421740C53A6253(L_1, NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_3 = ___0_ctx;
		NullCheck(L_3);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)34))))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_0035;
	}

IL_0025:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_7 = ___0_ctx;
		NullCheck(L_7);
		L_7->___Return_0 = (bool)1;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_8 = ___0_ctx;
		NullCheck(L_8);
		L_8->___NextState_1 = 1;
		return (bool)1;
	}

IL_0035:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State21(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State21_m98740912488BE0C617E7112B1EFA0CC52080297A (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___0_ctx, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_0 = ___0_ctx;
		NullCheck(L_0);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m240416C419AACCDFAD8C74F764421740C53A6253(L_1, NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_3 = ___0_ctx;
		NullCheck(L_3);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		V_0 = L_5;
		int32_t L_6 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_6, ((int32_t)110))))
		{
			case 0:
			{
				goto IL_0080;
			}
			case 1:
			{
				goto IL_0041;
			}
			case 2:
			{
				goto IL_0041;
			}
			case 3:
			{
				goto IL_0041;
			}
			case 4:
			{
				goto IL_0080;
			}
			case 5:
			{
				goto IL_0041;
			}
			case 6:
			{
				goto IL_0080;
			}
			case 7:
			{
				goto IL_0076;
			}
		}
	}

IL_0041:
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)34))))
		{
			goto IL_0080;
		}
	}
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)39))))
		{
			goto IL_0080;
		}
	}
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)47))))
		{
			goto IL_0080;
		}
	}
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)92))))
		{
			goto IL_0080;
		}
	}
	{
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)98))))
		{
			goto IL_0080;
		}
	}
	{
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)102))))
		{
			goto IL_0080;
		}
	}
	{
		goto IL_00af;
	}

IL_0076:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_13 = ___0_ctx;
		NullCheck(L_13);
		L_13->___NextState_1 = ((int32_t)22);
		return (bool)1;
	}

IL_0080:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_14 = ___0_ctx;
		NullCheck(L_14);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_15 = L_14->___L_2;
		NullCheck(L_15);
		StringBuilder_t* L_16 = L_15->___string_buffer_10;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_17 = ___0_ctx;
		NullCheck(L_17);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_18 = L_17->___L_2;
		NullCheck(L_18);
		int32_t L_19 = L_18->___input_char_7;
		il2cpp_codegen_runtime_class_init_inline(Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9_il2cpp_TypeInfo_var);
		Il2CppChar L_20;
		L_20 = Lexer_ProcessEscChar_m1E23F62F3A8846AA52FD98E49917B3A8C9C168E3(L_19, NULL);
		NullCheck(L_16);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_16, L_20, NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_22 = ___0_ctx;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_23 = ___0_ctx;
		NullCheck(L_23);
		int32_t L_24 = L_23->___StateStack_3;
		NullCheck(L_22);
		L_22->___NextState_1 = L_24;
		return (bool)1;
	}

IL_00af:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State22(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State22_m40E243F9BE396E171757231B9D5045880E92EC2D (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___0_ctx, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = ((int32_t)4096);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_0 = ___0_ctx;
		NullCheck(L_0);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_1 = L_0->___L_2;
		NullCheck(L_1);
		L_1->___unichar_13 = 0;
		goto IL_00ef;
	}

IL_0019:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_2 = ___0_ctx;
		NullCheck(L_2);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_3 = L_2->___L_2;
		NullCheck(L_3);
		int32_t L_4 = L_3->___input_char_7;
		if ((((int32_t)L_4) < ((int32_t)((int32_t)48))))
		{
			goto IL_003d;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_5 = ___0_ctx;
		NullCheck(L_5);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_6 = L_5->___L_2;
		NullCheck(L_6);
		int32_t L_7 = L_6->___input_char_7;
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)57))))
		{
			goto IL_0085;
		}
	}

IL_003d:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_8 = ___0_ctx;
		NullCheck(L_8);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_9 = L_8->___L_2;
		NullCheck(L_9);
		int32_t L_10 = L_9->___input_char_7;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)65))))
		{
			goto IL_0061;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_11 = ___0_ctx;
		NullCheck(L_11);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_12 = L_11->___L_2;
		NullCheck(L_12);
		int32_t L_13 = L_12->___input_char_7;
		if ((((int32_t)L_13) <= ((int32_t)((int32_t)70))))
		{
			goto IL_0085;
		}
	}

IL_0061:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_14 = ___0_ctx;
		NullCheck(L_14);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_15 = L_14->___L_2;
		NullCheck(L_15);
		int32_t L_16 = L_15->___input_char_7;
		if ((((int32_t)L_16) < ((int32_t)((int32_t)97))))
		{
			goto IL_00ed;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_17 = ___0_ctx;
		NullCheck(L_17);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_18 = L_17->___L_2;
		NullCheck(L_18);
		int32_t L_19 = L_18->___input_char_7;
		if ((((int32_t)L_19) > ((int32_t)((int32_t)102))))
		{
			goto IL_00ed;
		}
	}

IL_0085:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_20 = ___0_ctx;
		NullCheck(L_20);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_21 = L_20->___L_2;
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_22 = L_21;
		NullCheck(L_22);
		int32_t L_23 = L_22->___unichar_13;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_24 = ___0_ctx;
		NullCheck(L_24);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_25 = L_24->___L_2;
		NullCheck(L_25);
		int32_t L_26 = L_25->___input_char_7;
		il2cpp_codegen_runtime_class_init_inline(Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9_il2cpp_TypeInfo_var);
		int32_t L_27;
		L_27 = Lexer_HexValue_m5FF113620372573CAA3AAA87DE9BFDFE9D1AA83A(L_26, NULL);
		int32_t L_28 = V_1;
		NullCheck(L_22);
		L_22->___unichar_13 = ((int32_t)il2cpp_codegen_add(L_23, ((int32_t)il2cpp_codegen_multiply(L_27, L_28))));
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		int32_t L_30 = V_1;
		V_1 = ((int32_t)(L_30/((int32_t)16)));
		int32_t L_31 = V_0;
		if ((!(((uint32_t)L_31) == ((uint32_t)4))))
		{
			goto IL_00e8;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_32 = ___0_ctx;
		NullCheck(L_32);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_33 = L_32->___L_2;
		NullCheck(L_33);
		StringBuilder_t* L_34 = L_33->___string_buffer_10;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_35 = ___0_ctx;
		NullCheck(L_35);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_36 = L_35->___L_2;
		NullCheck(L_36);
		int32_t L_37 = L_36->___unichar_13;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Il2CppChar L_38;
		L_38 = Convert_ToChar_mF1B1B205DDEFDE52251235514E7DAFCAB37D1F24(L_37, NULL);
		NullCheck(L_34);
		StringBuilder_t* L_39;
		L_39 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_34, L_38, NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_40 = ___0_ctx;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_41 = ___0_ctx;
		NullCheck(L_41);
		int32_t L_42 = L_41->___StateStack_3;
		NullCheck(L_40);
		L_40->___NextState_1 = L_42;
		return (bool)1;
	}

IL_00e8:
	{
		goto IL_00ef;
	}

IL_00ed:
	{
		return (bool)0;
	}

IL_00ef:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_43 = ___0_ctx;
		NullCheck(L_43);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_44 = L_43->___L_2;
		NullCheck(L_44);
		bool L_45;
		L_45 = Lexer_GetChar_m240416C419AACCDFAD8C74F764421740C53A6253(L_44, NULL);
		if (L_45)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State23(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State23_m14C029F3770CEF5E40A14DE7B3D3C2952D9C385F (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___0_ctx, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		goto IL_0076;
	}

IL_0005:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_0 = ___0_ctx;
		NullCheck(L_0);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_1 = L_0->___L_2;
		NullCheck(L_1);
		int32_t L_2 = L_1->___input_char_7;
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)39))))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)92))))
		{
			goto IL_0042;
		}
	}
	{
		goto IL_0054;
	}

IL_0026:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_5 = ___0_ctx;
		NullCheck(L_5);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_6 = L_5->___L_2;
		NullCheck(L_6);
		Lexer_UngetChar_m1FBA3B548EFBD21F87308A001FD32ECCCF86C5D4(L_6, NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_7 = ___0_ctx;
		NullCheck(L_7);
		L_7->___Return_0 = (bool)1;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_8 = ___0_ctx;
		NullCheck(L_8);
		L_8->___NextState_1 = ((int32_t)24);
		return (bool)1;
	}

IL_0042:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_9 = ___0_ctx;
		NullCheck(L_9);
		L_9->___StateStack_3 = ((int32_t)23);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_10 = ___0_ctx;
		NullCheck(L_10);
		L_10->___NextState_1 = ((int32_t)21);
		return (bool)1;
	}

IL_0054:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_11 = ___0_ctx;
		NullCheck(L_11);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_12 = L_11->___L_2;
		NullCheck(L_12);
		StringBuilder_t* L_13 = L_12->___string_buffer_10;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_14 = ___0_ctx;
		NullCheck(L_14);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_15 = L_14->___L_2;
		NullCheck(L_15);
		int32_t L_16 = L_15->___input_char_7;
		NullCheck(L_13);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_13, ((int32_t)(uint16_t)L_16), NULL);
		goto IL_0076;
	}

IL_0076:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_18 = ___0_ctx;
		NullCheck(L_18);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_19 = L_18->___L_2;
		NullCheck(L_19);
		bool L_20;
		L_20 = Lexer_GetChar_m240416C419AACCDFAD8C74F764421740C53A6253(L_19, NULL);
		if (L_20)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State24(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State24_mD981E66641429ED14661F0D83F155ACB0ADE601E (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___0_ctx, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_0 = ___0_ctx;
		NullCheck(L_0);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m240416C419AACCDFAD8C74F764421740C53A6253(L_1, NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_3 = ___0_ctx;
		NullCheck(L_3);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)39))))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_0042;
	}

IL_0025:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_7 = ___0_ctx;
		NullCheck(L_7);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_8 = L_7->___L_2;
		NullCheck(L_8);
		L_8->___input_char_7 = ((int32_t)34);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_9 = ___0_ctx;
		NullCheck(L_9);
		L_9->___Return_0 = (bool)1;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_10 = ___0_ctx;
		NullCheck(L_10);
		L_10->___NextState_1 = 1;
		return (bool)1;
	}

IL_0042:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State25(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State25_m846973336CD8B49363EBCFB9EF83676772B9B6F3 (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___0_ctx, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_0 = ___0_ctx;
		NullCheck(L_0);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m240416C419AACCDFAD8C74F764421740C53A6253(L_1, NULL);
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_3 = ___0_ctx;
		NullCheck(L_3);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)42))))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)47))))
		{
			goto IL_0037;
		}
	}
	{
		goto IL_0041;
	}

IL_002d:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_8 = ___0_ctx;
		NullCheck(L_8);
		L_8->___NextState_1 = ((int32_t)27);
		return (bool)1;
	}

IL_0037:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_9 = ___0_ctx;
		NullCheck(L_9);
		L_9->___NextState_1 = ((int32_t)26);
		return (bool)1;
	}

IL_0041:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State26(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State26_m464EBDB9597D118A7666A693F407F7E7126752EB (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___0_ctx, const RuntimeMethod* method) 
{
	{
		goto IL_0020;
	}

IL_0005:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_0 = ___0_ctx;
		NullCheck(L_0);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_1 = L_0->___L_2;
		NullCheck(L_1);
		int32_t L_2 = L_1->___input_char_7;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0020;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_3 = ___0_ctx;
		NullCheck(L_3);
		L_3->___NextState_1 = 1;
		return (bool)1;
	}

IL_0020:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_4 = ___0_ctx;
		NullCheck(L_4);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_5 = L_4->___L_2;
		NullCheck(L_5);
		bool L_6;
		L_6 = Lexer_GetChar_m240416C419AACCDFAD8C74F764421740C53A6253(L_5, NULL);
		if (L_6)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State27(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State27_mFDC378B071D2ABA7045A6CE1B8AE7C7F40D99638 (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___0_ctx, const RuntimeMethod* method) 
{
	{
		goto IL_0021;
	}

IL_0005:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_0 = ___0_ctx;
		NullCheck(L_0);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_1 = L_0->___L_2;
		NullCheck(L_1);
		int32_t L_2 = L_1->___input_char_7;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)42)))))
		{
			goto IL_0021;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_3 = ___0_ctx;
		NullCheck(L_3);
		L_3->___NextState_1 = ((int32_t)28);
		return (bool)1;
	}

IL_0021:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_4 = ___0_ctx;
		NullCheck(L_4);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_5 = L_4->___L_2;
		NullCheck(L_5);
		bool L_6;
		L_6 = Lexer_GetChar_m240416C419AACCDFAD8C74F764421740C53A6253(L_5, NULL);
		if (L_6)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State28(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State28_m151FEC6858FB9E2A515CABFEFEDE5DAB3F736F91 (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___0_ctx, const RuntimeMethod* method) 
{
	{
		goto IL_0041;
	}

IL_0005:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_0 = ___0_ctx;
		NullCheck(L_0);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_1 = L_0->___L_2;
		NullCheck(L_1);
		int32_t L_2 = L_1->___input_char_7;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)42)))))
		{
			goto IL_001c;
		}
	}
	{
		goto IL_0041;
	}

IL_001c:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_3 = ___0_ctx;
		NullCheck(L_3);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0037;
		}
	}
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_6 = ___0_ctx;
		NullCheck(L_6);
		L_6->___NextState_1 = 1;
		return (bool)1;
	}

IL_0037:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_7 = ___0_ctx;
		NullCheck(L_7);
		L_7->___NextState_1 = ((int32_t)27);
		return (bool)1;
	}

IL_0041:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_8 = ___0_ctx;
		NullCheck(L_8);
		Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* L_9 = L_8->___L_2;
		NullCheck(L_9);
		bool L_10;
		L_10 = Lexer_GetChar_m240416C419AACCDFAD8C74F764421740C53A6253(L_9, NULL);
		if (L_10)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::GetChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_GetChar_m240416C419AACCDFAD8C74F764421740C53A6253 (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = Lexer_NextChar_m4416B29A729201704EF5494475D04A81665E7D9D(__this, NULL);
		int32_t L_1 = L_0;
		V_0 = L_1;
		__this->___input_char_7 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0017;
		}
	}
	{
		return (bool)1;
	}

IL_0017:
	{
		__this->___end_of_input_4 = (bool)1;
		return (bool)0;
	}
}
// System.Int32 LitJson.Lexer::NextChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lexer_NextChar_m4416B29A729201704EF5494475D04A81665E7D9D (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___input_buffer_6;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_1 = __this->___input_buffer_6;
		V_0 = L_1;
		__this->___input_buffer_6 = 0;
		int32_t L_2 = V_0;
		return L_2;
	}

IL_001b:
	{
		TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* L_3 = __this->___reader_8;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_3);
		return L_4;
	}
}
// System.Boolean LitJson.Lexer::NextToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_NextToken_m1FC49AB01B8C3D281961541D1D7D1A8721B06083 (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* V_0 = NULL;
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_0 = __this->___fsm_context_5;
		NullCheck(L_0);
		L_0->___Return_0 = (bool)0;
	}

IL_000c:
	{
		il2cpp_codegen_runtime_class_init_inline(Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9_il2cpp_TypeInfo_var);
		StateHandlerU5BU5D_tA4E04C837AF2BDFE9B351DF6813E6AB954722B93* L_1 = ((Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9_il2cpp_TypeInfo_var))->___fsm_handler_table_1;
		int32_t L_2 = __this->___state_9;
		NullCheck(L_1);
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* L_5 = V_0;
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_6 = __this->___fsm_context_5;
		NullCheck(L_5);
		bool L_7;
		L_7 = StateHandler_Invoke_mAED7B745D78A2D2DC62A793247492E7718A3210E_inline(L_5, L_6, NULL);
		if (L_7)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_8 = __this->___input_char_7;
		JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76* L_9 = (JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_tA6D9726FBCE77AF0E9B652ABE7C01E4F1E55FA76_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		JsonException__ctor_m267C4D3DA6783E685C755BEB2B354A15AB620363(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Lexer_NextToken_m1FC49AB01B8C3D281961541D1D7D1A8721B06083_RuntimeMethod_var)));
	}

IL_0038:
	{
		bool L_10 = __this->___end_of_input_4;
		if (!L_10)
		{
			goto IL_0045;
		}
	}
	{
		return (bool)0;
	}

IL_0045:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_11 = __this->___fsm_context_5;
		NullCheck(L_11);
		bool L_12 = L_11->___Return_0;
		if (!L_12)
		{
			goto IL_00c1;
		}
	}
	{
		StringBuilder_t* L_13 = __this->___string_buffer_10;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_13);
		__this->___string_value_11 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___string_value_11), (void*)L_14);
		StringBuilder_t* L_15 = __this->___string_buffer_10;
		StringBuilder_t* L_16 = __this->___string_buffer_10;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_16, NULL);
		NullCheck(L_15);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90(L_15, 0, L_17, NULL);
		il2cpp_codegen_runtime_class_init_inline(Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = ((Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9_il2cpp_TypeInfo_var))->___fsm_return_table_0;
		int32_t L_20 = __this->___state_9;
		NullCheck(L_19);
		int32_t L_21 = ((int32_t)il2cpp_codegen_subtract(L_20, 1));
		int32_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		__this->___token_12 = L_22;
		int32_t L_23 = __this->___token_12;
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)65542)))))
		{
			goto IL_00ae;
		}
	}
	{
		int32_t L_24 = __this->___input_char_7;
		__this->___token_12 = L_24;
	}

IL_00ae:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_25 = __this->___fsm_context_5;
		NullCheck(L_25);
		int32_t L_26 = L_25->___NextState_1;
		__this->___state_9 = L_26;
		return (bool)1;
	}

IL_00c1:
	{
		FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* L_27 = __this->___fsm_context_5;
		NullCheck(L_27);
		int32_t L_28 = L_27->___NextState_1;
		__this->___state_9 = L_28;
		goto IL_000c;
	}
}
// System.Void LitJson.Lexer::UngetChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer_UngetChar_m1FBA3B548EFBD21F87308A001FD32ECCCF86C5D4 (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___input_char_7;
		__this->___input_buffer_6 = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
bool StateHandler_Invoke_mAED7B745D78A2D2DC62A793247492E7718A3210E_Multicast(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* __this, FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___0_ctx, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	bool retVal = false;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* currentDelegate = reinterpret_cast<StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603*>(delegatesToInvoke[i]);
		typedef bool (*FunctionPointerType) (RuntimeObject*, FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_ctx, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
bool StateHandler_Invoke_mAED7B745D78A2D2DC62A793247492E7718A3210E_OpenInst(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* __this, FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___0_ctx, const RuntimeMethod* method)
{
	NullCheck(___0_ctx);
	typedef bool (*FunctionPointerType) (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_ctx, method);
}
bool StateHandler_Invoke_mAED7B745D78A2D2DC62A793247492E7718A3210E_OpenStatic(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* __this, FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___0_ctx, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_ctx, method);
}
bool StateHandler_Invoke_mAED7B745D78A2D2DC62A793247492E7718A3210E_OpenStaticInvoker(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* __this, FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___0_ctx, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< bool, FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_ctx);
}
bool StateHandler_Invoke_mAED7B745D78A2D2DC62A793247492E7718A3210E_ClosedStaticInvoker(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* __this, FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___0_ctx, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< bool, RuntimeObject*, FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_ctx);
}
bool StateHandler_Invoke_mAED7B745D78A2D2DC62A793247492E7718A3210E_OpenVirtual(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* __this, FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___0_ctx, const RuntimeMethod* method)
{
	NullCheck(___0_ctx);
	return VirtualFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_ctx);
}
bool StateHandler_Invoke_mAED7B745D78A2D2DC62A793247492E7718A3210E_OpenInterface(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* __this, FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___0_ctx, const RuntimeMethod* method)
{
	NullCheck(___0_ctx);
	return InterfaceFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_ctx);
}
bool StateHandler_Invoke_mAED7B745D78A2D2DC62A793247492E7718A3210E_OpenGenericVirtual(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* __this, FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___0_ctx, const RuntimeMethod* method)
{
	NullCheck(___0_ctx);
	return GenericVirtualFuncInvoker0< bool >::Invoke(method, ___0_ctx);
}
bool StateHandler_Invoke_mAED7B745D78A2D2DC62A793247492E7718A3210E_OpenGenericInterface(StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* __this, FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___0_ctx, const RuntimeMethod* method)
{
	NullCheck(___0_ctx);
	return GenericInterfaceFuncInvoker0< bool >::Invoke(method, ___0_ctx);
}
// System.Void LitJson.Lexer/StateHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateHandler__ctor_m33A94C96682C78721802E376BDC6673C9CDB08E1 (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&StateHandler_Invoke_mAED7B745D78A2D2DC62A793247492E7718A3210E_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&StateHandler_Invoke_mAED7B745D78A2D2DC62A793247492E7718A3210E_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&StateHandler_Invoke_mAED7B745D78A2D2DC62A793247492E7718A3210E_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&StateHandler_Invoke_mAED7B745D78A2D2DC62A793247492E7718A3210E_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&StateHandler_Invoke_mAED7B745D78A2D2DC62A793247492E7718A3210E_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&StateHandler_Invoke_mAED7B745D78A2D2DC62A793247492E7718A3210E_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&StateHandler_Invoke_mAED7B745D78A2D2DC62A793247492E7718A3210E_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&StateHandler_Invoke_mAED7B745D78A2D2DC62A793247492E7718A3210E_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&StateHandler_Invoke_mAED7B745D78A2D2DC62A793247492E7718A3210E_Multicast;
}
// System.Boolean LitJson.Lexer/StateHandler::Invoke(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StateHandler_Invoke_mAED7B745D78A2D2DC62A793247492E7718A3210E (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* __this, FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___0_ctx, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_ctx, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult LitJson.Lexer/StateHandler::BeginInvoke(LitJson.FsmContext,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StateHandler_BeginInvoke_m3634450072D2369CDFAFBF2169CCEC492F091DDE (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* __this, FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___0_ctx, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_ctx;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Boolean LitJson.Lexer/StateHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StateHandler_EndInvoke_m074FBD7D69F1004BB97465371BB0B78154F01AFF (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JsonData_GetJsonType_m7313142A8EEFA586606A2F25157426C377A6096C_inline (JsonData_t3C51D89A19D30A47A74617107D861959322307F1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___type_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEntry_get_Key_m09845C00732E530E6FCB9042079E90D3912215FE_inline (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEntry_get_Value_m75FD18FE968AE131F28AA2CB0DF4895EBA39075E_inline (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonWriter_set_Validate_mA5EE11772D5EEEDBF8653894C89D686A6B184F7B_inline (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___validate_9 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool JsonWriter_get_Validate_m28498F5A80E666297849E7C4F723F48A0B9A4DF6_inline (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___validate_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ArrayMetadata_set_ElementType_m5832C95BFE5A1BAE4F2A604A74935918F18C6FB3_inline (ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___0_value;
		__this->___element_type_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___element_type_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ArrayMetadata_get_IsArray_mF60D16C73C7A336444DAC740B3D6A84AD4AA40D2_inline (ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___is_array_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ArrayMetadata_set_IsArray_m80C5694C47BE321F66F82FC47D554982E5F47AEE_inline (ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___is_array_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ArrayMetadata_get_IsList_m65D206DDD4278B4A0DF41E61799AE51EAA23BA7F_inline (ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___is_list_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ArrayMetadata_set_IsList_mE4168A68921BFBA7306369E7BFDFD10CC59083C2_inline (ArrayMetadata_tACCCBD1B8815EDDC21759548BA3FD120086DAA7D* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___is_list_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ObjectMetadata_set_ElementType_m5AF14DA94DE8B13F68D6913AA0487B6C412A9355_inline (ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___0_value;
		__this->___element_type_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___element_type_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ObjectMetadata_get_IsDictionary_mC66AF9CA841EC0386F35FAD3DA899EB5C0DB082E_inline (ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___is_dictionary_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ObjectMetadata_set_IsDictionary_mA0408F3F69CBF5C14DEC1CD12FBD4B9830F91151_inline (ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___is_dictionary_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ObjectMetadata_get_Properties_m8E9F8EDA9F12FD110E25D5785F084C1A8B393805_inline (ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___properties_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ObjectMetadata_set_Properties_m6DD2CBC23136F0B020069E54BDF7A1BCCCF31FE6_inline (ObjectMetadata_t02B03E2889142EBF02504FC09D146A753E9A1661* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___properties_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___properties_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JsonReader_get_Token_m519B39A4B87C3A9A7B424AECAE7FDA64B946E975_inline (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___token_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* JsonReader_get_Value_mF219BCB43B2F020C1B67935AA63A40ECD1EE4C05_inline (JsonReader_t848C81F0C12BBE7E0135F28350F6635928FAAABD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___token_value_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ImporterFunc_Invoke_m143089455BBD8920FDB4F1B683E685B50FB8077A_inline (ImporterFunc_t3D41CCB293D2761DC6862831F8BC45D580EB6AA5* __this, RuntimeObject* ___0_input, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_input, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* WrapperFactory_Invoke_mDEC930B07F8B4652EBECE1E6386E92701A93C7D5_inline (WrapperFactory_tB4894CC7D3A41BE3FF6BA079B4490DF5FC5C7BDD* __this, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* JsonWriter_get_TextWriter_m8C5C9441F52C2813A2A3A1834E7A8A3AF2CF875F_inline (JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* __this, const RuntimeMethod* method) 
{
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_0 = __this->___writer_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ExporterFunc_Invoke_mE96AA8DA43B26B809D4D5D09A1A22966C81D2BDD_inline (ExporterFunc_t0E0FD6EE483CD6380339D2D7AC616079B1D5ED8A* __this, RuntimeObject* ___0_obj, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F* ___1_writer, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, JsonWriter_t303427DE92107A0D92969763C95C5C20DB2D6F8F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, ___1_writer, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Lexer_get_AllowComments_m0810E49622D9958F3C841466EEE6A9695B09F8AB_inline (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___allow_comments_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Lexer_set_AllowComments_mD446284CCEBEE8C862E32DCC4C3503D0BA8AF25A_inline (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___allow_comments_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Lexer_get_AllowSingleQuotedStrings_m1A632DD60FDED6764AEF678AA716DDB98103A763_inline (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___allow_single_quoted_strings_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Lexer_set_AllowSingleQuotedStrings_mA18FE918B277D75318D4DB37638C04173C05A305_inline (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___allow_single_quoted_strings_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Lexer_get_StringValue_mE4230649FF6DC2B66F9FAA021BB30FC8B7EBA5FF_inline (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___string_value_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Lexer_get_EndOfInput_m450A1AC83F893FDE38826AFD2A726428956491AC_inline (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___end_of_input_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Lexer_get_Token_m77727EC36916D1258709D74850710E0487B67F99_inline (Lexer_t8EA7E771DBFBCCC71E85B400AF902FC3F482EBC9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___token_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool StateHandler_Invoke_mAED7B745D78A2D2DC62A793247492E7718A3210E_inline (StateHandler_t96934EB5CE1BA6A1DE19972E93F1CA6D31CD3603* __this, FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1* ___0_ctx, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, FsmContext_t039D467FB708DBF74426E9076FDA22760B0D30D1*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_ctx, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items_1;
		V_0 = L_1;
		int32_t L_2 = __this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = __this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_1;
		return L_0;
	}
}
