// Fill out your copyright notice in the Description page of Project Settings.


#include "AEDron.h"

AAEDron::AAEDron()
{
    PrimaryActorTick.bCanEverTick = true;
}

void AAEDron::BeginPlay()
{
    Super::BeginPlay();
}

void AAEDron::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Movimiento tipo dron (oscilación rápida)
    FVector Posicion = GetActorLocation();

    Posicion.Z += FMath::Sin(GetWorld()->TimeSeconds * 2.0f) * 50.0f;

    SetActorLocation(Posicion);
}