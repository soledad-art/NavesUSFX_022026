// Fill out your copyright notice in the Description page of Project Settings.


#include "ETCamion.h"

AETCamion::AETCamion()
{
    PrimaryActorTick.bCanEverTick = true;
}

void AETCamion::BeginPlay()
{
    Super::BeginPlay();
}

void AETCamion::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    FVector Pos = GetActorLocation();
    Pos.X += 120.0f * DeltaTime;

    SetActorLocation(Pos);
}