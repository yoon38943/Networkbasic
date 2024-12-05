// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkBasic/Character/CoinGameCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoinGameCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
NETWORKBASIC_API UClass* Z_Construct_UClass_ACoinGameCharacter();
NETWORKBASIC_API UClass* Z_Construct_UClass_ACoinGameCharacter_NoRegister();
NETWORKBASIC_API UClass* Z_Construct_UClass_AHCharBase();
UPackage* Z_Construct_UPackage__Script_NetworkBasic();
// End Cross Module References

// Begin Class ACoinGameCharacter
void ACoinGameCharacter::StaticRegisterNativesACoinGameCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACoinGameCharacter);
UClass* Z_Construct_UClass_ACoinGameCharacter_NoRegister()
{
	return ACoinGameCharacter::StaticClass();
}
struct Z_Construct_UClass_ACoinGameCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/CoinGameCharacter.h" },
		{ "ModuleRelativePath", "Character/CoinGameCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FallSound_MetaData[] = {
		{ "Category", "Pickups Character" },
		{ "ModuleRelativePath", "Character/CoinGameCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandSound_MetaData[] = {
		{ "Category", "Pickups Character" },
		{ "ModuleRelativePath", "Character/CoinGameCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FallSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LandSound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACoinGameCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACoinGameCharacter_Statics::NewProp_FallSound = { "FallSound", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACoinGameCharacter, FallSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FallSound_MetaData), NewProp_FallSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACoinGameCharacter_Statics::NewProp_LandSound = { "LandSound", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACoinGameCharacter, LandSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandSound_MetaData), NewProp_LandSound_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACoinGameCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoinGameCharacter_Statics::NewProp_FallSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoinGameCharacter_Statics::NewProp_LandSound,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACoinGameCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACoinGameCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHCharBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NetworkBasic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACoinGameCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACoinGameCharacter_Statics::ClassParams = {
	&ACoinGameCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACoinGameCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACoinGameCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACoinGameCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ACoinGameCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACoinGameCharacter()
{
	if (!Z_Registration_Info_UClass_ACoinGameCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACoinGameCharacter.OuterSingleton, Z_Construct_UClass_ACoinGameCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACoinGameCharacter.OuterSingleton;
}
template<> NETWORKBASIC_API UClass* StaticClass<ACoinGameCharacter>()
{
	return ACoinGameCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACoinGameCharacter);
ACoinGameCharacter::~ACoinGameCharacter() {}
// End Class ACoinGameCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_NetworkBasic_1__Source_NetworkBasic_Character_CoinGameCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACoinGameCharacter, ACoinGameCharacter::StaticClass, TEXT("ACoinGameCharacter"), &Z_Registration_Info_UClass_ACoinGameCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACoinGameCharacter), 2304782585U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NetworkBasic_1__Source_NetworkBasic_Character_CoinGameCharacter_h_4014426163(TEXT("/Script/NetworkBasic"),
	Z_CompiledInDeferFile_FID_NetworkBasic_1__Source_NetworkBasic_Character_CoinGameCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NetworkBasic_1__Source_NetworkBasic_Character_CoinGameCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
