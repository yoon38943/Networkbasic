// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkBasic/Component/ItemBuffComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemBuffComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
NETWORKBASIC_API UClass* Z_Construct_UClass_ACoinGameCharacter_NoRegister();
NETWORKBASIC_API UClass* Z_Construct_UClass_UItemBuffComponent();
NETWORKBASIC_API UClass* Z_Construct_UClass_UItemBuffComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NetworkBasic();
// End Cross Module References

// Begin Class UItemBuffComponent Function MulticastSpeedBuff
struct ItemBuffComponent_eventMulticastSpeedBuff_Parms
{
	float BaseSpeed;
};
static const FName NAME_UItemBuffComponent_MulticastSpeedBuff = FName(TEXT("MulticastSpeedBuff"));
void UItemBuffComponent::MulticastSpeedBuff(float BaseSpeed)
{
	ItemBuffComponent_eventMulticastSpeedBuff_Parms Parms;
	Parms.BaseSpeed=BaseSpeed;
	UFunction* Func = FindFunctionChecked(NAME_UItemBuffComponent_MulticastSpeedBuff);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UItemBuffComponent_MulticastSpeedBuff_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Component/ItemBuffComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UItemBuffComponent_MulticastSpeedBuff_Statics::NewProp_BaseSpeed = { "BaseSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemBuffComponent_eventMulticastSpeedBuff_Parms, BaseSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemBuffComponent_MulticastSpeedBuff_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemBuffComponent_MulticastSpeedBuff_Statics::NewProp_BaseSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBuffComponent_MulticastSpeedBuff_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemBuffComponent_MulticastSpeedBuff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemBuffComponent, nullptr, "MulticastSpeedBuff", nullptr, nullptr, Z_Construct_UFunction_UItemBuffComponent_MulticastSpeedBuff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBuffComponent_MulticastSpeedBuff_Statics::PropPointers), sizeof(ItemBuffComponent_eventMulticastSpeedBuff_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBuffComponent_MulticastSpeedBuff_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemBuffComponent_MulticastSpeedBuff_Statics::Function_MetaDataParams) };
static_assert(sizeof(ItemBuffComponent_eventMulticastSpeedBuff_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemBuffComponent_MulticastSpeedBuff()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemBuffComponent_MulticastSpeedBuff_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemBuffComponent::execMulticastSpeedBuff)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_BaseSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastSpeedBuff_Implementation(Z_Param_BaseSpeed);
	P_NATIVE_END;
}
// End Class UItemBuffComponent Function MulticastSpeedBuff

// Begin Class UItemBuffComponent
void UItemBuffComponent::StaticRegisterNativesUItemBuffComponent()
{
	UClass* Class = UItemBuffComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MulticastSpeedBuff", &UItemBuffComponent::execMulticastSpeedBuff },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemBuffComponent);
UClass* Z_Construct_UClass_UItemBuffComponent_NoRegister()
{
	return UItemBuffComponent::StaticClass();
}
struct Z_Construct_UClass_UItemBuffComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Component/ItemBuffComponent.h" },
		{ "ModuleRelativePath", "Component/ItemBuffComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoinGameCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Component/ItemBuffComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CoinGameCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemBuffComponent_MulticastSpeedBuff, "MulticastSpeedBuff" }, // 1487929432
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemBuffComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemBuffComponent_Statics::NewProp_CoinGameCharacter = { "CoinGameCharacter", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemBuffComponent, CoinGameCharacter), Z_Construct_UClass_ACoinGameCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoinGameCharacter_MetaData), NewProp_CoinGameCharacter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemBuffComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemBuffComponent_Statics::NewProp_CoinGameCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemBuffComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UItemBuffComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NetworkBasic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemBuffComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemBuffComponent_Statics::ClassParams = {
	&UItemBuffComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UItemBuffComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UItemBuffComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemBuffComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemBuffComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItemBuffComponent()
{
	if (!Z_Registration_Info_UClass_UItemBuffComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemBuffComponent.OuterSingleton, Z_Construct_UClass_UItemBuffComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemBuffComponent.OuterSingleton;
}
template<> NETWORKBASIC_API UClass* StaticClass<UItemBuffComponent>()
{
	return UItemBuffComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItemBuffComponent);
UItemBuffComponent::~UItemBuffComponent() {}
// End Class UItemBuffComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_NetworkBasic_1__Source_NetworkBasic_Component_ItemBuffComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItemBuffComponent, UItemBuffComponent::StaticClass, TEXT("UItemBuffComponent"), &Z_Registration_Info_UClass_UItemBuffComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemBuffComponent), 2196683159U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NetworkBasic_1__Source_NetworkBasic_Component_ItemBuffComponent_h_1243162730(TEXT("/Script/NetworkBasic"),
	Z_CompiledInDeferFile_FID_NetworkBasic_1__Source_NetworkBasic_Component_ItemBuffComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NetworkBasic_1__Source_NetworkBasic_Component_ItemBuffComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
