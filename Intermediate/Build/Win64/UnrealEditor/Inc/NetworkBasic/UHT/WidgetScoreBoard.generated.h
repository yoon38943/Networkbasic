// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CoinFramework/UI/WidgetScoreBoard.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NETWORKBASIC_WidgetScoreBoard_generated_h
#error "WidgetScoreBoard.generated.h already included, missing '#pragma once' in WidgetScoreBoard.h"
#endif
#define NETWORKBASIC_WidgetScoreBoard_generated_h

#define FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_UI_WidgetScoreBoard_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateScoreBoard);


#define FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_UI_WidgetScoreBoard_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWidgetScoreBoard(); \
	friend struct Z_Construct_UClass_UWidgetScoreBoard_Statics; \
public: \
	DECLARE_CLASS(UWidgetScoreBoard, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NetworkBasic"), NO_API) \
	DECLARE_SERIALIZER(UWidgetScoreBoard)


#define FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_UI_WidgetScoreBoard_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetScoreBoard(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWidgetScoreBoard(UWidgetScoreBoard&&); \
	UWidgetScoreBoard(const UWidgetScoreBoard&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetScoreBoard); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetScoreBoard); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetScoreBoard) \
	NO_API virtual ~UWidgetScoreBoard();


#define FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_UI_WidgetScoreBoard_h_8_PROLOG
#define FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_UI_WidgetScoreBoard_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_UI_WidgetScoreBoard_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_UI_WidgetScoreBoard_h_11_INCLASS_NO_PURE_DECLS \
	FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_UI_WidgetScoreBoard_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORKBASIC_API UClass* StaticClass<class UWidgetScoreBoard>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_UI_WidgetScoreBoard_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
