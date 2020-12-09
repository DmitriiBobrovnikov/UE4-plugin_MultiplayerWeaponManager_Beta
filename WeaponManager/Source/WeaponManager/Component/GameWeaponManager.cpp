// Fill out your copyright notice in the Description page of Project Settings.


#include "GameWeaponManager.h"
#include "Net/UnrealNetwork.h"
#include "GameFramework/Character.h"

// Sets default values for this component's properties
UGameWeaponManager::UGameWeaponManager()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	SetIsReplicated(true);
	// ...
}


// Called when the game starts
void UGameWeaponManager::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
	Player = Cast<ACharacter>(GetOwner());
}

void UGameWeaponManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UGameWeaponManager, bIsWeapon);
	DOREPLIFETIME(UGameWeaponManager, CurrentWeapon);
	DOREPLIFETIME(UGameWeaponManager, Player);
}


void UGameWeaponManager::SetupPlayerInputComponent(UInputComponent * PlayerInputComponent)
{
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &UGameWeaponManager::Fire);
	PlayerInputComponent->BindAction("Fire", IE_Released, this, &UGameWeaponManager::StopFire);

	PlayerInputComponent->BindAction("Aim", IE_Pressed, this, &UGameWeaponManager::Specific);
	PlayerInputComponent->BindAction("Aim", IE_Released, this, &UGameWeaponManager::StopSpecific);

	//PlayerInputComponent->BindAction("Reload", IE_Pressed, this, &UWeaponManager::ServerReload);
}

// Called every frame
void UGameWeaponManager::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UGameWeaponManager::OnRep_CurentWeapon()
{
	if (Player)
	{
		if (CurrentWeapon)
		{
			FAttachmentTransformRules AttacmentRules = FAttachmentTransformRules::SnapToTargetIncludingScale;
			CurrentWeapon->SetOwner(GetOwner());
			if (WeaponSoccets.Find(CurrentWeapon->GetWeaponType()))
			{
				FString NameSocets = *WeaponSoccets.Find(CurrentWeapon->GetWeaponType());
				CurrentWeapon->AttachToComponent(Player->GetMesh(), AttacmentRules, FName(NameSocets));
			}
		}

	}
}

void UGameWeaponManager::CreateWeapon_Implementation(TSubclassOf<ABaseWeapon> WeapoClass)
{
	if (Player)
	{
		if (WeapoClass != NULL)
		{
			if (CurrentWeapon)
			{
				CurrentWeapon->Destroy();
			}
			bIsWeapon = true;

			FActorSpawnParameters Parameters;
			Parameters.Owner = GetOwner();
			FAttachmentTransformRules AttacmentRules = FAttachmentTransformRules::SnapToTargetIncludingScale;
			CurrentWeapon = GetWorld()->SpawnActor<ABaseWeapon>(WeapoClass, Parameters);
			CurrentWeapon->SetOwner(GetOwner());
			CurrentWeapon->AttachToComponent(Player->GetMesh(), AttacmentRules, FName("None"));
		}
		else
		{
			if (CurrentWeapon)
			{
				CurrentWeapon->Destroy();
			}
			bIsWeapon = false;
		}
	}

	if(Player->IsLocallyControlled())
	{
		OnRep_CurentWeapon();
	}
}

void UGameWeaponManager::Fire_Implementation()
{
	if (CurrentWeapon)
	{
		CurrentWeapon->UseWeapon();
	}
}

void UGameWeaponManager::StopFire_Implementation()
{
	if (CurrentWeapon)
	{
		CurrentWeapon->StopUseWeapon();
	}
}

void UGameWeaponManager::Specific_Implementation()
{
	if (CurrentWeapon)
	{
		CurrentWeapon->UseSpecificals();
	}
}

void UGameWeaponManager::StopSpecific_Implementation()
{
	if (CurrentWeapon)
	{
		CurrentWeapon->StopUseSpecificals();
	}
}

