// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkBasic/CoinFramework/UI/WidgetScoreInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetScoreInfo() {}

// Begin Cross Module References
NETWORKBASIC_API UClass* Z_Construct_UClass_UWidgetScoreInfo();
NETWORKBASIC_API UClass* Z_Construct_UClass_UWidgetScoreInfo_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_NetworkBasic();
// End Cross Module References

// Begin Class UWidgetScoreInfo
void UWidgetScoreInfo::StaticRegisterNativesUWidgetScoreInfo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetScoreInfo);
UClass* Z_Construct_UClass_UWidgetScoreInfo_NoRegister()
{
	return UWidgetScoreInfo::StaticClass();
}
struct Z_Construct_UClass_UWidgetScoreInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CoinFramework/UI/WidgetScoreInfo.h" },
		{ "ModuleRelativePath", "CoinFramework/UI/WidgetScoreInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_T_PlayerName_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "WidgetScoreInfo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CoinFramework/UI/WidgetScoreInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_T_Score_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "WidgetScoreInfo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CoinFramework/UI/WidgetScoreInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_T_Coin_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "WidgetScoreInfo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CoinFramework/UI/WidgetScoreInfo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_T_PlayerName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_T_Score;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_T_Coin;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetScoreInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetScoreInfo_Statics::NewProp_T_PlayerName = { "T_PlayerName", nullptr, (EPropertyFlags)0x011400000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidgetScoreInfo, T_PlayerName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_T_PlayerName_MetaData), NewProp_T_PlayerName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetScoreInfo_Statics::NewProp_T_Score = { "T_Score", nullptr, (EPropertyFlags)0x011400000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidgetScoreInfo, T_Score), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_T_Score_MetaData), NewProp_T_Score_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetScoreInfo_Statics::NewProp_T_Coin = { "T_Coin", nullptr, (EPropertyFlags)0x011400000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidgetScoreInfo, T_Coin), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_T_Coin_MetaData), NewProp_T_Coin_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidgetScoreInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetScoreInfo_Statics::NewProp_T_PlayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetScoreInfo_Statics::NewProp_T_Score,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetScoreInfo_Statics::NewProp_T_Coin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetScoreInfo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWidgetScoreInfo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_NetworkBasic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetScoreInfo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetScoreInfo_Statics::ClassParams = {
	&UWidgetScoreInfo::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWidgetScoreInfo_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetScoreInfo_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetScoreInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_UWidgetScoreInfo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWidgetScoreInfo()
{
	if (!Z_Registration_Info_UClass_UWidgetScoreInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetScoreInfo.OuterSingleton, Z_Construct_UClass_UWidgetScoreInfo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWidgetScoreInfo.OuterSingleton;
}
template<> NETWORKBASIC_API UClass* StaticClass<UWidgetScoreInfo>()
{
	return UWidgetScoreInfo::StaticClass();
}
UWidgetScoreInfo::UWidgetScoreInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetScoreInfo);
UWidgetScoreInfo::~UWidgetScoreInfo() {}
// End Class UWidgetScoreInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_UI_WidgetScoreInfo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetScoreInfo, UWidgetScoreInfo::StaticClass, TEXT("UWidgetScoreInfo"), &Z_Registration_Info_UClass_UWidgetScoreInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetScoreInfo), 475085154U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_UI_WidgetScoreInfo_h_2558656189(TEXT("/Script/NetworkBasic"),
	Z_CompiledInDeferFile_FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_UI_WidgetScoreInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_UI_WidgetScoreInfo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
