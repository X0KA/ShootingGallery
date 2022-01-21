// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Gun.h"
#include "Components/SceneComponent.h"
#include "Hand.generated.h"
 

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MYPROJECT_API UHand : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHand();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:

	//Set a new weapond to the hand
	UFUNCTION(BlueprintCallable)
	bool SetDefaultGun();

	UFUNCTION(BlueprintCallable)
	AGun* GetCurrentGun();

public:

	UPROPERTY(EditDefaultsOnly, Category = "Gun")
	TSubclassOf<AActor> defaultGun;

private:

	//Gun being used
	AActor* currentGun=nullptr;
	
};