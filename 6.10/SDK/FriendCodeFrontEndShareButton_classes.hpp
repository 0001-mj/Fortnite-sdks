#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x8 (0xB58 - 0xB50)
// WidgetBlueprintGeneratedClass FriendCodeFrontEndShareButton.FriendCodeFrontEndShareButton_C
class UFriendCodeFrontEndShareButton_C : public UFriendCodeShareButtonBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB50(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FriendCodeFrontEndShareButton_C");
		return Clss;
	}

	void BP_OnClicked();
	void Construct();
	void ExecuteUbergraph_FriendCodeFrontEndShareButton(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif