// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE5Build_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UE5Build;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UE5Build()
	{
		if (!Z_Registration_Info_UPackage__Script_UE5Build.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UE5Build",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xF0CCF2A1,
				0x2F1B2565,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UE5Build.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_UE5Build.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UE5Build(Z_Construct_UPackage__Script_UE5Build, TEXT("/Script/UE5Build"), Z_Registration_Info_UPackage__Script_UE5Build, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xF0CCF2A1, 0x2F1B2565));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
