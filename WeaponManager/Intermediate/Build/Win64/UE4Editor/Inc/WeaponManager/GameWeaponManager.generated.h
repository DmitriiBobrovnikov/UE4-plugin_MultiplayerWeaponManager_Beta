// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ABaseWeapon;
#ifdef WEAPONMANAGER_GameWeaponManager_generated_h
#error "GameWeaponManager.generated.h already included, missing '#pragma once' in GameWeaponManager.h"
#endif
#define WEAPONMANAGER_GameWeaponManager_generated_h

#define GamePugin_Plugins_WeaponManager_Source_WeaponManager_Component_GameWeaponManager_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeapon_Statics; \
	WEAPONMANAGER_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> WEAPONMANAGER_API UScriptStruct* StaticStruct<struct FWeapon>();

#define GamePugin_Plugins_WeaponManager_Source_WeaponManager_Component_GameWeaponManager_h_35_SPARSE_DATA
#define GamePugin_Plugins_WeaponManager_Source_WeaponManager_Component_GameWeaponManager_h_35_RPC_WRAPPERS \
	virtual void StopSpecific_Implementation(); \
	virtual void Specific_Implementation(); \
	virtual void StopFire_Implementation(); \
	virtual void Fire_Implementation(); \
	virtual void CreateWeapon_Implementation(TSubclassOf<ABaseWeapon>  WeapoClass); \
 \
	DECLARE_FUNCTION(execGetIsWeapon); \
	DECLARE_FUNCTION(execGetCurrentWeapon); \
	DECLARE_FUNCTION(execStopSpecific); \
	DECLARE_FUNCTION(execSpecific); \
	DECLARE_FUNCTION(execStopFire); \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execCreateWeapon); \
	DECLARE_FUNCTION(execOnRep_CurentWeapon);


#define GamePugin_Plugins_WeaponManager_Source_WeaponManager_Component_GameWeaponManager_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetIsWeapon); \
	DECLARE_FUNCTION(execGetCurrentWeapon); \
	DECLARE_FUNCTION(execStopSpecific); \
	DECLARE_FUNCTION(execSpecific); \
	DECLARE_FUNCTION(execStopFire); \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execCreateWeapon); \
	DECLARE_FUNCTION(execOnRep_CurentWeapon);


#define GamePugin_Plugins_WeaponManager_Source_WeaponManager_Component_GameWeaponManager_h_35_EVENT_PARMS \
	struct GameWeaponManager_eventCreateWeapon_Parms \
	{ \
		TSubclassOf<ABaseWeapon>  WeapoClass; \
	};


#define GamePugin_Plugins_WeaponManager_Source_WeaponManager_Component_GameWeaponManager_h_35_CALLBACK_WRAPPERS
#define GamePugin_Plugins_WeaponManager_Source_WeaponManager_Component_GameWeaponManager_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameWeaponManager(); \
	friend struct Z_Construct_UClass_UGameWeaponManager_Statics; \
public: \
	DECLARE_CLASS(UGameWeaponManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponManager"), NO_API) \
	DECLARE_SERIALIZER(UGameWeaponManager) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Player=NETFIELD_REP_START, \
		bIsWeapon, \
		CurrentWeapon, \
		NETFIELD_REP_END=CurrentWeapon	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define GamePugin_Plugins_WeaponManager_Source_WeaponManager_Component_GameWeaponManager_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUGameWeaponManager(); \
	friend struct Z_Construct_UClass_UGameWeaponManager_Statics; \
public: \
	DECLARE_CLASS(UGameWeaponManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponManager"), NO_API) \
	DECLARE_SERIALIZER(UGameWeaponManager) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Player=NETFIELD_REP_START, \
		bIsWeapon, \
		CurrentWeapon, \
		NETFIELD_REP_END=CurrentWeapon	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define GamePugin_Plugins_WeaponManager_Source_WeaponManager_Component_GameWeaponManager_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameWeaponManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameWeaponManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameWeaponManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameWeaponManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameWeaponManager(UGameWeaponManager&&); \
	NO_API UGameWeaponManager(const UGameWeaponManager&); \
public:


#define GamePugin_Plugins_WeaponManager_Source_WeaponManager_Component_GameWeaponManager_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameWeaponManager(UGameWeaponManager&&); \
	NO_API UGameWeaponManager(const UGameWeaponManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameWeaponManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameWeaponManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGameWeaponManager)


#define GamePugin_Plugins_WeaponManager_Source_WeaponManager_Component_GameWeaponManager_h_35_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Player() { return STRUCT_OFFSET(UGameWeaponManager, Player); } \
	FORCEINLINE static uint32 __PPO__bIsWeapon() { return STRUCT_OFFSET(UGameWeaponManager, bIsWeapon); } \
	FORCEINLINE static uint32 __PPO__CurrentWeapon() { return STRUCT_OFFSET(UGameWeaponManager, CurrentWeapon); } \
	FORCEINLINE static uint32 __PPO__WeaponSoccets() { return STRUCT_OFFSET(UGameWeaponManager, WeaponSoccets); }


#define GamePugin_Plugins_WeaponManager_Source_WeaponManager_Component_GameWeaponManager_h_32_PROLOG \
	GamePugin_Plugins_WeaponManager_Source_WeaponManager_Component_GameWeaponManager_h_35_EVENT_PARMS


#define GamePugin_Plugins_WeaponManager_Source_WeaponManager_Component_GameWeaponManager_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GamePugin_Plugins_WeaponManager_Source_WeaponManager_Component_GameWeaponManager_h_35_PRIVATE_PROPERTY_OFFSET \
	GamePugin_Plugins_WeaponManager_Source_WeaponManager_Component_GameWeaponManager_h_35_SPARSE_DATA \
	GamePugin_Plugins_WeaponManager_Source_WeaponManager_Component_GameWeaponManager_h_35_RPC_WRAPPERS \
	GamePugin_Plugins_WeaponManager_Source_WeaponManager_Component_GameWeaponManager_h_35_CALLBACK_WRAPPERS \
	GamePugin_Plugins_WeaponManager_Source_WeaponManager_Component_GameWeaponManager_h_35_INCLASS \
	GamePugin_Plugins_WeaponManager_Source_WeaponManager_Component_GameWeaponManager_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GamePugin_Plugins_WeaponManager_Source_WeaponManager_Component_GameWeaponManager_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GamePugin_Plugins_WeaponManager_Source_WeaponManager_Component_GameWeaponManager_h_35_PRIVATE_PROPERTY_OFFSET \
	GamePugin_Plugins_WeaponManager_Source_WeaponManager_Component_GameWeaponManager_h_35_SPARSE_DATA \
	GamePugin_Plugins_WeaponManager_Source_WeaponManager_Component_GameWeaponManager_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	GamePugin_Plugins_WeaponManager_Source_WeaponManager_Component_GameWeaponManager_h_35_CALLBACK_WRAPPERS \
	GamePugin_Plugins_WeaponManager_Source_WeaponManager_Component_GameWeaponManager_h_35_INCLASS_NO_PURE_DECLS \
	GamePugin_Plugins_WeaponManager_Source_WeaponManager_Component_GameWeaponManager_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONMANAGER_API UClass* StaticClass<class UGameWeaponManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GamePugin_Plugins_WeaponManager_Source_WeaponManager_Component_GameWeaponManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
