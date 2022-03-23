// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FootIK/Public/AnimatedNode_FootIK.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimatedNode_FootIK() {}
// Cross Module References
	FOOTIK_API UScriptStruct* Z_Construct_UScriptStruct_FAnimatedNode_FootIK();
	UPackage* Z_Construct_UPackage__Script_FootIK();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	FOOTIK_API UScriptStruct* Z_Construct_UScriptStruct_FPelvis();
	FOOTIK_API UScriptStruct* Z_Construct_UScriptStruct_FFoot();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FBoneSocketTarget();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimatedNode_FootIK>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimatedNode_FootIK cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

class UScriptStruct* FAnimatedNode_FootIK::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FOOTIK_API uint32 Get_Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimatedNode_FootIK, Z_Construct_UPackage__Script_FootIK(), TEXT("AnimatedNode_FootIK"), sizeof(FAnimatedNode_FootIK), Get_Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Hash());
	}
	return Singleton;
}
template<> FOOTIK_API UScriptStruct* StaticStruct<FAnimatedNode_FootIK>()
{
	return FAnimatedNode_FootIK::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimatedNode_FootIK(FAnimatedNode_FootIK::StaticStruct, TEXT("/Script/FootIK"), TEXT("AnimatedNode_FootIK"), false, nullptr, nullptr);
static struct FScriptStruct_FootIK_StaticRegisterNativesFAnimatedNode_FootIK
{
	FScriptStruct_FootIK_StaticRegisterNativesFAnimatedNode_FootIK()
	{
		UScriptStruct::DeferCppStructOps<FAnimatedNode_FootIK>(FName(TEXT("AnimatedNode_FootIK")));
	}
} ScriptStruct_FootIK_StaticRegisterNativesFAnimatedNode_FootIK;
	struct Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pelvis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Pelvis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftFoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftFoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightFoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightFoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplyDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ApplyDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OffsetAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsuleComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CapsuleComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterMovement;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimatedNode_FootIK.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimatedNode_FootIK>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Statics::NewProp_Pelvis_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/AnimatedNode_FootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Statics::NewProp_Pelvis = { "Pelvis", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimatedNode_FootIK, Pelvis), Z_Construct_UScriptStruct_FPelvis, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Statics::NewProp_Pelvis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Statics::NewProp_Pelvis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Statics::NewProp_LeftFoot_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/AnimatedNode_FootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Statics::NewProp_LeftFoot = { "LeftFoot", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimatedNode_FootIK, LeftFoot), Z_Construct_UScriptStruct_FFoot, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Statics::NewProp_LeftFoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Statics::NewProp_LeftFoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Statics::NewProp_RightFoot_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/AnimatedNode_FootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Statics::NewProp_RightFoot = { "RightFoot", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimatedNode_FootIK, RightFoot), Z_Construct_UScriptStruct_FFoot, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Statics::NewProp_RightFoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Statics::NewProp_RightFoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Statics::NewProp_ApplyDistance_MetaData[] = {
		{ "Category", "Calculations" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Foot IK Apply Distance" },
		{ "ModuleRelativePath", "Public/AnimatedNode_FootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Statics::NewProp_ApplyDistance = { "ApplyDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimatedNode_FootIK, ApplyDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Statics::NewProp_ApplyDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Statics::NewProp_ApplyDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Statics::NewProp_OffsetAlpha_MetaData[] = {
		{ "Category", "Calculations" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Offset Interpolation Alpha" },
		{ "ModuleRelativePath", "Public/AnimatedNode_FootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Statics::NewProp_OffsetAlpha = { "OffsetAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimatedNode_FootIK, OffsetAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Statics::NewProp_OffsetAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Statics::NewProp_OffsetAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Statics::NewProp_RotationAlpha_MetaData[] = {
		{ "Category", "Calculations" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Foot Rotation Interpolation Aplpha" },
		{ "ModuleRelativePath", "Public/AnimatedNode_FootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Statics::NewProp_RotationAlpha = { "RotationAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimatedNode_FootIK, RotationAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Statics::NewProp_RotationAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Statics::NewProp_RotationAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Statics::NewProp_Actor_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimatedNode_FootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimatedNode_FootIK, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Statics::NewProp_Actor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Statics::NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AnimatedNode_FootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimatedNode_FootIK, Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Statics::NewProp_CapsuleComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AnimatedNode_FootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Statics::NewProp_CapsuleComponent = { "CapsuleComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimatedNode_FootIK, CapsuleComponent), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Statics::NewProp_CapsuleComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Statics::NewProp_CapsuleComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Statics::NewProp_CharacterMovement_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AnimatedNode_FootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Statics::NewProp_CharacterMovement = { "CharacterMovement", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimatedNode_FootIK, CharacterMovement), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Statics::NewProp_CharacterMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Statics::NewProp_CharacterMovement_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Statics::NewProp_Pelvis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Statics::NewProp_LeftFoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Statics::NewProp_RightFoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Statics::NewProp_ApplyDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Statics::NewProp_OffsetAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Statics::NewProp_RotationAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Statics::NewProp_CapsuleComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Statics::NewProp_CharacterMovement,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FootIK,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimatedNode_FootIK",
		sizeof(FAnimatedNode_FootIK),
		alignof(FAnimatedNode_FootIK),
		Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimatedNode_FootIK()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FootIK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimatedNode_FootIK"), sizeof(FAnimatedNode_FootIK), Get_Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimatedNode_FootIK_Hash() { return 2356120115U; }
class UScriptStruct* FFoot::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FOOTIK_API uint32 Get_Z_Construct_UScriptStruct_FFoot_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFoot, Z_Construct_UPackage__Script_FootIK(), TEXT("Foot"), sizeof(FFoot), Get_Z_Construct_UScriptStruct_FFoot_Hash());
	}
	return Singleton;
}
template<> FOOTIK_API UScriptStruct* StaticStruct<FFoot>()
{
	return FFoot::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFoot(FFoot::StaticStruct, TEXT("/Script/FootIK"), TEXT("Foot"), false, nullptr, nullptr);
static struct FScriptStruct_FootIK_StaticRegisterNativesFFoot
{
	FScriptStruct_FootIK_StaticRegisterNativesFFoot()
	{
		UScriptStruct::DeferCppStructOps<FFoot>(FName(TEXT("Foot")));
	}
} ScriptStruct_FootIK_StaticRegisterNativesFFoot;
	struct Z_Construct_UScriptStruct_FFoot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectorTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectorTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JointTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_JointTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JointTargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_JointTargetLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoot_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimatedNode_FootIK.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFoot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFoot>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoot_Statics::NewProp_EffectorTarget_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/AnimatedNode_FootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFoot_Statics::NewProp_EffectorTarget = { "EffectorTarget", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFoot, EffectorTarget), Z_Construct_UScriptStruct_FBoneSocketTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FFoot_Statics::NewProp_EffectorTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoot_Statics::NewProp_EffectorTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoot_Statics::NewProp_SocketName_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/AnimatedNode_FootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFoot_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFoot, SocketName), METADATA_PARAMS(Z_Construct_UScriptStruct_FFoot_Statics::NewProp_SocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoot_Statics::NewProp_SocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoot_Statics::NewProp_JointTarget_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/AnimatedNode_FootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFoot_Statics::NewProp_JointTarget = { "JointTarget", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFoot, JointTarget), Z_Construct_UScriptStruct_FBoneSocketTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FFoot_Statics::NewProp_JointTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoot_Statics::NewProp_JointTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoot_Statics::NewProp_JointTargetLocation_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/AnimatedNode_FootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFoot_Statics::NewProp_JointTargetLocation = { "JointTargetLocation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFoot, JointTargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FFoot_Statics::NewProp_JointTargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoot_Statics::NewProp_JointTargetLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFoot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoot_Statics::NewProp_EffectorTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoot_Statics::NewProp_SocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoot_Statics::NewProp_JointTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoot_Statics::NewProp_JointTargetLocation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFoot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FootIK,
		nullptr,
		&NewStructOps,
		"Foot",
		sizeof(FFoot),
		alignof(FFoot),
		Z_Construct_UScriptStruct_FFoot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFoot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFoot()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFoot_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FootIK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Foot"), sizeof(FFoot), Get_Z_Construct_UScriptStruct_FFoot_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFoot_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFoot_Hash() { return 2818527711U; }
class UScriptStruct* FPelvis::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FOOTIK_API uint32 Get_Z_Construct_UScriptStruct_FPelvis_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPelvis, Z_Construct_UPackage__Script_FootIK(), TEXT("Pelvis"), sizeof(FPelvis), Get_Z_Construct_UScriptStruct_FPelvis_Hash());
	}
	return Singleton;
}
template<> FOOTIK_API UScriptStruct* StaticStruct<FPelvis>()
{
	return FPelvis::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPelvis(FPelvis::StaticStruct, TEXT("/Script/FootIK"), TEXT("Pelvis"), false, nullptr, nullptr);
static struct FScriptStruct_FootIK_StaticRegisterNativesFPelvis
{
	FScriptStruct_FootIK_StaticRegisterNativesFPelvis()
	{
		UScriptStruct::DeferCppStructOps<FPelvis>(FName(TEXT("Pelvis")));
	}
} ScriptStruct_FootIK_StaticRegisterNativesFPelvis;
	struct Z_Construct_UScriptStruct_FPelvis_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneReference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Translation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Translation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPelvis_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimatedNode_FootIK.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPelvis_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPelvis>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPelvis_Statics::NewProp_BoneReference_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/AnimatedNode_FootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPelvis_Statics::NewProp_BoneReference = { "BoneReference", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPelvis, BoneReference), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FPelvis_Statics::NewProp_BoneReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPelvis_Statics::NewProp_BoneReference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPelvis_Statics::NewProp_Translation_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimatedNode_FootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPelvis_Statics::NewProp_Translation = { "Translation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPelvis, Translation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPelvis_Statics::NewProp_Translation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPelvis_Statics::NewProp_Translation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPelvis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPelvis_Statics::NewProp_BoneReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPelvis_Statics::NewProp_Translation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPelvis_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FootIK,
		nullptr,
		&NewStructOps,
		"Pelvis",
		sizeof(FPelvis),
		alignof(FPelvis),
		Z_Construct_UScriptStruct_FPelvis_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPelvis_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPelvis_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPelvis_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPelvis()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPelvis_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FootIK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Pelvis"), sizeof(FPelvis), Get_Z_Construct_UScriptStruct_FPelvis_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPelvis_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPelvis_Hash() { return 764765901U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
