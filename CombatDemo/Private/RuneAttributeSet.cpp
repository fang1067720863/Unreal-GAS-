// Fill out your copyright notice in the Description page of Project Settings.


#include "RuneAttributeSet.h"
#include "Net/UnrealNetwork.h"


URuneAttributeSet::URuneAttributeSet()
{

}
void URuneAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	DOREPLIFETIME_CONDITION_NOTIFY(URuneAttributeSet, Health, COND_None, REPNOTIFY_Always);
}

void URuneAttributeSet::OnRep_Health(const FGameplayAttributeData& OldHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(URuneAttributeSet, Health, OldHealth);
}
