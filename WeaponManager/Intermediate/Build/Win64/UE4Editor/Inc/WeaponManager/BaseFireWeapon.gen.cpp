// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponManager/Weapons/BaseFireWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseFireWeapon() {}
// Cross Module References
	WEAPONMANAGER_API UClass* Z_Construct_UClass_ABaseFireWeapon_NoRegister();
	WEAPONMANAGER_API UClass* Z_Construct_UClass_ABaseFireWeapon();
	WEAPONMANAGER_API UClass* Z_Construct_UClass_ABaseWeapon();
	UPackage* Z_Construct_UPackage__Script_WeaponManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABaseFireWeapon::execDamageWeapon)
	{
		P_GET_OBJECT(AActor,Z_Param_DamageActor);
		P_GET_STRUCT(FVector,Z_Param_HitLocation);
		P_GET_STRUCT(FHitResult,Z_Param_HitInfo);
		P_GET_OBJECT(AController,Z_Param_InstigatorController);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DamageWeapon_Implementation(Z_Param_DamageActor,Z_Param_HitLocation,Z_Param_HitInfo,Z_Param_InstigatorController,Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseFireWeapon::execTraceFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TraceFire_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_ABaseFireWeapon_DamageWeapon = FName(TEXT("DamageWeapon"));
	void ABaseFireWeapon::DamageWeapon(AActor* DamageActor, FVector HitLocation, FHitResult HitInfo, AController* InstigatorController, AActor* DamageCauser)
	{
		BaseFireWeapon_eventDamageWeapon_Parms Parms;
		Parms.DamageActor=DamageActor;
		Parms.HitLocation=HitLocation;
		Parms.HitInfo=HitInfo;
		Parms.InstigatorController=InstigatorController;
		Parms.DamageCauser=DamageCauser;
		ProcessEvent(FindFunctionChecked(NAME_ABaseFireWeapon_DamageWeapon),&Parms);
	}
	static FName NAME_ABaseFireWeapon_TraceFire = FName(TEXT("TraceFire"));
	void ABaseFireWeapon::TraceFire()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABaseFireWeapon_TraceFire),NULL);
	}
	void ABaseFireWeapon::StaticRegisterNativesABaseFireWeapon()
	{
		UClass* Class = ABaseFireWeapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DamageWeapon", &ABaseFireWeapon::execDamageWeapon },
			{ "TraceFire", &ABaseFireWeapon::execTraceFire },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseFireWeapon_DamageWeapon_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatorController;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitInfo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitLocation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseFireWeapon_DamageWeapon_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseFireWeapon_eventDamageWeapon_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseFireWeapon_DamageWeapon_Statics::NewProp_InstigatorController = { "InstigatorController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseFireWeapon_eventDamageWeapon_Parms, InstigatorController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseFireWeapon_DamageWeapon_Statics::NewProp_HitInfo = { "HitInfo", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseFireWeapon_eventDamageWeapon_Parms, HitInfo), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseFireWeapon_DamageWeapon_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseFireWeapon_eventDamageWeapon_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseFireWeapon_DamageWeapon_Statics::NewProp_DamageActor = { "DamageActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseFireWeapon_eventDamageWeapon_Parms, DamageActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseFireWeapon_DamageWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseFireWeapon_DamageWeapon_Statics::NewProp_DamageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseFireWeapon_DamageWeapon_Statics::NewProp_InstigatorController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseFireWeapon_DamageWeapon_Statics::NewProp_HitInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseFireWeapon_DamageWeapon_Statics::NewProp_HitLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseFireWeapon_DamageWeapon_Statics::NewProp_DamageActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseFireWeapon_DamageWeapon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Weapons/BaseFireWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseFireWeapon_DamageWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseFireWeapon, nullptr, "DamageWeapon", nullptr, nullptr, sizeof(BaseFireWeapon_eventDamageWeapon_Parms), Z_Construct_UFunction_ABaseFireWeapon_DamageWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseFireWeapon_DamageWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04A80CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseFireWeapon_DamageWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseFireWeapon_DamageWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseFireWeapon_DamageWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseFireWeapon_DamageWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseFireWeapon_TraceFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseFireWeapon_TraceFire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Weapons/BaseFireWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseFireWeapon_TraceFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseFireWeapon, nullptr, "TraceFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseFireWeapon_TraceFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseFireWeapon_TraceFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseFireWeapon_TraceFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseFireWeapon_TraceFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABaseFireWeapon_NoRegister()
	{
		return ABaseFireWeapon::StaticClass();
	}
	struct Z_Construct_UClass_ABaseFireWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceLenge_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceLenge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceVisible_MetaData[];
#endif
		static void NewProp_TraceVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TraceVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponArrow_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponArrow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseFireWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponManager,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseFireWeapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseFireWeapon_DamageWeapon, "DamageWeapon" }, // 4028930594
		{ &Z_Construct_UFunction_ABaseFireWeapon_TraceFire, "TraceFire" }, // 3131357099
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseFireWeapon_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weapons/BaseFireWeapon.h" },
		{ "ModuleRelativePath", "Weapons/BaseFireWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseFireWeapon_Statics::NewProp_AimTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapon Fire Setting" },
		{ "ModuleRelativePath", "Weapons/BaseFireWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseFireWeapon_Statics::NewProp_AimTime = { "AimTime", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseFireWeapon, AimTime), METADATA_PARAMS(Z_Construct_UClass_ABaseFireWeapon_Statics::NewProp_AimTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseFireWeapon_Statics::NewProp_AimTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseFireWeapon_Statics::NewProp_TraceLenge_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapon Fire Setting" },
		{ "ModuleRelativePath", "Weapons/BaseFireWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseFireWeapon_Statics::NewProp_TraceLenge = { "TraceLenge", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseFireWeapon, TraceLenge), METADATA_PARAMS(Z_Construct_UClass_ABaseFireWeapon_Statics::NewProp_TraceLenge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseFireWeapon_Statics::NewProp_TraceLenge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseFireWeapon_Statics::NewProp_TraceVisible_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapon Fire Setting" },
		{ "ModuleRelativePath", "Weapons/BaseFireWeapon.h" },
	};
