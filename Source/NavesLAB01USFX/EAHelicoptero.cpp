// Fill out your copyright notice in the Description page of Project Settings.


#include "EAHelicoptero.h"

AEAHelicoptero::AEAHelicoptero()
{
    PrimaryActorTick.bCanEverTick = true;
}

void AEAHelicoptero::BeginPlay()
{
    Super::BeginPlay();
}

void AEAHelicoptero::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Movimiento adicional tipo helicóptero (sube y baja)
    FVector Posicion = GetActorLocation();

    Posicion.Z += FMath::Sin(GetWorld()->TimeSeconds) * 20.0f;

    SetActorLocation(Posicion);
}