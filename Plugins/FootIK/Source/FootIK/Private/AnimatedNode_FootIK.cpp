#include "AnimatedNode_FootIK.h"
#include "TwoBoneIK.h"
#include "Animation/AnimInstanceProxy.h"
#include "GameFramework/Character.h"
#include "Kismet/KismetSystemLibrary.h"



void FAnimatedNode_FootIK::Initialize_AnyThread(const FAnimationInitializeContext& Context)
{
	Super::Initialize_AnyThread(Context);

	//Foot
	LeftFoot.EffectorTarget.Initialize(Context.AnimInstanceProxy);
	LeftFoot.JointTarget.Initialize(Context.AnimInstanceProxy);

	RightFoot.EffectorTarget.Initialize(Context.AnimInstanceProxy);
	RightFoot.JointTarget.Initialize(Context.AnimInstanceProxy);

	//References
	Mesh = Context.AnimInstanceProxy->GetSkelMeshComponent();
	Actor = Mesh->GetOwner();
	CapsuleComponent = Actor->FindComponentByClass<UCapsuleComponent>();
	CharacterMovement = Actor->FindComponentByClass<UCharacterMovementComponent>();

}


void FAnimatedNode_FootIK::EvaluateSkeletalControl_AnyThread(FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms)
{
	Super::EvaluateSkeletalControl_AnyThread(Output, OutBoneTransforms);
	
	const FBoneContainer& BoneContainer = Output.Pose.GetPose().GetBoneContainer();
	const float CapsuleHalfHeight = CapsuleComponent ? CapsuleComponent->GetUnscaledCapsuleHalfHeight():0.0f;
	TEnumAsByte<enum EMovementMode> MovementMode = CharacterMovement ? CharacterMovement->MovementMode : EMovementMode::MOVE_None;
	 FVector ActorLocation = Actor->GetActorLocation();
	LeftFoot.Location = Mesh->GetSocketLocation(LeftFoot.SocketName);
	RightFoot.Location = Mesh->GetSocketLocation(RightFoot.SocketName);

	if (MovementMode != MOVE_Walking) { return; }

	LineTraceCalculations(LeftFoot.HitNormal, PelvisOffsetLeft, ActorLocation, LeftFoot.Location, CapsuleHalfHeight);
	LineTraceCalculations(RightFoot.HitNormal, PelvisOffsetRight, ActorLocation, RightFoot.Location, CapsuleHalfHeight);

	float PelvisOffsetNew = PelvisOffsetLeft < PelvisOffsetRight ? PelvisOffsetLeft : PelvisOffsetRight;
	Pelvis.Offset = Pelvis.Offset + OffsetAlpha * (PelvisOffsetNew - Pelvis.Offset);
	Pelvis.Translation = FVector(0.0f, 0.0f, Pelvis.Offset);

	if (PelvisOffsetLeft > PelvisOffsetRight)
	{
		LeftFoot.Offset = LeftFoot.Offset + OffsetAlpha * (-PelvisOffsetRight + PelvisOffsetLeft - LeftFoot.Offset);
		RightFoot.Offset = RightFoot.Offset + OffsetAlpha * (0.0f - RightFoot.Offset);
	}
	else
	{
		LeftFoot.Offset = LeftFoot.Offset + OffsetAlpha * (0.0f - LeftFoot.Offset);
		RightFoot.Offset = RightFoot.Offset + OffsetAlpha * (-PelvisOffsetRight + PelvisOffsetLeft - RightFoot.Offset);
	}

	LeftFoot.EffectorLocation = FVector(LeftFoot.Offset, 0.0f, 0.0f);
	RightFoot.EffectorLocation = FVector(RightFoot.Offset, 0.0f, 0.0f);

	//Rotation
	float LeftFootPitch = -180.0f / PI * FGenericPlatformMath::Atan2(LeftFoot.HitNormal.X, LeftFoot.HitNormal.Z);
	float LeftFootYaw = 0.0f;
	float LeftFootRoll = 180.0f / PI * FGenericPlatformMath::Atan2(LeftFoot.HitNormal.X, LeftFoot.HitNormal.Z);
	LeftFoot.Rotation = LeftFoot.Rotation + RotationAlpha * (FRotator(LeftFootPitch, LeftFootYaw, LeftFootRoll) - LeftFoot.Rotation);

	float RightFootPitch = -180.0f / PI * FGenericPlatformMath::Atan2(RightFoot.HitNormal.X, RightFoot.HitNormal.Z);
	float RightFootYaw = 0.0f;
	float RightFootRoll = 180.0f / PI * FGenericPlatformMath::Atan2(RightFoot.HitNormal.X, RightFoot.HitNormal.Z);
	RightFoot.Rotation = RightFoot.Rotation + RotationAlpha * (FRotator(RightFootPitch, RightFootYaw, RightFootRoll) - RightFoot.Rotation);

	//Pelvis
	PelvisSkeletalControl(Output, OutBoneTransforms, Pelvis.BoneReference, BoneContainer, Pelvis.Translation);

	//Foot
	FootSkeletalControls(Output, OutBoneTransforms, LeftFoot.EffectorTarget.BoneReference, BoneContainer,
	                     CachedUpperLimbIndex_L, CachedLowerLimbIndex_L, LeftFoot.EffectorTarget, 
	                     LeftFoot.EffectorLocation, LeftFoot.JointTarget, LeftFoot.JointTargetLocation, LeftFoot.Rotation);
	
	FootSkeletalControls(Output, OutBoneTransforms, RightFoot.EffectorTarget.BoneReference, BoneContainer,
	                     CachedUpperLimbIndex_R, CachedLowerLimbIndex_R, RightFoot.EffectorTarget,
	                     RightFoot.EffectorLocation, RightFoot.JointTarget, RightFoot.JointTargetLocation, RightFoot.Rotation);
}

