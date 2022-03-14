// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AnimatedNode_FootIK.h"
#include "AnimGraphNode_SkeletalControlBase.h"
#include "AnimGraphNode_FootIK.generated.h"

/**
 * 
 */

UCLASS()
class FOOTIKEDITOR_API UAnimGraphNode_FootIK : public UAnimGraphNode_SkeletalControlBase
{
	GENERATED_BODY()
	
public:
	
	
	virtual FText GetTooltipText() const override;
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleTupe) const override;
	virtual FString GetNodeCategory() const override;
	virtual const FAnimNode_SkeletalControlBase* GetNode() const override;

	UPROPERTY(EditAnywhere, Category = "Setting")
	FAnimatedNode_FootIK Node;
};