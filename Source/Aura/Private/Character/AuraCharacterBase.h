// Copyright Floral Dragon Studios

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystem/AuraAbilitySystemComponent.h"
#include "AuraCharacterBase.generated.h"

UCLASS(Abstract)
class AAuraCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:	
	AAuraCharacterBase();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Combat")
	TObjectPtr<USkeletalMeshComponent> Weapon;

	UPROPERTY(Edit Anywhere)
	TObjectPtr<UAbilitySystemComponent>

};
