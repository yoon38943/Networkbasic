// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkBasic/ETC/OwnershipTestActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOwnershipTestActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
NETWORKBASIC_API UClass* Z_Construct_UClass_AOwnershipTestActor();
NETWORKBASIC_API UClass* Z_Construct_UClass_AOwnershipTestActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_NetworkBasic();
// End Cross Module References

// Begin Class AOwnershipTestActor
void AOwnershipTestActor::StaticRegisterNativesAOwnershipTestActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOwnershipTestActor);
UClass* Z_Construct_UClass_AOwnershipTestActor_NoRegister()
{
	return AOwnershipTestActor::StaticClass();
}
struct Z_Construct_UClass_AOwnershipTestActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ETC/OwnershipTestActor.h" },
		{ "ModuleRelativePath", "ETC/OwnershipTestActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "OwnershipTestActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ETC/OwnershipTestActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnershipRadius_MetaData[] = {
		{ "Category", "OwnershipTestActor" },
		{ "ModuleRelativePath", "ETC/OwnershipTestActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OwnershipRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOwnershipTestActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOwnershipTestActor_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOwnershipTestActor, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOwnershipTestActor_Statics::NewProp_OwnershipRadius = { "OwnershipRadius", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOwnershipTestActor, OwnershipRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnershipRadius_MetaData), NewProp_OwnershipRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOwnershipTestActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOwnershipTestActor_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOwnershipTestActor_Statics::NewProp_OwnershipRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOwnershipTestActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AOwnershipTestActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NetworkBasic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOwnershipTestActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOwnershipTestActor_Statics::ClassParams = {
	&AOwnershipTestActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AOwnershipTestActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AOwnershipTestActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOwnershipTestActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AOwnershipTestActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOwnershipTestActor()
{
	if (!Z_Registration_Info_UClass_AOwnershipTestActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOwnershipTestActor.OuterSingleton, Z_Construct_UClass_AOwnershipTestActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOwnershipTestActor.OuterSingleton;
}
template<> NETWORKBASIC_API UClass* StaticClass<AOwnershipTestActor>()
{
	return AOwnershipTestActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOwnershipTestActor);
AOwnershipTestActor::~AOwnershipTestActor() {}
// End Class AOwnershipTestActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_NetworkBasic_1__Source_NetworkBasic_ETC_OwnershipTestActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOwnershipTestActor, AOwnershipTestActor::StaticClass, TEXT("AOwnershipTestActor"), &Z_Registration_Info_UClass_AOwnershipTestActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOwnershipTestActor), 2082940683U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NetworkBasic_1__Source_NetworkBasic_ETC_OwnershipTestActor_h_3049152725(TEXT("/Script/NetworkBasic"),
	Z_CompiledInDeferFile_FID_NetworkBasic_1__Source_NetworkBasic_ETC_OwnershipTestActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NetworkBasic_1__Source_NetworkBasic_ETC_OwnershipTestActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