#endif
	void Z_Construct_UClass_ABaseFireWeapon_Statics::NewProp_TraceVisible_SetBit(void* Obj)
	{
		((ABaseFireWeapon*)Obj)->TraceVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseFireWeapon_Statics::NewProp_TraceVisible = { "TraceVisible", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseFireWeapon), &Z_Construct_UClass_ABaseFireWeapon_Statics::NewProp_TraceVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseFireWeapon_Statics::NewProp_TraceVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseFireWeapon_Statics::NewProp_TraceVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseFireWeapon_Statics::NewProp_WeaponArrow_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapon Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/BaseFireWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseFireWeapon_Statics::NewProp_WeaponArrow = { "WeaponArrow", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseFireWeapon, WeaponArrow), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseFireWeapon_Statics::NewProp_WeaponArrow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseFireWeapon_Statics::NewProp_WeaponArrow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseFireWeapon_Statics::NewProp_WeaponMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapon Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/BaseFireWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseFireWeapon_Statics::NewProp_WeaponMesh = { "WeaponMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseFireWeapon, WeaponMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseFireWeapon_Statics::NewProp_WeaponMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseFireWeapon_Statics::NewProp_WeaponMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseFireWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseFireWeapon_Statics::NewProp_AimTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseFireWeapon_Statics::NewProp_TraceLenge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseFireWeapon_Statics::NewProp_TraceVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseFireWeapon_Statics::NewProp_WeaponArrow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseFireWeapon_Statics::NewProp_WeaponMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseFireWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseFireWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseFireWeapon_Statics::ClassParams = {
		&ABaseFireWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaseFireWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseFireWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseFireWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseFireWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseFireWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseFireWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseFireWeapon, 2437051078);
	template<> WEAPONMANAGER_API UClass* StaticClass<ABaseFireWeapon>()
	{
		return ABaseFireWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseFireWeapon(Z_Construct_UClass_ABaseFireWeapon, &ABaseFireWeapon::StaticClass, TEXT("/Script/WeaponManager"), TEXT("ABaseFireWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseFireWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
