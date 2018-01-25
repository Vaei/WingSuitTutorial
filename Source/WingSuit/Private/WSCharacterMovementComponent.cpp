// Fill out your copyright notice in the Description page of Project Settings.

#include "WSCharacterMovementComponent.h"
#include "WSCharacter.h"

// ==============================================================================
// * Copied from UCharacterMovementComponent::PhysFlying
// * Added a "FlyingTick" because calculating the movement
// * from within the physics loop results in high accuracy
// * that wont cause significant indiscrepencies at varied
// * frame rates.
// ==============================================================================
void UWSCharacterMovementComponent::PhysFlying(float deltaTime, int32 Iterations)
{
	if (deltaTime < MIN_TICK_TIME)
	{
		return;
	}

	if (!CharacterOwner)
	{
		return;
	}

	float remainingTime = deltaTime;
	while ((remainingTime >= MIN_TICK_TIME) && (Iterations < MaxSimulationIterations))
	{
		Iterations++;
		const float timeTick = GetSimulationTimeStep(remainingTime, Iterations);
		remainingTime -= timeTick;

		RestorePreAdditiveRootMotionVelocity();

		AWSCharacter* WSCharacter = Cast<AWSCharacter>(CharacterOwner);
		if (!WSCharacter)
		{
			return;
		}

		if (!HasAnimRootMotion() && !CurrentRootMotion.HasOverrideVelocity())
		{
			if (bCheatFlying && Acceleration.IsZero())
			{
				Velocity = FVector::ZeroVector;
			}

			WSCharacter->FlyingTick(timeTick);
		}

		ApplyRootMotionToVelocity(deltaTime);

		Iterations++;
		bJustTeleported = false;

		FVector OldLocation = UpdatedComponent->GetComponentLocation();
		const FVector Adjusted = Velocity * deltaTime;
		FHitResult Hit(1.f);
		SafeMoveUpdatedComponent(Adjusted, UpdatedComponent->GetComponentQuat(), true, Hit);

		if (Hit.Time < 1.f)
		{
			WSCharacter->OnImpactDuringFlying(Hit, IsWalkable(Hit));

			const FVector GravDir = FVector(0.f, 0.f, -1.f);
			const FVector VelDir = Velocity.GetSafeNormal();
			const float UpDown = GravDir | VelDir;

			bool bSteppedUp = false;
			if ((FMath::Abs(Hit.ImpactNormal.Z) < 0.2f) && (UpDown < 0.5f) && (UpDown > -0.2f) && CanStepUp(Hit))
			{
				float stepZ = UpdatedComponent->GetComponentLocation().Z;
				bSteppedUp = StepUp(GravDir, Adjusted * (1.f - Hit.Time), Hit);
				if (bSteppedUp)
				{
					OldLocation.Z = UpdatedComponent->GetComponentLocation().Z + (OldLocation.Z - stepZ);
				}
			}

			if (!bSteppedUp)
			{
				//adjust and try again
				HandleImpact(Hit, deltaTime, Adjusted);
				SlideAlongSurface(Adjusted, (1.f - Hit.Time), Hit.Normal, Hit, true);
			}
		}

		if (!bJustTeleported && !HasAnimRootMotion() && !CurrentRootMotion.HasOverrideVelocity())
		{
			Velocity = (UpdatedComponent->GetComponentLocation() - OldLocation) / deltaTime;
		}
	}
}
