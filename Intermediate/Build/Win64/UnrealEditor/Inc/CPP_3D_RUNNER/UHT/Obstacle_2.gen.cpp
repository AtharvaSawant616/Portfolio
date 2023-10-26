// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_3D_RUNNER/MY FILES/Obstacle_2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstacle_2() {}
// Cross Module References
	CPP_3D_RUNNER_API UClass* Z_Construct_UClass_AObstacle_2();
	CPP_3D_RUNNER_API UClass* Z_Construct_UClass_AObstacle_2_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CPP_3D_RUNNER();
// End Cross Module References
	void AObstacle_2::StaticRegisterNativesAObstacle_2()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AObstacle_2);
	UClass* Z_Construct_UClass_AObstacle_2_NoRegister()
	{
		return AObstacle_2::StaticClass();
	}
	struct Z_Construct_UClass_AObstacle_2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObstacle_2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CPP_3D_RUNNER,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstacle_2_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MY FILES/Obstacle_2.h" },
		{ "ModuleRelativePath", "MY FILES/Obstacle_2.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObstacle_2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObstacle_2>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AObstacle_2_Statics::ClassParams = {
		&AObstacle_2::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AObstacle_2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObstacle_2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObstacle_2()
	{
		if (!Z_Registration_Info_UClass_AObstacle_2.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AObstacle_2.OuterSingleton, Z_Construct_UClass_AObstacle_2_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AObstacle_2.OuterSingleton;
	}
	template<> CPP_3D_RUNNER_API UClass* StaticClass<AObstacle_2>()
	{
		return AObstacle_2::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObstacle_2);
	AObstacle_2::~AObstacle_2() {}
	struct Z_CompiledInDeferFile_FID_Users_sawant_ath_Documents_Unreal_Projects_CPP_3D_Source_CPP_3D_RUNNER_MY_FILES_Obstacle_2_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sawant_ath_Documents_Unreal_Projects_CPP_3D_Source_CPP_3D_RUNNER_MY_FILES_Obstacle_2_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AObstacle_2, AObstacle_2::StaticClass, TEXT("AObstacle_2"), &Z_Registration_Info_UClass_AObstacle_2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AObstacle_2), 3419738520U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sawant_ath_Documents_Unreal_Projects_CPP_3D_Source_CPP_3D_RUNNER_MY_FILES_Obstacle_2_h_515649637(TEXT("/Script/CPP_3D_RUNNER"),
		Z_CompiledInDeferFile_FID_Users_sawant_ath_Documents_Unreal_Projects_CPP_3D_Source_CPP_3D_RUNNER_MY_FILES_Obstacle_2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sawant_ath_Documents_Unreal_Projects_CPP_3D_Source_CPP_3D_RUNNER_MY_FILES_Obstacle_2_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
