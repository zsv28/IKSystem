// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimGraphNode_FootIK.h"


FText UAnimGraphNode_FootIK::GetTooltipText() const
{
	
	return FText::FromString(FString("FootIK"));
}

FText UAnimGraphNode_FootIK::GetNodeTitle(ENodeTitleType::Type TitleTupe) const
{
	
	return FText::FromString(FString("FootIK"));
}

FString UAnimGraphNode_FootIK::GetNodeCategory() const
{
	return FString("FootIK");
}

const FAnimNode_SkeletalControlBase* UAnimGraphNode_FootIK::GetNode() const
{
	return &Node;
}
