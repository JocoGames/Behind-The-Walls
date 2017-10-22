// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "GameSave.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameSave() {}
// Cross Module References
	BEHINDTHEWALLS_API UClass* Z_Construct_UClass_UGameSave_NoRegister();
	BEHINDTHEWALLS_API UClass* Z_Construct_UClass_UGameSave();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_BehindTheWalls();
// End Cross Module References
	void UGameSave::StaticRegisterNativesUGameSave()
	{
	}
	UClass* Z_Construct_UClass_UGameSave_NoRegister()
	{
		return UGameSave::StaticClass();
	}
	UClass* Z_Construct_UClass_UGameSave()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_USaveGame();
			Z_Construct_UPackage__Script_BehindTheWalls();
			OuterClass = UGameSave::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;


				UProperty* NewProp_UserIndex = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("UserIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt32Property(CPP_PROPERTY_BASE(UserIndex, UGameSave), 0x0010000000020001);
				UProperty* NewProp_SaveSlotName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SaveSlotName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(SaveSlotName, UGameSave), 0x0010000000020001);
				UProperty* NewProp_Inventory = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Inventory"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt32Property(CPP_PROPERTY_BASE(Inventory, UGameSave), 0x0010000000020001);
				NewProp_Inventory->ArrayDim = CPP_ARRAY_DIM(Inventory, UGameSave);
				static TCppClassTypeInfo<TCppClassTypeTraits<UGameSave> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("GameSave.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("GameSave.h"));
				MetaData->SetValue(NewProp_UserIndex, TEXT("Category"), TEXT("Basic"));
				MetaData->SetValue(NewProp_UserIndex, TEXT("ModuleRelativePath"), TEXT("GameSave.h"));
				MetaData->SetValue(NewProp_SaveSlotName, TEXT("Category"), TEXT("Basic"));
				MetaData->SetValue(NewProp_SaveSlotName, TEXT("ModuleRelativePath"), TEXT("GameSave.h"));
				MetaData->SetValue(NewProp_Inventory, TEXT("Category"), TEXT("Basic"));
				MetaData->SetValue(NewProp_Inventory, TEXT("ModuleRelativePath"), TEXT("GameSave.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameSave, 2305237346);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameSave(Z_Construct_UClass_UGameSave, &UGameSave::StaticClass, TEXT("/Script/BehindTheWalls"), TEXT("UGameSave"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameSave);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
