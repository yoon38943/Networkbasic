// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ETC/CoinItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef NETWORKBASIC_CoinItem_generated_h
#error "CoinItem.generated.h already included, missing '#pragma once' in CoinItem.h"
#endif
#define NETWORKBASIC_CoinItem_generated_h

#define FID_NetworkBasic_1__Source_NetworkBasic_ETC_CoinItem_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define FID_NetworkBasic_1__Source_NetworkBasic_ETC_CoinItem_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACoinItem(); \
	friend struct Z_Construct_UClass_ACoinItem_Statics; \
public: \
	DECLARE_CLASS(ACoinItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkBasic"), NO_API) \
	DECLARE_SERIALIZER(ACoinItem)


#define FID_NetworkBasic_1__Source_NetworkBasic_ETC_CoinItem_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACoinItem(ACoinItem&&); \
	ACoinItem(const ACoinItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACoinItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACoinItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACoinItem) \
	NO_API virtual ~ACoinItem();


#define FID_NetworkBasic_1__Source_NetworkBasic_ETC_CoinItem_h_7_PROLOG
#define FID_NetworkBasic_1__Source_NetworkBasic_ETC_CoinItem_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NetworkBasic_1__Source_NetworkBasic_ETC_CoinItem_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_NetworkBasic_1__Source_NetworkBasic_ETC_CoinItem_h_10_INCLASS_NO_PURE_DECLS \
	FID_NetworkBasic_1__Source_NetworkBasic_ETC_CoinItem_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORKBASIC_API UClass* StaticClass<class ACoinItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NetworkBasic_1__Source_NetworkBasic_ETC_CoinItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
