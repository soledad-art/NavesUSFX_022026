// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoAcuatico.h"
void AEnemigoAcuatico::BeginPlay()
{
    Super::BeginPlay();
}

void AEnemigoAcuatico::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    Mover(DeltaTime);
}

void AEnemigoAcuatico::Mover(float DeltaTime)
{
    FVector Pos = GetActorLocation();

    // Movimiento horizontal tipo agua
    Pos.Y += 120.0f * DeltaTime;

    SetActorLocation(Pos);
}