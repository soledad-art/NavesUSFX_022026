// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoAereo.h"

void AEnemigoAereo::BeginPlay()
{
	Super::BeginPlay();
	CargarRuta();
	bMovimientoAutonomo = true; // El enemigo aéreo siempre se mueve de forma autónoma siguiendo la ruta zigzag

}

void AEnemigoAereo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
    Mover(DeltaTime);

}

void AEnemigoAereo::Mover(float DeltaTime)
{

    if (!bMovimientoAutonomo)
    {
        FVector PosicionActual = GetActorLocation();

        float Distancia = FVector::Dist(PosicionActual, PosicionDestinoGameMode);

        if (Distancia <= Tolerancia)
        {
            // Waypoint alcanzado, siguiente
            return;
        }
        else
        {
            // Mover en línea recta
            FVector Direccion = (PosicionDestinoGameMode - PosicionActual).GetSafeNormal();
            FVector NuevaUbicacion = PosicionActual + (Direccion * VelocidadMovimiento * DeltaTime);
            SetActorLocation(NuevaUbicacion);
        }
    }
    else if (PuntosRuta.Num() > 1)
    {
        FVector UbicacionActual = GetActorLocation();
        FVector UbicacionDestino = PuntosRuta[IndicePuntoRutaActual];

        float Distancia = FVector::Dist(UbicacionActual, UbicacionDestino);

        if (Distancia <= Tolerancia)
        {
            // Waypoint alcanzado, siguiente
            IndicePuntoRutaActual++;
            if (IndicePuntoRutaActual >= PuntosRuta.Num())
            {
                // Volver al inicio
                IndicePuntoRutaActual = 0;
            }
        }
        else
        {
            // Mover en línea recta
            FVector Direccion = (UbicacionDestino - UbicacionActual).GetSafeNormal();
            FVector NuevaUbicacion = UbicacionActual + (Direccion * VelocidadMovimiento * DeltaTime);
            SetActorLocation(NuevaUbicacion);
        }
    }

}


void AEnemigoAereo::CargarRuta()
{
    PosicionInicial = GetActorLocation();
    PuntosRuta.Empty();

    // Parámetros del zigzag (ajústalos según el tamaño de tu escenario)
    const float XIzquierda = WorldLimitesMin.X;      // Extremo izquierdo
    const float XDerecha = WorldLimitesMax.X;      // Extremo derecho
    const float YInicio = WorldLimitesMax.Y;      // Parte superior de la pantalla
    const float YFinal = WorldLimitesMin.Y;      // Parte inferior de la pantalla (o media inferior)
    const int32 NumTramos = 10;                     // Cantidad de “dientes” del zigzag

	FVector PuntoActual1( XIzquierda,  YInicio, 200.0f);
    PuntosRuta.Add(PuntoActual1);
    FVector PuntoActual2(XDerecha, YInicio,  200.0f);
	PuntosRuta.Add(PuntoActual2);
	FVector PuntoActual3(XIzquierda, YInicio - 200.0f,  200.0f);
	PuntosRuta.Add(PuntoActual3);
	FVector PuntoActual4(XDerecha, YInicio - 400.0f,  200.0f);
	PuntosRuta.Add(PuntoActual4);
	FVector PuntoActual5(XIzquierda, YInicio - 600.0f,  200.0f);
	PuntosRuta.Add(PuntoActual5);
	FVector PuntoActual6(XDerecha, YInicio - 800.0f,  200.0f);
	PuntosRuta.Add(PuntoActual6);
	FVector PuntoActual7(XIzquierda, YInicio - 1000.0f,   200.0f);
	PuntosRuta.Add(PuntoActual7);
	FVector PuntoActual8(YInicio - 1200.0f, (YInicio - YFinal) / 2,  PosicionInicial.Z);
	PuntosRuta.Add(PuntoActual8);

    /*
    // Opcional: asegurar último punto cerca del centro inferior
    float XCentro = (WorldLimitesMin.X + WorldLimitesMax.X) * 0.5f;
    FVector PuntoCentroInferior(XCentro, YFinal, PosicionInicial.Z);
    PuntosRuta.Add(PuntoCentroInferior);
    */
    // Empezar en el segundo punto de la ruta (el primero es la posición actual)
    IndicePuntoRutaActual = 1;
}
