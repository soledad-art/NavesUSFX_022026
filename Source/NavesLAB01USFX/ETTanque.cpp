// Fill out your copyright notice in the Description page of Project Settings.


#include "ETTanque.h"

AETTanque::AETTanque()
{
    PrimaryActorTick.bCanEverTick = true;
}

void AETTanque::BeginPlay()
{
    Super::BeginPlay();
}

void AETTanque::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    FVector Pos = GetActorLocation();
    Pos.X += 60.0f * DeltaTime;

    SetActorLocation(Pos);
}