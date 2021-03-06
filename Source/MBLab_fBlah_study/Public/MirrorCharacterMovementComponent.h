// © Ajit D'Monte 2019

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "MirrorCharacterMovementComponent.generated.h"

/**
 * 
 */
UCLASS()
class MBLAB_FBLAH_STUDY_API UMirrorCharacterMovementComponent : public UCharacterMovementComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Category = "Character Movement: Mirror", EditAnywhere, BlueprintReadWrite)
		FVector RootMotionAxis;	

	UMirrorCharacterMovementComponent(const FObjectInitializer& ObjectInitializer);

private:
		virtual FVector CalcAnimRootMotionVelocity(const FVector& RootMotionDeltaMove, float DeltaSeconds, const FVector& CurrentVelocity) const;
		
		
protected:

	virtual void PhysWalking(float DeltaTime, int32 Iterations) override;

	virtual void OnRegister() override;
};
