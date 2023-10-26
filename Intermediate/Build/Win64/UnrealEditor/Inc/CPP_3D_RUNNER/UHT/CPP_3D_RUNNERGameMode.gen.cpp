// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_3D_RUNNER/CPP_3D_RUNNERGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_3D_RUNNERGameMode() {}
// Cross Module References
	CPP_3D_RUNNER_API UClass* Z_Construct_UClass_ACPP_3D_RUNNERGameMode();
	CPP_3D_RUNNER_API UClass* Z_Construct_UClass_ACPP_3D_RUNNERGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CPP_3D_RUNNER();
// End Cross Module References
	void ACPP_3D_RUNNERGameMode::StaticRegisterNativesACPP_3D_RUNNERGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_3D_RUNNERGameMode);
	UClass* Z_Construct_UClass_ACPP_3D_RUNNERGameMode_NoRegister()
	{
		return ACPP_3D_RUNNERGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_3D_RUNNERGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_3D_RUNNERGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CPP_3D_RUNNER,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_3D_RUNNERGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CPP_3D_RUNNERGameMode.h" },
		{ "ModuleRelativePath", "CPP_3D_RUNNERGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_3D_RUNNERGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_3D_RUNNERGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_3D_RUNNERGameMode_Statics::ClassParams = {
		&ACPP_3D_RUNNERGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACPP_3D_RUNNERGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_3D_RUNNERGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPP_3D_RUNNERGameMode()
	{
		if (!Z_Registration_Info_UClass_ACPP_3D_RUNNERGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_3D_RUNNERGameMode.OuterSingleton, Z_Construct_UClass_ACPP_3D_RUNNERGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACPP_3D_RUNNERGameMode.OuterSingleton;
	}
	template<> CPP_3D_RUNNER_API UClass* StaticClass<ACPP_3D_RUNNERGameMode>()
	{
		return ACPP_3D_RUNNERGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_3D_RUNNERGameMode);
	ACPP_3D_RUNNERGameMode::~ACPP_3D_RUNNERGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_sawant_ath_Documents_Unreal_Projects_CPP_3D_Source_CPP_3D_RUNNER_CPP_3D_RUNNERGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sawant_ath_Documents_Unreal_Projects_CPP_3D_Source_CPP_3D_RUNNER_CPP_3D_RUNNERGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_3D_RUNNERGameMode, ACPP_3D_RUNNERGameMode::StaticClass, TEXT("ACPP_3D_RUNNERGameMode"), &Z_Registration_Info_UClass_ACPP_3D_RUNNERGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_3D_RUNNERGameMode), 3094007682U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sawant_ath_Documents_Unreal_Projects_CPP_3D_Source_CPP_3D_RUNNER_CPP_3D_RUNNERGameMode_h_684938292(TEXT("/Script/CPP_3D_RUNNER"),
		Z_CompiledInDeferFile_FID_Users_sawant_ath_Documents_Unreal_Projects_CPP_3D_Source_CPP_3D_RUNNER_CPP_3D_RUNNERGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sawant_ath_Documents_Unreal_Projects_CPP_3D_Source_CPP_3D_RUNNER_CPP_3D_RUNNERGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
