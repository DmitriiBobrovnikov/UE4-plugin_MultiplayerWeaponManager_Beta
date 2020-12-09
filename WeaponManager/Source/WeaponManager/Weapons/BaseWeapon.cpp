// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseWeapon.h"
#include "../Component/GameWeaponManager.h"

// Sets default values
ABaseWeapon::ABaseWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SetReplicateMovement(true);
	SetReplicates(true);
}

// Called when the game starts or when spawned
void ABaseWeapon::BeginPlay()
{
	Super::BeginPlay();
	
	if (bIsUseDataTable)
	{
		if (WeaponData.DataTable)
		{
			FWeapon* Weapon = WeaponData.DataTable->FindRow<FWeapon>(WeaponData.RowName, "Context", false);

			WeaponType = Weapon->WeaponType;
			Damage = Weapon->Damage;
			CoolDownTime = Weapon->CoolDownTime;
			bAutoUseWeapon = Weapon->bIsAutoFire;

		}
	}
	
}

void ABaseWeapon::UseWeapon_Implementation()
{
	bIsUseWeapon = CanUsableWeapon();
	if (CanUsableWeapon())
	{
		bIsCoolDown = true;
		GetWorld()->GetTimerManager().SetTimer(TimeHandleCoolDown, this, &ABaseWeapon::CoolDown, CoolDownTime, false);
		CurrentAmmo--;
		bIsFight = true;
		if (bAutoUseWeapon)
		{
			WeaponActive = true;
		}
	}
}

void ABaseWeapon::StopUseWeapon_Implementation()
{
	WeaponActive = false;
	GetWorld()->GetTimerManager().SetTimer(TimeHandleFightCoolDown, this, &ABaseWeapon::CoolDownEndFight, CoolDownTimeFightReset, false);
}

void ABaseWeapon::UseSpecificals_Implementation()
{
	bIsFight = true;
}

void ABaseWeapon::StopUseSpecificals_Implementation()
{
	GetWorld()->GetTimerManager().SetTimer(TimeHandleFightCoolDown, this, &ABaseWeapon::CoolDownEndFight, CoolDownTimeFightReset, false);
}

void ABaseWeapon::Reload()
{

}

void ABaseWeapon::CoolDownEndFight()
{
	if (!WeaponActive && !bIsSpecificals)
	{
		bIsFight = false;
	}
}

void ABaseWeapon::CoolDown()
{
	bIsCoolDown = false;
	if (bAutoUseWeapon && WeaponActive)
	{
		UseWeapon();
	}
}

