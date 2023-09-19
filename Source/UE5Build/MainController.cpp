// Fill out your copyright notice in the Description page of Project Settings.


#include "MainController.h"

AMainController::AMainController()
{
	
	this->Construct();

}

void AMainController::Construct() {

	InputComponent = CreateDefaultSubobject<UInputComponent>(TEXT("InputComponent"));
}

void AMainController::BeginPlay()
{
	Super::BeginPlay();
	Main = Cast<AMainCharacter>(GetCharacter());

}

// Called every frame
void AMainController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Lib::echo(TEXT("TEST"));

}

// Called to bind functionality to input
void AMainController::SetupInputComponent()
{
	Super::SetupInputComponent();
	InputComponent->BindAxis("MoveForward", this, &AMainController::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &AMainController::MoveRight);
	InputComponent->BindAction("Jump", IE_Pressed, this, &AMainController::Jump);
	InputComponent->BindAction("Jump", IE_Released, this, &AMainController::StopJumping);

	//Êý×Ö1°´¼ü
	InputComponent->BindAction("One", IE_Pressed, this, &AMainController::PressOne);

	InputComponent->BindAction("MouseLeft", IE_Pressed, this, &AMainController::MouseLeft);
	InputComponent->BindAction("MounseWheelUp", IE_Pressed, this, &AMainController::MouseWheelUp);
	InputComponent->BindAction("MounseWheelDown", IE_Pressed, this, &AMainController::MouseWheelDown);
	InputComponent->BindAction("MounseRight", IE_Pressed, this, &AMainController::MouseRight);
}
void AMainController::MoveForward(float Value) {
	ForwardValue = Value;
	if (Value != 0) {
		const FRotator Rotation = GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		Main->AddMovementInput(Direction, Value);
	
	}
	if (ForwardValue || RightValue) {
		Main->IsMoving = true;
	}
	else {
		Main->IsMoving = false;
	
	}

}
void AMainController::MoveRight(float Value) {
	RightValue = Value;
	if (Value != 0) {
		const FRotator Rotation = GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		Main->AddMovementInput(Direction, Value);

	}
	if (ForwardValue || RightValue) {
		Main->IsMoving = true;
	}
	else {
		Main->IsMoving = false;

	}
}
void  AMainController::PressOne() {

}
void  AMainController::Jump() {
	Main->Jump();
}
void  AMainController::StopJumping(){
	Main->StopJumping();
}
void  AMainController::MouseLeft() {

}
void  AMainController::MouseRight() {

}
void  AMainController::MouseWheelUp() {

}
void  AMainController::MouseWheelDown() {

}