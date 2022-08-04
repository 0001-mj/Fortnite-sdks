#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x120 (0x4D0 - 0x3B0)
// WidgetBlueprintGeneratedClass EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C
class UEnableMultiFactorAuthModalBP_C : public UEnableMultiFactorModal
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Intro_V2;                                          // 0x3B8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      ArrowPulse;                                        // 0x3C0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Intro;                                             // 0x3C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                      ConsoleTextBlock;                                  // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CT_LimitedTimeHeader;                              // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CT_TakenToWebsite;                                 // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       EnableButtonSwitcher;                              // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_1;                                           // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemInfoWidget_C*                     ItemInfoWidget_FromSocialImport;                   // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone;                                          // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_TitleHeader;                              // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EFrontEndCamera                   DesiredFrontEndCamera;                             // 0x418(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_47CD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItemDefinition*                   PreviewItemDef;                                    // 0x420(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HeartbeatDelayIntroAnimation;                      // 0x428(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        DebugSocialImportType;                             // 0x42C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHasReward;                                        // 0x42D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_47CE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  FacebookHeader;                                    // 0x430(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  VKHeader;                                          // 0x448(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  SteamHeader;                                       // 0x460(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  PlaystationHeader;                                 // 0x478(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  XboxHeader;                                        // 0x490(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class ESocialImportPanelPlatform        SocialPlatform;                                    // 0x4A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_47CF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  NewVar_0;                                          // 0x4B0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                MobileLimitedTimeHeaderStyle;                      // 0x4C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EnableMultiFactorAuthModalBP_C");
		return Clss;
	}

	void ScaleTitleForCulture(float ScaleCharThreshold, float MaxCharCountForScale, int32 StartScaleAfterCharCount, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Len_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_FClamp_ReturnValue);
	void AnimationFullyCompleteBP();
	void HandleSetScreenMode(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue_1);
	void NavDown(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void NavUp(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue_1);
	void NavRight(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_HasAnyUserFocus_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue_1, bool CallFunc_GetIsEnabled_ReturnValue);
	void NavLeft(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void OnActivated();
	void BndEvt__Button_RemindMeLater_K2Node_ComponentBoundEvent_796_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void HandleHeaderText();
	void PreConstruct(bool IsDesignTime);
	void OnPanelTypeSet(enum class ESocialImportPanelType NewType);
	void OnIncentivizedSet(bool bIncentivized);
	void OnSetExitButtonText(class FText& NewButtonText);
	void OnConsoleDisplayURLProvided(class FText& UniquePlayerURLText);
	void OnSetScreenConfiguration(bool bIsConsole);
	void Construct();
	void ExecuteUbergraph_EnableMultiFactorAuthModalBP(int32 EntryPoint, bool CallFunc_IsMobileGame_ReturnValue, enum class EFrontEndCamera Temp_byte_Variable, enum class EFrontEndCamera Temp_byte_Variable_1, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool Temp_bool_Variable, enum class EFrontEndCamera K2Node_Select_Default, bool K2Node_Event_IsDesignTime, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, enum class ESocialImportPanelType K2Node_Event_NewType, float CallFunc_GetEndTime_ReturnValue, bool K2Node_Event_bIncentivized, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class FText K2Node_Event_NewButtonText, class FText K2Node_Event_UniquePlayerURLText, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool K2Node_Event_bIsConsole);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif