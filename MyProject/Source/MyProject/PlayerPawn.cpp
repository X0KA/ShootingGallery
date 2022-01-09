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
	
}

// Called every frame
void APlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

