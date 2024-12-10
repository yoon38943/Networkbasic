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
NETWORKBASIC_API UClass* Z_Construct_UClass_UItemBuffComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NetworkBasic();
// End Cross Module References

// Begin Class ACoinGameCharacter Function ClientPlaySound2D
struct CoinGameCharacter_eventClientPlaySound2D_Parms
{
	USoundBase* Sound;
};
static const FName NAME_ACoinGameCharacter_ClientPlaySound2D = FName(TEXT("ClientPlaySound2D"));
void ACoinGameCharacter::ClientPlaySound2D(USoundBase* Sound)
{
	CoinGameCharacter_eventClientPlaySound2D_Parms Parms;
	Parms.Sound=Sound;
	UFunction* Func = FindFunctionChecked(NAME_ACoinGameCharacter_ClientPlaySound2D);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ACoinGameCharacter_ClientPlaySound2D_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// RPC( Remote Procedure Call )\n" },
#endif
		{ "ModuleRelativePath", "Character/CoinGameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RPC( Remote Procedure Call )" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACoinGameCharacter_ClientPlaySound2D_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CoinGameCharacter_eventClientPlaySound2D_Parms, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACoinGameCharacter_ClientPlaySound2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoinGameCharacter_ClientPlaySound2D_Statics::NewProp_Sound,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACoinGameCharacter_ClientPlaySound2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoinGameCharacter_ClientPlaySound2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoinGameCharacter, nullptr, "ClientPlaySound2D", nullptr, nullptr, Z_Construct_UFunction_ACoinGameCharacter_ClientPlaySound2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoinGameCharacter_ClientPlaySound2D_Statics::PropPointers), sizeof(CoinGameCharacter_eventClientPlaySound2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACoinGameCharacter_ClientPlaySound2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACoinGameCharacter_ClientPlaySound2D_Statics::Function_MetaDataParams) };
static_assert(sizeof(CoinGameCharacter_eventClientPlaySound2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACoinGameCharacter_ClientPlaySound2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACoinGameCharacter_ClientPlaySound2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACoinGameCharacter::execClientPlaySound2D)
{
	P_GET_OBJECT(USoundBase,Z_Param_Sound);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientPlaySound2D_Implementation(Z_Param_Sound);
	P_NATIVE_END;
}
// End Class ACoinGameCharacter Function ClientPlaySound2D

// Begin Class ACoinGameCharacter
void ACoinGameCharacter::StaticRegisterNativesACoinGameCharacter()
{
	UClass* Class = ACoinGameCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClientPlaySound2D", &ACoinGameCharacter::execClientPlaySound2D },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemBuff_MetaData[] = {
		{ "Category", "CoinGameCharacter" },
		{ "EditInline", "true" },
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
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemBuff;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FallSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LandSound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACoinGameCharacter_ClientPlaySound2D, "ClientPlaySound2D" }, // 1224900907
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACoinGameCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACoinGameCharacter_Statics::NewProp_ItemBuff = { "ItemBuff", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACoinGameCharacter, ItemBuff), Z_Construct_UClass_UItemBuffComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemBuff_MetaData), NewProp_ItemBuff_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACoinGameCharacter_Statics::NewProp_FallSound = { "FallSound", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACoinGameCharacter, FallSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FallSound_MetaData), NewProp_FallSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACoinGameCharacter_Statics::NewProp_LandSound = { "LandSound", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACoinGameCharacter, LandSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandSound_MetaData), NewProp_LandSound_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACoinGameCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoinGameCharacter_Statics::NewProp_ItemBuff,
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
	FuncInfo,
	Z_Construct_UClass_ACoinGameCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_ACoinGameCharacter, ACoinGameCharacter::StaticClass, TEXT("ACoinGameCharacter"), &Z_Registration_Info_UClass_ACoinGameCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACoinGameCharacter), 1280567116U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NetworkBasic_1__Source_NetworkBasic_Character_CoinGameCharacter_h_1994684410(TEXT("/Script/NetworkBasic"),
	Z_CompiledInDeferFile_FID_NetworkBasic_1__Source_NetworkBasic_Character_CoinGameCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NetworkBasic_1__Source_NetworkBasic_Character_CoinGameCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
