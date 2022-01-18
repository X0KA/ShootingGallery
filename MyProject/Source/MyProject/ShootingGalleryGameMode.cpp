// Fill out your copyright notice in the Description page of Project Settings.


#include "ShootingGalleryGameMode.h"
#include "PlayerPawn.h"

AShootingGalleryGameMode::AShootingGalleryGameMode()
{
	DefaultPawnClass = APlayerPawn::StaticClass();
}