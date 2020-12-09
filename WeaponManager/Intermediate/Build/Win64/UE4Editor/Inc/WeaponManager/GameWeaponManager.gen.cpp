// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponManager/Component/GameWeaponManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameWeaponManager() {}
// Cross Module References
	WEAPONMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FWeapon();
	UPackage* Z_Construct_UPackage__Script_WeaponManager();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	WEAPONMANAGER_API UEnum* Z_Construct_UEnum_WeaponManager_EWeaponType();
	WEAPONMANAGER_API UClass* Z_Construct_UClass_UGameWeaponManager_NoRegister();
	WEAPONMANAGER_API UClass* Z_Construct_UClass_UGameWeaponManager();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	WEAPONMANAGER_API UClass* Z_Construct_UClass_ABaseWeapon_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
// End Cross Module References
class UScriptStruct* FWeapon::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern WEAPONMANAGER_API uint32 Get_Z_Construct_UScriptStruct_FWeapon_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeapon, Z_Construct_UPackage__Script_WeaponManager(), TEXT("Weapon"), sizeof(FWeapon), Get_Z_Construct_UScriptStruct_FWeapon_Hash());
	}
	return Singleton;
}
template<> WEAPONMANAGER_API UScriptStruct* StaticStruct<FWeapon>()
{
	return FWeapon::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWeapon(FWeapon::StaticStruct, TEXT("/Script/WeaponManager"), TEXT("Weapon"), false, nullptr, nullptr);
static struct FScriptStruct_WeaponManager_StaticRegisterNativesFWeapon
{
	FScriptStruct_WeaponManager_StaticRegisterNativesFWeapon()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Weapon")),new UScriptStruct::TCppStructOps<FWeapon>);
	}
} ScriptStruct_WeaponManager_StaticRegisterNativesFWeapon;
	struct Z_Construct_UScriptStruct_FWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagazinAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MagazinAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAutoFire_MetaData[];
