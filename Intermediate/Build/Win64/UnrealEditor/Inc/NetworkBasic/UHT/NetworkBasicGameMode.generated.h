// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NetworkFramework/NetworkBasicGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NETWORKBASIC_NetworkBasicGameMode_generated_h
#error "NetworkBasicGameMode.generated.h already included, missing '#pragma once' in NetworkBasicGameMode.h"
#endif
#define NETWORKBASIC_NetworkBasicGameMode_generated_h

#define FID_NetworkBasic_Source_NetworkBasic_NetworkFramework_NetworkBasicGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANetworkBasicGameMode(); \
	friend struct Z_Construct_UClass_ANetworkBasicGameMode_Statics; \
public: \
	DECLARE_CLASS(ANetworkBasicGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkBasic"), NETWORKBASIC_API) \
	DECLARE_SERIALIZER(ANetworkBasicGameMode)


#define FID_NetworkBasic_Source_NetworkBasic_NetworkFramework_NetworkBasicGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANetworkBasicGameMode(ANetworkBasicGameMode&&); \
	ANetworkBasicGameMode(const ANetworkBasicGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NETWORKBASIC_API, ANetworkBasicGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANetworkBasicGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANetworkBasicGameMode) \
	NETWORKBASIC_API virtual ~ANetworkBasicGameMode();


#define FID_NetworkBasic_Source_NetworkBasic_NetworkFramework_NetworkBasicGameMode_h_9_PROLOG
#define FID_NetworkBasic_Source_NetworkBasic_NetworkFramework_NetworkBasicGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NetworkBasic_Source_NetworkBasic_NetworkFramework_NetworkBasicGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_NetworkBasic_Source_NetworkBasic_NetworkFramework_NetworkBasicGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORKBASIC_API UClass* StaticClass<class ANetworkBasicGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NetworkBasic_Source_NetworkBasic_NetworkFramework_NetworkBasicGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