void FAnimatedNode_FootIK::InitializeBoneReferences(const FBoneContainer& RequiredBones)
{
	Pelvis.BoneReference.Initialize(RequiredBones);

	LeftFoot.EffectorTarget.InitializeBoneReferences(RequiredBones);
	LeftFoot.JointTarget.InitializeBoneReferences(RequiredBones);

	RightFoot.EffectorTarget.InitializeBoneReferences(RequiredBones);
	RightFoot.JointTarget.InitializeBoneReferences(RequiredBones);

	const FCompactPoseBoneIndex IKBoneCompactPoseIndex_L = LeftFoot.EffectorTarget.BoneReference.GetCompactPoseIndex(RequiredBones);

	if (IKBoneCompactPoseIndex_L != INDEX_NONE)
	{
		CachedLowerLimbIndex_L = RequiredBones.GetParentBoneIndex(IKBoneCompactPoseIndex_L);
		if (CachedLowerLimbIndex_L != INDEX_NONE)
		{
			CachedUpperLimbIndex_L = RequiredBones.GetParentBoneIndex(CachedLowerLimbIndex_L);
		}
	}

	const FCompactPoseBoneIndex IKBoneCompactPoseIndex_R = RightFoot.EffectorTarget.BoneReference.GetCompactPoseIndex(RequiredBones);

	if (IKBoneCompactPoseIndex_R != INDEX_NONE)
	{
		CachedLowerLimbIndex_R = RequiredBones.GetParentBoneIndex(IKBoneCompactPoseIndex_R);
		if (CachedLowerLimbIndex_R != INDEX_NONE)
		{
			CachedUpperLimbIndex_R = RequiredBones.GetParentBoneIndex(CachedLowerLimbIndex_R);
		}
	}

}

bool FAnimatedNode_FootIK::IsValidToEvaluate(const USkeleton* Skeleton, const FBoneContainer& RequiredBones)
{
	//Pelvis
	if (!Pelvis.BoneReference.IsValidToEvaluate(RequiredBones))
	{
		return false;
	}

	//Left Foot
	if ((CachedUpperLimbIndex_L == INDEX_NONE) || (CachedLowerLimbIndex_L == INDEX_NONE) ||
		(!LeftFoot.EffectorTarget.IsValidToEvaluate(RequiredBones) || (!LeftFoot.JointTarget.IsValidToEvaluate(RequiredBones))))
	{
		return false;
	}

	//Right Foot
	if ((CachedUpperLimbIndex_R == INDEX_NONE) || (CachedLowerLimbIndex_R == INDEX_NONE) ||
		(!RightFoot.EffectorTarget.IsValidToEvaluate(RequiredBones) || (!RightFoot.JointTarget.IsValidToEvaluate(RequiredBones))))
	{
		return false;
	}

	return true;
}



void FAnimatedNode_FootIK::LineTraceCalculations(FVector_NetQuantizeNormal& HitNormal, float& PelvesOffset, const FVector ActorLocation, const FVector FootLocation,
	const float CapsuleHalfHeight) 
{
	FHitResult HitResult;
	//FCollisionObjectQueryParams TraceParams;
	const FVector Start = FVector(FootLocation.X, FootLocation.Y, ActorLocation.Z);
	const FVector End = FVector(FootLocation.X, FootLocation.Y, (ActorLocation.Z - CapsuleHalfHeight - ApplyDistance));

	const TArray<AActor*> ActorsToIgnore{Actor};

	UKismetSystemLibrary::LineTraceSingle(Mesh, Start, End, TraceTypeQuery1, false, ActorsToIgnore, EDrawDebugTrace::None, HitResult, true);
	
	HitNormal = HitResult.Normal;

	//Pelvis Offset
	if (HitResult.bBlockingHit)
	{
		PelvesOffset = CapsuleHalfHeight - HitResult.Distance;
	}
	else
	{
		PelvesOffset = 0.0f;
	}

}

