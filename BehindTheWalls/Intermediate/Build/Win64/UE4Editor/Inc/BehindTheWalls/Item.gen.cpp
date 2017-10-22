// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Item.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItem() {}
// Cross Module References
	BEHINDTHEWALLS_API UClass* Z_Construct_UClass_AItem_NoRegister();
	BEHINDTHEWALLS_API UClass* Z_Construct_UClass_AItem();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BehindTheWalls();
// End Cross Module References
	void AItem::StaticRegisterNativesAItem()
	{
	}
	UClass* Z_Construct_UClass_AItem_NoRegister()
	{
		return AItem::StaticClass();
	}
	UClass* Z_Construct_UClass_AItem()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_BehindTheWalls();
			OuterClass = AItem::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				UProperty* NewProp_slot = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("slot"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt16Property(CPP_PROPERTY_BASE(slot, AItem), 0x0040000000000001);
				UProperty* NewProp_id = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("id"), RF_Public|RF_Transient|RF_MarkAsNative) UUInt32Property(CPP_PROPERTY_BASE(id, AItem), 0x0040000000000001);
				static TCppClassTypeInfo<TCppClassTypeTraits<AItem> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Item.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Item.h"));
				MetaData->SetValue(NewProp_slot, TEXT("Category"), TEXT("Item"));
				MetaData->SetValue(NewProp_slot, TEXT("ModuleRelativePath"), TEXT("Item.h"));
				MetaData->SetValue(NewProp_id, TEXT("Category"), TEXT("Item"));
				MetaData->SetValue(NewProp_id, TEXT("ModuleRelativePath"), TEXT("Item.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AItem, 2544309323);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AItem(Z_Construct_UClass_AItem, &AItem::StaticClass, TEXT("/Script/BehindTheWalls"), TEXT("AItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
