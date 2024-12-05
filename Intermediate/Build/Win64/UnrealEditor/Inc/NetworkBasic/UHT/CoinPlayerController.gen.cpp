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
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
NETWORKBASIC_API UClass* Z_Construct_UClass_ACoinPlayerController();
NETWORKBASIC_API UClass* Z_Construct_UClass_ACoinPlayerController_NoRegister();
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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACoinPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
		{ Z_Construct_UClass_ACoinPlayerController, ACoinPlayerController::StaticClass, TEXT("ACoinPlayerController"), &Z_Registration_Info_UClass_ACoinPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACoinPlayerController), 1121326052U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_CoinPlayerController_h_3085146166(TEXT("/Script/NetworkBasic"),
	Z_CompiledInDeferFile_FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_CoinPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_CoinPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
