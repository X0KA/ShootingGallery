// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorPoolComponent.h"

// Sets default values for this component's properties
UActorPoolComponent::UActorPoolComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UActorPoolComponent::BeginPlay()
{
	Super::BeginPlay();

	if (initOnPlay)
		InitializePool();
	
}


// Called every frame
void UActorPoolComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UActorPoolComponent::InitializePool()
{	
	for (int i = 0; i < poolSize; i++)
	{
		indexPool.Add(i);
		actorPool.Add(GetWorld()->SpawnActor<AActor>(bulletActor));
	}
}

AActor* UActorPoolComponent::EnableNextActor()
{

}

bool UActorPoolComponent::DisableActor(AActor* actor_)
{

}