// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseFireWeapon.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/ArrowComponent.h"
#include "GameFramework/Character.h"

ABaseFireWeapon::ABaseFireWeapon()
{
	WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponMesh"));
	WeaponMesh->SetupAttachment(RootComponent);

	WeaponArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("WeaponArrow"));
	WeaponArrow->SetupAttachment(WeaponMesh);

	WeaponArrow->SetRelativeRotation(FQuat(0,0,90,90));
}

void ABaseFireWeapon::UseWeapon_Implementation()
{
	Super::UseWeapon_Implementation();
 	if (bIsUseWeapon)
	{
		TraceFire();
	}
}

void ABaseFireWeapon::UseSpecificals_Implementation()
{
	Super::UseSpecificals_Implementation();

	ACharacter* Player = Cast<ACharacter>(GetOwner());
	APlayerController* OurPlayerController = Cast<APlayerController>(Player->GetController());
	if (OurPlayerController)
	{
		OurPlayerController->SetViewTargetWithBlend(this, AimTime);
		bIsSpecificals = true;
	}
}

void ABaseFireWeapon::StopUseSpecificals_Implementation()
{
	Super::StopUseSpecificals_Implementation();

	ACharacter* Player = Cast<ACharacter>(GetOwner());
	APlayerController* OurPlayerController = Cast<APlayerController>(Player->GetController());
	if (OurPlayerController)
	{
		OurPlayerController->SetViewTargetWithBlend(GetOwner(), AimTime);
		bIsSpecificals = false;
	}
}

void ABaseFireWeapon::TraceFire_Implementation()
{
	FVector Start;
	FVector End;
	FHitResult HitResult;

	ACharacter* Char = Cast<ACharacter>(GetOwner());

	Start = WeaponArrow->GetComponentLocation();
	End = WeaponArrow->GetComponentLocation() + (WeaponArrow->GetForwardVector() * TraceLenge);

	FCollisionQueryParams TraceCollision;
	bool TraceHit = GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECC_Visibility, TraceCollision);

	if (TraceHit)
	{
		if (HitResult.GetActor())
		{
			//UGameplayStatics::ApplyDamage(HitResult.GetActor(), Damage, nullptr, GetOwner());
			DamageWeapon(HitResult.GetActor(), HitResult.Location, HitResult, nullptr, GetOwner());
		}
	}

	if (TraceVisible)
	{
		if (TraceHit)
		{
			DrawDebugLine(GetWorld(), Start, End, FColor::Blue, false, 2.0f);
			DrawDebugSphere(GetWorld(), HitResult.Location, 5.0f, 5, FColor::Green, false);
		}
		else
		{
			DrawDebugLine(GetWorld(), Start, End, FColor::Blue, false, 2.0f);
		}
	}
}

void ABaseFireWeapon::DamageWeapon_Implementation(AActor * DamageActor, FVector HitLocation, FHitResult HitInfo, AController * InstigatorController, AActor * DamageCauser)
{
	TSubclassOf<UDamageType> p;
	UGameplayStatics::ApplyPointDamage(DamageActor, Damage, HitLocation, HitInfo, InstigatorController, DamageCauser, p);
}
