// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_3D_RUNNER/MY FILES/ATVS_CPP_CHAR.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeATVS_CPP_CHAR() {}
// Cross Module References
	CPP_3D_RUNNER_API UClass* Z_Construct_UClass_AATVS_CPP_CHAR();
	CPP_3D_RUNNER_API UClass* Z_Construct_UClass_AATVS_CPP_CHAR_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CPP_3D_RUNNER();
// End Cross Module References
	struct ATVS_CPP_CHAR_eventMovetolane_Parms
	{
		float initloc;
		float goalloc;
	};
	static FName NAME_AATVS_CPP_CHAR_Movetolane = FName(TEXT("Movetolane"));
	void AATVS_CPP_CHAR::Movetolane(float initloc, float goalloc)
	{
		ATVS_CPP_CHAR_eventMovetolane_Parms Parms;
		Parms.initloc=initloc;
		Parms.goalloc=goalloc;
		ProcessEvent(FindFunctionChecked(NAME_AATVS_CPP_CHAR_Movetolane),&Parms);
	}
	void AATVS_CPP_CHAR::StaticRegisterNativesAATVS_CPP_CHAR()
	{
	}
	struct Z_Construct_UFunction_AATVS_CPP_CHAR_Movetolane_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_initloc;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_goalloc;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AATVS_CPP_CHAR_Movetolane_Statics::NewProp_initloc = { "initloc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATVS_CPP_CHAR_eventMovetolane_Parms, initloc), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AATVS_CPP_CHAR_Movetolane_Statics::NewProp_goalloc = { "goalloc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATVS_CPP_CHAR_eventMovetolane_Parms, goalloc), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AATVS_CPP_CHAR_Movetolane_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AATVS_CPP_CHAR_Movetolane_Statics::NewProp_initloc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AATVS_CPP_CHAR_Movetolane_Statics::NewProp_goalloc,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AATVS_CPP_CHAR_Movetolane_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MY FILES/ATVS_CPP_CHAR.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AATVS_CPP_CHAR_Movetolane_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AATVS_CPP_CHAR, nullptr, "Movetolane", nullptr, nullptr, sizeof(ATVS_CPP_CHAR_eventMovetolane_Parms), Z_Construct_UFunction_AATVS_CPP_CHAR_Movetolane_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AATVS_CPP_CHAR_Movetolane_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AATVS_CPP_CHAR_Movetolane_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AATVS_CPP_CHAR_Movetolane_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AATVS_CPP_CHAR_Movetolane()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AATVS_CPP_CHAR_Movetolane_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AATVS_CPP_CHAR);
	UClass* Z_Construct_UClass_AATVS_CPP_CHAR_NoRegister()
	{
		return AATVS_CPP_CHAR::StaticClass();
	}
	struct Z_Construct_UClass_AATVS_CPP_CHAR_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AATVS_CPP_CHAR_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_CPP_3D_RUNNER,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AATVS_CPP_CHAR_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AATVS_CPP_CHAR_Movetolane, "Movetolane" }, // 1257159227
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AATVS_CPP_CHAR_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MY FILES/ATVS_CPP_CHAR.h" },
		{ "ModuleRelativePath", "MY FILES/ATVS_CPP_CHAR.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AATVS_CPP_CHAR_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "Category", "ATVS_CPP_CHAR" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MY FILES/ATVS_CPP_CHAR.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AATVS_CPP_CHAR_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AATVS_CPP_CHAR, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AATVS_CPP_CHAR_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AATVS_CPP_CHAR_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AATVS_CPP_CHAR_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "Category", "ATVS_CPP_CHAR" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MY FILES/ATVS_CPP_CHAR.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AATVS_CPP_CHAR_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AATVS_CPP_CHAR, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AATVS_CPP_CHAR_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AATVS_CPP_CHAR_Statics::NewProp_FollowCamera_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AATVS_CPP_CHAR_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AATVS_CPP_CHAR_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AATVS_CPP_CHAR_Statics::NewProp_FollowCamera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AATVS_CPP_CHAR_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AATVS_CPP_CHAR>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AATVS_CPP_CHAR_Statics::ClassParams = {
		&AATVS_CPP_CHAR::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AATVS_CPP_CHAR_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AATVS_CPP_CHAR_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AATVS_CPP_CHAR_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AATVS_CPP_CHAR_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AATVS_CPP_CHAR()
	{
		if (!Z_Registration_Info_UClass_AATVS_CPP_CHAR.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AATVS_CPP_CHAR.OuterSingleton, Z_Construct_UClass_AATVS_CPP_CHAR_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AATVS_CPP_CHAR.OuterSingleton;
	}
	template<> CPP_3D_RUNNER_API UClass* StaticClass<AATVS_CPP_CHAR>()
	{
		return AATVS_CPP_CHAR::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AATVS_CPP_CHAR);
	AATVS_CPP_CHAR::~AATVS_CPP_CHAR() {}
	struct Z_CompiledInDeferFile_FID_Users_sawant_ath_Documents_Unreal_Projects_CPP_3D_Source_CPP_3D_RUNNER_MY_FILES_ATVS_CPP_CHAR_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sawant_ath_Documents_Unreal_Projects_CPP_3D_Source_CPP_3D_RUNNER_MY_FILES_ATVS_CPP_CHAR_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AATVS_CPP_CHAR, AATVS_CPP_CHAR::StaticClass, TEXT("AATVS_CPP_CHAR"), &Z_Registration_Info_UClass_AATVS_CPP_CHAR, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AATVS_CPP_CHAR), 2568421049U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sawant_ath_Documents_Unreal_Projects_CPP_3D_Source_CPP_3D_RUNNER_MY_FILES_ATVS_CPP_CHAR_h_4118641977(TEXT("/Script/CPP_3D_RUNNER"),
		Z_CompiledInDeferFile_FID_Users_sawant_ath_Documents_Unreal_Projects_CPP_3D_Source_CPP_3D_RUNNER_MY_FILES_ATVS_CPP_CHAR_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sawant_ath_Documents_Unreal_Projects_CPP_3D_Source_CPP_3D_RUNNER_MY_FILES_ATVS_CPP_CHAR_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
