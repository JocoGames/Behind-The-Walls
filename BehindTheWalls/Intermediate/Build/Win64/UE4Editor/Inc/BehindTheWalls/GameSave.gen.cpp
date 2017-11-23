// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "GameSave.h"
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
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USaveGame,
				(UObject* (*)())Z_Construct_UPackage__Script_BehindTheWalls,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "GameSave.h" },
				{ "ModuleRelativePath", "GameSave.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[] = {
				{ "Category", "Basic" },
				{ "ModuleRelativePath", "GameSave.h" },
			};
#endif
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_UserIndex = { UE4CodeGen_Private::EPropertyClass::UInt32, "UserIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020001, 1, nullptr, STRUCT_OFFSET(UGameSave, UserIndex), METADATA_PARAMS(NewProp_UserIndex_MetaData, ARRAY_COUNT(NewProp_UserIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveSlotName_MetaData[] = {
				{ "Category", "Basic" },
				{ "ModuleRelativePath", "GameSave.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveSlotName = { UE4CodeGen_Private::EPropertyClass::Str, "SaveSlotName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020001, 1, nullptr, STRUCT_OFFSET(UGameSave, SaveSlotName), METADATA_PARAMS(NewProp_SaveSlotName_MetaData, ARRAY_COUNT(NewProp_SaveSlotName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[] = {
				{ "Category", "Basic" },
				{ "ModuleRelativePath", "GameSave.h" },
			};
#endif
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Inventory = { UE4CodeGen_Private::EPropertyClass::UInt32, "Inventory", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020001, CPP_ARRAY_DIM(Inventory, UGameSave), nullptr, STRUCT_OFFSET(UGameSave, Inventory), METADATA_PARAMS(NewProp_Inventory_MetaData, ARRAY_COUNT(NewProp_Inventory_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UserIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SaveSlotName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Inventory,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UGameSave>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UGameSave::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameSave, 1182858774);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameSave(Z_Construct_UClass_UGameSave, &UGameSave::StaticClass, TEXT("/Script/BehindTheWalls"), TEXT("UGameSave"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameSave);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
