// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NetworkFramework/NetworkBasicController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NETWORKBASIC_NetworkBasicController_generated_h
#error "NetworkBasicController.generated.h already included, missing '#pragma once' in NetworkBasicController.h"
#endif
#define NETWORKBASIC_NetworkBasicController_generated_h

#define FID_NetworkBasic_Source_NetworkBasic_NetworkFramework_NetworkBasicController_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANetworkBasicController(); \
	friend struct Z_Construct_UClass_ANetworkBasicController_Statics; \
public: \
	DECLARE_CLASS(ANetworkBasicController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkBasic"), NO_API) \
	DECLARE_SERIALIZER(ANetworkBasicController)


#define FID_NetworkBasic_Source_NetworkBasic_NetworkFramework_NetworkBasicController_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANetworkBasicController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANetworkBasicController(ANetworkBasicController&&); \
	ANetworkBasicController(const ANetworkBasicController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANetworkBasicController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANetworkBasicController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANetworkBasicController) \
	NO_API virtual ~ANetworkBasicController();


#define FID_NetworkBasic_Source_NetworkBasic_NetworkFramework_NetworkBasicController_h_7_PROLOG
#define FID_NetworkBasic_Source_NetworkBasic_NetworkFramework_NetworkBasicController_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NetworkBasic_Source_NetworkBasic_NetworkFramework_NetworkBasicController_h_10_INCLASS_NO_PURE_DECLS \
	FID_NetworkBasic_Source_NetworkBasic_NetworkFramework_NetworkBasicController_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORKBASIC_API UClass* StaticClass<class ANetworkBasicController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NetworkBasic_Source_NetworkBasic_NetworkFramework_NetworkBasicController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
