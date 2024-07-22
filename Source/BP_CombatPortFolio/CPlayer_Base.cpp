// Fill out your copyright notice in the Description page of Project Settings.


#include "CPlayer_Base.h"

// Sets default values
ACPlayer_Base::ACPlayer_Base()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACPlayer_Base::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACPlayer_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACPlayer_Base::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

