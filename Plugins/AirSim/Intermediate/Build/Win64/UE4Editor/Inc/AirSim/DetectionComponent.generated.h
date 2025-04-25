// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIRSIM_DetectionComponent_generated_h
#error "DetectionComponent.generated.h already included, missing '#pragma once' in DetectionComponent.h"
#endif
#define AIRSIM_DetectionComponent_generated_h

#define Airsim_faster_rgbd_lib_Plugins_AirSim_Source_DetectionComponent_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDetectionInfo_Statics; \
	AIRSIM_API static class UScriptStruct* StaticStruct();


template<> AIRSIM_API UScriptStruct* StaticStruct<struct FDetectionInfo>();

#define Airsim_faster_rgbd_lib_Plugins_AirSim_Source_DetectionComponent_h_31_SPARSE_DATA
#define Airsim_faster_rgbd_lib_Plugins_AirSim_Source_DetectionComponent_h_31_RPC_WRAPPERS
#define Airsim_faster_rgbd_lib_Plugins_AirSim_Source_DetectionComponent_h_31_RPC_WRAPPERS_NO_PURE_DECLS
#define Airsim_faster_rgbd_lib_Plugins_AirSim_Source_DetectionComponent_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDetectionComponent(); \
	friend struct Z_Construct_UClass_UDetectionComponent_Statics; \
public: \
	DECLARE_CLASS(UDetectionComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AirSim"), NO_API) \
	DECLARE_SERIALIZER(UDetectionComponent)


#define Airsim_faster_rgbd_lib_Plugins_AirSim_Source_DetectionComponent_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUDetectionComponent(); \
	friend struct Z_Construct_UClass_UDetectionComponent_Statics; \
public: \
	DECLARE_CLASS(UDetectionComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AirSim"), NO_API) \
	DECLARE_SERIALIZER(UDetectionComponent)


#define Airsim_faster_rgbd_lib_Plugins_AirSim_Source_DetectionComponent_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDetectionComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDetectionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDetectionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDetectionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDetectionComponent(UDetectionComponent&&); \
	NO_API UDetectionComponent(const UDetectionComponent&); \
public:


#define Airsim_faster_rgbd_lib_Plugins_AirSim_Source_DetectionComponent_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDetectionComponent(UDetectionComponent&&); \
	NO_API UDetectionComponent(const UDetectionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDetectionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDetectionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDetectionComponent)


#define Airsim_faster_rgbd_lib_Plugins_AirSim_Source_DetectionComponent_h_31_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__object_filter_() { return STRUCT_OFFSET(UDetectionComponent, object_filter_); } \
	FORCEINLINE static uint32 __PPO__max_distance_to_camera_() { return STRUCT_OFFSET(UDetectionComponent, max_distance_to_camera_); } \
	FORCEINLINE static uint32 __PPO__scene_capture_component_2D_() { return STRUCT_OFFSET(UDetectionComponent, scene_capture_component_2D_); } \
	FORCEINLINE static uint32 __PPO__cached_detections_() { return STRUCT_OFFSET(UDetectionComponent, cached_detections_); }


#define Airsim_faster_rgbd_lib_Plugins_AirSim_Source_DetectionComponent_h_28_PROLOG
#define Airsim_faster_rgbd_lib_Plugins_AirSim_Source_DetectionComponent_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Airsim_faster_rgbd_lib_Plugins_AirSim_Source_DetectionComponent_h_31_PRIVATE_PROPERTY_OFFSET \
	Airsim_faster_rgbd_lib_Plugins_AirSim_Source_DetectionComponent_h_31_SPARSE_DATA \
	Airsim_faster_rgbd_lib_Plugins_AirSim_Source_DetectionComponent_h_31_RPC_WRAPPERS \
	Airsim_faster_rgbd_lib_Plugins_AirSim_Source_DetectionComponent_h_31_INCLASS \
	Airsim_faster_rgbd_lib_Plugins_AirSim_Source_DetectionComponent_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Airsim_faster_rgbd_lib_Plugins_AirSim_Source_DetectionComponent_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Airsim_faster_rgbd_lib_Plugins_AirSim_Source_DetectionComponent_h_31_PRIVATE_PROPERTY_OFFSET \
	Airsim_faster_rgbd_lib_Plugins_AirSim_Source_DetectionComponent_h_31_SPARSE_DATA \
	Airsim_faster_rgbd_lib_Plugins_AirSim_Source_DetectionComponent_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	Airsim_faster_rgbd_lib_Plugins_AirSim_Source_DetectionComponent_h_31_INCLASS_NO_PURE_DECLS \
	Airsim_faster_rgbd_lib_Plugins_AirSim_Source_DetectionComponent_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIRSIM_API UClass* StaticClass<class UDetectionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Airsim_faster_rgbd_lib_Plugins_AirSim_Source_DetectionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
