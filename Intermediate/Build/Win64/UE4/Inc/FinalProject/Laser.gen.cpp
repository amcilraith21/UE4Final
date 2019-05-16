// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FinalProject/Laser.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLaser() {}
// Cross Module References
	FINALPROJECT_API UClass* Z_Construct_UClass_ALaser_NoRegister();
	FINALPROJECT_API UClass* Z_Construct_UClass_ALaser();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FinalProject();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ALaser::StaticRegisterNativesALaser()
	{
	}
	UClass* Z_Construct_UClass_ALaser_NoRegister()
	{
		return ALaser::StaticClass();
	}
	struct Z_Construct_UClass_ALaser_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_survivalTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_survivalTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_launchSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_launchSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaserMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LaserMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALaser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FinalProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALaser_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Laser.h" },
		{ "ModuleRelativePath", "Laser.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALaser_Statics::NewProp_survivalTime_MetaData[] = {
		{ "Category", "Laser" },
		{ "ModuleRelativePath", "Laser.h" },
		{ "ToolTip", "how long the laser lasts before it despawns" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALaser_Statics::NewProp_survivalTime = { "survivalTime", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALaser, survivalTime), METADATA_PARAMS(Z_Construct_UClass_ALaser_Statics::NewProp_survivalTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALaser_Statics::NewProp_survivalTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALaser_Statics::NewProp_launchSpeed_MetaData[] = {
		{ "Category", "Laser" },
		{ "ModuleRelativePath", "Laser.h" },
		{ "ToolTip", "Forward speed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALaser_Statics::NewProp_launchSpeed = { "launchSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALaser, launchSpeed), METADATA_PARAMS(Z_Construct_UClass_ALaser_Statics::NewProp_launchSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALaser_Statics::NewProp_launchSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALaser_Statics::NewProp_sound_MetaData[] = {
		{ "Category", "Particle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Laser.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALaser_Statics::NewProp_sound = { "sound", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALaser, sound), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALaser_Statics::NewProp_sound_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALaser_Statics::NewProp_sound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALaser_Statics::NewProp_LaserMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Laser.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALaser_Statics::NewProp_LaserMesh = { "LaserMesh", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALaser, LaserMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALaser_Statics::NewProp_LaserMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALaser_Statics::NewProp_LaserMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALaser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALaser_Statics::NewProp_survivalTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALaser_Statics::NewProp_launchSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALaser_Statics::NewProp_sound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALaser_Statics::NewProp_LaserMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALaser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALaser>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALaser_Statics::ClassParams = {
		&ALaser::StaticClass,
		"game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALaser_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ALaser_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ALaser_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALaser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALaser()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALaser_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALaser, 777127335);
	template<> FINALPROJECT_API UClass* StaticClass<ALaser>()
	{
		return ALaser::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALaser(Z_Construct_UClass_ALaser, &ALaser::StaticClass, TEXT("/Script/FinalProject"), TEXT("ALaser"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALaser);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
