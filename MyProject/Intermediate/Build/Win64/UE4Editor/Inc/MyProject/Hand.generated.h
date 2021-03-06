// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGun;
#ifdef MYPROJECT_Hand_generated_h
#error "Hand.generated.h already included, missing '#pragma once' in Hand.h"
#endif
#define MYPROJECT_Hand_generated_h

#define MyProject_Source_MyProject_Hand_h_14_SPARSE_DATA
#define MyProject_Source_MyProject_Hand_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentGun); \
	DECLARE_FUNCTION(execSetDefaultGun);


#define MyProject_Source_MyProject_Hand_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentGun); \
	DECLARE_FUNCTION(execSetDefaultGun);


#define MyProject_Source_MyProject_Hand_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHand(); \
	friend struct Z_Construct_UClass_UHand_Statics; \
public: \
	DECLARE_CLASS(UHand, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(UHand)


#define MyProject_Source_MyProject_Hand_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUHand(); \
	friend struct Z_Construct_UClass_UHand_Statics; \
public: \
	DECLARE_CLASS(UHand, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(UHand)


#define MyProject_Source_MyProject_Hand_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHand(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHand) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHand); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHand); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHand(UHand&&); \
	NO_API UHand(const UHand&); \
public:


#define MyProject_Source_MyProject_Hand_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHand(UHand&&); \
	NO_API UHand(const UHand&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHand); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHand); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHand)


#define MyProject_Source_MyProject_Hand_h_14_PRIVATE_PROPERTY_OFFSET
#define MyProject_Source_MyProject_Hand_h_11_PROLOG
#define MyProject_Source_MyProject_Hand_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_Hand_h_14_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_Hand_h_14_SPARSE_DATA \
	MyProject_Source_MyProject_Hand_h_14_RPC_WRAPPERS \
	MyProject_Source_MyProject_Hand_h_14_INCLASS \
	MyProject_Source_MyProject_Hand_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_Hand_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_Hand_h_14_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_Hand_h_14_SPARSE_DATA \
	MyProject_Source_MyProject_Hand_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_Hand_h_14_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_Hand_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class UHand>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_Hand_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
