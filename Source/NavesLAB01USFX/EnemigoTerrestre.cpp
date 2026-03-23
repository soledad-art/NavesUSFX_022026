// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoTerrestre.h"

void AEnemigoTerrestre::BeginPlay()
{
    Super::BeginPlay();
}

void AEnemigoTerrestre::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    Mover(DeltaTime);
}

void AEnemigoTerrestre::Mover(float DeltaTime)
{
    FVector Posicion = GetActorLocation();

    // Movimiento básico en tierra (horizontal)
    Posicion.X += 100.0f * DeltaTime;

    SetActorLocation(Posicion);
}