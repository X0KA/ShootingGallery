// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ActorPoolComponent.generated.h"

class AActor;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MYPROJECT_API UActorPoolComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UActorPoolComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:

	//Create the actors and fill the pool
	void InitializePool();

	//Activate the next unactive actor in the pool and return it
	AActor* EnableNextActor();

	/*Disable the actor and update the index pool. 
	return true if disabled succesfully
	return false if the actor is not among the active actors*/
	bool DisableActor(AActor* actor_);

public:

	UPROPERTY(EditDefaultsOnly, Category = "Bullet")
	TSubclassOf<AActor> bulletActor;
	
	//Amount of actors in the pool
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Properties")
	int poolSize=0;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Properties")
	bool initOnPlay = true;

private:

	/*Each index points to his respective actor. When an actor is activated, 
	instead of swapping its position in the actor pool for another one that 
	is unactive, their indexes will be swapped instead, for the performance's
	sake*/
	TArray<uint16> indexPool;
	TArray<AActor*> actorPool;

	uint16 activeActors[0];
};
