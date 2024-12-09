// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkBasic/CoinFramework/CoinPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoinPlayerController() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
NETWORKBASIC_API UClass* Z_Construct_UClass_ACoinPlayerController();
NETWORKBASIC_API UClass* Z_Construct_UClass_ACoinPlayerController_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_NetworkBasic();
// End Cross Module References

// Begin Class ACoinPlayerController
void ACoinPlayerController::StaticRegisterNativesACoinPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACoinPlayerController);
UClass* Z_Construct_UClass_ACoinPlayerController_NoRegister()
{
	return ACoinPlayerController::StaticClass();
}
struct Z_Construct_UClass_ACoinPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "CoinFramework/CoinPlayerController.h" },
		{ "ModuleRelativePath", "CoinFramework/CoinPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScoreboardMenuClass_MetaData[] = {
		{ "Category", "CoinPlayerController" },
		{ "ModuleRelativePath", "CoinFramework/CoinPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScoreInfoClass_MetaData[] = {
		{ "Category", "CoinPlayerController" },
		{ "ModuleRelativePath", "CoinFramework/CoinPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScoreboardMenu_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CoinFramework/CoinPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ScoreboardMenuClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ScoreInfoClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScoreboardMenu;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACoinPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACoinPlayerController_Statics::NewProp_ScoreboardMenuClass = { "ScoreboardMenuClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACoinPlayerController, ScoreboardMenuClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScoreboardMenuClass_MetaData), NewProp_ScoreboardMenuClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACoinPlayerController_Statics::NewProp_ScoreInfoClass = { "ScoreInfoClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACoinPlayerController, ScoreInfoClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScoreInfoClass_MetaData), NewProp_ScoreInfoClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACoinPlayerController_Statics::NewProp_ScoreboardMenu = { "ScoreboardMenu", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACoinPlayerController, ScoreboardMenu), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScoreboardMenu_MetaData), NewProp_ScoreboardMenu_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACoinPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoinPlayerController_Statics::NewProp_ScoreboardMenuClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoinPlayerController_Statics::NewProp_ScoreInfoClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoinPlayerController_Statics::NewProp_ScoreboardMenu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACoinPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACoinPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_NetworkBasic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACoinPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACoinPlayerController_Statics::ClassParams = {
	&ACoinPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACoinPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACoinPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACoinPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ACoinPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACoinPlayerController()
{
	if (!Z_Registration_Info_UClass_ACoinPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACoinPlayerController.OuterSingleton, Z_Construct_UClass_ACoinPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACoinPlayerController.OuterSingleton;
}
template<> NETWORKBASIC_API UClass* StaticClass<ACoinPlayerController>()
{
	return ACoinPlayerController::StaticClass();
}
ACoinPlayerController::ACoinPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACoinPlayerController);
ACoinPlayerController::~ACoinPlayerController() {}
// End Class ACoinPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_CoinPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACoinPlayerController, ACoinPlayerController::StaticClass, TEXT("ACoinPlayerController"), &Z_Registration_Info_UClass_ACoinPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACoinPlayerController), 4035834929U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_CoinPlayerController_h_1914273776(TEXT("/Script/NetworkBasic"),
	Z_CompiledInDeferFile_FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_CoinPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_CoinPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
