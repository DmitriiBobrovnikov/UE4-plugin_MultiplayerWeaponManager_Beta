// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WEAPONMANAGER_BaseWeapon_generated_h
#error "BaseWeapon.generated.h already included, missing '#pragma once' in BaseWeapon.h"
#endif
#define WEAPONMANAGER_BaseWeapon_generated_h

#define GamePugin_Plugins_WeaponManager_Source_WeaponManager_Weapons_BaseWeapon_h_14_SPARSE_DATA
#define GamePugin_Plugins_WeaponManager_Source_WeaponManager_Weapons_BaseWeapon_h_14_RPC_WRAPPERS \
	virtual void StopUseSpecificals_Implementation(); \
	virtual void UseSpecificals_Implementation(); \
	virtual void StopUseWeapon_Implementation(); \
	virtual void UseWeapon_Implementation(); \
 \
	DECLARE_FUNCTION(execGetWeaponType); \
	DECLARE_FUNCTION(execGetIsFight); \
	DECLARE_FUNCTION(execStopUseSpecificals); \
	DECLARE_FUNCTION(execUseSpecificals); \
	DECLARE_FUNCTION(execStopUseWeapon); \
	DECLARE_FUNCTION(execUseWeapon);


#define GamePugin_Plugins_WeaponManager_Source_WeaponManager_Weapons_BaseWeapon_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetWeaponType); \
	DECLARE_FUNCTION(execGetIsFight); \
	DECLARE_FUNCTION(execStopUseSpecificals); \
	DECLARE_FUNCTION(execUseSpecificals); \
	DECLARE_FUNCTION(execStopUseWeapon); \
	DECLARE_FUNCTION(execUseWeapon);


#define GamePugin_Plugins_WeaponManager_Source_WeaponManager_Weapons_BaseWeapon_h_14_EVENT_PARMS
#define GamePugin_Plugins_WeaponManager_Source_WeaponManager_Weapons_BaseWeapon_h_14_CALLBACK_WRAPPERS
#define GamePugin_Plugins_WeaponManager_Source_WeaponManager_Weapons_BaseWeapon_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseWeapon(); \
	friend struct Z_Construct_UClass_ABaseWeapon_Statics; \
public: \
	DECLARE_CLASS(ABaseWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponManager"), NO_API) \
	DECLARE_SERIALIZER(ABaseWeapon)


#define GamePugin_Plugins_WeaponManager_Source_WeaponManager_Weapons_BaseWeapon_h_14_INCLASS \
private: \
	static void StaticRegisterNativesABaseWeapon(); \
	friend struct Z_Construct_UClass_ABaseWeapon_Statics; \
public: \
	DECLARE_CLASS(ABaseWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponManager"), NO_API) \
	DECLARE_SERIALIZER(ABaseWeapon)


#define GamePugin_Plugins_WeaponManager_Source_WeaponManager_Weapons_BaseWeapon_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseWeapon(ABaseWeapon&&); \
	NO_API ABaseWeapon(const ABaseWeapon&); \
public:


#define GamePugin_Plugins_WeaponManager_Source_WeaponManager_Weapons_BaseWeapon_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseWeapon(ABaseWeapon&&); \
	NO_API ABaseWeapon(const ABaseWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseWeapon)


#define GamePugin_Plugins_WeaponManager_Source_WeaponManager_Weapons_BaseWeapon_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bIsUseDataTable() { return STRUCT_OFFSET(ABaseWeapon, bIsUseDataTable); } \
	FORCEINLINE static uint32 __PPO__WeaponData() { return STRUCT_OFFSET(ABaseWeapon, WeaponData); } \
	FORCEINLINE static uint32 __PPO__WeaponType() { return STRUCT_OFFSET(ABaseWeapon, WeaponType); } \
	FORCEINLINE static uint32 __PPO__CoolDownTime() { return STRUCT_OFFSET(ABaseWeapon, CoolDownTime); } \
	FORCEINLINE static uint32 __PPO__CoolDownTimeFightReset() { return STRUCT_OFFSET(ABaseWeapon, CoolDownTimeFightReset); } \
	FORCEINLINE static uint32 __PPO__Damage() { return STRUCT_OFFSET(ABaseWeapon, Damage); } \
	FORCEINLINE static uint32 __PPO__CurrentAmmo() { return STRUCT_OFFSET(ABaseWeapon, CurrentAmmo); }


#define GamePugin_Plugins_WeaponManager_Source_WeaponManager_Weapons_BaseWeapon_h_11_PROLOG \
	GamePugin_Plugins_WeaponManager_Source_WeaponManager_Weapons_BaseWeapon_h_14_EVENT_PARMS


#define GamePugin_Plugins_WeaponManager_Source_WeaponManager_Weapons_BaseWeapon_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GamePugin_Plugins_WeaponManager_Source_WeaponManager_Weapons_BaseWeapon_h_14_PRIVATE_PROPERTY_OFFSET \
	GamePugin_Plugins_WeaponManager_Source_WeaponManager_Weapons_BaseWeapon_h_14_SPARSE_DATA \
	GamePugin_Plugins_WeaponManager_Source_WeaponManager_Weapons_BaseWeapon_h_14_RPC_WRAPPERS \
	GamePugin_Plugins_WeaponManager_Source_WeaponManager_Weapons_BaseWeapon_h_14_CALLBACK_WRAPPERS \
	GamePugin_Plugins_WeaponManager_Source_WeaponManager_Weapons_BaseWeapon_h_14_INCLASS \
	GamePugin_Plugins_WeaponManager_Source_WeaponManager_Weapons_BaseWeapon_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GamePugin_Plugins_WeaponManager_Source_WeaponManager_Weapons_BaseWeapon_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GamePugin_Plugins_WeaponManager_Source_WeaponManager_Weapons_BaseWeapon_h_14_PRIVATE_PROPERTY_OFFSET \
	GamePugin_Plugins_WeaponManager_Source_WeaponManager_Weapons_BaseWeapon_h_14_SPARSE_DATA \
	GamePugin_Plugins_WeaponManager_Source_WeaponManager_Weapons_BaseWeapon_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	GamePugin_Plugins_WeaponManager_Source_WeaponManager_Weapons_BaseWeapon_h_14_CALLBACK_WRAPPERS \
	GamePugin_Plugins_WeaponManager_Source_WeaponManager_Weapons_BaseWeapon_h_14_INCLASS_NO_PURE_DECLS \
	GamePugin_Plugins_WeaponManager_Source_WeaponManager_Weapons_BaseWeapon_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONMANAGER_API UClass* StaticClass<class ABaseWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GamePugin_Plugins_WeaponManager_Source_WeaponManager_Weapons_BaseWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
