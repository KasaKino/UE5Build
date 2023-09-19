// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCharacter.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
AMainCharacter::AMainCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	////静态路径加载Mesh
	//static ConstructorHelpers::FObjectFinder<UStaticMesh> Cube(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	////安全判定
	//if (Cube.Succeeded()) {
	//	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	//	StaticMeshComponent->SetupAttachment(RootComponent);
	//	StaticMeshComponent->SetStaticMesh(Cube.Object);
	//}
	this->Construct();
	this->CreateModel();
	this->ThirdPerson();
	AutoPossessPlayer = EAutoReceiveInput::Player0;
}
void AMainCharacter::Construct() {

	SkeletaMesh = LoadObject<USkeletalMesh>(NULL,TEXT("SkeletalMesh'/Game/Mannequins/Meshes/SKM_Quinn_Simple.SKM_Quinn_Simple'"));
	SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("This is a SpringArmComponent"));
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
}

void AMainCharacter::CreateModel() {

	GetMesh()->SetRelativeRotation(FRotator(0, -90, 0));
	GetMesh()->SetRelativeLocation(FVector(0,0,-100));
	GetMesh()->SetSkeletalMesh(SkeletaMesh);
	GetCapsuleComponent()->InitCapsuleSize(42,100);

}

// Called when the game starts or when spawned
void AMainCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMainCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMainCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("LookRight",this,&AMainCharacter::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookForward", this, &AMainCharacter::AddControllerPitchInput);

}
void AMainCharacter::ThirdPerson(){
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = true;

	GetCharacterMovement()->RotationRate = FRotator(0,540,0);

	SpringArmComponent->SetupAttachment(RootComponent);
	SpringArmComponent->SetRelativeLocation(FVector(0,0,100));
	SpringArmComponent->SetRelativeRotation(FRotator(-15, 0, 0));
	SpringArmComponent->bUsePawnControlRotation = true;
	//SpringArmComponent->bUsePawnControlRotation = false; // 摇臂无法上下摇晃

	CameraComponent->SetupAttachment(SpringArmComponent);
	CameraComponent->SetRelativeLocation(FVector::ZeroVector);
	CameraComponent->bUsePawnControlRotation = false;
}

