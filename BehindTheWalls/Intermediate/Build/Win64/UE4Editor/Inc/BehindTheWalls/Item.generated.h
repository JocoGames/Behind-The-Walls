// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BEHINDTHEWALLS_Item_generated_h
#error "Item.generated.h already included, missing '#pragma once' in Item.h"
#endif
#define BEHINDTHEWALLS_Item_generated_h

#define BehindTheWalls_Source_BehindTheWalls_Item_h_12_RPC_WRAPPERS
#define BehindTheWalls_Source_BehindTheWalls_Item_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define BehindTheWalls_Source_BehindTheWalls_Item_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItem(); \
	friend BEHINDTHEWALLS_API class UClass* Z_Construct_UClass_AItem(); \
public: \
	DECLARE_CLASS(AItem, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BehindTheWalls"), NO_API) \
	DECLARE_SERIALIZER(AItem) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BehindTheWalls_Source_BehindTheWalls_Item_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAItem(); \
	friend BEHINDTHEWALLS_API class UClass* Z_Construct_UClass_AItem(); \
public: \
	DECLARE_CLASS(AItem, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BehindTheWalls"), NO_API) \
	DECLARE_SERIALIZER(AItem) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BehindTheWalls_Source_BehindTheWalls_Item_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItem(AItem&&); \
	NO_API AItem(const AItem&); \
public:


#define BehindTheWalls_Source_BehindTheWalls_Item_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItem(AItem&&); \
	NO_API AItem(const AItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItem)


#define BehindTheWalls_Source_BehindTheWalls_Item_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__id() { return STRUCT_OFFSET(AItem, id); } \
	FORCEINLINE static uint32 __PPO__slot() { return STRUCT_OFFSET(AItem, slot); }


#define BehindTheWalls_Source_BehindTheWalls_Item_h_9_PROLOG
#define BehindTheWalls_Source_BehindTheWalls_Item_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BehindTheWalls_Source_BehindTheWalls_Item_h_12_PRIVATE_PROPERTY_OFFSET \
	BehindTheWalls_Source_BehindTheWalls_Item_h_12_RPC_WRAPPERS \
	BehindTheWalls_Source_BehindTheWalls_Item_h_12_INCLASS \
	BehindTheWalls_Source_BehindTheWalls_Item_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BehindTheWalls_Source_BehindTheWalls_Item_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BehindTheWalls_Source_BehindTheWalls_Item_h_12_PRIVATE_PROPERTY_OFFSET \
	BehindTheWalls_Source_BehindTheWalls_Item_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	BehindTheWalls_Source_BehindTheWalls_Item_h_12_INCLASS_NO_PURE_DECLS \
	BehindTheWalls_Source_BehindTheWalls_Item_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BehindTheWalls_Source_BehindTheWalls_Item_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
