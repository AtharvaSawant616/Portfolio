// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_3D_RUNNER/Public/MY FILES/Obstacle_2_New.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstacle_2_New() {}
// Cross Module References
	CPP_3D_RUNNER_API UClass* Z_Construct_UClass_AObstacle_2_New();
	CPP_3D_RUNNER_API UClass* Z_Construct_UClass_AObstacle_2_New_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CPP_3D_RUNNER();
// End Cross Module References
	void AObstacle_2_New::StaticRegisterNativesAObstacle_2_New()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AObstacle_2_New);
	UClass* Z_Construct_UClass_AObstacle_2_New_NoRegister()
	{
		return AObstacle_2_New::StaticClass();
	}
	struct Z_Construct_UClass_AObstacle_2_New_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObstacle_2_New_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CPP_3D_RUNNER,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstacle_2_New_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MY FILES/Obstacle_2_New.h" },
		{ "ModuleRelativePath", "Public/MY FILES/Obstacle_2_New.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObstacle_2_New_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObstacle_2_New>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AObstacle_2_New_Statics::ClassParams = {
		&AObstacle_2_New::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AObstacle_2_New_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObstacle_2_New_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObstacle_2_New()
	{
		if (!Z_Registration_Info_UClass_AObstacle_2_New.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AObstacle_2_New.OuterSingleton, Z_Construct_UClass_AObstacle_2_New_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AObstacle_2_New.OuterSingleton;
	}
	template<> CPP_3D_RUNNER_API UClass* StaticClass<AObstacle_2_New>()
	{
		return AObstacle_2_New::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObstacle_2_New);
	AObstacle_2_New::~AObstacle_2_New() {}
	struct Z_CompiledInDeferFile_FID_Users_sawant_ath_Documents_Unreal_Projects_CPP_3D_Source_CPP_3D_RUNNER_Public_MY_FILES_Obstacle_2_New_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sawant_ath_Documents_Unreal_Projects_CPP_3D_Source_CPP_3D_RUNNER_Public_MY_FILES_Obstacle_2_New_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AObstacle_2_New, AObstacle_2_New::StaticClass, TEXT("AObstacle_2_New"), &Z_Registration_Info_UClass_AObstacle_2_New, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AObstacle_2_New), 2306129541U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sawant_ath_Documents_Unreal_Projects_CPP_3D_Source_CPP_3D_RUNNER_Public_MY_FILES_Obstacle_2_New_h_2186944648(TEXT("/Script/CPP_3D_RUNNER"),
		Z_CompiledInDeferFile_FID_Users_sawant_ath_Documents_Unreal_Projects_CPP_3D_Source_CPP_3D_RUNNER_Public_MY_FILES_Obstacle_2_New_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sawant_ath_Documents_Unreal_Projects_CPP_3D_Source_CPP_3D_RUNNER_Public_MY_FILES_Obstacle_2_New_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
