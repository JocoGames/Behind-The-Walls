// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BehindTheWallsGameMode.h"
PRAGMA_DISABLE_OPTIMIZATION
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
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_BehindTheWalls();
			OuterClass = ABehindTheWallsGameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20880288u;


				static TCppClassTypeInfo<TCppClassTypeTraits<ABehindTheWallsGameMode> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BehindTheWallsGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("BehindTheWallsGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABehindTheWallsGameMode, 3108671840);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABehindTheWallsGameMode(Z_Construct_UClass_ABehindTheWallsGameMode, &ABehindTheWallsGameMode::StaticClass, TEXT("/Script/BehindTheWalls"), TEXT("ABehindTheWallsGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABehindTheWallsGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
