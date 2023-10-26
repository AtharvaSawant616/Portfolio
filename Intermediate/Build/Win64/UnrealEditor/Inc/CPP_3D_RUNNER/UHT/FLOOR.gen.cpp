// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_3D_RUNNER/MY FILES/FLOOR.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFLOOR() {}
// Cross Module References
	CPP_3D_RUNNER_API UClass* Z_Construct_UClass_AFLOOR();
	CPP_3D_RUNNER_API UClass* Z_Construct_UClass_AFLOOR_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	UPackage* Z_Construct_UPackage__Script_CPP_3D_RUNNER();
// End Cross Module References
	DEFINE_FUNCTION(AFLOOR::execOverLapWithPawn)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OverLapWithPawn(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void AFLOOR::StaticRegisterNativesAFLOOR()
	{
		UClass* Class = AFLOOR::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OverLapWithPawn", &AFLOOR::execOverLapWithPawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFLOOR_OverLapWithPawn_Statics
	{
		struct FLOOR_eventOverLapWithPawn_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFLOOR_OverLapWithPawn_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFLOOR_OverLapWithPawn_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLOOR_eventOverLapWithPawn_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFLOOR_OverLapWithPawn_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFLOOR_OverLapWithPawn_Statics::NewProp_OverlappedComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFLOOR_OverLapWithPawn_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLOOR_eventOverLapWithPawn_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFLOOR_OverLapWithPawn_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFLOOR_OverLapWithPawn_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLOOR_eventOverLapWithPawn_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFLOOR_OverLapWithPawn_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFLOOR_OverLapWithPawn_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFLOOR_OverLapWithPawn_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLOOR_eventOverLapWithPawn_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFLOOR_OverLapWithPawn_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((FLOOR_eventOverLapWithPawn_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFLOOR_OverLapWithPawn_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLOOR_eventOverLapWithPawn_Parms), &Z_Construct_UFunction_AFLOOR_OverLapWithPawn_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFLOOR_OverLapWithPawn_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFLOOR_OverLapWithPawn_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLOOR_eventOverLapWithPawn_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AFLOOR_OverLapWithPawn_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFLOOR_OverLapWithPawn_Statics::NewProp_SweepResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFLOOR_OverLapWithPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFLOOR_OverLapWithPawn_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFLOOR_OverLapWithPawn_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFLOOR_OverLapWithPawn_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFLOOR_OverLapWithPawn_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFLOOR_OverLapWithPawn_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFLOOR_OverLapWithPawn_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFLOOR_OverLapWithPawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MY FILES/FLOOR.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFLOOR_OverLapWithPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFLOOR, nullptr, "OverLapWithPawn", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFLOOR_OverLapWithPawn_Statics::FLOOR_eventOverLapWithPawn_Parms), Z_Construct_UFunction_AFLOOR_OverLapWithPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFLOOR_OverLapWithPawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFLOOR_OverLapWithPawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFLOOR_OverLapWithPawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFLOOR_OverLapWithPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFLOOR_OverLapWithPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFLOOR);
	UClass* Z_Construct_UClass_AFLOOR_NoRegister()
	{
		return AFLOOR::StaticClass();
	}
	struct Z_Construct_UClass_AFLOOR_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnPoint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Left_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Left;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Center;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Right_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Right;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFLOOR_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CPP_3D_RUNNER,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFLOOR_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFLOOR_OverLapWithPawn, "OverLapWithPawn" }, // 2433946510
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFLOOR_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MY FILES/FLOOR.h" },
		{ "ModuleRelativePath", "MY FILES/FLOOR.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFLOOR_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "FLOOR" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MY FILES/FLOOR.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFLOOR_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFLOOR, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFLOOR_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFLOOR_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFLOOR_Statics::NewProp_SpawnPoint_MetaData[] = {
		{ "Category", "FLOOR" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MY FILES/FLOOR.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFLOOR_Statics::NewProp_SpawnPoint = { "SpawnPoint", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFLOOR, SpawnPoint), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFLOOR_Statics::NewProp_SpawnPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFLOOR_Statics::NewProp_SpawnPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFLOOR_Statics::NewProp_Left_MetaData[] = {
		{ "Category", "FLOOR" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MY FILES/FLOOR.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFLOOR_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFLOOR, Left), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFLOOR_Statics::NewProp_Left_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFLOOR_Statics::NewProp_Left_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFLOOR_Statics::NewProp_Center_MetaData[] = {
		{ "Category", "FLOOR" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MY FILES/FLOOR.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFLOOR_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFLOOR, Center), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFLOOR_Statics::NewProp_Center_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFLOOR_Statics::NewProp_Center_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFLOOR_Statics::NewProp_Right_MetaData[] = {
		{ "Category", "FLOOR" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MY FILES/FLOOR.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFLOOR_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFLOOR, Right), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFLOOR_Statics::NewProp_Right_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFLOOR_Statics::NewProp_Right_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFLOOR_Statics::NewProp_BoxComp_MetaData[] = {
		{ "Category", "FLOOR" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MY FILES/FLOOR.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFLOOR_Statics::NewProp_BoxComp = { "BoxComp", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFLOOR, BoxComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFLOOR_Statics::NewProp_BoxComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFLOOR_Statics::NewProp_BoxComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFLOOR_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFLOOR_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFLOOR_Statics::NewProp_SpawnPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFLOOR_Statics::NewProp_Left,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFLOOR_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFLOOR_Statics::NewProp_Right,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFLOOR_Statics::NewProp_BoxComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFLOOR_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFLOOR>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFLOOR_Statics::ClassParams = {
		&AFLOOR::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFLOOR_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFLOOR_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFLOOR_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFLOOR_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFLOOR()
	{
		if (!Z_Registration_Info_UClass_AFLOOR.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFLOOR.OuterSingleton, Z_Construct_UClass_AFLOOR_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFLOOR.OuterSingleton;
	}
	template<> CPP_3D_RUNNER_API UClass* StaticClass<AFLOOR>()
	{
		return AFLOOR::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFLOOR);
	AFLOOR::~AFLOOR() {}
	struct Z_CompiledInDeferFile_FID_Users_sawant_ath_Documents_Unreal_Projects_CPP_3D_Source_CPP_3D_RUNNER_MY_FILES_FLOOR_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sawant_ath_Documents_Unreal_Projects_CPP_3D_Source_CPP_3D_RUNNER_MY_FILES_FLOOR_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFLOOR, AFLOOR::StaticClass, TEXT("AFLOOR"), &Z_Registration_Info_UClass_AFLOOR, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFLOOR), 3789359860U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sawant_ath_Documents_Unreal_Projects_CPP_3D_Source_CPP_3D_RUNNER_MY_FILES_FLOOR_h_1565217189(TEXT("/Script/CPP_3D_RUNNER"),
		Z_CompiledInDeferFile_FID_Users_sawant_ath_Documents_Unreal_Projects_CPP_3D_Source_CPP_3D_RUNNER_MY_FILES_FLOOR_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sawant_ath_Documents_Unreal_Projects_CPP_3D_Source_CPP_3D_RUNNER_MY_FILES_FLOOR_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
