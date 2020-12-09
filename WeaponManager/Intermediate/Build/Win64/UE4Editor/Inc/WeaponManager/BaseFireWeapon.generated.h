// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FVector;
struct FHitResult;
class AController;
#ifdef WEAPONMANAGER_BaseFireWeapon_generated_h
#error "BaseFireWeapon.generated.h already included, missing '#pragma once' in BaseFireWeapon.h"
#endif
#define WEAPONMANAGER_BaseFireWeapon_generated_h

#define GamePugin_Plugins_WeaponManager_Source_WeaponManager_Weapons_BaseFireWeapon_h_15_SPARSE_DATA
#define GamePugin_Plugins_WeaponManager_Source_WeaponManager_Weapons_BaseFireWeapon_h_15_RPC_WRAPPERS \
	virtual void DamageWeapon_Implementation(AActor* DamageActor, FVector HitLocation, FHitResult HitInfo, AController* InstigatorController, AActor* DamageCauser); \
	virtual void TraceFire_Implementation(); \
 \
	DECLARE_FUNCTION(execDamageWeapon); \
	DECLARE_FUNCTION(execTraceFire);


#define GamePugin_Plugins_WeaponManager_Source_WeaponManager_Weapons_BaseFireWeapon_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDamageWeapon); \
	DECLARE_FUNCTION(execTraceFire);


#define GamePugin_Plugins_WeaponManager_Source_WeaponManager_Weapons_BaseFireWeapon_h_15_EVENT_PARMS \
	struct BaseFireWeapon_eventDamageWeapon_Parms \
	{ \
		AActor* DamageActor; \
		FVector HitLocation; \
		FHitResult HitInfo; \
		AController* InstigatorController; \
		AActor* DamageCauser; \
	};


#define GamePugin_Plugins_WeaponManager_Source_WeaponManager_Weapons_BaseFireWeapon_h_15_CALLBACK_WRAPPERS
#define GamePugin_Plugins_WeaponManager_Source_WeaponManager_Weapons_BaseFireWeapon_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseFireWeapon(); \
	friend struct Z_Construct_UClass_ABaseFireWeapon_Statics; \
public: \
	DECLARE_CLASS(ABaseFireWeapon, ABaseWeapon, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponManager"), NO_API) \
	DECLARE_SERIALIZER(ABaseFireWeapon)


#define GamePugin_Plugins_WeaponManager_Source_WeaponManager_Weapons_BaseFireWeapon_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABaseFireWeapon(); \
	friend struct Z_Construct_UClass_ABaseFireWeapon_Statics; \
public: \
	DECLARE_CLASS(ABaseFireWeapon, ABaseWeapon, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponManager"), NO_API) \
	DECLARE_SERIALIZER(ABaseFireWeapon)


#define GamePugin_Plugins_WeaponManager_Source_WeaponManager_Weapons_BaseFireWeapon_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseFireWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseFireWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseFireWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseFireWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseFireWeapon(ABaseFireWeapon&&); \
	NO_API ABaseFireWeapon(const ABaseFireWeapon&); \
public:


#define GamePugin_Plugins_WeaponManager_Source_WeaponManager_Weapons_BaseFireWeapon_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseFireWeapon(ABaseFireWeapon&&); \
	NO_API ABaseFireWeapon(const ABaseFireWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseFireWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseFireWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseFireWeapon)


#define GamePugin_Plugins_WeaponManager_Source_WeaponManager_Weapons_BaseFireWeapon_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WeaponMesh() { return STRUCT_OFFSET(ABaseFireWeapon, WeaponMesh); } \
	FORCEINLINE static uint32 __PPO__WeaponArrow() { return STRUCT_OFFSET(ABaseFireWeapon, WeaponArrow); } \
	FORCEINLINE static uint32 __PPO__TraceVisible() { return STRUCT_OFFSET(ABaseFireWeapon, TraceVisible); } \
	FORCEINLINE static uint32 __PPO__TraceLenge() { return STRUCT_OFFSET(ABaseFireWeapon, TraceLenge); } \
	FORCEINLINE static uint32 __PPO__AimTime() { return STRUCT_OFFSET(ABaseFireWeapon, AimTime); }


#define GamePugin_Plugins_WeaponManager_Source_WeaponManager_Weapons_BaseFireWeapon_h_12_PROLOG \
	GamePugin_Plugins_WeaponManager_Source_WeaponManager_Weapons_BaseFireWeapon_h_15_EVENT_PARMS


#define GamePugin_Plugins_WeaponManager_Source_WeaponManager_Weapons_BaseFireWeapon_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GamePugin_Plugins_WeaponManager_Source_WeaponManager_Weapons_BaseFireWeapon_h_15_PRIVATE_PROPERTY_OFFSET \
	GamePugin_Plugins_WeaponManager_Source_WeaponManager_Weapons_BaseFireWeapon_h_15_SPARSE_DATA \
	GamePugin_Plugins_WeaponManager_Source_WeaponManager_Weapons_BaseFireWeapon_h_15_RPC_WRAPPERS \
	GamePugin_Plugins_WeaponManager_Source_WeaponManager_Weapons_BaseFireWeapon_h_15_CALLBACK_WRAPPERS \
	GamePugin_Plugins_WeaponManager_Source_WeaponManager_Weapons_BaseFireWeapon_h_15_INCLASS \
	GamePugin_Plugins_WeaponManager_Source_WeaponManager_Weapons_BaseFireWeapon_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GamePugin_Plugins_WeaponManager_Source_WeaponManager_Weapons_BaseFireWeapon_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GamePugin_Plugins_WeaponManager_Source_WeaponManager_Weapons_BaseFireWeapon_h_15_PRIVATE_PROPERTY_OFFSET \
	GamePugin_Plugins_WeaponManager_Source_WeaponManager_Weapons_BaseFireWeapon_h_15_SPARSE_DATA \
	GamePugin_Plugins_WeaponManager_Source_WeaponManager_Weapons_BaseFireWeapon_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	GamePugin_Plugins_WeaponManager_Source_WeaponManager_Weapons_BaseFireWeapon_h_15_CALLBACK_WRAPPERS \
	GamePugin_Plugins_WeaponManager_Source_WeaponManager_Weapons_BaseFireWeapon_h_15_INCLASS_NO_PURE_DECLS \
	GamePugin_Plugins_WeaponManager_Source_WeaponManager_Weapons_BaseFireWeapon_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONMANAGER_API UClass* StaticClass<class ABaseFireWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GamePugin_Plugins_WeaponManager_Source_WeaponManager_Weapons_BaseFireWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
