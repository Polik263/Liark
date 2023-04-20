// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Liark/LiarkPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiarkPlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	LIARK_API UClass* Z_Construct_UClass_ALiarkPlayerController();
	LIARK_API UClass* Z_Construct_UClass_ALiarkPlayerController_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Liark();
// End Cross Module References
	void ALiarkPlayerController::StaticRegisterNativesALiarkPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALiarkPlayerController);
	UClass* Z_Construct_UClass_ALiarkPlayerController_NoRegister()
	{
		return ALiarkPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ALiarkPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShortPressThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShortPressThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FXCursor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FXCursor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetDestinationClickAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SetDestinationClickAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetDestinationTouchAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SetDestinationTouchAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALiarkPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Liark,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALiarkPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "LiarkPlayerController.h" },
		{ "ModuleRelativePath", "LiarkPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALiarkPlayerController_Statics::NewProp_ShortPressThreshold_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Time Threshold to know if it was a short press */" },
		{ "ModuleRelativePath", "LiarkPlayerController.h" },
		{ "ToolTip", "Time Threshold to know if it was a short press" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALiarkPlayerController_Statics::NewProp_ShortPressThreshold = { "ShortPressThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALiarkPlayerController, ShortPressThreshold), METADATA_PARAMS(Z_Construct_UClass_ALiarkPlayerController_Statics::NewProp_ShortPressThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALiarkPlayerController_Statics::NewProp_ShortPressThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALiarkPlayerController_Statics::NewProp_FXCursor_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** FX Class that we will spawn when clicking */" },
		{ "ModuleRelativePath", "LiarkPlayerController.h" },
		{ "ToolTip", "FX Class that we will spawn when clicking" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALiarkPlayerController_Statics::NewProp_FXCursor = { "FXCursor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALiarkPlayerController, FXCursor), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALiarkPlayerController_Statics::NewProp_FXCursor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALiarkPlayerController_Statics::NewProp_FXCursor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALiarkPlayerController_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** MappingContext */" },
		{ "ModuleRelativePath", "LiarkPlayerController.h" },
		{ "ToolTip", "MappingContext" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALiarkPlayerController_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALiarkPlayerController, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALiarkPlayerController_Statics::NewProp_DefaultMappingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALiarkPlayerController_Statics::NewProp_DefaultMappingContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALiarkPlayerController_Statics::NewProp_SetDestinationClickAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Jump Input Action */" },
		{ "ModuleRelativePath", "LiarkPlayerController.h" },
		{ "ToolTip", "Jump Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALiarkPlayerController_Statics::NewProp_SetDestinationClickAction = { "SetDestinationClickAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALiarkPlayerController, SetDestinationClickAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALiarkPlayerController_Statics::NewProp_SetDestinationClickAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALiarkPlayerController_Statics::NewProp_SetDestinationClickAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALiarkPlayerController_Statics::NewProp_SetDestinationTouchAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Jump Input Action */" },
		{ "ModuleRelativePath", "LiarkPlayerController.h" },
		{ "ToolTip", "Jump Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALiarkPlayerController_Statics::NewProp_SetDestinationTouchAction = { "SetDestinationTouchAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALiarkPlayerController, SetDestinationTouchAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALiarkPlayerController_Statics::NewProp_SetDestinationTouchAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALiarkPlayerController_Statics::NewProp_SetDestinationTouchAction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALiarkPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiarkPlayerController_Statics::NewProp_ShortPressThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiarkPlayerController_Statics::NewProp_FXCursor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiarkPlayerController_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiarkPlayerController_Statics::NewProp_SetDestinationClickAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALiarkPlayerController_Statics::NewProp_SetDestinationTouchAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALiarkPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALiarkPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALiarkPlayerController_Statics::ClassParams = {
		&ALiarkPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALiarkPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALiarkPlayerController_Statics::PropPointers),
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALiarkPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALiarkPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALiarkPlayerController()
	{
		if (!Z_Registration_Info_UClass_ALiarkPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALiarkPlayerController.OuterSingleton, Z_Construct_UClass_ALiarkPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALiarkPlayerController.OuterSingleton;
	}
	template<> LIARK_API UClass* StaticClass<ALiarkPlayerController>()
	{
		return ALiarkPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALiarkPlayerController);
	ALiarkPlayerController::~ALiarkPlayerController() {}
	struct Z_CompiledInDeferFile_FID_Projects_UnrealProjects_Liark_Liark_Source_Liark_LiarkPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_UnrealProjects_Liark_Liark_Source_Liark_LiarkPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALiarkPlayerController, ALiarkPlayerController::StaticClass, TEXT("ALiarkPlayerController"), &Z_Registration_Info_UClass_ALiarkPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALiarkPlayerController), 1934782309U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_UnrealProjects_Liark_Liark_Source_Liark_LiarkPlayerController_h_1303625136(TEXT("/Script/Liark"),
		Z_CompiledInDeferFile_FID_Projects_UnrealProjects_Liark_Liark_Source_Liark_LiarkPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_UnrealProjects_Liark_Liark_Source_Liark_LiarkPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
