// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BaseWeaponCharacter.generated.h"

UCLASS()
class WEAPONMANAGER_API ABaseWeaponCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseWeaponCharacter();

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


protected:

	void ForwardMove(float value);
	void RightMove(float value);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, category = "Character Component", meta = (AllowPrivateAccess = "true"))
	class UGameWeaponManager* WeaponManager;
};
