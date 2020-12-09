// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseWeaponCharacter.h"
#include "../Component/GameWeaponManager.h"

// Sets default values
ABaseWeaponCharacter::ABaseWeaponCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	WeaponManager = CreateDefaultSubobject<UGameWeaponManager>("WeaponManager");
}


// Called to bind functionality to input
void ABaseWeaponCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);


	// Movment Character
	PlayerInputComponent->BindAxis("MoveForward", this, &ABaseWeaponCharacter::ForwardMove);
	PlayerInputComponent->BindAxis("MoveRight", this, &ABaseWeaponCharacter::RightMove);

	// Camera Control
	PlayerInputComponent->BindAxis("Turn", this, &ABaseWeaponCharacter::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &ABaseWeaponCharacter::AddControllerPitchInput);

	if (WeaponManager)
	{
		WeaponManager->SetupPlayerInputComponent(PlayerInputComponent);
	}
}

void ABaseWeaponCharacter::ForwardMove(float value)
{
	const FRotator Rotation = Controller->GetControlRotation();
	const FRotator YawRotation(0, Rotation.Yaw, 0);
	FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	AddMovementInput(Direction, value);
}

// Character right and left Movement
void ABaseWeaponCharacter::RightMove(float value)
{
	const FRotator Rotation = Controller->GetControlRotation();
	const FRotator PitchRotation(0, Rotation.Yaw, 0);
	FVector Direction = FRotationMatrix(PitchRotation).GetUnitAxis(EAxis::Y);
	AddMovementInput(Direction, value);
}

