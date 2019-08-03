// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "CameraPawn.generated.h"

UENUM(BlueprintType)
enum class CameraState : uint8
{
	EStationary UMETA(DisplayName = "Stationary"),
	EThrown UMETA(DisplayName = "Moving"),
	ERotating UMETA(DisplayName = "Looking At Player"),
	ECarried UMETA(DisplayName = "Being Carried")
};

UCLASS()
class ONLYONE_API ACameraPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACameraPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	void SetCamState(CameraState NewState)
	{
		CamState = NewState;
		CamRotationLerpT = 0.0f;
	}

	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Camera)
		float CamRotationLerpT = 0.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Camera)
		CameraState CamState = CameraState::EStationary;

private:
	
};
