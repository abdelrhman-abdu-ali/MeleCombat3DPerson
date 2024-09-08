// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AnimeInstances/WarriorBaseAnimInstance.h"
#include "WarriorHeroLinkedAnimeLayer.generated.h"

class UWarriorHeroAnimInstance;

/**
 * 
 */
UCLASS()
class MELECOMBAT3DPERSON_API UWarriorHeroLinkedAnimeLayer : public UWarriorBaseAnimInstance
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, meta = (BlueprintThreadSafe))
	UWarriorHeroAnimInstance* GetHeroAnimInstance() const;
	
};
