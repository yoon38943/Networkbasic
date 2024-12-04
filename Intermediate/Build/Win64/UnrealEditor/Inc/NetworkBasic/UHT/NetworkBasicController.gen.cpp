// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkBasic/NetworkFramework/NetworkBasicController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetworkBasicController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
NETWORKBASIC_API UClass* Z_Construct_UClass_ANetworkBasicController();
NETWORKBASIC_API UClass* Z_Construct_UClass_ANetworkBasicController_NoRegister();
UPackage* Z_Construct_UPackage__Script_NetworkBasic();
// End Cross Module References

// Begin Class ANetworkBasicController
void ANetworkBasicController::StaticRegisterNativesANetworkBasicController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANetworkBasicController);
UClass* Z_Construct_UClass_ANetworkBasicController_NoRegister()
{
	return ANetworkBasicController::StaticClass();
}
struct Z_Construct_UClass_ANetworkBasicController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "NetworkFramework/NetworkBasicController.h" },
		{ "ModuleRelativePath", "NetworkFramework/NetworkBasicController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANetworkBasicController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ANetworkBasicController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_NetworkBasic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANetworkBasicController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANetworkBasicController_Statics::ClassParams = {
	&ANetworkBasicController::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANetworkBasicController_Statics::Class_MetaDataParams), Z_Construct_UClass_ANetworkBasicController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANetworkBasicController()
{
	if (!Z_Registration_Info_UClass_ANetworkBasicController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANetworkBasicController.OuterSingleton, Z_Construct_UClass_ANetworkBasicController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANetworkBasicController.OuterSingleton;
}
template<> NETWORKBASIC_API UClass* StaticClass<ANetworkBasicController>()
{
	return ANetworkBasicController::StaticClass();
}
ANetworkBasicController::ANetworkBasicController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANetworkBasicController);
ANetworkBasicController::~ANetworkBasicController() {}
// End Class ANetworkBasicController

// Begin Registration
struct Z_CompiledInDeferFile_FID_NetworkBasic_Source_NetworkBasic_NetworkFramework_NetworkBasicController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANetworkBasicController, ANetworkBasicController::StaticClass, TEXT("ANetworkBasicController"), &Z_Registration_Info_UClass_ANetworkBasicController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANetworkBasicController), 258686535U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NetworkBasic_Source_NetworkBasic_NetworkFramework_NetworkBasicController_h_4132841009(TEXT("/Script/NetworkBasic"),
	Z_CompiledInDeferFile_FID_NetworkBasic_Source_NetworkBasic_NetworkFramework_NetworkBasicController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NetworkBasic_Source_NetworkBasic_NetworkFramework_NetworkBasicController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
