// Fill out your copyright notice in the Description page of Project Settings.


#include "Hand.h"
#include "Components/ChildActorComponent.h"

// Sets default values for this component's properties
UHand::UHand()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	
}


// Called when the game starts
void UHand::BeginPlay()
{
	Super::BeginPlay();
}


// Called every frame
void UHand::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

bool UHand::SetDefaultGun() {
	
	AActor* newGun = GetWorld()->SpawnActor<AActor>(defaultGun);

	newGun->AttachToComponent(this, FAttachmentTransformRules::KeepRelativeTransform);

	currentGun = newGun;

	return true;
}

AGun* UHand::GetCurrentGun()
{
	return Cast<AGun>(currentGun);
}