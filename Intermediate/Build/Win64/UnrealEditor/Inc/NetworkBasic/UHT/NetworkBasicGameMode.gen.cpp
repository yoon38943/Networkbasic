// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkBasic/NetworkFramework/NetworkBasicGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetworkBasicGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
NETWORKBASIC_API UClass* Z_Construct_UClass_ANetworkBasicGameMode();
NETWORKBASIC_API UClass* Z_Construct_UClass_ANetworkBasicGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_NetworkBasic();
// End Cross Module References

// Begin Class ANetworkBasicGameMode
void ANetworkBasicGameMode::StaticRegisterNativesANetworkBasicGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANetworkBasicGameMode);
UClass* Z_Construct_UClass_ANetworkBasicGameMode_NoRegister()
{
	return ANetworkBasicGameMode::StaticClass();
}
struct Z_Construct_UClass_ANetworkBasicGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "NetworkFramework/NetworkBasicGameMode.h" },
		{ "ModuleRelativePath", "NetworkFramework/NetworkBasicGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANetworkBasicGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ANetworkBasicGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NetworkBasic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANetworkBasicGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANetworkBasicGameMode_Statics::ClassParams = {
	&ANetworkBasicGameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANetworkBasicGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ANetworkBasicGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANetworkBasicGameMode()
{
	if (!Z_Registration_Info_UClass_ANetworkBasicGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANetworkBasicGameMode.OuterSingleton, Z_Construct_UClass_ANetworkBasicGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANetworkBasicGameMode.OuterSingleton;
}
template<> NETWORKBASIC_API UClass* StaticClass<ANetworkBasicGameMode>()
{
	return ANetworkBasicGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANetworkBasicGameMode);
ANetworkBasicGameMode::~ANetworkBasicGameMode() {}
// End Class ANetworkBasicGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_NetworkBasic_1__Source_NetworkBasic_NetworkFramework_NetworkBasicGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANetworkBasicGameMode, ANetworkBasicGameMode::StaticClass, TEXT("ANetworkBasicGameMode"), &Z_Registration_Info_UClass_ANetworkBasicGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANetworkBasicGameMode), 1238100749U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NetworkBasic_1__Source_NetworkBasic_NetworkFramework_NetworkBasicGameMode_h_2058189576(TEXT("/Script/NetworkBasic"),
	Z_CompiledInDeferFile_FID_NetworkBasic_1__Source_NetworkBasic_NetworkFramework_NetworkBasicGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NetworkBasic_1__Source_NetworkBasic_NetworkFramework_NetworkBasicGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
