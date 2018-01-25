// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "WSCharacter.generated.h"

UCLASS()
class WINGSUIT_API AWSCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Constructor required to assign our own CharacterMovementComponent
	AWSCharacter(const FObjectInitializer& OI);

	/**
	* --------------------------------------------
	* Entry point for handling of flying movement.
	* --------------------------------------------
	* Added a "FlyingTick" into CharacterMovementComponent because calculating the movement
	* from within the physics loop results in high accuracy that wont cause significant 
	* indiscrepancies at varied frame rates.
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "Character Movement: Flying")
	void FlyingTick(float DeltaTime);

	/**
	* Called by WSCharacterMovementComponent to notify that we have impacted another
	* object while flying.
	* @param Hit : The hit result for the impacted object
	* @param bIsWalkableFloor : True if the impacted object can be walked on
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "Character Movement: Flying")
	void OnImpactDuringFlying(const FHitResult& Hit, bool bIsWalkableFloor);
};
