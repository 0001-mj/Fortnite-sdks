#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x0 (0x0 - 0x0)
// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.SignalIntro__FinishedFunc
struct ABP_Frontend_ShopBG_C_SignalIntro__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.SignalIntro__UpdateFunc
struct ABP_Frontend_ShopBG_C_SignalIntro__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.SignalAmbientMovement__FinishedFunc
struct ABP_Frontend_ShopBG_C_SignalAmbientMovement__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.SignalAmbientMovement__UpdateFunc
struct ABP_Frontend_ShopBG_C_SignalAmbientMovement__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.BlackMondayRotation__FinishedFunc
struct ABP_Frontend_ShopBG_C_BlackMondayRotation__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.BlackMondayRotation__UpdateFunc
struct ABP_Frontend_ShopBG_C_BlackMondayRotation__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.SetupNextRot
struct ABP_Frontend_ShopBG_C_SetupNextRot_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.ReceiveBeginPlay
struct ABP_Frontend_ShopBG_C_ReceiveBeginPlay_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.SetDynamicBG
struct ABP_Frontend_ShopBG_C_SetDynamicBG_Params
{
public:
	class UTexture*                              InTexture;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.EnableDynamicShopBG
struct ABP_Frontend_ShopBG_C_EnableDynamicShopBG_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.SetDynamicEnvironmentEvent
struct ABP_Frontend_ShopBG_C_SetDynamicEnvironmentEvent_Params
{
public:
	class FString                                InPresetEnvName;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x214 (0x214 - 0x0)
// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.ExecuteUbergraph_BP_Frontend_ShopBG
struct ABP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0xC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomIntegerInRange_ReturnValue;         // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6244[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture*                              K2Node_CustomEvent_InTexture;                      // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6245[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              K2Node_Select_Default;                             // 0x40(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_InPresetEnvName;                // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6246[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_RLerp_ReturnValue;                        // 0x64(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x70(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                            CallFunc_K2_AddRelativeRotation_SweepHitResult;    // 0xF8(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FRotator                              CallFunc_RInterpTo_ReturnValue;                    // 0x180(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetRelativeRotation_SweepHitResult_1;  // 0x18C(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
