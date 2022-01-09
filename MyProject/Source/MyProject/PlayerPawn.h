// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Gun.h"
#include "Hand.h"
#include "GameFramework/Pawn.h"
#include "PlayerPawn.generated.h"

UCLASS()
class MYPROJECT_API APlayerPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APlayerPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


public:

	//Root component
	USceneComponent* rootSceneComponent = nullptr;

	//Hands
	UPROPERTY(EditAnyWhere)
	UHand* rightHand	= nullptr;
	UPROPERTY(EditAnyWhere)
	UHand* leftHand		= nullptr;

	//Weapons
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category ="Weapons")
	TArray<UBlueprint*> guns;

};
