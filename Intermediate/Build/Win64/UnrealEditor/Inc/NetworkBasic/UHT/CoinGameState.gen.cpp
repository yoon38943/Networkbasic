// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkBasic/CoinFramework/CoinGameState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoinGameState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameState();
ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
NETWORKBASIC_API UClass* Z_Construct_UClass_ACoinGameState();
NETWORKBASIC_API UClass* Z_Construct_UClass_ACoinGameState_NoRegister();
UPackage* Z_Construct_UPackage__Script_NetworkBasic();
// End Cross Module References

// Begin Class ACoinGameState Function GetPlayerStatesOrderedByScore
struct Z_Construct_UFunction_ACoinGameState_GetPlayerStatesOrderedByScore_Statics
{
	struct CoinGameState_eventGetPlayerStatesOrderedByScore_Parms
	{
		TArray<APlayerState*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CoinFramework/CoinGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACoinGameState_GetPlayerStatesOrderedByScore_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ACoinGameState_GetPlayerStatesOrderedByScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CoinGameState_eventGetPlayerStatesOrderedByScore_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACoinGameState_GetPlayerStatesOrderedByScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoinGameState_GetPlayerStatesOrderedByScore_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoinGameState_GetPlayerStatesOrderedByScore_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACoinGameState_GetPlayerStatesOrderedByScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoinGameState_GetPlayerStatesOrderedByScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoinGameState, nullptr, "GetPlayerStatesOrderedByScore", nullptr, nullptr, Z_Construct_UFunction_ACoinGameState_GetPlayerStatesOrderedByScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoinGameState_GetPlayerStatesOrderedByScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACoinGameState_GetPlayerStatesOrderedByScore_Statics::CoinGameState_eventGetPlayerStatesOrderedByScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACoinGameState_GetPlayerStatesOrderedByScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACoinGameState_GetPlayerStatesOrderedByScore_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACoinGameState_GetPlayerStatesOrderedByScore_Statics::CoinGameState_eventGetPlayerStatesOrderedByScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACoinGameState_GetPlayerStatesOrderedByScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACoinGameState_GetPlayerStatesOrderedByScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACoinGameState::execGetPlayerStatesOrderedByScore)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<APlayerState*>*)Z_Param__Result=P_THIS->GetPlayerStatesOrderedByScore();
	P_NATIVE_END;
}
// End Class ACoinGameState Function GetPlayerStatesOrderedByScore

// Begin Class ACoinGameState
void ACoinGameState::StaticRegisterNativesACoinGameState()
{
	UClass* Class = ACoinGameState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPlayerStatesOrderedByScore", &ACoinGameState::execGetPlayerStatesOrderedByScore },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACoinGameState);
UClass* Z_Construct_UClass_ACoinGameState_NoRegister()
{
	return ACoinGameState::StaticClass();
}
struct Z_Construct_UClass_ACoinGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CoinFramework/CoinGameState.h" },
		{ "ModuleRelativePath", "CoinFramework/CoinGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickupsRemaining_MetaData[] = {
		{ "Category", "CoinGameState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\xa0\x88\xeb\xb2\xa8\xec\x97\x90 \xeb\x82\xa8\xec\x95\x84\xec\x9e\x88\xeb\x8a\x94 \xec\xa0\x84\xec\xb2\xb4 \xec\xbd\x94\xec\x9d\xb8\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "CoinFramework/CoinGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xa0\x88\xeb\xb2\xa8\xec\x97\x90 \xeb\x82\xa8\xec\x95\x84\xec\x9e\x88\xeb\x8a\x94 \xec\xa0\x84\xec\xb2\xb4 \xec\xbd\x94\xec\x9d\xb8\xec\x88\x98" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PickupsRemaining;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACoinGameState_GetPlayerStatesOrderedByScore, "GetPlayerStatesOrderedByScore" }, // 368046574
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACoinGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACoinGameState_Statics::NewProp_PickupsRemaining = { "PickupsRemaining", nullptr, (EPropertyFlags)0x0020080000000034, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACoinGameState, PickupsRemaining), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupsRemaining_MetaData), NewProp_PickupsRemaining_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACoinGameState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoinGameState_Statics::NewProp_PickupsRemaining,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACoinGameState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACoinGameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameState,
	(UObject* (*)())Z_Construct_UPackage__Script_NetworkBasic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACoinGameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACoinGameState_Statics::ClassParams = {
	&ACoinGameState::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACoinGameState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACoinGameState_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACoinGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_ACoinGameState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACoinGameState()
{
	if (!Z_Registration_Info_UClass_ACoinGameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACoinGameState.OuterSingleton, Z_Construct_UClass_ACoinGameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACoinGameState.OuterSingleton;
}
template<> NETWORKBASIC_API UClass* StaticClass<ACoinGameState>()
{
	return ACoinGameState::StaticClass();
}
void ACoinGameState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_PickupsRemaining(TEXT("PickupsRemaining"));
	const bool bIsValid = true
		&& Name_PickupsRemaining == ClassReps[(int32)ENetFields_Private::PickupsRemaining].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ACoinGameState"));
}
ACoinGameState::ACoinGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACoinGameState);
ACoinGameState::~ACoinGameState() {}
// End Class ACoinGameState

// Begin Registration
struct Z_CompiledInDeferFile_FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_CoinGameState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACoinGameState, ACoinGameState::StaticClass, TEXT("ACoinGameState"), &Z_Registration_Info_UClass_ACoinGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACoinGameState), 115915150U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_CoinGameState_h_1652113441(TEXT("/Script/NetworkBasic"),
	Z_CompiledInDeferFile_FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_CoinGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_CoinGameState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
