// Fill out your copyright notice in the Description page of Project Settings.


#include "RuneCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "RuneAttributeSet.h"
#include "AbilitySystemComponent.h"
#include "Components/CapsuleComponent.h"
//#include "Components/CameraComponent.h"

// Sets default values
ARuneCharacter::ARuneCharacter()
{
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.f);

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 500.f, 0.0f);
	GetCharacterMovement()->JumpZVelocity = 700.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.f;
	CameraBoom->bUsePawnControlRotation = true;

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControllRotation = false;

	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>("ABC");
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicateMode(EGameplayEffectReplicateMode::Minimal);




 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

UAbilitySystemComponent* ARuneCharacter::GetAbilitySystemComponent() const
{
	return nullptr;
}

// Called when the game starts or when spawned
void ARuneCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void ARuneCharacter::MoveForward(float Value)
{
}

void ARuneCharacter::MoveRight(float Value)
{
}

void ARuneCharacter::TurnAtRate(float Rate)
{
}

void ARuneCharacter::LookUpAtRate(float Rate)
{
}

void ARuneCharacter::TouchStarted(ETouchIndex::Type FingerIndex, FVector Location)
{
}

void ARuneCharacter::TouchEnd(ETouchIndex::Type FingerIndex, FVector Location)
{
}

// Called every frame
void ARuneCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ARuneCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ARuneCharacter::PossessedBy(AController* PlayerController)
{
}

void ARuneCharacter::OnRep_PlayerState()
{
}

void ARuneCharacter::InitializeAttributes()
{
}

void ARuneCharacter::GiveDefaultAbilities()
{
}

