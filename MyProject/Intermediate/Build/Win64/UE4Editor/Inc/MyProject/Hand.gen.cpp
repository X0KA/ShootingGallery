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
// End Cross Module References
	void UHand::StaticRegisterNativesUHand()
	{
	}
	UClass* Z_Construct_UClass_UHand_NoRegister()
	{
		return UHand::StaticClass();
	}
	struct Z_Construct_UClass_UHand_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHand_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
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
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHand_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHand>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHand_Statics::ClassParams = {
		&UHand::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
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
	IMPLEMENT_CLASS(UHand, 436744445);
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
