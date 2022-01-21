// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Gun.h"
#include "Hand.h"
#include "MotionControllerComponent.h"
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

protected:

	//Trigger Inputs
	void OnLeftTriggerPressed();
	void OnLeftTriggerReleased();
	void OnRightTriggerPressed();
	void OnRightTriggerReleased();

	//Sticks Inputs
	void LeftStickX(float axisValue);
	void LeftStickY(float axisValue);
	void RightStickX(float axisValue);
	void RightStickY(float axisValue);

public:

	//Root component
	USceneComponent* rootSceneComponent = nullptr;

	
	//Motion Controllers
	//UPROPERTY(EditAnyWhere)
	//UMotionControllerComponent* rightMotionController = nullptr;
	//UPROPERTY(EditAnyWhere)
	//UMotionControllerComponent* leftMotionController = nullptr;

	//Hands
	UPROPERTY(EditAnyWhere,BlueprintReadWrite, Category = "Hands")
	UHand* rightHand	= nullptr;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category ="Hands")
	UHand* leftHand		= nullptr;

	//Weapons
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category ="Weapons")//Array of Gun blueprints. At the start of the game they 
	TArray<UBlueprint*> gunsBlueprints;								//will be casted to AGun classes. /!\Might not be the best way

	//Array of AGuns. Obtained from casting the previous blueprints
	TArray<AGun*> guns;



};
