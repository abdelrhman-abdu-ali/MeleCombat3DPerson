// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "NativeGameplayTags.h"


namespace WarriorGameplayTags
{
	/** Input Tags **/
	MELECOMBAT3DPERSON_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Move);
	MELECOMBAT3DPERSON_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Look);
	MELECOMBAT3DPERSON_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_EquipAxe);
	MELECOMBAT3DPERSON_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_UnequipAxe);
	MELECOMBAT3DPERSON_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_LightAttack_Axe);
	MELECOMBAT3DPERSON_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_HeavyAttack_Axe);


	/** Player tags **/
	MELECOMBAT3DPERSON_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Equip_Axe);
	MELECOMBAT3DPERSON_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Unequip_Axe);
	MELECOMBAT3DPERSON_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Attack_Light_Axe);
	MELECOMBAT3DPERSON_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Attack_Heavy_Axe);

	MELECOMBAT3DPERSON_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Weapon_Axe);
	MELECOMBAT3DPERSON_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Event_Equip_Axe);
	MELECOMBAT3DPERSON_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Event_Unequip_Axe);
	MELECOMBAT3DPERSON_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Status_JumpToFinisher);
	MELECOMBAT3DPERSON_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_SetByCaller_AttackType_Light);
	MELECOMBAT3DPERSON_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_SetByCaller_AttackType_Heavy);
	/** Enemy tags **/

	MELECOMBAT3DPERSON_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Enemy_Weapon);

	/** Shared tags **/
	MELECOMBAT3DPERSON_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Shared_Event_MeleeHit);
	MELECOMBAT3DPERSON_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Shared_SetByCaller_BaseDamage);
}