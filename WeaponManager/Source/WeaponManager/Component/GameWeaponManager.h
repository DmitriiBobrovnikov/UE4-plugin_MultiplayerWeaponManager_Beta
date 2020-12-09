// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "../Weapons/BaseWeapon.h"
#include "../Enums/WeaponEnums.h"
#include "Engine/DataTable.h"
#include "GameWeaponManager.generated.h"

USTRUCT(BlueprintType)
struct FWeapon : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Items")
	TEnumAsByte<EWeaponType> WeaponType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Items")
	float Damage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Items")
	float CoolDownTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Items")
	bool bIsAutoFire;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Items")
	int MagazinAmmo;
};


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class WEAPONMANAGER_API UGameWeaponManager : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UGameWeaponManager();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	/** Replicated Varibals **/
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void SetupPlayerInputComponent(UInputComponent * PlayerInputComponent);

		
protected:

#pragma region Settings Varibals

	UPROPERTY(Replicated)
	class ACharacter* Player;

	UPROPERTY(Replicated)
	bool bIsWeapon;

	UPROPERTY(ReplicatedUsing = OnRep_CurentWeapon)
	ABaseWeapon* CurrentWeapon;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, category = "Weapon Setting", meta = (AllowPrivateAccess = "true"))
	TMap<TEnumAsByte<EWeaponType>, FString> WeaponSoccets;

#pragma endregion 

#pragma region Protected Function

	UFUNCTION()
	void OnRep_CurentWeapon();

#pragma endregion

public:

	//create Weapon 
	UFUNCTION(Reliable, Server, BlueprintCallable, Category = "Weapon")
	void CreateWeapon(TSubclassOf<ABaseWeapon> WeapoClass);
	void CreateWeapon_Implementation(TSubclassOf<ABaseWeapon> WeapoClass);


	UFUNCTION(Reliable, Server, BlueprintCallable, Category = "Weapon")
	void Fire();
	void Fire_Implementation();

	UFUNCTION(Reliable, Server, BlueprintCallable, Category = "Weapon")
	void StopFire();
	void StopFire_Implementation();

	UFUNCTION(Reliable, Server, BlueprintCallable, Category = "Weapon")
	void Specific();
	void Specific_Implementation();

	UFUNCTION(Reliable, Server, BlueprintCallable, Category = "Weapon")
	void StopSpecific();
	void StopSpecific_Implementation();





	UFUNCTION(BlueprintPure, Category = "Weapon")
	FORCEINLINE ABaseWeapon* GetCurrentWeapon() {return CurrentWeapon;};

	UFUNCTION(BlueprintPure, Category = "Weapon")
	FORCEINLINE bool GetIsWeapon() { return bIsWeapon; };

};
