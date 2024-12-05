// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkBasic/CoinFramework/CoinPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoinPlayerState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
NETWORKBASIC_API UClass* Z_Construct_UClass_ACoinPlayerState();
NETWORKBASIC_API UClass* Z_Construct_UClass_ACoinPlayerState_NoRegister();
UPackage* Z_Construct_UPackage__Script_NetworkBasic();
// End Cross Module References

// Begin Class ACoinPlayerState
void ACoinPlayerState::StaticRegisterNativesACoinPlayerState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACoinPlayerState);
UClass* Z_Construct_UClass_ACoinPlayerState_NoRegister()
{
	return ACoinPlayerState::StaticClass();
}
struct Z_Construct_UClass_ACoinPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CoinFramework/CoinPlayerState.h" },
		{ "ModuleRelativePath", "CoinFramework/CoinPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pickups_MetaData[] = {
		{ "Category", "CoinPlayerState" },
		{ "ModuleRelativePath", "CoinFramework/CoinPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Pickups;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACoinPlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACoinPlayerState_Statics::NewProp_Pickups = { "Pickups", nullptr, (EPropertyFlags)0x0020080000000034, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACoinPlayerState, Pickups), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pickups_MetaData), NewProp_Pickups_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACoinPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoinPlayerState_Statics::NewProp_Pickups,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACoinPlayerState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACoinPlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_NetworkBasic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACoinPlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACoinPlayerState_Statics::ClassParams = {
	&ACoinPlayerState::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACoinPlayerState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACoinPlayerState_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACoinPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_ACoinPlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACoinPlayerState()
{
	if (!Z_Registration_Info_UClass_ACoinPlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACoinPlayerState.OuterSingleton, Z_Construct_UClass_ACoinPlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACoinPlayerState.OuterSingleton;
}
template<> NETWORKBASIC_API UClass* StaticClass<ACoinPlayerState>()
{
	return ACoinPlayerState::StaticClass();
}
void ACoinPlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_Pickups(TEXT("Pickups"));
	const bool bIsValid = true
		&& Name_Pickups == ClassReps[(int32)ENetFields_Private::Pickups].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ACoinPlayerState"));
}
ACoinPlayerState::ACoinPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACoinPlayerState);
ACoinPlayerState::~ACoinPlayerState() {}
// End Class ACoinPlayerState

// Begin Registration
struct Z_CompiledInDeferFile_FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_CoinPlayerState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACoinPlayerState, ACoinPlayerState::StaticClass, TEXT("ACoinPlayerState"), &Z_Registration_Info_UClass_ACoinPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACoinPlayerState), 2752401341U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_CoinPlayerState_h_296811176(TEXT("/Script/NetworkBasic"),
	Z_CompiledInDeferFile_FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_CoinPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_CoinPlayerState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
