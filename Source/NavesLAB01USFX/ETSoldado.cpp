// Fill out your copyright notice in the Description page of Project Settings.


#include "ETSoldado.h"

AETSoldado::AETSoldado()
{
    PrimaryActorTick.bCanEverTick = true;
}

void AETSoldado::BeginPlay()
{
    Super::BeginPlay();
}

void AETSoldado::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    FVector Pos = GetActorLocation();
    Pos.X += 80.0f * DeltaTime;

    SetActorLocation(Pos);
}