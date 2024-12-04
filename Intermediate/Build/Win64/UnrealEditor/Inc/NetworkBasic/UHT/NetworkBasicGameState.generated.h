// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NetworkFramework/NetworkBasicGameState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NETWORKBASIC_NetworkBasicGameState_generated_h
#error "NetworkBasicGameState.generated.h already included, missing '#pragma once' in NetworkBasicGameState.h"
#endif
#define NETWORKBASIC_NetworkBasicGameState_generated_h

#define FID_NetworkBasic_Source_NetworkBasic_NetworkFramework_NetworkBasicGameState_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANetworkBasicGameState(); \
	friend struct Z_Construct_UClass_ANetworkBasicGameState_Statics; \
public: \
	DECLARE_CLASS(ANetworkBasicGameState, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkBasic"), NO_API) \
	DECLARE_SERIALIZER(ANetworkBasicGameState)


#define FID_NetworkBasic_Source_NetworkBasic_NetworkFramework_NetworkBasicGameState_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANetworkBasicGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANetworkBasicGameState(ANetworkBasicGameState&&); \
	ANetworkBasicGameState(const ANetworkBasicGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANetworkBasicGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANetworkBasicGameState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANetworkBasicGameState) \
	NO_API virtual ~ANetworkBasicGameState();


#define FID_NetworkBasic_Source_NetworkBasic_NetworkFramework_NetworkBasicGameState_h_12_PROLOG
#define FID_NetworkBasic_Source_NetworkBasic_NetworkFramework_NetworkBasicGameState_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NetworkBasic_Source_NetworkBasic_NetworkFramework_NetworkBasicGameState_h_15_INCLASS_NO_PURE_DECLS \
	FID_NetworkBasic_Source_NetworkBasic_NetworkFramework_NetworkBasicGameState_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORKBASIC_API UClass* StaticClass<class ANetworkBasicGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NetworkBasic_Source_NetworkBasic_NetworkFramework_NetworkBasicGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
