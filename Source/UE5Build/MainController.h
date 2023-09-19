// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MainCharacter.h"
#include "Lib.h"
#include "MainController.generated.h"

/**
 * 
 */
UCLASS()
class UE5BUILD_API AMainController : public APlayerController
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMainController();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void SetupInputComponent() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// Called to bind functionality to input


	UPROPERTY(EditInstanceOnly, Category = "Basic Config")
	AMainCharacter* Main;
	 
	float ForwardValue;

	float RightValue;

private:
	void Construct();
	void MoveForward(float Value);
	void MoveRight(float Value);
	void PressOne();
	void MouseWheelUp();
	void MouseWheelDown();
	void MouseRight();
	void MouseLeft();
	void Jump();
	void StopJumping();

};
