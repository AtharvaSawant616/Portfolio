// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_3D_RUNNER/MY FILES/ATVS_CPP_GAME_MODE.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeATVS_CPP_GAME_MODE() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	CPP_3D_RUNNER_API UClass* Z_Construct_UClass_AATVS_CPP_GAME_MODE();
	CPP_3D_RUNNER_API UClass* Z_Construct_UClass_AATVS_CPP_GAME_MODE_NoRegister();
	CPP_3D_RUNNER_API UClass* Z_Construct_UClass_AFLOOR_NoRegister();
	CPP_3D_RUNNER_API UClass* Z_Construct_UClass_AObstacle_1_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CPP_3D_RUNNER();
// End Cross Module References
	void AATVS_CPP_GAME_MODE::StaticRegisterNativesAATVS_CPP_GAME_MODE()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AATVS_CPP_GAME_MODE);
	UClass* Z_Construct_UClass_AATVS_CPP_GAME_MODE_NoRegister()
	{
		return AATVS_CPP_GAME_MODE::StaticClass();
	}
	struct Z_Construct_UClass_AATVS_CPP_GAME_MODE_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloorSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_FloorSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObstacletoSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ObstacletoSpawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AATVS_CPP_GAME_MODE_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CPP_3D_RUNNER,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AATVS_CPP_GAME_MODE_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MY FILES/ATVS_CPP_GAME_MODE.h" },
		{ "ModuleRelativePath", "MY FILES/ATVS_CPP_GAME_MODE.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AATVS_CPP_GAME_MODE_Statics::NewProp_FloorSpawn_MetaData[] = {
		{ "Category", "ATVS_CPP_GAME_MODE" },
		{ "ModuleRelativePath", "MY FILES/ATVS_CPP_GAME_MODE.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AATVS_CPP_GAME_MODE_Statics::NewProp_FloorSpawn = { "FloorSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AATVS_CPP_GAME_MODE, FloorSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_AFLOOR_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AATVS_CPP_GAME_MODE_Statics::NewProp_FloorSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AATVS_CPP_GAME_MODE_Statics::NewProp_FloorSpawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AATVS_CPP_GAME_MODE_Statics::NewProp_ObstacletoSpawn_MetaData[] = {
		{ "Category", "ATVS_CPP_GAME_MODE" },
		{ "ModuleRelativePath", "MY FILES/ATVS_CPP_GAME_MODE.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AATVS_CPP_GAME_MODE_Statics::NewProp_ObstacletoSpawn = { "ObstacletoSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AATVS_CPP_GAME_MODE, ObstacletoSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_AObstacle_1_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AATVS_CPP_GAME_MODE_Statics::NewProp_ObstacletoSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AATVS_CPP_GAME_MODE_Statics::NewProp_ObstacletoSpawn_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AATVS_CPP_GAME_MODE_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AATVS_CPP_GAME_MODE_Statics::NewProp_FloorSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AATVS_CPP_GAME_MODE_Statics::NewProp_ObstacletoSpawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AATVS_CPP_GAME_MODE_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AATVS_CPP_GAME_MODE>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AATVS_CPP_GAME_MODE_Statics::ClassParams = {
		&AATVS_CPP_GAME_MODE::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AATVS_CPP_GAME_MODE_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AATVS_CPP_GAME_MODE_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AATVS_CPP_GAME_MODE_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AATVS_CPP_GAME_MODE_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AATVS_CPP_GAME_MODE()
	{
		if (!Z_Registration_Info_UClass_AATVS_CPP_GAME_MODE.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AATVS_CPP_GAME_MODE.OuterSingleton, Z_Construct_UClass_AATVS_CPP_GAME_MODE_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AATVS_CPP_GAME_MODE.OuterSingleton;
	}
	template<> CPP_3D_RUNNER_API UClass* StaticClass<AATVS_CPP_GAME_MODE>()
	{
		return AATVS_CPP_GAME_MODE::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AATVS_CPP_GAME_MODE);
	AATVS_CPP_GAME_MODE::~AATVS_CPP_GAME_MODE() {}
	struct Z_CompiledInDeferFile_FID_Users_sawant_ath_Documents_Unreal_Projects_CPP_3D_Source_CPP_3D_RUNNER_MY_FILES_ATVS_CPP_GAME_MODE_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sawant_ath_Documents_Unreal_Projects_CPP_3D_Source_CPP_3D_RUNNER_MY_FILES_ATVS_CPP_GAME_MODE_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AATVS_CPP_GAME_MODE, AATVS_CPP_GAME_MODE::StaticClass, TEXT("AATVS_CPP_GAME_MODE"), &Z_Registration_Info_UClass_AATVS_CPP_GAME_MODE, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AATVS_CPP_GAME_MODE), 676622797U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sawant_ath_Documents_Unreal_Projects_CPP_3D_Source_CPP_3D_RUNNER_MY_FILES_ATVS_CPP_GAME_MODE_h_437004744(TEXT("/Script/CPP_3D_RUNNER"),
		Z_CompiledInDeferFile_FID_Users_sawant_ath_Documents_Unreal_Projects_CPP_3D_Source_CPP_3D_RUNNER_MY_FILES_ATVS_CPP_GAME_MODE_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sawant_ath_Documents_Unreal_Projects_CPP_3D_Source_CPP_3D_RUNNER_MY_FILES_ATVS_CPP_GAME_MODE_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
