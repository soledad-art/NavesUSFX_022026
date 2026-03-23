// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemigoAereo.h"
#include "AEDron.generated.h"

/**
 * 
 */
UCLASS()
class NAVESLAB01USFX_API AAEDron : public AEnemigoAereo
{
	GENERATED_BODY()
	
public:
    AAEDron();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;
};
