#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x160 (0x1050 - 0xEF0)
// BlueprintGeneratedClass JackalVehicle_Athena.JackalVehicle_Athena_C
class AJackalVehicle_Athena_C : public AFortAthenaJackalVehicle
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xEF0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortVehicleAudioVoice*                AudioWind;                                         // 0xEF8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       AudioLand;                                         // 0xF00(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortVehicleAudioVoice*                AudioBoost;                                        // 0xF08(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortVehicleAudioVoice*                AudioMovement;                                     // 0xF10(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       AudioJump;                                         // 0xF18(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_Hoverboard_Lightbeams;                          // 0xF20(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              LoopingFX;                                         // 0xF28(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              BoostFX;                                           // 0xF30(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   BackLight;                                         // 0xF38(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   FrontLight;                                        // 0xF40(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortCollisionAudioComponent*          FortCollisionAudioImpacts;                         // 0xF48(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         OverlapVolume;                                     // 0xF50(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       DriverPawn;                                        // 0xF58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     DrivingPlayerController;                           // 0xF60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       LocalPlayerPawn;                                   // 0xF68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Delta;                                             // 0xF70(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bJumpCharging;                                     // 0xF74(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4112[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            MountSound;                                        // 0xF78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              InWaterFX;                                         // 0xF80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       InWaterLoop;                                       // 0xF88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CheckWaterTimer;                                   // 0xF90(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        RumbleIntensity;                                   // 0xF98(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Debug_NoCameraShake;                               // 0xF9C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4113[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCameraShake*                          DriverCameraShake;                                 // 0xFA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EngineSoundMaxDistance;                            // 0xFA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Jumped;                                            // 0xFAC(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4114[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              BoostMeterMID;                                     // 0xFB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BoostTImelineAlpha;                                // 0xFB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               FXBoostEnd_0;                                      // 0xFBC(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            DismountSound;                                     // 0xFC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               FXFrontSpringOffset;                               // 0xFD0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               FXRearSpringOffset;                                // 0xFDC(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FXSurfaceType;                                     // 0xFE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SavedDamageValueForMID;                            // 0xFEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxSpeedToDestroy;                                 // 0xFF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxHealthToDestroy;                                // 0xFF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SavedHeadlightValueForMID;                         // 0xFF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BoostTimeValueForMID;                              // 0xFFC(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                VehicleHitActor;                                   // 0x1000(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DestructionAngle;                                  // 0x1008(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LandingFXImpactThreshold;                          // 0x100C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       LandingFX;                                         // 0x1010(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            OnDeathSound;                                      // 0x1018(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BumpForceAngle;                                    // 0x1020(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4115[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                JumpCameraShake;                                   // 0x1028(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MovementVisualUpdate;                              // 0x1030(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4116[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          MovementVisualTimer;                               // 0x1038(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        SlipStreamImpulseForce;                            // 0x1040(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4117[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    WrapBaseMaterial;                                  // 0x1048(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("JackalVehicle_Athena_C");
		return Clss;
	}

	void SlipStreamCheck(const struct FVector& CallFunc_GetVehicleForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_IsInSkyTube_ReturnValue);
	void GetMaxAudibleDistance(float* Max_Distance, bool CallFunc_IsValid_ReturnValue);
	void ShouldBump(const struct FVector& Hit_Normal, class AFortPlayerPawn* PlayerPawn, bool* Bump, bool CallFunc_ContainsPlayers_ReturnValue, bool CallFunc_IsInVehicle_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FVector& CallFunc_GetActorUpVector_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, float CallFunc_Abs_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	bool ShouldDestroyProp_(const struct FVector& HitNormal, const struct FVector& CallFunc_GetPreviousLinearVelocity_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, float CallFunc_GetPreviousForwardSpeedKmh_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void DestroyBuildingPiece(class ABuildingActor* BuildingActor, float DestroyThreshold, float CallFunc_GetMaxHealth_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, const struct FGameplayEffectContextHandle& CallFunc_MakeEffectContext_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue);
	void UpdateSurfaceType(enum class EPhysicalSurface Surface, int32* Output, int32 Temp_int_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, int32 Temp_int_Variable_1, bool Temp_bool_Variable, int32 Temp_int_Variable_2, bool Temp_bool_Variable_1, int32 K2Node_Select_Default, int32 K2Node_Select_Default_1);
	void SendBoostTimeToMaterials(float ParameterValue);
	void SendHeadlightValueToMaterials(float ParameterValue);
	void SendDamageValueToMaterials(float ParameterValue);
	void HapticsOnHit(float HitMagnitude, float CameraPushVelocityDelta, float HitDelta, float CameraShakeMagnitude, const struct FVector& CallFunc_GetPreviousLinearVelocity_ReturnValue, const struct FVector& CallFunc_GetPreviousLinearVelocity_ReturnValue_1, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, float CallFunc_Abs_ReturnValue, const struct FVector& CallFunc_GetComponentVelocity_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_VSize_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_2);
	void IsBoostCharging(bool* Is_Charging, const struct FFortRechargingActionTimer& CallFunc_GetCurrentBoostTimer_ReturnValue);
	void CurrentBoostCharge(float* Charge_Value, const struct FFortRechargingActionTimer& CallFunc_GetCurrentBoostTimer_ReturnValue);
	void DeactivateComponents();
	TArray<class FText> GetVehicleSeatActionLabels(class AFortPlayerPawn* PlayerPawn, enum class ECommonInputType OverrideInputType, const TArray<class FText>& ReturnLabels_Local, class FText CallFunc_MakeLiteralText_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2);
	TArray<class FText> GetVehicleSeatLabels(class AFortPlayerPawn* PlayerPawn, enum class ECommonInputType OverrideInputType, const TArray<class FText>& ReturnLabels_Local, class FText CallFunc_MakeLiteralText_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	TArray<class FName> GetVehicleSeatActionNames(class AFortPlayerPawn* PlayerPawn, enum class ECommonInputType OverrideInputType, const TArray<class FName>& ReturnActionNames_Local, class AFortPlayerPawn* PlayerPawn_Local, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_1, class FName CallFunc_GetJackalBoostActionName_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class FName CallFunc_GetVehicleJumpActionName_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_2, class FName CallFunc_GetJackalUseOrExitActionName_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2);
	void GetIconPlacement(class AActor* SelfActor, class AActor* ViewingActor, struct FVector* OutLocation, struct FVector* OutExtents, const struct FVector& CallFunc_GetCenterOfMass_ReturnValue);
	void UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void OnPawnEnterVehicle(class AFortPlayerPawn* PlayerPawn, int32 SeatIdx);
	void OnPawnExitVehicle(class AFortPlayerPawn* PlayerPawn, class FName ExitSocketName);
	void SetupCosmetics();
	void ReceiveBeginPlay();
	void OnBoostBegin();
	void OnBoostEnd();
	void OnJumpChargeBegin();
	void OnJumpChargeEnd(float Charge);
	void OnJumped(float Charge);
	void OnCollisionHitEffects(struct FVector& HitLocation, struct FVector& HitNormalImpulse, struct FVector& HitFrictionImpulse, struct FVector& HitNormal, class AActor* HitActor, enum class EPhysicalSurface HitSurfaceType);
	void OnEnteredWaterVolume(struct FVector& WaterSurfacePoint);
	void OnExitedWaterVolume(struct FVector& WaterSurfacePoint);
	void CheckWaterEvent();
	void StopDriverCameraShake();
	void StartDriverCameraShake();
	void OnIsSprintingChanged();
	void K2_ApplyCosmeticWrap(class UAthenaItemWrapDefinition* LoadedWrap);
	void ChangeOutMaterials();
	void OnStopTick();
	void BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void OnHoldExitStarted(class AFortPawn* ExitingPawn, float ExitDuration);
	void OnHoldExitStopped(class AFortPawn* ExitingPawn);
	void HideQuickBarForSecondaryAbility(bool Hide);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_JackalVehicle_Athena(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_ApplyMaterialAndUseWrapIfPossible_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_2, float K2Node_Event_Charge_1, float K2Node_Event_Charge, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormalImpulse, const struct FVector& K2Node_Event_HitFrictionImpulse, const struct FVector& K2Node_Event_HitNormal, class AActor* K2Node_Event_HitActor, enum class EPhysicalSurface K2Node_Event_HitSurfaceType, int32 CallFunc_UpdateSurfaceType_Output, bool CallFunc_OnCollision_OutResult, float CallFunc_OnCollision_OutMagnitude, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_3, const struct FVector& K2Node_Event_WaterSurfacePoint_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& K2Node_Event_WaterSurfacePoint, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_4, int32 CallFunc_GetRenderingDetailMode_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, class AFortPlayerPawn* K2Node_Event_PlayerPawn, class FName K2Node_Event_ExitSocketName, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class UCameraShake* CallFunc_PlayCameraShake_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsSprinting_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, class AFortPlayerPawn* K2Node_Event_PlayerPawn_1, int32 K2Node_Event_SeatIdx, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_6, const struct FVector& CallFunc_GetActorUpVector_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_2, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_2, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_3, class UAthenaItemWrapDefinition* K2Node_Event_LoadedWrap, class UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, const struct FVector& K2Node_ComponentBoundEvent_NormalImpulse, const struct FHitResult& K2Node_ComponentBoundEvent_Hit, bool CallFunc_IsDedicatedServer_ReturnValue_7, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_ShouldDestroyProp__ReturnValue, class ABuildingProp* K2Node_DynamicCast_AsBuilding_Prop, bool K2Node_DynamicCast_bSuccess_2, class UParticleSystem* Temp_object_Variable, bool CallFunc_ActorHasTag_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_3, bool CallFunc_Greater_FloatFloat_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class AFortPawn* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, class AFortPawn* K2Node_Event_ExitingPawn_1, float K2Node_Event_ExitDuration, class AFortPawn* K2Node_Event_ExitingPawn, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, class UParticleSystem* Temp_object_Variable_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_ShouldBump_Bump, bool CallFunc_IsValid_ReturnValue_7, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Subtract_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_2, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_3, bool CallFunc_IsDedicatedServer_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_8, class UCameraShake* CallFunc_PlayCameraShake_ReturnValue_1, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue, bool K2Node_CustomEvent_Hide, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue_9, class UParticleSystem* K2Node_Select_Default, class AController* CallFunc_GetController_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, class AFortPlayerControllerGameplay* K2Node_DynamicCast_AsFort_Player_Controller_Gameplay, bool K2Node_DynamicCast_bSuccess_4, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_IsValid_ReturnValue_10, const struct FVector& CallFunc_GetVehicleVelocity_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif