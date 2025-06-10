// Copyright Floral Dragon Studios

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "Interaction/EnemyInterface.h"
#include "AuraEnemy.generated.h"


/**
 * 
 */
UCLASS()
class AURA_API AAuraEnemy : public AAuraCharacterBase, public IEnemyInterface
{
	GENERATED_BODY()
public:
	AAuraEnemy();
	//Enemy Interface functions
	virtual void HighLightActor() override;
	virtual void UnHighLightActor() override;

	UPROPERTY(BlueprintReadOnly)
	bool bHighLighted = false;
protected:
	virtual void BeginPlay() override;
};
