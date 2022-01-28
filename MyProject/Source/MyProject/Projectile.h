// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Math/Vector.h"

#include "Projectile.generated.h"

UCLASS()
class MYPROJECT_API AProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	//Root component
	UPROPERTY(EditAnyWhere, BlueprintreadWrite, Category = __hide)
	USceneComponent* rootSceneComponent = nullptr;

	//Kinectic characteristics
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Kinectic data")
	FVector direction=FVector(0.0f, 0.0f,0.0f);

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Kinectic data")
	float speed = 0.f;
};
