// Fill out your copyright notice in the Description page of Project Settings.


#include "EALancha.h"

AEALancha::AEALancha()
{
    PrimaryActorTick.bCanEverTick = true;
}

void AEALancha::BeginPlay()
{
    Super::BeginPlay();
}

void AEALancha::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Movimiento rápido
    FVector Pos = GetActorLocation();
    Pos.Y += 200.0f * DeltaTime;
    SetActorLocation(Pos);
}