#endif
		static void NewProp_bIsAutoFire_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAutoFire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoolDownTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CoolDownTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WeaponType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeapon_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Component/GameWeaponManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWeapon_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeapon>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeapon_Statics::NewProp_MagazinAmmo_MetaData[] = {
		{ "Category", "Items" },
		{ "ModuleRelativePath", "Component/GameWeaponManager.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FWeapon_Statics::NewProp_MagazinAmmo = { "MagazinAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeapon, MagazinAmmo), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeapon_Statics::NewProp_MagazinAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeapon_Statics::NewProp_MagazinAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeapon_Statics::NewProp_bIsAutoFire_MetaData[] = {
		{ "Category", "Items" },
		{ "ModuleRelativePath", "Component/GameWeaponManager.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FWeapon_Statics::NewProp_bIsAutoFire_SetBit(void* Obj)
	{
		((FWeapon*)Obj)->bIsAutoFire = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWeapon_Statics::NewProp_bIsAutoFire = { "bIsAutoFire", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FWeapon), &Z_Construct_UScriptStruct_FWeapon_Statics::NewProp_bIsAutoFire_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeapon_Statics::NewProp_bIsAutoFire_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeapon_Statics::NewProp_bIsAutoFire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeapon_Statics::NewProp_CoolDownTime_MetaData[] = {
		{ "Category", "Items" },
		{ "ModuleRelativePath", "Component/GameWeaponManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeapon_Statics::NewProp_CoolDownTime = { "CoolDownTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeapon, CoolDownTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeapon_Statics::NewProp_CoolDownTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeapon_Statics::NewProp_CoolDownTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeapon_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "Items" },
		{ "ModuleRelativePath", "Component/GameWeaponManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeapon_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeapon, Damage), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeapon_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeapon_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeapon_Statics::NewProp_WeaponType_MetaData[] = {
		{ "Category", "Items" },
		{ "ModuleRelativePath", "Component/GameWeaponManager.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWeapon_Statics::NewProp_WeaponType = { "WeaponType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeapon, WeaponType), Z_Construct_UEnum_WeaponManager_EWeaponType, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeapon_Statics::NewProp_WeaponType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeapon_Statics::NewProp_WeaponType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeapon_Statics::NewProp_MagazinAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeapon_Statics::NewProp_bIsAutoFire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeapon_Statics::NewProp_CoolDownTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeapon_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeapon_Statics::NewProp_WeaponType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeapon_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponManager,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"Weapon",
		sizeof(FWeapon),
		alignof(FWeapon),
		Z_Construct_UScriptStruct_FWeapon_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeapon_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWeapon_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeapon_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWeapon()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWeapon_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_WeaponManager();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Weapon"), sizeof(FWeapon), Get_Z_Construct_UScriptStruct_FWeapon_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWeapon_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWeapon_Hash() { return 517005579U; }
	DEFINE_FUNCTION(UGameWeaponManager::execGetIsWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsWeapon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameWeaponManager::execGetCurrentWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ABaseWeapon**)Z_Param__Result=P_THIS->GetCurrentWeapon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameWeaponManager::execStopSpecific)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopSpecific_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameWeaponManager::execSpecific)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Specific_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameWeaponManager::execStopFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopFire_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameWeaponManager::execFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Fire_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameWeaponManager::execCreateWeapon)
	{
		P_GET_OBJECT(UClass,Z_Param_WeapoClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateWeapon_Implementation(Z_Param_WeapoClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameWeaponManager::execOnRep_CurentWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurentWeapon();
		P_NATIVE_END;
	}
	static FName NAME_UGameWeaponManager_CreateWeapon = FName(TEXT("CreateWeapon"));
	void UGameWeaponManager::CreateWeapon(TSubclassOf<ABaseWeapon>  WeapoClass)
	{
		GameWeaponManager_eventCreateWeapon_Parms Parms;
		Parms.WeapoClass=WeapoClass;
		ProcessEvent(FindFunctionChecked(NAME_UGameWeaponManager_CreateWeapon),&Parms);
	}
	static FName NAME_UGameWeaponManager_Fire = FName(TEXT("Fire"));
	void UGameWeaponManager::Fire()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGameWeaponManager_Fire),NULL);
	}
	static FName NAME_UGameWeaponManager_Specific = FName(TEXT("Specific"));
	void UGameWeaponManager::Specific()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGameWeaponManager_Specific),NULL);
	}
	static FName NAME_UGameWeaponManager_StopFire = FName(TEXT("StopFire"));
	void UGameWeaponManager::StopFire()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGameWeaponManager_StopFire),NULL);
	}
	static FName NAME_UGameWeaponManager_StopSpecific = FName(TEXT("StopSpecific"));
	void UGameWeaponManager::StopSpecific()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGameWeaponManager_StopSpecific),NULL);
	}
	void UGameWeaponManager::StaticRegisterNativesUGameWeaponManager()
	{
		UClass* Class = UGameWeaponManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateWeapon", &UGameWeaponManager::execCreateWeapon },
			{ "Fire", &UGameWeaponManager::execFire },
			{ "GetCurrentWeapon", &UGameWeaponManager::execGetCurrentWeapon },
			{ "GetIsWeapon", &UGameWeaponManager::execGetIsWeapon },
			{ "OnRep_CurentWeapon", &UGameWeaponManager::execOnRep_CurentWeapon },
			{ "Specific", &UGameWeaponManager::execSpecific },
			{ "StopFire", &UGameWeaponManager::execStopFire },
			{ "StopSpecific", &UGameWeaponManager::execStopSpecific },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameWeaponManager_CreateWeapon_Statics
	{
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WeapoClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGameWeaponManager_CreateWeapon_Statics::NewProp_WeapoClass = { "WeapoClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameWeaponManager_eventCreateWeapon_Parms, WeapoClass), Z_Construct_UClass_ABaseWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameWeaponManager_CreateWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameWeaponManager_CreateWeapon_Statics::NewProp_WeapoClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameWeaponManager_CreateWeapon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "Comment", "//create Weapon \n" },
		{ "ModuleRelativePath", "Component/GameWeaponManager.h" },
		{ "ToolTip", "create Weapon" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameWeaponManager_CreateWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameWeaponManager, nullptr, "CreateWeapon", nullptr, nullptr, sizeof(GameWeaponManager_eventCreateWeapon_Parms), Z_Construct_UFunction_UGameWeaponManager_CreateWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameWeaponManager_CreateWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameWeaponManager_CreateWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameWeaponManager_CreateWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameWeaponManager_CreateWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameWeaponManager_CreateWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameWeaponManager_Fire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameWeaponManager_Fire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Component/GameWeaponManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameWeaponManager_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameWeaponManager, nullptr, "Fire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameWeaponManager_Fire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameWeaponManager_Fire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameWeaponManager_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameWeaponManager_Fire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameWeaponManager_GetCurrentWeapon_Statics
	{
		struct GameWeaponManager_eventGetCurrentWeapon_Parms
		{
			ABaseWeapon* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameWeaponManager_GetCurrentWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameWeaponManager_eventGetCurrentWeapon_Parms, ReturnValue), Z_Construct_UClass_ABaseWeapon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameWeaponManager_GetCurrentWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameWeaponManager_GetCurrentWeapon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameWeaponManager_GetCurrentWeapon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Component/GameWeaponManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameWeaponManager_GetCurrentWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameWeaponManager, nullptr, "GetCurrentWeapon", nullptr, nullptr, sizeof(GameWeaponManager_eventGetCurrentWeapon_Parms), Z_Construct_UFunction_UGameWeaponManager_GetCurrentWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameWeaponManager_GetCurrentWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameWeaponManager_GetCurrentWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameWeaponManager_GetCurrentWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameWeaponManager_GetCurrentWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameWeaponManager_GetCurrentWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameWeaponManager_GetIsWeapon_Statics
	{
		struct GameWeaponManager_eventGetIsWeapon_Parms
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
	void Z_Construct_UFunction_UGameWeaponManager_GetIsWeapon_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameWeaponManager_eventGetIsWeapon_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameWeaponManager_GetIsWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameWeaponManager_eventGetIsWeapon_Parms), &Z_Construct_UFunction_UGameWeaponManager_GetIsWeapon_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameWeaponManager_GetIsWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameWeaponManager_GetIsWeapon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameWeaponManager_GetIsWeapon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Component/GameWeaponManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameWeaponManager_GetIsWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameWeaponManager, nullptr, "GetIsWeapon", nullptr, nullptr, sizeof(GameWeaponManager_eventGetIsWeapon_Parms), Z_Construct_UFunction_UGameWeaponManager_GetIsWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameWeaponManager_GetIsWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameWeaponManager_GetIsWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameWeaponManager_GetIsWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameWeaponManager_GetIsWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameWeaponManager_GetIsWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameWeaponManager_OnRep_CurentWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameWeaponManager_OnRep_CurentWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Component/GameWeaponManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameWeaponManager_OnRep_CurentWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameWeaponManager, nullptr, "OnRep_CurentWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameWeaponManager_OnRep_CurentWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameWeaponManager_OnRep_CurentWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameWeaponManager_OnRep_CurentWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameWeaponManager_OnRep_CurentWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameWeaponManager_Specific_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameWeaponManager_Specific_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Component/GameWeaponManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameWeaponManager_Specific_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameWeaponManager, nullptr, "Specific", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameWeaponManager_Specific_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameWeaponManager_Specific_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameWeaponManager_Specific()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameWeaponManager_Specific_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameWeaponManager_StopFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameWeaponManager_StopFire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Component/GameWeaponManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameWeaponManager_StopFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameWeaponManager, nullptr, "StopFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameWeaponManager_StopFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameWeaponManager_StopFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameWeaponManager_StopFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameWeaponManager_StopFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameWeaponManager_StopSpecific_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameWeaponManager_StopSpecific_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Component/GameWeaponManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameWeaponManager_StopSpecific_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameWeaponManager, nullptr, "StopSpecific", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameWeaponManager_StopSpecific_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameWeaponManager_StopSpecific_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameWeaponManager_StopSpecific()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameWeaponManager_StopSpecific_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameWeaponManager_NoRegister()
	{
		return UGameWeaponManager::StaticClass();
	}
	struct Z_Construct_UClass_UGameWeaponManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponSoccets_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_WeaponSoccets;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WeaponSoccets_Key_KeyProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WeaponSoccets_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsWeapon_MetaData[];
#endif
		static void NewProp_bIsWeapon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameWeaponManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponManager,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameWeaponManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameWeaponManager_CreateWeapon, "CreateWeapon" }, // 83373283
		{ &Z_Construct_UFunction_UGameWeaponManager_Fire, "Fire" }, // 3742754416
		{ &Z_Construct_UFunction_UGameWeaponManager_GetCurrentWeapon, "GetCurrentWeapon" }, // 3165591886
		{ &Z_Construct_UFunction_UGameWeaponManager_GetIsWeapon, "GetIsWeapon" }, // 8431665
		{ &Z_Construct_UFunction_UGameWeaponManager_OnRep_CurentWeapon, "OnRep_CurentWeapon" }, // 1180116100
		{ &Z_Construct_UFunction_UGameWeaponManager_Specific, "Specific" }, // 463159753
		{ &Z_Construct_UFunction_UGameWeaponManager_StopFire, "StopFire" }, // 3399885722
		{ &Z_Construct_UFunction_UGameWeaponManager_StopSpecific, "StopSpecific" }, // 2375488858
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameWeaponManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Component/GameWeaponManager.h" },
		{ "ModuleRelativePath", "Component/GameWeaponManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameWeaponManager_Statics::NewProp_WeaponSoccets_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapon Setting" },
		{ "ModuleRelativePath", "Component/GameWeaponManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGameWeaponManager_Statics::NewProp_WeaponSoccets = { "WeaponSoccets", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameWeaponManager, WeaponSoccets), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameWeaponManager_Statics::NewProp_WeaponSoccets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameWeaponManager_Statics::NewProp_WeaponSoccets_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGameWeaponManager_Statics::NewProp_WeaponSoccets_Key_KeyProp = { "WeaponSoccets_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_WeaponManager_EWeaponType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGameWeaponManager_Statics::NewProp_WeaponSoccets_ValueProp = { "WeaponSoccets", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameWeaponManager_Statics::NewProp_CurrentWeapon_MetaData[] = {
		{ "ModuleRelativePath", "Component/GameWeaponManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameWeaponManager_Statics::NewProp_CurrentWeapon = { "CurrentWeapon", "OnRep_CurentWeapon", (EPropertyFlags)0x0020080100000020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameWeaponManager, CurrentWeapon), Z_Construct_UClass_ABaseWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameWeaponManager_Statics::NewProp_CurrentWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameWeaponManager_Statics::NewProp_CurrentWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameWeaponManager_Statics::NewProp_bIsWeapon_MetaData[] = {
		{ "ModuleRelativePath", "Component/GameWeaponManager.h" },
	};
#endif
	void Z_Construct_UClass_UGameWeaponManager_Statics::NewProp_bIsWeapon_SetBit(void* Obj)
	{
		((UGameWeaponManager*)Obj)->bIsWeapon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameWeaponManager_Statics::NewProp_bIsWeapon = { "bIsWeapon", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGameWeaponManager), &Z_Construct_UClass_UGameWeaponManager_Statics::NewProp_bIsWeapon_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameWeaponManager_Statics::NewProp_bIsWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameWeaponManager_Statics::NewProp_bIsWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameWeaponManager_Statics::NewProp_Player_MetaData[] = {
		{ "ModuleRelativePath", "Component/GameWeaponManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameWeaponManager_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameWeaponManager, Player), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameWeaponManager_Statics::NewProp_Player_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameWeaponManager_Statics::NewProp_Player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameWeaponManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameWeaponManager_Statics::NewProp_WeaponSoccets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameWeaponManager_Statics::NewProp_WeaponSoccets_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameWeaponManager_Statics::NewProp_WeaponSoccets_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameWeaponManager_Statics::NewProp_CurrentWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameWeaponManager_Statics::NewProp_bIsWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameWeaponManager_Statics::NewProp_Player,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameWeaponManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameWeaponManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameWeaponManager_Statics::ClassParams = {
		&UGameWeaponManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameWeaponManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameWeaponManager_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGameWeaponManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameWeaponManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameWeaponManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameWeaponManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameWeaponManager, 4275788947);
	template<> WEAPONMANAGER_API UClass* StaticClass<UGameWeaponManager>()
	{
		return UGameWeaponManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameWeaponManager(Z_Construct_UClass_UGameWeaponManager, &UGameWeaponManager::StaticClass, TEXT("/Script/WeaponManager"), TEXT("UGameWeaponManager"), false, nullptr, nullptr, nullptr);

	void UGameWeaponManager::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Player(TEXT("Player"));
		static const FName Name_bIsWeapon(TEXT("bIsWeapon"));
		static const FName Name_CurrentWeapon(TEXT("CurrentWeapon"));

		const bool bIsValid = true
			&& Name_Player == ClassReps[(int32)ENetFields_Private::Player].Property->GetFName()
			&& Name_bIsWeapon == ClassReps[(int32)ENetFields_Private::bIsWeapon].Property->GetFName()
			&& Name_CurrentWeapon == ClassReps[(int32)ENetFields_Private::CurrentWeapon].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UGameWeaponManager"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameWeaponManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
