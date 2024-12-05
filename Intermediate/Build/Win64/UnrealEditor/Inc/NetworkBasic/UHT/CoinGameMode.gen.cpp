// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkBasic/CoinFramework/CoinGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoinGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
NETWORKBASIC_API UClass* Z_Construct_UClass_ACoinGameMode();
NETWORKBASIC_API UClass* Z_Construct_UClass_ACoinGameMode_NoRegister();
NETWORKBASIC_API UClass* Z_Construct_UClass_ACoinGameState_NoRegister();
UPackage* Z_Construct_UPackage__Script_NetworkBasic();
// End Cross Module References

// Begin Class ACoinGameMode
void ACoinGameMode::StaticRegisterNativesACoinGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACoinGameMode);
UClass* Z_Construct_UClass_ACoinGameMode_NoRegister()
{
	return ACoinGameMode::StaticClass();
}
struct Z_Construct_UClass_ACoinGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CoinFramework/CoinGameMode.h" },
		{ "ModuleRelativePath", "CoinFramework/CoinGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyGameState_MetaData[] = {
		{ "ModuleRelativePath", "CoinFramework/CoinGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyGameState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACoinGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACoinGameMode_Statics::NewProp_MyGameState = { "MyGameState", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACoinGameMode, MyGameState), Z_Construct_UClass_ACoinGameState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyGameState_MetaData), NewProp_MyGameState_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACoinGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoinGameMode_Statics::NewProp_MyGameState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACoinGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACoinGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_NetworkBasic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACoinGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACoinGameMode_Statics::ClassParams = {
	&ACoinGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACoinGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACoinGameMode_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACoinGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACoinGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACoinGameMode()
{
	if (!Z_Registration_Info_UClass_ACoinGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACoinGameMode.OuterSingleton, Z_Construct_UClass_ACoinGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACoinGameMode.OuterSingleton;
}
template<> NETWORKBASIC_API UClass* StaticClass<ACoinGameMode>()
{
	return ACoinGameMode::StaticClass();
}
ACoinGameMode::ACoinGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACoinGameMode);
ACoinGameMode::~ACoinGameMode() {}
// End Class ACoinGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_CoinGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACoinGameMode, ACoinGameMode::StaticClass, TEXT("ACoinGameMode"), &Z_Registration_Info_UClass_ACoinGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACoinGameMode), 1007343458U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_CoinGameMode_h_3565182691(TEXT("/Script/NetworkBasic"),
	Z_CompiledInDeferFile_FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_CoinGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_CoinGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
