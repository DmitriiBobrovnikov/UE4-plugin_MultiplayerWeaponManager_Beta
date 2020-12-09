// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../Weapons/BaseWeapon.h"
#include "BaseFireWeapon.generated.h"

/**
 * 
 */
UCLASS()
class WEAPONMANAGER_API ABaseFireWeapon : public ABaseWeapon
{
	GENERATED_BODY()
	

public:

	ABaseFireWeapon();



protected:

#pragma region Components

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, category = "Weapon Component", meta = (AllowPrivateAccess = "true"))
	class USkeletalMeshComponent* WeaponMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, category = "Weapon Component", meta = (AllowPrivateAccess = "true"))
	class UArrowComponent* WeaponArrow;

#pragma endregion

#pragma region Weapon Settings

	UPROPERTY(EditAnywhere, BlueprintReadOnly, category = "Weapon Fire Setting", meta = (AllowPrivateAccess = "true"))
	bool TraceVisible;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, category = "Weapon Fire Setting", meta = (AllowPrivateAccess = "true"))
	float TraceLenge = 5000.0f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, category = "Weapon Fire Setting", meta = (AllowPrivateAccess = "true"))
	float AimTime = 0.3f;

#pragma endregion


#pragma region Virtual Function Use Weapon

	virtual void UseWeapon_Implementation() override;

	virtual void UseSpecificals_Implementation() override;
	virtual void StopUseSpecificals_Implementation() override;


#pragma endregion 

#pragma region Function Use Weapon
	UFUNCTION(Reliable, Client, BlueprintCallable, Category = "Weapon")
	void TraceFire();
	void TraceFire_Implementation();

	UFUNCTION(Reliable, Server, BlueprintCallable, Category = "Weapon")
	void DamageWeapon(AActor * DamageActor, FVector HitLocation, FHitResult HitInfo, AController * InstigatorController, AActor * DamageCauser);
	void DamageWeapon_Implementation(AActor * DamageActor, FVector HitLocation, FHitResult HitInfo, AController * InstigatorController, AActor * DamageCauser);

#pragma endregion 
};
