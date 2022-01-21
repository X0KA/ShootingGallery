// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Hand.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHand() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_UHand_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_UHand();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	MYPROJECT_API UClass* Z_Construct_UClass_AGun_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UHand::execGetCurrentGun)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AGun**)Z_Param__Result=P_THIS->GetCurrentGun();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHand::execSetDefaultGun)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetDefaultGun();
		P_NATIVE_END;
	}
	void UHand::StaticRegisterNativesUHand()
	{
		UClass* Class = UHand::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentGun", &UHand::execGetCurrentGun },
			{ "SetDefaultGun", &UHand::execSetDefaultGun },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHand_GetCurrentGun_Statics
	{
		struct Hand_eventGetCurrentGun_Parms
		{
			AGun* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHand_GetCurrentGun_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Hand_eventGetCurrentGun_Parms, ReturnValue), Z_Construct_UClass_AGun_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHand_GetCurrentGun_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHand_GetCurrentGun_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHand_GetCurrentGun_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Hand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHand_GetCurrentGun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHand, nullptr, "GetCurrentGun", nullptr, nullptr, sizeof(Hand_eventGetCurrentGun_Parms), Z_Construct_UFunction_UHand_GetCurrentGun_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHand_GetCurrentGun_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHand_GetCurrentGun_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHand_GetCurrentGun_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHand_GetCurrentGun()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHand_GetCurrentGun_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHand_SetDefaultGun_Statics
	{
		struct Hand_eventSetDefaultGun_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHand_SetDefaultGun_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Hand_eventSetDefaultGun_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHand_SetDefaultGun_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Hand_eventSetDefaultGun_Parms), &Z_Construct_UFunction_UHand_SetDefaultGun_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHand_SetDefaultGun_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHand_SetDefaultGun_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHand_SetDefaultGun_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Set a new weapond to the hand\n" },
		{ "ModuleRelativePath", "Hand.h" },
		{ "ToolTip", "Set a new weapond to the hand" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHand_SetDefaultGun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHand, nullptr, "SetDefaultGun", nullptr, nullptr, sizeof(Hand_eventSetDefaultGun_Parms), Z_Construct_UFunction_UHand_SetDefaultGun_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHand_SetDefaultGun_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHand_SetDefaultGun_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHand_SetDefaultGun_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHand_SetDefaultGun()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHand_SetDefaultGun_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHand_NoRegister()
	{
		return UHand::StaticClass();
	}
	struct Z_Construct_UClass_UHand_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_defaultGun_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_defaultGun;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHand_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHand_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHand_GetCurrentGun, "GetCurrentGun" }, // 3226083342
		{ &Z_Construct_UFunction_UHand_SetDefaultGun, "SetDefaultGun" }, // 1731669777
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHand_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Hand.h" },
		{ "ModuleRelativePath", "Hand.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHand_Statics::NewProp_defaultGun_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Hand.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UHand_Statics::NewProp_defaultGun = { "defaultGun", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHand, defaultGun), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UHand_Statics::NewProp_defaultGun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHand_Statics::NewProp_defaultGun_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHand_Statics::NewProp_defaultGun,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHand_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHand>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHand_Statics::ClassParams = {
		&UHand::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHand_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHand_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHand_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHand_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHand()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHand_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHand, 4013839831);
	template<> MYPROJECT_API UClass* StaticClass<UHand>()
	{
		return UHand::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHand(Z_Construct_UClass_UHand, &UHand::StaticClass, TEXT("/Script/MyProject"), TEXT("UHand"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHand);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
