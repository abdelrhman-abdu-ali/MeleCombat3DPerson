// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimeInstances/Hero/WarriorHeroLinkedAnimeLayer.h"
#include "AnimeInstances/Hero/WarriorHeroAnimInstance.h"

UWarriorHeroAnimInstance* UWarriorHeroLinkedAnimeLayer::GetHeroAnimInstance() const
{
    return Cast<UWarriorHeroAnimInstance>(GetOwningComponent()->GetAnimInstance());

}
