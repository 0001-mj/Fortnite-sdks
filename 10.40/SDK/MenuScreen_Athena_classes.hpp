#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x1478 (0x1808 - 0x390)
// AnimBlueprintGeneratedClass MenuScreen_Athena.MenuScreen_Athena_C
class UMenuScreen_Athena_C : public UFrontendAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x390(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_BC9F551249E266FA43BC349FC345F1FC; // 0x398(0x20)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_CFAAC90A46FD25342F35449196AB843E; // 0x3B8(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_2D7030A140A7B9E5EEB43E92FB2BC715; // 0x3D8(0x30)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_DB45EF5942BB99048E7C2C8416282A57; // 0x408(0x48)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_38DE62F34079A9ED5E5B85BBCBAD2C22; // 0x450(0xB0)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_233187314408126920AC14A42BA98CE8; // 0x500(0x78)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_D368A9B74AE8F039DA6720801BDD62D5; // 0x578(0x78)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_653C5A294667E7945D69729979692D20; // 0x5F0(0x78)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_DF33F517431A2AB6E430309E29277E98; // 0x668(0x78)()
	struct FAnimNode_BlendListByInt              AnimGraphNode_BlendListByInt_6443F71D474774C8ECFB2A9F1ACC1D7A; // 0x6E0(0xA0)()
	struct FAnimNode_BlendListByInt              AnimGraphNode_BlendListByInt_287AF5964C1BE390191EF89CB53D768D; // 0x780(0xA0)()
	struct FAnimNode_LegIK                       AnimGraphNode_LegIK_3BACE47B4A5EF86B449B81BE7045ADA2; // 0x820(0xF8)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_AE51F624415A5BC37D7F2FABCBE3FBE1; // 0x918(0x108)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_7340818D479943947A1DCCA16CFCAD54; // 0xA20(0x48)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_8D2B60D44BBADFD01AC9A6BF39472D0B; // 0xA68(0xC0)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_E3A91A3649B6A1ABC9AC3B97A7AF4134; // 0xB28(0xB8)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_93498E3D45EEA3CEA9E5EA88BB757C3B; // 0xBE0(0x28)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_F237E66D4F1546A501C2548E2EB67224; // 0xC08(0x28)()
	struct FAnimNode_LegIK                       AnimGraphNode_LegIK_FCD7422A4E3CE397C446C0A397266FEA; // 0xC30(0xF8)()
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_4C554C3D4E078CDC75B08E9CEF8DED1C; // 0xD28(0xF0)()
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_0A8F4F2D443AA18F68E37A8C2921091A; // 0xE18(0xF0)()
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_E5DB5C2C4C7A35E4ACBEDD9FA10C6F14; // 0xF08(0xF0)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_DEF974814E7973E5101173AC4D7EB0D8; // 0xFF8(0x48)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_956C68EE47FB10F868DA9DA5EE1D9DF0; // 0x1040(0x48)()
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_6327A1A14DE55AB303900EA4F6D3F26C; // 0x1088(0xF0)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_969E8D9248BAE190CFD2FD839FB0B147; // 0x1178(0xB8)()
	struct FAnimNode_LiveLinkPose                AnimGraphNode_LiveLinkPose_0D475B2341B406FEF0BCA585E7826551; // 0x1230(0x48)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_F4B6CF9B49E859B8567727981750F9B4; // 0x1278(0x28)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_664DEC0940CE3732CE6543AFEC9586D3; // 0x12A0(0xB0)()
	struct FAnimNode_LiveLinkPose                AnimGraphNode_LiveLinkPose_0829704A48F862E21996E0A709B5ABE2; // 0x1350(0x48)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_9061771D488DBC6B5B382291227784C5; // 0x1398(0x28)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_C5D5A3754658C2629911E0B961515E7E; // 0x13C0(0x28)()
	struct FAnimNode_LegIK                       AnimGraphNode_LegIK_5972E3274F7CD68780D3C38D8F43BB54; // 0x13E8(0xF8)()
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_89D87623441615F824DDB29A6AE1F022; // 0x14E0(0xF0)()
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_13E7BCAA43FDB0E220F3919033EDA8FE; // 0x15D0(0xF0)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_F7CBB6EB43CE66657B83F39A424E0BE7; // 0x16C0(0x108)()
	UMulticastInlineDelegateProperty_            MenuScreenDispatcher;                              // 0x17C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         HasBeenSelected;                                   // 0x17D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_629E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PoseInt;                                           // 0x17DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               OffsetTranslate;                                   // 0x17E0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              OffsetRotate;                                      // 0x17EC(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class APlayerPawn_Athena_C*                  PawnOwner;                                         // 0x17F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StartTime;                                         // 0x1800(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PlayRate;                                          // 0x1804(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MenuScreen_Athena_C");
		return Clss;
	}

	void AnimGraph(struct FPoseLink* AnimGraph);
	void AnimNotify_playFacialAnim();
	void UserFocus();
	void AnimNotify_LeftB();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void AnimNotify_LobbySkydive_Diving();
	void AnimNotify_LobbySkydive_Gliding();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MenuScreen_Athena_AnimGraphNode_LayeredBoneBlend_8D2B60D44BBADFD01AC9A6BF39472D0B();
	void ExecuteUbergraph_MenuScreen_Athena(int32 EntryPoint, float CallFunc_GetCurveValue_ReturnValue, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool CallFunc_IsValid_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_DontCrossArms_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, const class FString& CallFunc_GetObjectName_ReturnValue, bool CallFunc_Contains_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, class UAnimMontage* CallFunc_GetFrontendAnimMontageIdleOverride_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_Montage_IsActive_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_9, class UB_MasterPetAnimBP_C* K2Node_DynamicCast_AsB_Master_Pet_Anim_BP, bool K2Node_DynamicCast_bSuccess_1, class UB_MasterPetAnimBP_C* K2Node_DynamicCast_AsB_Master_Pet_Anim_BP_1, bool K2Node_DynamicCast_bSuccess_2, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsSkydiving_ReturnValue, class UAnimMontage* CallFunc_GetFrontendAnimMontageIdleOverride_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_10, bool CallFunc_Montage_IsActive_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_GetCurveValue_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Montage_Play_ReturnValue, float CallFunc_Montage_Play_ReturnValue_1);
	void MenuScreenDispatcher__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
