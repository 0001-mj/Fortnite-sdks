#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x0 (0x310 - 0x310)
// BlueprintGeneratedClass GCL_Rift_Teleport.GCL_Rift_Teleport_C
class AGCL_Rift_Teleport_C : public AFortGameplayCueNotify_Looping
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCL_Rift_Teleport_C");
		return Clss;
	}

	bool WhileActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class AEmitterCameraLensEffectBase* CallFunc_SpawnCameraLensEffect_ReturnValue, class APlayerController* CallFunc_GetLocalViewingPlayerController_ReturnValue, UInterfaceProperty_ CallFunc_GetVehicleUInterface_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshComponent_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsDrivingVehicle_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1);
	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters);
	void OnWhileActiveParticleSystemDeactivate(class UParticleSystemComponent* WhileActiveParticleSysComponent, struct FGameplayCueParameters& Parameters);
	void OnStartParticleSystemSpawned(class UParticleSystemComponent* SpawnedParticleSysComponent, struct FGameplayCueParameters& Parameters);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
