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

}

void UActorPoolComponent::InitializePool()
{	
	for (int i = 0; i < poolSize; i++)
	{
		indexPool.Add(i);

		//Create the actors of the pool
		AActor* newActor = GetWorld()->SpawnActor<AActor>(bulletActor);
		actorPool.Add(newActor);
		
		//Set all actor in the pool as hidden by default
		SetActorEnabled(newActor, false);
	}
}

AActor* UActorPoolComponent::GetNextActor()
{
	AActor* nextActor = nullptr;

	//Only iterate through the actors that are not active
	for (uint16 i = activeActors; i < poolSize; i++){
		if (actorPool[indexPool[i]]->IsHidden()) {
			nextActor = actorPool[indexPool[i]];

			//Hide and deactivate item
			SetActorEnabled(nextActor, true);

			activeActors++;

			UE_LOG(LogTemp, Warning, TEXT("Actor activated - Active actors: %d"), activeActors);
			break;
		}
	}
	
	if (nextActor == nullptr)
		UE_LOG(LogTemp, Warning, TEXT("GetNextActor is nullptr"));

	return nextActor;
}

bool UActorPoolComponent::DisableActor(AActor* actor_)
{

	for (uint16 i = 0; i < activeActors; i++){
		if (actorPool[indexPool[i]] == actor_) {
			AActor* actorToDisable = actorPool[indexPool[i]];
		
			SetActorEnabled(actor_, false);

			//Swap indexes with the last active actor
			uint16 currentIndex= indexPool[i];
			indexPool[i] = indexPool[activeActors - 1];
			indexPool[activeActors - 1] = currentIndex;
			
			activeActors--;

			return true;
		}
	}

	return true;
}

TArray<AActor*> UActorPoolComponent::GetActiveActors()
{
	TArray<AActor*> retArray;
	for (int i = 0; i < activeActors; i++) {
		retArray.Add(actorPool[indexPool[i]]);
	}

	return retArray;
}

void UActorPoolComponent::GetActiveActors(TArray<AActor*>& actorArray)
{
	for (int i = 0; i < activeActors; i++) {
		actorArray.Add(actorPool[indexPool[i]]);
	}
}

void UActorPoolComponent::SetActorEnabled(AActor* actor_, bool toEnable)
{
	if (!actor_)
		return;

	actor_->SetActorHiddenInGame(!toEnable);
	actor_->SetActorEnableCollision(toEnable);
	actor_->SetActorTickEnabled(toEnable);
}