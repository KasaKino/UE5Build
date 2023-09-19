// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5Build/MainController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainController() {}
// Cross Module References
	UE5BUILD_API UClass* Z_Construct_UClass_AMainController_NoRegister();
	UE5BUILD_API UClass* Z_Construct_UClass_AMainController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_UE5Build();
	UE5BUILD_API UClass* Z_Construct_UClass_AMainCharacter_NoRegister();
// End Cross Module References
	void AMainController::StaticRegisterNativesAMainController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainController);
	UClass* Z_Construct_UClass_AMainController_NoRegister()
	{
		return AMainController::StaticClass();
	}
	struct Z_Construct_UClass_AMainController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Main_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Main;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMainController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5Build,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "MainController.h" },
		{ "ModuleRelativePath", "MainController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainController_Statics::NewProp_Main_MetaData[] = {
		{ "Category", "Basic Config" },
		{ "Comment", "// Called to bind functionality to input\n" },
		{ "ModuleRelativePath", "MainController.h" },
		{ "ToolTip", "Called to bind functionality to input" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainController_Statics::NewProp_Main = { "Main", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainController, Main), Z_Construct_UClass_AMainCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMainController_Statics::NewProp_Main_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainController_Statics::NewProp_Main_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainController_Statics::NewProp_Main,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMainController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainController_Statics::ClassParams = {
		&AMainController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMainController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMainController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMainController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMainController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMainController()
	{
		if (!Z_Registration_Info_UClass_AMainController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainController.OuterSingleton, Z_Construct_UClass_AMainController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMainController.OuterSingleton;
	}
	template<> UE5BUILD_API UClass* StaticClass<AMainController>()
	{
		return AMainController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainController);
	struct Z_CompiledInDeferFile_FID_UE5Build_Source_UE5Build_MainController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Build_Source_UE5Build_MainController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMainController, AMainController::StaticClass, TEXT("AMainController"), &Z_Registration_Info_UClass_AMainController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainController), 1144319837U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Build_Source_UE5Build_MainController_h_2435182445(TEXT("/Script/UE5Build"),
		Z_CompiledInDeferFile_FID_UE5Build_Source_UE5Build_MainController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Build_Source_UE5Build_MainController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
