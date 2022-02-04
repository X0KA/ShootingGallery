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
	//~~ Make sure the returned actor ISVALID !!
	UFUNCTION(BlueprintCallable)
	AActor* GetNextActor();

	/*Disable the actor and update the index pool.
	return true if disabled succesfully
	return false if the actor is not among the active actors*/
	UFUNCTION(BlueprintCallable)
	bool DisableActor(AActor* actor_);

	//Return an array with all active actors from the pool
	UFUNCTION(BlueprintCallable)
	TArray<AActor*> GetActiveActors();

	
	void GetActiveActors(TArray<AActor*>& actorArray);

public:

	UPROPERTY(EditDefaultsOnly, Category = "Bullet")
		TSubclassOf<AActor> bulletActor;

	//Amount of actors in the pool
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Properties")
		int poolSize = 0;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Properties")
		bool initOnPlay = true;

private:

	/*In the index Pool, indexes pointing to active actors are located first,
	and indexes that point to unactive actors are located last*/
	TArray<uint16> indexPool;
	TArray<AActor*> actorPool;

	uint16 activeActors {0};
};
