// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/DetectionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDetectionComponent() {}
// Cross Module References
	AIRSIM_API UScriptStruct* Z_Construct_UScriptStruct_FDetectionInfo();
	UPackage* Z_Construct_UPackage__Script_AirSim();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	AIRSIM_API UClass* Z_Construct_UClass_UDetectionComponent_NoRegister();
	AIRSIM_API UClass* Z_Construct_UClass_UDetectionComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	AIRSIM_API UScriptStruct* Z_Construct_UScriptStruct_FObjectFilter();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
// End Cross Module References
class UScriptStruct* FDetectionInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIRSIM_API uint32 Get_Z_Construct_UScriptStruct_FDetectionInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDetectionInfo, Z_Construct_UPackage__Script_AirSim(), TEXT("DetectionInfo"), sizeof(FDetectionInfo), Get_Z_Construct_UScriptStruct_FDetectionInfo_Hash());
	}
	return Singleton;
}
template<> AIRSIM_API UScriptStruct* StaticStruct<FDetectionInfo>()
{
	return FDetectionInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDetectionInfo(FDetectionInfo::StaticStruct, TEXT("/Script/AirSim"), TEXT("DetectionInfo"), false, nullptr, nullptr);
static struct FScriptStruct_AirSim_StaticRegisterNativesFDetectionInfo
{
	FScriptStruct_AirSim_StaticRegisterNativesFDetectionInfo()
	{
		UScriptStruct::DeferCppStructOps<FDetectionInfo>(FName(TEXT("DetectionInfo")));
	}
} ScriptStruct_AirSim_StaticRegisterNativesFDetectionInfo;
	struct Z_Construct_UScriptStruct_FDetectionInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Box2D_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Box2D;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Box3D_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Box3D;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetectionInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "DetectionComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDetectionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDetectionInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetectionInfo_Statics::NewProp_Actor_MetaData[] = {
		{ "ModuleRelativePath", "DetectionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDetectionInfo_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDetectionInfo, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDetectionInfo_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetectionInfo_Statics::NewProp_Actor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetectionInfo_Statics::NewProp_Box2D_MetaData[] = {
		{ "ModuleRelativePath", "DetectionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDetectionInfo_Statics::NewProp_Box2D = { "Box2D", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDetectionInfo, Box2D), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FDetectionInfo_Statics::NewProp_Box2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetectionInfo_Statics::NewProp_Box2D_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetectionInfo_Statics::NewProp_Box3D_MetaData[] = {
		{ "ModuleRelativePath", "DetectionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDetectionInfo_Statics::NewProp_Box3D = { "Box3D", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDetectionInfo, Box3D), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UScriptStruct_FDetectionInfo_Statics::NewProp_Box3D_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetectionInfo_Statics::NewProp_Box3D_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetectionInfo_Statics::NewProp_RelativeTransform_MetaData[] = {
		{ "ModuleRelativePath", "DetectionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDetectionInfo_Statics::NewProp_RelativeTransform = { "RelativeTransform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDetectionInfo, RelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FDetectionInfo_Statics::NewProp_RelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetectionInfo_Statics::NewProp_RelativeTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDetectionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetectionInfo_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetectionInfo_Statics::NewProp_Box2D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetectionInfo_Statics::NewProp_Box3D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetectionInfo_Statics::NewProp_RelativeTransform,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDetectionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AirSim,
		nullptr,
		&NewStructOps,
		"DetectionInfo",
		sizeof(FDetectionInfo),
		alignof(FDetectionInfo),
		Z_Construct_UScriptStruct_FDetectionInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetectionInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDetectionInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetectionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDetectionInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDetectionInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AirSim();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DetectionInfo"), sizeof(FDetectionInfo), Get_Z_Construct_UScriptStruct_FDetectionInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDetectionInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDetectionInfo_Hash() { return 3025123738U; }
	void UDetectionComponent::StaticRegisterNativesUDetectionComponent()
	{
	}
	UClass* Z_Construct_UClass_UDetectionComponent_NoRegister()
	{
		return UDetectionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDetectionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_texture_target__MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_texture_target_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_object_filter__MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_object_filter_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_max_distance_to_camera__MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_max_distance_to_camera_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_scene_capture_component_2D__MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_scene_capture_component_2D_;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_cached_detections__Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cached_detections__MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_cached_detections_;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDetectionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AirSim,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDetectionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "DetectionComponent.h" },
		{ "ModuleRelativePath", "DetectionComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDetectionComponent_Statics::NewProp_texture_target__MetaData[] = {
		{ "ModuleRelativePath", "DetectionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDetectionComponent_Statics::NewProp_texture_target_ = { "texture_target_", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDetectionComponent, texture_target_), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDetectionComponent_Statics::NewProp_texture_target__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDetectionComponent_Statics::NewProp_texture_target__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDetectionComponent_Statics::NewProp_object_filter__MetaData[] = {
		{ "ModuleRelativePath", "DetectionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDetectionComponent_Statics::NewProp_object_filter_ = { "object_filter_", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDetectionComponent, object_filter_), Z_Construct_UScriptStruct_FObjectFilter, METADATA_PARAMS(Z_Construct_UClass_UDetectionComponent_Statics::NewProp_object_filter__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDetectionComponent_Statics::NewProp_object_filter__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDetectionComponent_Statics::NewProp_max_distance_to_camera__MetaData[] = {
		{ "Category", "Tracked Actors" },
		{ "ModuleRelativePath", "DetectionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDetectionComponent_Statics::NewProp_max_distance_to_camera_ = { "max_distance_to_camera_", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDetectionComponent, max_distance_to_camera_), METADATA_PARAMS(Z_Construct_UClass_UDetectionComponent_Statics::NewProp_max_distance_to_camera__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDetectionComponent_Statics::NewProp_max_distance_to_camera__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDetectionComponent_Statics::NewProp_scene_capture_component_2D__MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DetectionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDetectionComponent_Statics::NewProp_scene_capture_component_2D_ = { "scene_capture_component_2D_", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDetectionComponent, scene_capture_component_2D_), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDetectionComponent_Statics::NewProp_scene_capture_component_2D__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDetectionComponent_Statics::NewProp_scene_capture_component_2D__MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDetectionComponent_Statics::NewProp_cached_detections__Inner = { "cached_detections_", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDetectionInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDetectionComponent_Statics::NewProp_cached_detections__MetaData[] = {
		{ "ModuleRelativePath", "DetectionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDetectionComponent_Statics::NewProp_cached_detections_ = { "cached_detections_", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDetectionComponent, cached_detections_), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDetectionComponent_Statics::NewProp_cached_detections__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDetectionComponent_Statics::NewProp_cached_detections__MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDetectionComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDetectionComponent_Statics::NewProp_texture_target_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDetectionComponent_Statics::NewProp_object_filter_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDetectionComponent_Statics::NewProp_max_distance_to_camera_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDetectionComponent_Statics::NewProp_scene_capture_component_2D_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDetectionComponent_Statics::NewProp_cached_detections__Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDetectionComponent_Statics::NewProp_cached_detections_,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDetectionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDetectionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDetectionComponent_Statics::ClassParams = {
		&UDetectionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDetectionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDetectionComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDetectionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDetectionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDetectionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDetectionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDetectionComponent, 2504316728);
	template<> AIRSIM_API UClass* StaticClass<UDetectionComponent>()
	{
		return UDetectionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDetectionComponent(Z_Construct_UClass_UDetectionComponent, &UDetectionComponent::StaticClass, TEXT("/Script/AirSim"), TEXT("UDetectionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDetectionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
