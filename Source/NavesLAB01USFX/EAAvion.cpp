// Fill out your copyright notice in the Description page of Project Settings.


#include "EAAvion.h"

AEAAvion::AEAAvion()
{
    PrimaryActorTick.bCanEverTick = true;
}

void AEAAvion::BeginPlay()
{
    Super::BeginPlay();
}

void AEAAvion::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Movimiento extra: más velocidad hacia adelante
    FVector Posicion = GetActorLocation();

    Posicion.X += 300.0f * DeltaTime;

    SetActorLocation(Posicion);
}