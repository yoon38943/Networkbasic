// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkBasic/CoinFramework/UI/WidgetScoreBoard.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetScoreBoard() {}

// Begin Cross Module References
NETWORKBASIC_API UClass* Z_Construct_UClass_UWidgetScoreBoard();
NETWORKBASIC_API UClass* Z_Construct_UClass_UWidgetScoreBoard_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_NetworkBasic();
// End Cross Module References

// Begin Class UWidgetScoreBoard Function UpdateScoreBoard
struct Z_Construct_UFunction_UWidgetScoreBoard_UpdateScoreBoard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CoinFramework/UI/WidgetScoreBoard.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetScoreBoard_UpdateScoreBoard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetScoreBoard, nullptr, "UpdateScoreBoard", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetScoreBoard_UpdateScoreBoard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetScoreBoard_UpdateScoreBoard_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWidgetScoreBoard_UpdateScoreBoard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetScoreBoard_UpdateScoreBoard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetScoreBoard::execUpdateScoreBoard)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateScoreBoard();
	P_NATIVE_END;
}
// End Class UWidgetScoreBoard Function UpdateScoreBoard

// Begin Class UWidgetScoreBoard
void UWidgetScoreBoard::StaticRegisterNativesUWidgetScoreBoard()
{
	UClass* Class = UWidgetScoreBoard::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UpdateScoreBoard", &UWidgetScoreBoard::execUpdateScoreBoard },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetScoreBoard);
UClass* Z_Construct_UClass_UWidgetScoreBoard_NoRegister()
{
	return UWidgetScoreBoard::StaticClass();
}
struct Z_Construct_UClass_UWidgetScoreBoard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CoinFramework/UI/WidgetScoreBoard.h" },
		{ "ModuleRelativePath", "CoinFramework/UI/WidgetScoreBoard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_T_PickupRemaining_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "WidgetScoreBoard" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CoinFramework/UI/WidgetScoreBoard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_V_PlayerCoinBoard_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "WidgetScoreBoard" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CoinFramework/UI/WidgetScoreBoard.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_T_PickupRemaining;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_V_PlayerCoinBoard;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWidgetScoreBoard_UpdateScoreBoard, "UpdateScoreBoard" }, // 2893906775
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetScoreBoard>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetScoreBoard_Statics::NewProp_T_PickupRemaining = { "T_PickupRemaining", nullptr, (EPropertyFlags)0x011400000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidgetScoreBoard, T_PickupRemaining), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_T_PickupRemaining_MetaData), NewProp_T_PickupRemaining_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetScoreBoard_Statics::NewProp_V_PlayerCoinBoard = { "V_PlayerCoinBoard", nullptr, (EPropertyFlags)0x011400000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidgetScoreBoard, V_PlayerCoinBoard), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_V_PlayerCoinBoard_MetaData), NewProp_V_PlayerCoinBoard_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidgetScoreBoard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetScoreBoard_Statics::NewProp_T_PickupRemaining,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetScoreBoard_Statics::NewProp_V_PlayerCoinBoard,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetScoreBoard_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWidgetScoreBoard_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_NetworkBasic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetScoreBoard_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetScoreBoard_Statics::ClassParams = {
	&UWidgetScoreBoard::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWidgetScoreBoard_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetScoreBoard_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetScoreBoard_Statics::Class_MetaDataParams), Z_Construct_UClass_UWidgetScoreBoard_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWidgetScoreBoard()
{
	if (!Z_Registration_Info_UClass_UWidgetScoreBoard.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetScoreBoard.OuterSingleton, Z_Construct_UClass_UWidgetScoreBoard_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWidgetScoreBoard.OuterSingleton;
}
template<> NETWORKBASIC_API UClass* StaticClass<UWidgetScoreBoard>()
{
	return UWidgetScoreBoard::StaticClass();
}
UWidgetScoreBoard::UWidgetScoreBoard(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetScoreBoard);
UWidgetScoreBoard::~UWidgetScoreBoard() {}
// End Class UWidgetScoreBoard

// Begin Registration
struct Z_CompiledInDeferFile_FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_UI_WidgetScoreBoard_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetScoreBoard, UWidgetScoreBoard::StaticClass, TEXT("UWidgetScoreBoard"), &Z_Registration_Info_UClass_UWidgetScoreBoard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetScoreBoard), 3904142738U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_UI_WidgetScoreBoard_h_3527676147(TEXT("/Script/NetworkBasic"),
	Z_CompiledInDeferFile_FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_UI_WidgetScoreBoard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_UI_WidgetScoreBoard_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
