// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkBasic/NetworkFramework/NetworkBasicGameState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetworkBasicGameState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
NETWORKBASIC_API UClass* Z_Construct_UClass_ANetworkBasicGameState();
NETWORKBASIC_API UClass* Z_Construct_UClass_ANetworkBasicGameState_NoRegister();
UPackage* Z_Construct_UPackage__Script_NetworkBasic();
// End Cross Module References

// Begin Class ANetworkBasicGameState
void ANetworkBasicGameState::StaticRegisterNativesANetworkBasicGameState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANetworkBasicGameState);
UClass* Z_Construct_UClass_ANetworkBasicGameState_NoRegister()
{
	return ANetworkBasicGameState::StaticClass();
}
struct Z_Construct_UClass_ANetworkBasicGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "NetworkFramework/NetworkBasicGameState.h" },
		{ "ModuleRelativePath", "NetworkFramework/NetworkBasicGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANetworkBasicGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ANetworkBasicGameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NetworkBasic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANetworkBasicGameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANetworkBasicGameState_Statics::ClassParams = {
	&ANetworkBasicGameState::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANetworkBasicGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_ANetworkBasicGameState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANetworkBasicGameState()
{
	if (!Z_Registration_Info_UClass_ANetworkBasicGameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANetworkBasicGameState.OuterSingleton, Z_Construct_UClass_ANetworkBasicGameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANetworkBasicGameState.OuterSingleton;
}
template<> NETWORKBASIC_API UClass* StaticClass<ANetworkBasicGameState>()
{
	return ANetworkBasicGameState::StaticClass();
}
ANetworkBasicGameState::ANetworkBasicGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANetworkBasicGameState);
ANetworkBasicGameState::~ANetworkBasicGameState() {}
// End Class ANetworkBasicGameState

// Begin Registration
struct Z_CompiledInDeferFile_FID_NetworkBasic_Source_NetworkBasic_NetworkFramework_NetworkBasicGameState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANetworkBasicGameState, ANetworkBasicGameState::StaticClass, TEXT("ANetworkBasicGameState"), &Z_Registration_Info_UClass_ANetworkBasicGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANetworkBasicGameState), 3781136144U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NetworkBasic_Source_NetworkBasic_NetworkFramework_NetworkBasicGameState_h_2979117388(TEXT("/Script/NetworkBasic"),
	Z_CompiledInDeferFile_FID_NetworkBasic_Source_NetworkBasic_NetworkFramework_NetworkBasicGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NetworkBasic_Source_NetworkBasic_NetworkFramework_NetworkBasicGameState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
