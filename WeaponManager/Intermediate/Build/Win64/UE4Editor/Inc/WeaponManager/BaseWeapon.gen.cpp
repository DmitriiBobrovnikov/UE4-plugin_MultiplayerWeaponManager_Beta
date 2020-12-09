// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponManager/Weapons/BaseWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseWeapon() {}
// Cross Module References
	WEAPONMANAGER_API UClass* Z_Construct_UClass_ABaseWeapon_NoRegister();
	WEAPONMANAGER_API UClass* Z_Construct_UClass_ABaseWeapon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_WeaponManager();
	WEAPONMANAGER_API UEnum* Z_Construct_UEnum_WeaponManager_EWeaponType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
// End Cross Module References
	DEFINE_FUNCTION(ABaseWeapon::execGetWeaponType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EWeaponType>*)Z_Param__Result=P_THIS->GetWeaponType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseWeapon::execGetIsFight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsFight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseWeapon::execStopUseSpecificals)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopUseSpecificals_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseWeapon::execUseSpecificals)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UseSpecificals_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseWeapon::execStopUseWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopUseWeapon_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseWeapon::execUseWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UseWeapon_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_ABaseWeapon_StopUseSpecificals = FName(TEXT("StopUseSpecificals"));
	void ABaseWeapon::StopUseSpecificals()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABaseWeapon_StopUseSpecificals),NULL);
	}
	static FName NAME_ABaseWeapon_StopUseWeapon = FName(TEXT("StopUseWeapon"));
	void ABaseWeapon::StopUseWeapon()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABaseWeapon_StopUseWeapon),NULL);
	}
	static FName NAME_ABaseWeapon_UseSpecificals = FName(TEXT("UseSpecificals"));
	void ABaseWeapon::UseSpecificals()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABaseWeapon_UseSpecificals),NULL);
	}
	static FName NAME_ABaseWeapon_UseWeapon = FName(TEXT("UseWeapon"));
	void ABaseWeapon::UseWeapon()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABaseWeapon_UseWeapon),NULL);
	}
	void ABaseWeapon::StaticRegisterNativesABaseWeapon()
	{
		UClass* Class = ABaseWeapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIsFight", &ABaseWeapon::execGetIsFight },
			{ "GetWeaponType", &ABaseWeapon::execGetWeaponType },
			{ "StopUseSpecificals", &ABaseWeapon::execStopUseSpecificals },
			{ "StopUseWeapon", &ABaseWeapon::execStopUseWeapon },
			{ "UseSpecificals", &ABaseWeapon::execUseSpecificals },
			{ "UseWeapon", &ABaseWeapon::execUseWeapon },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseWeapon_GetIsFight_Statics
	{
		struct BaseWeapon_eventGetIsFight_Parms
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
	void Z_Construct_UFunction_ABaseWeapon_GetIsFight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseWeapon_eventGetIsFight_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseWeapon_GetIsFight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseWeapon_eventGetIsFight_Parms), &Z_Construct_UFunction_ABaseWeapon_GetIsFight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseWeapon_GetIsFight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseWeapon_GetIsFight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseWeapon_GetIsFight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Weapons/BaseWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseWeapon_GetIsFight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseWeapon, nullptr, "GetIsFight", nullptr, nullptr, sizeof(BaseWeapon_eventGetIsFight_Parms), Z_Construct_UFunction_ABaseWeapon_GetIsFight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseWeapon_GetIsFight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseWeapon_GetIsFight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseWeapon_GetIsFight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseWeapon_GetIsFight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseWeapon_GetIsFight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseWeapon_GetWeaponType_Statics
	{
		struct BaseWeapon_eventGetWeaponType_Parms
		{
			TEnumAsByte<EWeaponType> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ABaseWeapon_GetWeaponType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseWeapon_eventGetWeaponType_Parms, ReturnValue), Z_Construct_UEnum_WeaponManager_EWeaponType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseWeapon_GetWeaponType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseWeapon_GetWeaponType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseWeapon_GetWeaponType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Weapons/BaseWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseWeapon_GetWeaponType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseWeapon, nullptr, "GetWeaponType", nullptr, nullptr, sizeof(BaseWeapon_eventGetWeaponType_Parms), Z_Construct_UFunction_ABaseWeapon_GetWeaponType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseWeapon_GetWeaponType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseWeapon_GetWeaponType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseWeapon_GetWeaponType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseWeapon_GetWeaponType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseWeapon_GetWeaponType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseWeapon_StopUseSpecificals_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseWeapon_StopUseSpecificals_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "EndSpecifical" },
		{ "ModuleRelativePath", "Weapons/BaseWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseWeapon_StopUseSpecificals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseWeapon, nullptr, "StopUseSpecificals", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseWeapon_StopUseSpecificals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseWeapon_StopUseSpecificals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseWeapon_StopUseSpecificals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseWeapon_StopUseSpecificals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseWeapon_StopUseWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseWeapon_StopUseWeapon_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "EndFire" },
		{ "ModuleRelativePath", "Weapons/BaseWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseWeapon_StopUseWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseWeapon, nullptr, "StopUseWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseWeapon_StopUseWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseWeapon_StopUseWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseWeapon_StopUseWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseWeapon_StopUseWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseWeapon_UseSpecificals_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseWeapon_UseSpecificals_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "Specifical" },
		{ "ModuleRelativePath", "Weapons/BaseWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseWeapon_UseSpecificals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseWeapon, nullptr, "UseSpecificals", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseWeapon_UseSpecificals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseWeapon_UseSpecificals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseWeapon_UseSpecificals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseWeapon_UseSpecificals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseWeapon_UseWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseWeapon_UseWeapon_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "Fire" },
		{ "ModuleRelativePath", "Weapons/BaseWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseWeapon_UseWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseWeapon, nullptr, "UseWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseWeapon_UseWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseWeapon_UseWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseWeapon_UseWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseWeapon_UseWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABaseWeapon_NoRegister()
	{
		return ABaseWeapon::StaticClass();
	}
	struct Z_Construct_UClass_ABaseWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoolDownTimeFightReset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CoolDownTimeFightReset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoolDownTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CoolDownTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WeaponType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsUseDataTable_MetaData[];
#endif
		static void NewProp_bIsUseDataTable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsUseDataTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponManager,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseWeapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseWeapon_GetIsFight, "GetIsFight" }, // 1702036888
		{ &Z_Construct_UFunction_ABaseWeapon_GetWeaponType, "GetWeaponType" }, // 3136743458
		{ &Z_Construct_UFunction_ABaseWeapon_StopUseSpecificals, "StopUseSpecificals" }, // 370473548
		{ &Z_Construct_UFunction_ABaseWeapon_StopUseWeapon, "StopUseWeapon" }, // 1261115544
		{ &Z_Construct_UFunction_ABaseWeapon_UseSpecificals, "UseSpecificals" }, // 998157830
		{ &Z_Construct_UFunction_ABaseWeapon_UseWeapon, "UseWeapon" }, // 3314524659
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapons/BaseWeapon.h" },
		{ "ModuleRelativePath", "Weapons/BaseWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWeapon_Statics::NewProp_CurrentAmmo_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapon Setting" },
		{ "EditCondition", "!bIsUseDataTable" },
		{ "ModuleRelativePath", "Weapons/BaseWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_CurrentAmmo = { "CurrentAmmo", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseWeapon, CurrentAmmo), METADATA_PARAMS(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_CurrentAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_CurrentAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWeapon_Statics::NewProp_Damage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapon Setting" },
		{ "EditCondition", "!bIsUseDataTable" },
		{ "ModuleRelativePath", "Weapons/BaseWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseWeapon, Damage), METADATA_PARAMS(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWeapon_Statics::NewProp_CoolDownTimeFightReset_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapon Setting" },
		{ "ModuleRelativePath", "Weapons/BaseWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_CoolDownTimeFightReset = { "CoolDownTimeFightReset", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseWeapon, CoolDownTimeFightReset), METADATA_PARAMS(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_CoolDownTimeFightReset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_CoolDownTimeFightReset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWeapon_Statics::NewProp_CoolDownTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapon Setting" },
		{ "EditCondition", "!bIsUseDataTable" },
		{ "ModuleRelativePath", "Weapons/BaseWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_CoolDownTime = { "CoolDownTime", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseWeapon, CoolDownTime), METADATA_PARAMS(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_CoolDownTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_CoolDownTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWeapon_Statics::NewProp_WeaponType_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapon Setting" },
		{ "EditCondition", "!bIsUseDataTable" },
		{ "ModuleRelativePath", "Weapons/BaseWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_WeaponType = { "WeaponType", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseWeapon, WeaponType), Z_Construct_UEnum_WeaponManager_EWeaponType, METADATA_PARAMS(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_WeaponType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_WeaponType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWeapon_Statics::NewProp_WeaponData_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapon Setting" },
		{ "EditCondition", "bIsUseDataTable" },
		{ "ModuleRelativePath", "Weapons/BaseWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_WeaponData = { "WeaponData", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseWeapon, WeaponData), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_WeaponData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_WeaponData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWeapon_Statics::NewProp_bIsUseDataTable_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapon Setting" },
		{ "ModuleRelativePath", "Weapons/BaseWeapon.h" },
	};
#endif
	void Z_Construct_UClass_ABaseWeapon_Statics::NewProp_bIsUseDataTable_SetBit(void* Obj)
	{
		((ABaseWeapon*)Obj)->bIsUseDataTable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_bIsUseDataTable = { "bIsUseDataTable", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseWeapon), &Z_Construct_UClass_ABaseWeapon_Statics::NewProp_bIsUseDataTable_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_bIsUseDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_bIsUseDataTable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_CurrentAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_CoolDownTimeFightReset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_CoolDownTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_WeaponType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_WeaponData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_bIsUseDataTable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseWeapon_Statics::ClassParams = {
		&ABaseWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaseWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseWeapon, 3480175212);
	template<> WEAPONMANAGER_API UClass* StaticClass<ABaseWeapon>()
	{
		return ABaseWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseWeapon(Z_Construct_UClass_ABaseWeapon, &ABaseWeapon::StaticClass, TEXT("/Script/WeaponManager"), TEXT("ABaseWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
