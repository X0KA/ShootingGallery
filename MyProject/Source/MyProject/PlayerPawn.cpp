// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerPawn.h"
#include "XRMotionControllerBase.h"
#include "Camera/CameraComponent.h" 

// Sets default values
APlayerPawn::APlayerPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	rootSceneComponent = CreateDefaultSubobject<USceneComponent>("SceneComponent");
	if (rootSceneComponent)
		SetRootComponent(rootSceneComponent);

	//Setup Camera
	headCamera = CreateDefaultSubobject<UCameraComponent>("HeadCamera");
	headCamera->SetupAttachment(rootSceneComponent);


	//~~Motion controllers~~
	//Create them and attach them to the scene root
	rightMotionController = CreateDefaultSubobject<UMotionControllerComponent>("Right Motion Controller");
	rightMotionController->SetupAttachment(rootSceneComponent);
	rightMotionController->MotionSource = FXRMotionControllerBase::RightHandSourceId;
	rightMotionController->PlayerIndex = 0;

	leftMotionController = CreateDefaultSubobject<UMotionControllerComponent>("Left Motion Controller");
	leftMotionController->SetupAttachment(rootSceneComponent);
	leftMotionController->MotionSource = FXRMotionControllerBase::LeftHandSourceId;
	leftMotionController->PlayerIndex = 0;

	//~~Player hands~~
	//Create them and attach them to their respective motion controllers
	rightHand = CreateDefaultSubobject<UHand>("Right Hand");
	rightHand->AttachToComponent(rightMotionController, FAttachmentTransformRules::KeepRelativeTransform);

	leftHand = CreateDefaultSubobject<UHand>(("Left Hand"));
	leftHand->AttachToComponent(leftMotionController, FAttachmentTransformRules::KeepRelativeTransform);


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
			if (newGun)
				guns.Add(newGun);
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
	//Cast<AGun>(leftHand->gun)->OnTriggerPressed();
}

void APlayerPawn::OnLeftTriggerReleased()
{
	//Cast<AGun>(leftHand->gun)->OnTriggerReleased();
}

void APlayerPawn::OnRightTriggerPressed()
{					
	//Cast<AGun>(rightHand->gun)->OnTriggerPressed();
}					
					
void APlayerPawn::OnRightTriggerReleased()
{
	//Cast<AGun>(rightHand->gun)->OnTriggerReleased();
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

