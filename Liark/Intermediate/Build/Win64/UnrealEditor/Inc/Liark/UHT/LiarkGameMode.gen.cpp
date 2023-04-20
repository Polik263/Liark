// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Liark/LiarkGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiarkGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	LIARK_API UClass* Z_Construct_UClass_ALiarkGameMode();
	LIARK_API UClass* Z_Construct_UClass_ALiarkGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Liark();
// End Cross Module References
	void ALiarkGameMode::StaticRegisterNativesALiarkGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALiarkGameMode);
	UClass* Z_Construct_UClass_ALiarkGameMode_NoRegister()
	{
		return ALiarkGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ALiarkGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALiarkGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Liark,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALiarkGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "LiarkGameMode.h" },
		{ "ModuleRelativePath", "LiarkGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALiarkGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALiarkGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALiarkGameMode_Statics::ClassParams = {
		&ALiarkGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ALiarkGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALiarkGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALiarkGameMode()
	{
		if (!Z_Registration_Info_UClass_ALiarkGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALiarkGameMode.OuterSingleton, Z_Construct_UClass_ALiarkGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALiarkGameMode.OuterSingleton;
	}
	template<> LIARK_API UClass* StaticClass<ALiarkGameMode>()
	{
		return ALiarkGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALiarkGameMode);
	ALiarkGameMode::~ALiarkGameMode() {}
	struct Z_CompiledInDeferFile_FID_Projects_UnrealProjects_Liark_Liark_Source_Liark_LiarkGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_UnrealProjects_Liark_Liark_Source_Liark_LiarkGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALiarkGameMode, ALiarkGameMode::StaticClass, TEXT("ALiarkGameMode"), &Z_Registration_Info_UClass_ALiarkGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALiarkGameMode), 3388185937U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_UnrealProjects_Liark_Liark_Source_Liark_LiarkGameMode_h_3922994248(TEXT("/Script/Liark"),
		Z_CompiledInDeferFile_FID_Projects_UnrealProjects_Liark_Liark_Source_Liark_LiarkGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_UnrealProjects_Liark_Liark_Source_Liark_LiarkGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
