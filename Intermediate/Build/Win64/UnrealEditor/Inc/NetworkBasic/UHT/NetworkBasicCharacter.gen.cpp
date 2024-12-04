// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkBasic/Character/NetworkBasicCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetworkBasicCharacter() {}

// Begin Cross Module References
NETWORKBASIC_API UClass* Z_Construct_UClass_AHCharBase();
NETWORKBASIC_API UClass* Z_Construct_UClass_ANetworkBasicCharacter();
NETWORKBASIC_API UClass* Z_Construct_UClass_ANetworkBasicCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_NetworkBasic();
// End Cross Module References

// Begin Class ANetworkBasicCharacter Function CallClientTravel
struct Z_Construct_UFunction_ANetworkBasicCharacter_CallClientTravel_Statics
{
	struct NetworkBasicCharacter_eventCallClientTravel_Parms
	{
		FString Address;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/NetworkBasicCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Address_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Address;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ANetworkBasicCharacter_CallClientTravel_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetworkBasicCharacter_eventCallClientTravel_Parms, Address), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Address_MetaData), NewProp_Address_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANetworkBasicCharacter_CallClientTravel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANetworkBasicCharacter_CallClientTravel_Statics::NewProp_Address,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkBasicCharacter_CallClientTravel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetworkBasicCharacter_CallClientTravel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetworkBasicCharacter, nullptr, "CallClientTravel", nullptr, nullptr, Z_Construct_UFunction_ANetworkBasicCharacter_CallClientTravel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkBasicCharacter_CallClientTravel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANetworkBasicCharacter_CallClientTravel_Statics::NetworkBasicCharacter_eventCallClientTravel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkBasicCharacter_CallClientTravel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANetworkBasicCharacter_CallClientTravel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANetworkBasicCharacter_CallClientTravel_Statics::NetworkBasicCharacter_eventCallClientTravel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANetworkBasicCharacter_CallClientTravel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetworkBasicCharacter_CallClientTravel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANetworkBasicCharacter::execCallClientTravel)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Address);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CallClientTravel(Z_Param_Address);
	P_NATIVE_END;
}
// End Class ANetworkBasicCharacter Function CallClientTravel

// Begin Class ANetworkBasicCharacter Function CallOpenLevel
struct Z_Construct_UFunction_ANetworkBasicCharacter_CallOpenLevel_Statics
{
	struct NetworkBasicCharacter_eventCallOpenLevel_Parms
	{
		FString Address;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/NetworkBasicCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Address_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Address;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ANetworkBasicCharacter_CallOpenLevel_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetworkBasicCharacter_eventCallOpenLevel_Parms, Address), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Address_MetaData), NewProp_Address_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANetworkBasicCharacter_CallOpenLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANetworkBasicCharacter_CallOpenLevel_Statics::NewProp_Address,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkBasicCharacter_CallOpenLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetworkBasicCharacter_CallOpenLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetworkBasicCharacter, nullptr, "CallOpenLevel", nullptr, nullptr, Z_Construct_UFunction_ANetworkBasicCharacter_CallOpenLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkBasicCharacter_CallOpenLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANetworkBasicCharacter_CallOpenLevel_Statics::NetworkBasicCharacter_eventCallOpenLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkBasicCharacter_CallOpenLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANetworkBasicCharacter_CallOpenLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANetworkBasicCharacter_CallOpenLevel_Statics::NetworkBasicCharacter_eventCallOpenLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANetworkBasicCharacter_CallOpenLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetworkBasicCharacter_CallOpenLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANetworkBasicCharacter::execCallOpenLevel)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Address);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CallOpenLevel(Z_Param_Address);
	P_NATIVE_END;
}
// End Class ANetworkBasicCharacter Function CallOpenLevel

// Begin Class ANetworkBasicCharacter Function OpenLevel
struct Z_Construct_UFunction_ANetworkBasicCharacter_OpenLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/NetworkBasicCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetworkBasicCharacter_OpenLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetworkBasicCharacter, nullptr, "OpenLevel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkBasicCharacter_OpenLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANetworkBasicCharacter_OpenLevel_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANetworkBasicCharacter_OpenLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetworkBasicCharacter_OpenLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANetworkBasicCharacter::execOpenLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OpenLevel();
	P_NATIVE_END;
}
// End Class ANetworkBasicCharacter Function OpenLevel

// Begin Class ANetworkBasicCharacter
void ANetworkBasicCharacter::StaticRegisterNativesANetworkBasicCharacter()
{
	UClass* Class = ANetworkBasicCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CallClientTravel", &ANetworkBasicCharacter::execCallClientTravel },
		{ "CallOpenLevel", &ANetworkBasicCharacter::execCallOpenLevel },
		{ "OpenLevel", &ANetworkBasicCharacter::execOpenLevel },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANetworkBasicCharacter);
UClass* Z_Construct_UClass_ANetworkBasicCharacter_NoRegister()
{
	return ANetworkBasicCharacter::StaticClass();
}
struct Z_Construct_UClass_ANetworkBasicCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/NetworkBasicCharacter.h" },
		{ "ModuleRelativePath", "Character/NetworkBasicCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_R_Health_MetaData[] = {
		{ "ModuleRelativePath", "Character/NetworkBasicCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_R_Health;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANetworkBasicCharacter_CallClientTravel, "CallClientTravel" }, // 3722921571
		{ &Z_Construct_UFunction_ANetworkBasicCharacter_CallOpenLevel, "CallOpenLevel" }, // 511922524
		{ &Z_Construct_UFunction_ANetworkBasicCharacter_OpenLevel, "OpenLevel" }, // 32950367
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANetworkBasicCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANetworkBasicCharacter_Statics::NewProp_R_Health = { "R_Health", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetworkBasicCharacter, R_Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_R_Health_MetaData), NewProp_R_Health_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANetworkBasicCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetworkBasicCharacter_Statics::NewProp_R_Health,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANetworkBasicCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANetworkBasicCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHCharBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NetworkBasic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANetworkBasicCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANetworkBasicCharacter_Statics::ClassParams = {
	&ANetworkBasicCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANetworkBasicCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANetworkBasicCharacter_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANetworkBasicCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ANetworkBasicCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANetworkBasicCharacter()
{
	if (!Z_Registration_Info_UClass_ANetworkBasicCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANetworkBasicCharacter.OuterSingleton, Z_Construct_UClass_ANetworkBasicCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANetworkBasicCharacter.OuterSingleton;
}
template<> NETWORKBASIC_API UClass* StaticClass<ANetworkBasicCharacter>()
{
	return ANetworkBasicCharacter::StaticClass();
}
void ANetworkBasicCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_R_Health(TEXT("R_Health"));
	const bool bIsValid = true
		&& Name_R_Health == ClassReps[(int32)ENetFields_Private::R_Health].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ANetworkBasicCharacter"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANetworkBasicCharacter);
ANetworkBasicCharacter::~ANetworkBasicCharacter() {}
// End Class ANetworkBasicCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_NetworkBasic_Source_NetworkBasic_Character_NetworkBasicCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANetworkBasicCharacter, ANetworkBasicCharacter::StaticClass, TEXT("ANetworkBasicCharacter"), &Z_Registration_Info_UClass_ANetworkBasicCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANetworkBasicCharacter), 3474442407U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NetworkBasic_Source_NetworkBasic_Character_NetworkBasicCharacter_h_665453356(TEXT("/Script/NetworkBasic"),
	Z_CompiledInDeferFile_FID_NetworkBasic_Source_NetworkBasic_Character_NetworkBasicCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NetworkBasic_Source_NetworkBasic_Character_NetworkBasicCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
