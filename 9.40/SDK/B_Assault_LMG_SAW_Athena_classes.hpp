#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x20 (0xE10 - 0xDF0)
// BlueprintGeneratedClass B_Assault_LMG_SAW_Athena.B_Assault_LMG_SAW_Athena_C
class AB_Assault_LMG_SAW_Athena_C : public AB_Assault_Bulletswarm_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xDF0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                               LaserScaleUntargeted;                              // 0xDF8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LaserScaleTargeted;                                // 0xE04(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Assault_LMG_SAW_Athena_C");
		return Clss;
	}

	void ReceiveBeginPlay();
	void OnSetTargeting(bool bNewIsTargeting);
	void ExecuteUbergraph_B_Assault_LMG_SAW_Athena(int32 EntryPoint, bool K2Node_Event_bNewIsTargeting);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif