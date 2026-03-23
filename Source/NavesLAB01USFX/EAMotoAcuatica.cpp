// Fill out your copyright notice in the Description page of Project Settings.


#include "EAMotoAcuatica.h"

AEAMotoAcuatica::AEAMotoAcuatica()
{
    PrimaryActorTick.bCanEverTick = true;
}

void AEAMotoAcuatica::BeginPlay()
{
    Super::BeginPlay();
}

void AEAMotoAcuatica::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Movimiento muy rápido y con vibración
    FVector Pos = GetActorLocation();

    Pos.Y += 250.0f * DeltaTime;
    Pos.Z += FMath::Sin(GetWorld()->TimeSeconds * 3.0f) * 20.0f;

    SetActorLocation(Pos);
}