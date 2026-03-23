// Fill out your copyright notice in the Description page of Project Settings.


#include "ETBlindado.h"

AETBlindado::AETBlindado()
{
    PrimaryActorTick.bCanEverTick = true;
}

void AETBlindado::BeginPlay()
{
    Super::BeginPlay();
}

void AETBlindado::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    FVector Pos = GetActorLocation();
    Pos.X += 50.0f * DeltaTime;

    SetActorLocation(Pos);
}