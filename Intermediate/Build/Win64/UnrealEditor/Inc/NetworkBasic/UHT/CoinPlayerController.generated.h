// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CoinFramework/CoinPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NETWORKBASIC_CoinPlayerController_generated_h
#error "CoinPlayerController.generated.h already included, missing '#pragma once' in CoinPlayerController.h"
#endif
#define NETWORKBASIC_CoinPlayerController_generated_h

#define FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_CoinPlayerController_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACoinPlayerController(); \
	friend struct Z_Construct_UClass_ACoinPlayerController_Statics; \
public: \
	DECLARE_CLASS(ACoinPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkBasic"), NO_API) \
	DECLARE_SERIALIZER(ACoinPlayerController)


#define FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_CoinPlayerController_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACoinPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACoinPlayerController(ACoinPlayerController&&); \
	ACoinPlayerController(const ACoinPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACoinPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACoinPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACoinPlayerController) \
	NO_API virtual ~ACoinPlayerController();


#define FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_CoinPlayerController_h_8_PROLOG
#define FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_CoinPlayerController_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_CoinPlayerController_h_11_INCLASS_NO_PURE_DECLS \
	FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_CoinPlayerController_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORKBASIC_API UClass* StaticClass<class ACoinPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NetworkBasic_1__Source_NetworkBasic_CoinFramework_CoinPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
