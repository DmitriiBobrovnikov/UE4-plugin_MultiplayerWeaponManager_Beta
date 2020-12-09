// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"


/**
 * 
 */
UENUM(BlueprintType)
enum EWeaponType
{
	WEAP_NONE UMETA(DisplayName = "None"),
	WEAP_PISTOL UMETA(DisplayName = "Pistol"),
	WEAP_RIFLE UMETA(DisplayName = "Rifle"),
	WEAP_PROJECTILE UMETA(DisplayName = "Projectile"),
};

