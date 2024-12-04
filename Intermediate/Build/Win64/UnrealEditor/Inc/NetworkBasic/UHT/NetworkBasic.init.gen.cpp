// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetworkBasic_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_NetworkBasic;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_NetworkBasic()
	{
		if (!Z_Registration_Info_UPackage__Script_NetworkBasic.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/NetworkBasic",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x9F17BE11,
				0x76F7D71B,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_NetworkBasic.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_NetworkBasic.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_NetworkBasic(Z_Construct_UPackage__Script_NetworkBasic, TEXT("/Script/NetworkBasic"), Z_Registration_Info_UPackage__Script_NetworkBasic, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x9F17BE11, 0x76F7D71B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
