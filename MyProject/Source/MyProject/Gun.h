// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
#include "GameFramework/Actor.h"
#include "Gun.generated.h"

UCLASS()
class MYPROJECT_API AGun : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGun();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


public:

	UFUNCTION(BlueprintImplementableEvent)
	void OnTriggerPressed();
	
	UFUNCTION(BlueprintImplementableEvent)
	void OnTriggerReleased();
	
	UFUNCTION(BlueprintImplementableEvent)
	void Shoot();

	


public:

	//Root scene component
	UPROPERTY()
	USceneComponent* rootSceneComponent = nullptr;
	
	//Spline defining where the gun is aming at
	UPROPERTY(EditAnyWhere)
	USplineComponent* splineComponent =nullptr;

	//Gun mesh
	UPROPERTY(EditAnywhere)
	USkeletalMeshComponent*skeletalMesh =nullptr;


};
