// Fill out your copyright notice in the Description page of Project Settings.


#include "EABarco.h"

AEABarco::AEABarco()
{
    PrimaryActorTick.bCanEverTick = true;
}

void AEABarco::BeginPlay()
{
    Super::BeginPlay();
}

void AEABarco::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Movimiento lento
    FVector Pos = GetActorLocation();
    Pos.Y += 80.0f * DeltaTime;
    SetActorLocation(Pos);
}