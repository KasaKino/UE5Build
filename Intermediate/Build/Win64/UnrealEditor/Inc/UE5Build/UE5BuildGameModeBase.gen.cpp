// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5Build/UE5BuildGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE5BuildGameModeBase() {}
// Cross Module References
	UE5BUILD_API UClass* Z_Construct_UClass_AUE5BuildGameModeBase_NoRegister();
	UE5BUILD_API UClass* Z_Construct_UClass_AUE5BuildGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UE5Build();
// End Cross Module References
	void AUE5BuildGameModeBase::StaticRegisterNativesAUE5BuildGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUE5BuildGameModeBase);
	UClass* Z_Construct_UClass_AUE5BuildGameModeBase_NoRegister()
	{
		return AUE5BuildGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUE5BuildGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUE5BuildGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5Build,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE5BuildGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UE5BuildGameModeBase.h" },
		{ "ModuleRelativePath", "UE5BuildGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUE5BuildGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUE5BuildGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUE5BuildGameModeBase_Statics::ClassParams = {
		&AUE5BuildGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AUE5BuildGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUE5BuildGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUE5BuildGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AUE5BuildGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUE5BuildGameModeBase.OuterSingleton, Z_Construct_UClass_AUE5BuildGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUE5BuildGameModeBase.OuterSingleton;
	}
	template<> UE5BUILD_API UClass* StaticClass<AUE5BuildGameModeBase>()
	{
		return AUE5BuildGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUE5BuildGameModeBase);
	struct Z_CompiledInDeferFile_FID_UE5Build_Source_UE5Build_UE5BuildGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Build_Source_UE5Build_UE5BuildGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUE5BuildGameModeBase, AUE5BuildGameModeBase::StaticClass, TEXT("AUE5BuildGameModeBase"), &Z_Registration_Info_UClass_AUE5BuildGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUE5BuildGameModeBase), 2096577475U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Build_Source_UE5Build_UE5BuildGameModeBase_h_3919389879(TEXT("/Script/UE5Build"),
		Z_CompiledInDeferFile_FID_UE5Build_Source_UE5Build_UE5BuildGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Build_Source_UE5Build_UE5BuildGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