void FAnimatedNode_FootIK::PelvisSkeletalControl(FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms, const FBoneReference BoneReference,
	const FBoneContainer BoneContainer, const FVector Translation) 
{
	const FCompactPoseBoneIndex CompactPoseBoneReference = BoneReference.GetCompactPoseIndex(BoneContainer);
	FTransform NewBoneTM = Output.Pose.GetComponentSpaceTransform(CompactPoseBoneReference);
	const FTransform ComponentTransform = Output.AnimInstanceProxy->GetComponentTransform();
	FAnimationRuntime::ConvertCSTransformToBoneSpace(ComponentTransform, Output.Pose, NewBoneTM, CompactPoseBoneReference, BCS_ComponentSpace);
	
	NewBoneTM.AddToTranslation(Translation);

	FAnimationRuntime::ConvertBoneSpaceTransformToCS(ComponentTransform, Output.Pose, NewBoneTM, CompactPoseBoneReference, BCS_ComponentSpace);

	OutBoneTransforms.Add(FBoneTransform(BoneReference.GetCompactPoseIndex(BoneContainer), NewBoneTM));

}

void FAnimatedNode_FootIK::FootSkeletalControls(FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms, FBoneReference BoneReference, FBoneContainer BoneContainer,
	FCompactPoseBoneIndex CachedUpperLimbIndex, FCompactPoseBoneIndex CachedLowerLimbIndex, FBoneSocketTarget EffectorTarget, FVector EffectorLocation, FBoneSocketTarget JoinTarget,
	FVector JoinTargetLocation, FRotator Rotation) 
{
	FCompactPoseBoneIndex BoneReferenceCompactPoseIndex = BoneReference.GetCompactPoseIndex(BoneContainer);

	FTransform UpperLimbCSTransform = Output.Pose.GetComponentSpaceTransform(CachedUpperLimbIndex);
	FTransform LowerLimbCSTransform = Output.Pose.GetComponentSpaceTransform(CachedLowerLimbIndex);
	FTransform EndBoneCSTransform = Output.Pose.GetComponentSpaceTransform(BoneReferenceCompactPoseIndex);

	FVector DesiredPos = (EffectorTarget.GetTargetTransform(EffectorLocation, Output.Pose, Output.AnimInstanceProxy->GetComponentTransform()).GetTranslation() + Pelvis.Translation);

	FVector JoinTargetPos = (JoinTarget.GetTargetTransform(JoinTargetLocation, Output.Pose, Output.AnimInstanceProxy->GetComponentTransform())).GetTranslation();

	UpperLimbCSTransform.SetLocation(UpperLimbCSTransform.GetTranslation() + Pelvis.Translation);
	LowerLimbCSTransform.SetLocation(LowerLimbCSTransform.GetTranslation() + Pelvis.Translation);
	EndBoneCSTransform.SetLocation(EndBoneCSTransform.GetTranslation() + Pelvis.Translation);

	AnimationCore::SolveTwoBoneIK(UpperLimbCSTransform, LowerLimbCSTransform, EndBoneCSTransform, JoinTargetPos, DesiredPos,
		false, 1.0f, 1.2f);

	FTransform ComponentTransform = Output.AnimInstanceProxy->GetComponentTransform();
	FAnimationRuntime::ConvertCSTransformToBoneSpace(ComponentTransform, Output.Pose, EndBoneCSTransform, BoneReferenceCompactPoseIndex, BCS_ComponentSpace);
	
	const FQuat BoneQuat(Rotation);
	EndBoneCSTransform.SetRotation(BoneQuat * EndBoneCSTransform.GetRotation());

	FAnimationRuntime::ConvertBoneSpaceTransformToCS(ComponentTransform, Output.Pose, EndBoneCSTransform, BoneReferenceCompactPoseIndex, BCS_ComponentSpace);

	OutBoneTransforms.Add(FBoneTransform(CachedUpperLimbIndex, UpperLimbCSTransform));
	OutBoneTransforms.Add(FBoneTransform(CachedLowerLimbIndex, LowerLimbCSTransform));
	OutBoneTransforms.Add(FBoneTransform(BoneReferenceCompactPoseIndex, EndBoneCSTransform));

}
