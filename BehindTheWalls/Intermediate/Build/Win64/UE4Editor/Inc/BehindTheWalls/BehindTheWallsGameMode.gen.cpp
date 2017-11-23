// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BehindTheWallsGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBehindTheWallsGameMode() {}
// Cross Module References
	BEHINDTHEWALLS_API UClass* Z_Construct_UClass_ABehindTheWallsGameMode_NoRegister();
	BEHINDTHEWALLS_API UClass* Z_Construct_UClass_ABehindTheWallsGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BehindTheWalls();
// End Cross Module References
	void ABehindTheWallsGameMode::StaticRegisterNativesABehindTheWallsGameMode()
	{
	}
	UClass* Z_Construct_UClass_ABehindTheWallsGameMode_NoRegister()
	{
		return ABehindTheWallsGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_ABehindTheWallsGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_BehindTheWalls,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "BehindTheWallsGameMode.h" },
				{ "ModuleRelativePath", "BehindTheWallsGameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABehindTheWallsGameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABehindTheWallsGameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABehindTheWallsGameMode, 4199590482);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABehindTheWallsGameMode(Z_Construct_UClass_ABehindTheWallsGameMode, &ABehindTheWallsGameMode::StaticClass, TEXT("/Script/BehindTheWalls"), TEXT("ABehindTheWallsGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABehindTheWallsGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
