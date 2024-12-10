// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkBasic/ETC/CoinItem.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoinItem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_URotatingMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
NETWORKBASIC_API UClass* Z_Construct_UClass_ACoinItem();
NETWORKBASIC_API UClass* Z_Construct_UClass_ACoinItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_NetworkBasic();
// End Cross Module References

// Begin Class ACoinItem Function OnBeginOverlap
struct Z_Construct_UFunction_ACoinItem_OnBeginOverlap_Statics
{
	struct CoinItem_eventOnBeginOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult Hit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ETC/CoinItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACoinItem_OnBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CoinItem_eventOnBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACoinItem_OnBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CoinItem_eventOnBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACoinItem_OnBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CoinItem_eventOnBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACoinItem_OnBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CoinItem_eventOnBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ACoinItem_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((CoinItem_eventOnBeginOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACoinItem_OnBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CoinItem_eventOnBeginOverlap_Parms), &Z_Construct_UFunction_ACoinItem_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACoinItem_OnBeginOverlap_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CoinItem_eventOnBeginOverlap_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACoinItem_OnBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoinItem_OnBeginOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoinItem_OnBeginOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoinItem_OnBeginOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoinItem_OnBeginOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoinItem_OnBeginOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoinItem_OnBeginOverlap_Statics::NewProp_Hit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACoinItem_OnBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoinItem_OnBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoinItem, nullptr, "OnBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_ACoinItem_OnBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoinItem_OnBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACoinItem_OnBeginOverlap_Statics::CoinItem_eventOnBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACoinItem_OnBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACoinItem_OnBeginOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACoinItem_OnBeginOverlap_Statics::CoinItem_eventOnBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACoinItem_OnBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACoinItem_OnBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACoinItem::execOnBeginOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_Hit);
	P_NATIVE_END;
}
// End Class ACoinItem Function OnBeginOverlap

// Begin Class ACoinItem
void ACoinItem::StaticRegisterNativesACoinItem()
{
	UClass* Class = ACoinItem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnBeginOverlap", &ACoinItem::execOnBeginOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACoinItem);
UClass* Z_Construct_UClass_ACoinItem_NoRegister()
{
	return ACoinItem::StaticClass();
}
struct Z_Construct_UClass_ACoinItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ETC/CoinItem.h" },
		{ "ModuleRelativePath", "ETC/CoinItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Pickup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ETC/CoinItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotatingMovement_MetaData[] = {
		{ "Category", "Pickup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ETC/CoinItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickupSound_MetaData[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "ETC/CoinItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemTypeSpeed_MetaData[] = {
		{ "Category", "CoinItem" },
		{ "ModuleRelativePath", "ETC/CoinItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseSpeedBuff_MetaData[] = {
		{ "Category", "CoinItem" },
		{ "ModuleRelativePath", "ETC/CoinItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedBuffTime_MetaData[] = {
		{ "Category", "CoinItem" },
		{ "ModuleRelativePath", "ETC/CoinItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RotatingMovement;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupSound;
	static void NewProp_ItemTypeSpeed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ItemTypeSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseSpeedBuff;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedBuffTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACoinItem_OnBeginOverlap, "OnBeginOverlap" }, // 3905704099
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACoinItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACoinItem_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACoinItem, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACoinItem_Statics::NewProp_RotatingMovement = { "RotatingMovement", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACoinItem, RotatingMovement), Z_Construct_UClass_URotatingMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotatingMovement_MetaData), NewProp_RotatingMovement_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACoinItem_Statics::NewProp_PickupSound = { "PickupSound", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACoinItem, PickupSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupSound_MetaData), NewProp_PickupSound_MetaData) };
void Z_Construct_UClass_ACoinItem_Statics::NewProp_ItemTypeSpeed_SetBit(void* Obj)
{
	((ACoinItem*)Obj)->ItemTypeSpeed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACoinItem_Statics::NewProp_ItemTypeSpeed = { "ItemTypeSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACoinItem), &Z_Construct_UClass_ACoinItem_Statics::NewProp_ItemTypeSpeed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemTypeSpeed_MetaData), NewProp_ItemTypeSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACoinItem_Statics::NewProp_BaseSpeedBuff = { "BaseSpeedBuff", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACoinItem, BaseSpeedBuff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseSpeedBuff_MetaData), NewProp_BaseSpeedBuff_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACoinItem_Statics::NewProp_SpeedBuffTime = { "SpeedBuffTime", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACoinItem, SpeedBuffTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedBuffTime_MetaData), NewProp_SpeedBuffTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACoinItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoinItem_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoinItem_Statics::NewProp_RotatingMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoinItem_Statics::NewProp_PickupSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoinItem_Statics::NewProp_ItemTypeSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoinItem_Statics::NewProp_BaseSpeedBuff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoinItem_Statics::NewProp_SpeedBuffTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACoinItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACoinItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NetworkBasic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACoinItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACoinItem_Statics::ClassParams = {
	&ACoinItem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACoinItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACoinItem_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACoinItem_Statics::Class_MetaDataParams), Z_Construct_UClass_ACoinItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACoinItem()
{
	if (!Z_Registration_Info_UClass_ACoinItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACoinItem.OuterSingleton, Z_Construct_UClass_ACoinItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACoinItem.OuterSingleton;
}
template<> NETWORKBASIC_API UClass* StaticClass<ACoinItem>()
{
	return ACoinItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACoinItem);
ACoinItem::~ACoinItem() {}
// End Class ACoinItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_NetworkBasic_1__Source_NetworkBasic_ETC_CoinItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACoinItem, ACoinItem::StaticClass, TEXT("ACoinItem"), &Z_Registration_Info_UClass_ACoinItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACoinItem), 3148596684U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NetworkBasic_1__Source_NetworkBasic_ETC_CoinItem_h_3809080773(TEXT("/Script/NetworkBasic"),
	Z_CompiledInDeferFile_FID_NetworkBasic_1__Source_NetworkBasic_ETC_CoinItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NetworkBasic_1__Source_NetworkBasic_ETC_CoinItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
