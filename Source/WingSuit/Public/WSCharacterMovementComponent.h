// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "WSCharacterMovementComponent.generated.h"

/**
 * 
 */
UCLASS()
class WINGSUIT_API UWSCharacterMovementComponent : public UCharacterMovementComponent
{
	GENERATED_BODY()
	
public:
	virtual void PhysFlying(float deltaTime, int32 Iterations) override;
};
