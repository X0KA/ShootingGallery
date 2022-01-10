// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerPawn.h"

// Sets default values
APlayerPawn::APlayerPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	rootSceneComponent = CreateDefaultSubobject<USceneComponent>("SceneComponent");
	if (rootSceneComponent)
		SetRootComponent(rootSceneComponent);

	rightHand = CreateDefaultSubobject<UHand>("Right Hand");
	rightHand->AttachToComponent(rootSceneComponent, FAttachmentTransformRules::KeepRelativeTransform);

	leftHand = CreateDefaultSubobject<UHand>("Left Hand");
	leftHand->AttachToComponent(rootSceneComponent, FAttachmentTransformRules::KeepRelativeTransform);

}

// Called when the game starts or when spawned
void APlayerPawn::BeginPlay()
{
	Super::BeginPlay();

	//Cast all gun blueprints to AGun class
	if (gunsBlueprints.Num() != 0)
	{
		for (int i = 0; i < gunsBlueprints.Num(); ++i) {
			AGun* newGun = Cast<AGun>(gunsBlueprints[i]);
		}
	}
}

// Called every frame
void APlayerPawn::Tick(float DeltaTime)
{

	Super::Tick(DeltaTime);

}

void APlayerPawn::OnLeftTriggerPressed()
{
	leftHand->currentWeapon->OnTriggerPressed();
}

void APlayerPawn::OnLeftTriggerReleased()
{
	leftHand->currentWeapon->OnTriggerReleased();
}

void APlayerPawn::OnRightTriggerPressed()
{					
	rightHand->currentWeapon->OnTriggerPressed();
}					
					
void APlayerPawn::OnRightTriggerReleased()
{
	rightHand->currentWeapon->OnTriggerReleased();
}

void APlayerPawn::LeftStickX(float axisValue) {
}
void APlayerPawn::LeftStickY(float axisValue) {
}
void APlayerPawn::RightStickX(float axisValue) {
}
void APlayerPawn::RightStickY(float axisValue){
}

// Called to bind functionality to input
void APlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("LeftTrigger", IE_Pressed,this,&APlayerPawn::OnLeftTriggerPressed);
	PlayerInputComponent->BindAction("LeftTrigger", IE_Released, this, &APlayerPawn::OnLeftTriggerReleased);
	PlayerInputComponent->BindAction("RightTrigger", IE_Pressed, this, &APlayerPawn::OnRightTriggerPressed);
	PlayerInputComponent->BindAction("RightTrigger", IE_Released, this, &APlayerPawn::OnRightTriggerReleased);

	PlayerInputComponent->BindAxis("LeftStickX", this, &APlayerPawn::LeftStickX);
	PlayerInputComponent->BindAxis("LeftStickY", this, &APlayerPawn::LeftStickY);
	PlayerInputComponent->BindAxis("RightStickX", this, &APlayerPawn::RightStickX);
	PlayerInputComponent->BindAxis("RightStickY", this, &APlayerPawn::RightStickY);

}

