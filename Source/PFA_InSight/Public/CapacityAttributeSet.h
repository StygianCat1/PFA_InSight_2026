// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "CapacityAttributeSet.generated.h"

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)


/**
 * 
 */
UCLASS()
class PFA_INSIGHT_API UCapacityAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
	
	UPROPERTY()
	FGameplayAttributeData Health = 100.0f;
	ATTRIBUTE_ACCESSORS(UQuodHealthAttributeSet, Health)

	UPROPERTY()
	FGameplayAttributeData Insight = 0.0f;
	ATTRIBUTE_ACCESSORS(UQuodHealthAttributeSet, InSight)

	UPROPERTY()
	FGameplayAttributeData CoolDown = 60.0f;
	ATTRIBUTE_ACCESSORS(UQuodHealthAttributeSet, CoolDown)

	UPROPERTY()
	FGameplayAttributeData Duration = 15.0f;
	ATTRIBUTE_ACCESSORS(UQuodHealthAttributeSet, Duration)
};
