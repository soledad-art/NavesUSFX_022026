// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EnemigoAereo.generated.h"

/**
 * 
 */
UCLASS()
class NAVESLAB01USFX_API AEnemigoAereo : public AEnemigo
{
	GENERATED_BODY()
protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	//void Mover(float DeltaTime);

	void CargarRuta() override;
};
