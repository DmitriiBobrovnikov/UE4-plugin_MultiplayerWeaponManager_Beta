// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponManager/Character/BaseWeaponCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseWeaponCharacter() {}
// Cross Module References
	WEAPONMANAGER_API UClass* Z_Construct_UClass_ABaseWeaponCharacter_NoRegister();
	WEAPONMANAGER_API UClass* Z_Construct_UClass_ABaseWeaponCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_WeaponManager();
	WEAPONMANAGER_API UClass* Z_Construct_UClass_UGameWeaponManager_NoRegister();
// End Cross Module References
	void ABaseWeaponCharacter::StaticRegisterNativesABaseWeaponCharacter()
	{
	}
	UClass* Z_Construct_UClass_ABaseWeaponCharacter_NoRegister()
	{
		return ABaseWeaponCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ABaseWeaponCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseWeaponCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponManager,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWeaponCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/BaseWeaponCharacter.h" },
		{ "ModuleRelativePath", "Character/BaseWeaponCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWeaponCharacter_Statics::NewProp_WeaponManager_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/BaseWeaponCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseWeaponCharacter_Statics::NewProp_WeaponManager = { "WeaponManager", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseWeaponCharacter, WeaponManager), Z_Construct_UClass_UGameWeaponManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseWeaponCharacter_Statics::NewProp_WeaponManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeaponCharacter_Statics::NewProp_WeaponManager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseWeaponCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeaponCharacter_Statics::NewProp_WeaponManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseWeaponCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseWeaponCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseWeaponCharacter_Statics::ClassParams = {
		&ABaseWeaponCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABaseWeaponCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeaponCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseWeaponCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeaponCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseWeaponCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseWeaponCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseWeaponCharacter, 1070686186);
	template<> WEAPONMANAGER_API UClass* StaticClass<ABaseWeaponCharacter>()
	{
		return ABaseWeaponCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseWeaponCharacter(Z_Construct_UClass_ABaseWeaponCharacter, &ABaseWeaponCharacter::StaticClass, TEXT("/Script/WeaponManager"), TEXT("ABaseWeaponCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseWeaponCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
