// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIRSIM_PIPCamera_generated_h
#error "PIPCamera.generated.h already included, missing '#pragma once' in PIPCamera.h"
#endif
#define AIRSIM_PIPCamera_generated_h

#define uav_sim__Plugins_AirSim_Source_PIPCamera_h_26_SPARSE_DATA
#define uav_sim__Plugins_AirSim_Source_PIPCamera_h_26_RPC_WRAPPERS
#define uav_sim__Plugins_AirSim_Source_PIPCamera_h_26_RPC_WRAPPERS_NO_PURE_DECLS
#define uav_sim__Plugins_AirSim_Source_PIPCamera_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPIPCamera(); \
	friend struct Z_Construct_UClass_APIPCamera_Statics; \
public: \
	DECLARE_CLASS(APIPCamera, ACineCameraActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AirSim"), NO_API) \
	DECLARE_SERIALIZER(APIPCamera)


#define uav_sim__Plugins_AirSim_Source_PIPCamera_h_26_INCLASS \
private: \
	static void StaticRegisterNativesAPIPCamera(); \
	friend struct Z_Construct_UClass_APIPCamera_Statics; \
public: \
	DECLARE_CLASS(APIPCamera, ACineCameraActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AirSim"), NO_API) \
	DECLARE_SERIALIZER(APIPCamera)


#define uav_sim__Plugins_AirSim_Source_PIPCamera_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APIPCamera(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APIPCamera) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APIPCamera); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APIPCamera); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APIPCamera(APIPCamera&&); \
	NO_API APIPCamera(const APIPCamera&); \
public:


#define uav_sim__Plugins_AirSim_Source_PIPCamera_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APIPCamera(APIPCamera&&); \
	NO_API APIPCamera(const APIPCamera&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APIPCamera); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APIPCamera); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APIPCamera)


#define uav_sim__Plugins_AirSim_Source_PIPCamera_h_26_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__distortion_param_collection_() { return STRUCT_OFFSET(APIPCamera, distortion_param_collection_); } \
	FORCEINLINE static uint32 __PPO__distortion_param_instance_() { return STRUCT_OFFSET(APIPCamera, distortion_param_instance_); } \
	FORCEINLINE static uint32 __PPO__captures_() { return STRUCT_OFFSET(APIPCamera, captures_); } \
	FORCEINLINE static uint32 __PPO__render_targets_() { return STRUCT_OFFSET(APIPCamera, render_targets_); } \
	FORCEINLINE static uint32 __PPO__detections_() { return STRUCT_OFFSET(APIPCamera, detections_); } \
	FORCEINLINE static uint32 __PPO__camera_() { return STRUCT_OFFSET(APIPCamera, camera_); } \
	FORCEINLINE static uint32 __PPO__noise_materials_() { return STRUCT_OFFSET(APIPCamera, noise_materials_); } \
	FORCEINLINE static uint32 __PPO__distortion_materials_() { return STRUCT_OFFSET(APIPCamera, distortion_materials_); } \
	FORCEINLINE static uint32 __PPO__noise_material_static_() { return STRUCT_OFFSET(APIPCamera, noise_material_static_); } \
	FORCEINLINE static uint32 __PPO__distortion_material_static_() { return STRUCT_OFFSET(APIPCamera, distortion_material_static_); }


#define uav_sim__Plugins_AirSim_Source_PIPCamera_h_23_PROLOG
#define uav_sim__Plugins_AirSim_Source_PIPCamera_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	uav_sim__Plugins_AirSim_Source_PIPCamera_h_26_PRIVATE_PROPERTY_OFFSET \
	uav_sim__Plugins_AirSim_Source_PIPCamera_h_26_SPARSE_DATA \
	uav_sim__Plugins_AirSim_Source_PIPCamera_h_26_RPC_WRAPPERS \
	uav_sim__Plugins_AirSim_Source_PIPCamera_h_26_INCLASS \
	uav_sim__Plugins_AirSim_Source_PIPCamera_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define uav_sim__Plugins_AirSim_Source_PIPCamera_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	uav_sim__Plugins_AirSim_Source_PIPCamera_h_26_PRIVATE_PROPERTY_OFFSET \
	uav_sim__Plugins_AirSim_Source_PIPCamera_h_26_SPARSE_DATA \
	uav_sim__Plugins_AirSim_Source_PIPCamera_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	uav_sim__Plugins_AirSim_Source_PIPCamera_h_26_INCLASS_NO_PURE_DECLS \
	uav_sim__Plugins_AirSim_Source_PIPCamera_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIRSIM_API UClass* StaticClass<class APIPCamera>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID uav_sim__Plugins_AirSim_Source_PIPCamera_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
