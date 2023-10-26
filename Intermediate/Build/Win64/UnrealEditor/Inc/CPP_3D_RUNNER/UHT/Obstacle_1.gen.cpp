// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_3D_RUNNER/MY FILES/Obstacle_1.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstacle_1() {}
// Cross Module References
	CPP_3D_RUNNER_API UClass* Z_Construct_UClass_AObstacle_1();
	CPP_3D_RUNNER_API UClass* Z_Construct_UClass_AObstacle_1_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CPP_3D_RUNNER();
// End Cross Module References
	void AObstacle_1::StaticRegisterNativesAObstacle_1()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AObstacle_1);
	UClass* Z_Construct_UClass_AObstacle_1_NoRegister()
	{
		return AObstacle_1::StaticClass();
	}
	struct Z_Construct_UClass_AObstacle_1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Box;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObstacle_1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CPP_3D_RUNNER,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstacle_1_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MY FILES/Obstacle_1.h" },
		{ "ModuleRelativePath", "MY FILES/Obstacle_1.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstacle_1_Statics::NewProp_Box_MetaData[] = {
		{ "Category", "Obstacle_1" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MY FILES/Obstacle_1.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AObstacle_1_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AObstacle_1, Box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AObstacle_1_Statics::NewProp_Box_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObstacle_1_Statics::NewProp_Box_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstacle_1_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Obstacle_1" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MY FILES/Obstacle_1.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AObstacle_1_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AObstacle_1, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AObstacle_1_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObstacle_1_Statics::NewProp_StaticMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AObstacle_1_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstacle_1_Statics::NewProp_Box,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstacle_1_Statics::NewProp_StaticMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObstacle_1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObstacle_1>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AObstacle_1_Statics::ClassParams = {
		&AObstacle_1::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AObstacle_1_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AObstacle_1_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AObstacle_1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObstacle_1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObstacle_1()
	{
		if (!Z_Registration_Info_UClass_AObstacle_1.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AObstacle_1.OuterSingleton, Z_Construct_UClass_AObstacle_1_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AObstacle_1.OuterSingleton;
	}
	template<> CPP_3D_RUNNER_API UClass* StaticClass<AObstacle_1>()
	{
		return AObstacle_1::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObstacle_1);
	AObstacle_1::~AObstacle_1() {}
	struct Z_CompiledInDeferFile_FID_Users_sawant_ath_Documents_Unreal_Projects_CPP_3D_Source_CPP_3D_RUNNER_MY_FILES_Obstacle_1_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sawant_ath_Documents_Unreal_Projects_CPP_3D_Source_CPP_3D_RUNNER_MY_FILES_Obstacle_1_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AObstacle_1, AObstacle_1::StaticClass, TEXT("AObstacle_1"), &Z_Registration_Info_UClass_AObstacle_1, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AObstacle_1), 3201724561U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sawant_ath_Documents_Unreal_Projects_CPP_3D_Source_CPP_3D_RUNNER_MY_FILES_Obstacle_1_h_3718798116(TEXT("/Script/CPP_3D_RUNNER"),
		Z_CompiledInDeferFile_FID_Users_sawant_ath_Documents_Unreal_Projects_CPP_3D_Source_CPP_3D_RUNNER_MY_FILES_Obstacle_1_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sawant_ath_Documents_Unreal_Projects_CPP_3D_Source_CPP_3D_RUNNER_MY_FILES_Obstacle_1_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
