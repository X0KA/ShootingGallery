// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_Gun_generated_h
#error "Gun.generated.h already included, missing '#pragma once' in Gun.h"
#endif
#define MYPROJECT_Gun_generated_h

#define MyProject_Source_MyProject_Gun_h_13_SPARSE_DATA
#define MyProject_Source_MyProject_Gun_h_13_RPC_WRAPPERS
#define MyProject_Source_MyProject_Gun_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject_Source_MyProject_Gun_h_13_EVENT_PARMS
#define MyProject_Source_MyProject_Gun_h_13_CALLBACK_WRAPPERS
#define MyProject_Source_MyProject_Gun_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGun(); \
	friend struct Z_Construct_UClass_AGun_Statics; \
public: \
	DECLARE_CLASS(AGun, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AGun)


#define MyProject_Source_MyProject_Gun_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAGun(); \
	friend struct Z_Construct_UClass_AGun_Statics; \
public: \
	DECLARE_CLASS(AGun, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AGun)


#define MyProject_Source_MyProject_Gun_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGun(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGun) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGun); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGun); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGun(AGun&&); \
	NO_API AGun(const AGun&); \
public:


#define MyProject_Source_MyProject_Gun_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGun(AGun&&); \
	NO_API AGun(const AGun&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGun); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGun); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGun)


#define MyProject_Source_MyProject_Gun_h_13_PRIVATE_PROPERTY_OFFSET
#define MyProject_Source_MyProject_Gun_h_10_PROLOG \
	MyProject_Source_MyProject_Gun_h_13_EVENT_PARMS


#define MyProject_Source_MyProject_Gun_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_Gun_h_13_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_Gun_h_13_SPARSE_DATA \
	MyProject_Source_MyProject_Gun_h_13_RPC_WRAPPERS \
	MyProject_Source_MyProject_Gun_h_13_CALLBACK_WRAPPERS \
	MyProject_Source_MyProject_Gun_h_13_INCLASS \
	MyProject_Source_MyProject_Gun_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_Gun_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_Gun_h_13_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_Gun_h_13_SPARSE_DATA \
	MyProject_Source_MyProject_Gun_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_Gun_h_13_CALLBACK_WRAPPERS \
	MyProject_Source_MyProject_Gun_h_13_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_Gun_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class AGun>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_Gun_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
