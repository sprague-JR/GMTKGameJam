// Fill out your copyright notice in the Description page of Project Settings.


#include "EyelessCharacter.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"

// Sets default values
AEyelessCharacter::AEyelessCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEyelessCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEyelessCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEyelessCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("WalkForward", this, &AEyelessCharacter::walk);
	PlayerInputComponent->BindAxis("WalkRight", this, &AEyelessCharacter::turn);

}


void AEyelessCharacter::walk(float rate)
{
	AddMovementInput(GetActorForwardVector(), rate);
}


void AEyelessCharacter::turn(float rate)
{
	AddControllerPitchInput(rate);


}
