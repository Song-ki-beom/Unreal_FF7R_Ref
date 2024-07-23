// Fill out your copyright notice in the Description page of Project Settings.

#include "CPlayer_Base.h"
#include "GameFramework/Character.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"

// Sets default values
ACPlayer_Base::ACPlayer_Base()
{
 	
	PrimaryActorTick.bCanEverTick = true;

	
	SpringArm = this->CreateDefaultSubobject<USpringArmComponent>("SpringArm");
	Camera = this->CreateAbstractDefaultSubobject<UCameraComponent>("Camera");

	USceneComponent* InParent = GetMesh();
	this->SetRootComponent(InParent);

	if (!!InParent)
	{
		SpringArm->SetupAttachment(InParent,NAME_None);
	}
	if (!!SpringArm)
	{
		Camera->SetupAttachment(SpringArm, NAME_None);
	}
	
	SpringArm->TargetArmLength = 120;
	SpringArm->SetRelativeLocation(FVector(0, 0, 140));
	SpringArm->SetRelativeRotation(FRotator(0, 90, 0));
	SpringArm->bDoCollisionTest = false;
	SpringArm->bUsePawnControlRotation = true;
	SpringArm->bEnableCameraLag = true;

	GetMesh()->SetRelativeLocation(FVector(0, 0, -90));
	GetMesh()->SetRelativeRotation(FRotator(0, -90, 0));

	USkeletalMesh* mesh;
	mesh = ConstructorHelpers::FObjectFinder<USkeletalMesh>("SkeletalMesh'/Game/CosmoFoxGirl/Mesh/SK_CKG_no_sleeve.SK_CKG_no_sleeve'").Object;

	GetMesh()->SetSkeletalMesh(mesh);

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

