// Fill out your copyright notice in the Description page of Project Settings.


#include "Gun.h"

// Sets default values
AGun::AGun()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	sceneComponent = CreateDefaultSubobject<USceneComponent>("SceneComponent");
	if (sceneComponent)
		SetRootComponent(sceneComponent);


	//Create Spline and attach to root
	splineComponent = CreateDefaultSubobject<USplineComponent>("Spline");
	splineComponent->AttachToComponent(sceneComponent, FAttachmentTransformRules::KeepRelativeTransform);

	//Create default skeletalMesh and attach to root
	skeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>("Skeletal Mesh");
	skeletalMesh->AttachToComponent(sceneComponent, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called when the game starts or when spawned
void AGun::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGun::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

