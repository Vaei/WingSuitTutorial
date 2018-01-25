// Fill out your copyright notice in the Description page of Project Settings.

#include "WSCharacter.h"
#include "WSCharacterMovementComponent.h"

AWSCharacter::AWSCharacter(const FObjectInitializer& OI)
	: Super(OI.SetDefaultSubobjectClass<UWSCharacterMovementComponent>(AWSCharacter::CharacterMovementComponentName))
{

}
