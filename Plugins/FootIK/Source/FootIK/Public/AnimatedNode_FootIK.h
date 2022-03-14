#pragma once

#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "AnimatedNode_FootIK.generated.h"

USTRUCT()
struct FPelvis
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = SkeletalControl)
	FBoneReference BoneReference;

	UPROPERTY()
	FVector Translation;
	
	float Offset = 0.0f;
	
};

USTRUCT()
struct FFoot
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = SkeletalControl)
	FBoneSocketTarget EffectorTarget;
	
	
	FVector EffectorLocation;

	UPROPERTY(EditAnywhere, Category = SkeletalControl)
	FName SocketName = "None";

	UPROPERTY(EditAnywhere, Category = SkeletalControl)
	FBoneSocketTarget JointTarget;

	UPROPERTY(EditAnywhere, Category = SkeletalControl)
	FVector JointTargetLocation;


	FVector Location;
	
	FRotator Rotation;
	
	FVector_NetQuantizeNormal HitNormal;
	
	float Offset = 0.0f;

	//Line Trace
	bool Hit = false;

	//Correction
	float HitNormalMax = 0.0f;
};

USTRUCT(BlueprintInternalUseOnly)
struct FOOTIK_API FAnimatedNode_FootIK : public FAnimNode_SkeletalControlBase
{
	GENERATED_BODY()
	
public:
	
	UPROPERTY(EditAnywhere, Category = SkeletalControl)
	FPelvis Pelvis;

	UPROPERTY(EditAnywhere, Category = SkeletalControl)
	FFoot LeftFoot;

	UPROPERTY(EditAnywhere, Category = SkeletalControl)
	FFoot RightFoot;

	UPROPERTY(EditAnywhere,Category = Calculations, meta = (ClampMin = "0.0", DisplayName = "Foot IK Apply Distance"))
	float ApplyDistance = 0.0f;

	UPROPERTY(EditAnywhere, Category = Calculations, meta = (ClampMin = "0.0", ClampMax = "1.0", DisplayName = "Offset Interpolation Alpha"))
	float OffsetAlpha = 0.0f;

	UPROPERTY(EditAnywhere, Category = Calculations, meta = (ClampMin = "0.0", ClampMax = "1.0", DisplayName = "Foot Rotation Interpolation Aplpha"))
	float RotationAlpha = 0.0f;

	UPROPERTY()
	class AActor* Actor = nullptr;;
	UPROPERTY()
	class USkeletalMeshComponent* Mesh = nullptr;
	UPROPERTY()
	class UCapsuleComponent* CapsuleComponent = nullptr;;
	UPROPERTY()
	class UCharacterMovementComponent* CharacterMovement = nullptr;;
	
	//Left chain
	FCompactPoseBoneIndex CachedLowerLimbIndex_L{INDEX_NONE};
	FCompactPoseBoneIndex CachedUpperLimbIndex_L{INDEX_NONE};
	
	//Right chain
	FCompactPoseBoneIndex CachedLowerLimbIndex_R{INDEX_NONE};
	FCompactPoseBoneIndex CachedUpperLimbIndex_R{INDEX_NONE};
	
	float PelvisOffsetLeft = 0.0f;
	float PelvisOffsetRight = 0.0f;

	virtual void Initialize_AnyThread(const FAnimationInitializeContext& Context) override;
	virtual void EvaluateSkeletalControl_AnyThread(FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms) override;
	virtual bool IsValidToEvaluate(const USkeleton* Skeleton, const FBoneContainer& RequiredBones) override;
	virtual void InitializeBoneReferences(const FBoneContainer& RequiredBones) override;

	void LineTraceCalculations(FVector_NetQuantizeNormal& HitNormal, float& PelvesOffset, FVector ActorLocation, FVector FootLocation, float CapsuleHalfHeight);
	
	void PelvisSkeletalControl(FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms, FBoneReference BoneReference, FBoneContainer BoneContainer,
		FVector Translation);
	
	void FootSkeletalControls(FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms, FBoneReference BoneReference, FBoneContainer BoneContainer,
		FCompactPoseBoneIndex CachedUpperLimbIndex, FCompactPoseBoneIndex CachedLowerLimbIndex, FBoneSocketTarget EffectorTarget, FVector EffectorLocation,
		FBoneSocketTarget JoinTarget, FVector JoinTargetLocation, FRotator Rotation);
};

