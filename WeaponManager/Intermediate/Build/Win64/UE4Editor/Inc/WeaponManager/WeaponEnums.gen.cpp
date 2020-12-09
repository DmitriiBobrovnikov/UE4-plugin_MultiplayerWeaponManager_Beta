// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponManager/Enums/WeaponEnums.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponEnums() {}
// Cross Module References
	WEAPONMANAGER_API UEnum* Z_Construct_UEnum_WeaponManager_EWeaponType();
	UPackage* Z_Construct_UPackage__Script_WeaponManager();
// End Cross Module References
	static UEnum* EWeaponType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_WeaponManager_EWeaponType, Z_Construct_UPackage__Script_WeaponManager(), TEXT("EWeaponType"));
		}
		return Singleton;
	}
	template<> WEAPONMANAGER_API UEnum* StaticEnum<EWeaponType>()
	{
		return EWeaponType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWeaponType(EWeaponType_StaticEnum, TEXT("/Script/WeaponManager"), TEXT("EWeaponType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_WeaponManager_EWeaponType_Hash() { return 1686596980U; }
	UEnum* Z_Construct_UEnum_WeaponManager_EWeaponType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_WeaponManager();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWeaponType"), 0, Get_Z_Construct_UEnum_WeaponManager_EWeaponType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "WEAP_NONE", (int64)WEAP_NONE },
				{ "WEAP_PISTOL", (int64)WEAP_PISTOL },
				{ "WEAP_RIFLE", (int64)WEAP_RIFLE },
				{ "WEAP_PROJECTILE", (int64)WEAP_PROJECTILE },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * \n */" },
				{ "ModuleRelativePath", "Enums/WeaponEnums.h" },
				{ "WEAP_NONE.Comment", "/**\n * \n */" },
				{ "WEAP_NONE.DisplayName", "None" },
				{ "WEAP_NONE.Name", "WEAP_NONE" },
				{ "WEAP_PISTOL.Comment", "/**\n * \n */" },
				{ "WEAP_PISTOL.DisplayName", "Pistol" },
				{ "WEAP_PISTOL.Name", "WEAP_PISTOL" },
				{ "WEAP_PROJECTILE.Comment", "/**\n * \n */" },
				{ "WEAP_PROJECTILE.DisplayName", "Projectile" },
				{ "WEAP_PROJECTILE.Name", "WEAP_PROJECTILE" },
				{ "WEAP_RIFLE.Comment", "/**\n * \n */" },
				{ "WEAP_RIFLE.DisplayName", "Rifle" },
				{ "WEAP_RIFLE.Name", "WEAP_RIFLE" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_WeaponManager,
				nullptr,
				"EWeaponType",
				"EWeaponType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
