// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemigoTerrestre.h"
#include "ETCamion.generated.h"

/**
 * 
 */
UCLASS()
class NAVESLAB01USFX_API AETCamion : public AEnemigoTerrestre
{
	GENERATED_BODY()

public:
    AETCamion();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;
};