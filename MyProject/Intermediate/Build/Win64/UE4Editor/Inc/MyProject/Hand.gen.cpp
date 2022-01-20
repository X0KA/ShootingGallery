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
	ENGINE_API UClass* Z_Construct_UClass_UChildActorComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UHand::execSetCurrentGun)
	{
		P_GET_OBJECT(AGun,Z_Param_newGun);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCurrentGun(Z_Param_newGun);
		P_NATIVE_END;
	}
	void UHand::StaticRegisterNativesUHand()
	{
		UClass* Class = UHand::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetCurrentGun", &UHand::execSetCurrentGun },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHand_SetCurrentGun_Statics
	{
		struct Hand_eventSetCurrentGun_Parms
		{
			AGun* newGun;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_newGun;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHand_SetCurrentGun_Statics::NewProp_newGun = { "newGun", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Hand_eventSetCurrentGun_Parms, newGun), Z_Construct_UClass_AGun_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHand_SetCurrentGun_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Hand_eventSetCurrentGun_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHand_SetCurrentGun_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Hand_eventSetCurrentGun_Parms), &Z_Construct_UFunction_UHand_SetCurrentGun_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHand_SetCurrentGun_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHand_SetCurrentGun_Statics::NewProp_newGun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHand_SetCurrentGun_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHand_SetCurrentGun_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Hand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHand_SetCurrentGun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHand, nullptr, "SetCurrentGun", nullptr, nullptr, sizeof(Hand_eventSetCurrentGun_Parms), Z_Construct_UFunction_UHand_SetCurrentGun_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHand_SetCurrentGun_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHand_SetCurrentGun_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHand_SetCurrentGun_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHand_SetCurrentGun()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHand_SetCurrentGun_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gun_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_gun;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHand_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHand_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHand_SetCurrentGun, "SetCurrentGun" }, // 3685199436
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHand_Statics::NewProp_gun_MetaData[] = {
		{ "Category", "Hand" },
		{ "Comment", "//Weapon being currently used by this hand\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Hand.h" },
		{ "ToolTip", "Weapon being currently used by this hand" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHand_Statics::NewProp_gun = { "gun", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHand, gun), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHand_Statics::NewProp_gun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHand_Statics::NewProp_gun_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHand_Statics::NewProp_gun,
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
	IMPLEMENT_CLASS(UHand, 1158865641);
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
