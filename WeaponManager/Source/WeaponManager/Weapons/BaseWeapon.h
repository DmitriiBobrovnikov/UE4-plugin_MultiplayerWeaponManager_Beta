// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "../Enums/WeaponEnums.h"
#include "Engine/DataTable.h"
#include "BaseWeapon.generated.h"

UCLASS()
class WEAPONMANAGER_API ABaseWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseWeapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, category = "Weapon Setting", meta = (AllowPrivateAccess = "true"))
	bool bIsUseDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, category = "Weapon Setting", meta = (AllowPrivateAccess = "true", EditCondition = "bIsUseDataTable"))
	FDataTableRowHandle WeaponData;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, category = "Weapon Setting", meta = (AllowPrivateAccess = "true", EditCondition = "!bIsUseDataTable"))
	TEnumAsByte<EWeaponType> WeaponType;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, category = "Weapon Setting", meta = (AllowPrivateAccess = "true", EditCondition = "!bIsUseDataTable"))
	float CoolDownTime;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, category = "Weapon Setting", meta = (AllowPrivateAccess = "true"))
	float CoolDownTimeFightReset;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, category = "Weapon Setting", meta = (AllowPrivateAccess = "true", EditCondition = "!bIsUseDataTable"))
	float Damage;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, category = "Weapon Setting", meta = (AllowPrivateAccess = "true", EditCondition = "!bIsUseDataTable"))
	int CurrentAmmo = 150;

#pragma region Weapon Setting


	bool WeaponActive;
	bool bIsUseWeapon;
	bool bIsCoolDown;
	bool bAutoUseWeapon;
	bool bIsSpecificals;
	bool bIsFight;


#pragma endregion

#pragma region TimerHandle

	FTimerHandle TimeHandleCoolDown;
	FTimerHandle TimeHandleFightCoolDown;

#pragma endregion

public:

#pragma region Virtual Function Use Weapon

	UFUNCTION(BlueprintNativeEvent, meta = (DisplayName = "Fire"))
	void UseWeapon();
	virtual void UseWeapon_Implementation();

	UFUNCTION(BlueprintNativeEvent, meta = (DisplayName = "EndFire"))
	void StopUseWeapon();
	virtual void StopUseWeapon_Implementation();

	UFUNCTION(BlueprintNativeEvent, meta = (DisplayName = "Specifical"))
	void UseSpecificals();
	virtual void UseSpecificals_Implementation();

	UFUNCTION(BlueprintNativeEvent, meta = (DisplayName = "EndSpecifical"))
	void StopUseSpecificals();
	virtual void StopUseSpecificals_Implementation();

	//UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "Fire"))
	//void ReciveUseWeapon();

	//UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "StopFire"))
	//void ReciveStopUseWeapon();



	virtual void Reload();

	void CoolDown();
	void CoolDownEndFight();

#pragma endregion 


	bool CanUsableWeapon() { return (CurrentAmmo > 0 && !bIsCoolDown); };

	UFUNCTION(BlueprintPure, Category = "Weapon")
	FORCEINLINE bool GetIsFight() { return bIsFight; };

	UFUNCTION(BlueprintPure, Category = "Weapon")
	EWeaponType GetWeaponType() { return WeaponType; };
};
