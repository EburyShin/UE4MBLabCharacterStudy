// © Ajit D'Monte 2019


#include "fBlahMirrorCharacter.h"
#include "MirrorCharacterMovementComponent.h"

// Sets default values
AfBlahMirrorCharacter::AfBlahMirrorCharacter(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer.SetDefaultSubobjectClass<UMirrorCharacterMovementComponent>(ACharacter::CharacterMovementComponentName))
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AfBlahMirrorCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AfBlahMirrorCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AfBlahMirrorCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

