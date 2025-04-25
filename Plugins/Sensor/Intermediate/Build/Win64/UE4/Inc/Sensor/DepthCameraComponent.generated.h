// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SENSOR_DepthCameraComponent_generated_h
#error "DepthCameraComponent.generated.h already included, missing '#pragma once' in DepthCameraComponent.h"
#endif
#define SENSOR_DepthCameraComponent_generated_h

#define HostProject_Plugins_Sensor_Source_Sensor_Public_DepthCameraComponent_h_19_SPARSE_DATA
#define HostProject_Plugins_Sensor_Source_Sensor_Public_DepthCameraComponent_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGenerateImageName); \
	DECLARE_FUNCTION(execSaveDepthImage); \
	DECLARE_FUNCTION(execCaptureDepthImage); \
	DECLARE_FUNCTION(execInitializeComponentSettings); \
	DECLARE_FUNCTION(execCaptureAndSendDepthImage);


#define HostProject_Plugins_Sensor_Source_Sensor_Public_DepthCameraComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGenerateImageName); \
	DECLARE_FUNCTION(execSaveDepthImage); \
	DECLARE_FUNCTION(execCaptureDepthImage); \
	DECLARE_FUNCTION(execInitializeComponentSettings); \
	DECLARE_FUNCTION(execCaptureAndSendDepthImage);


#define HostProject_Plugins_Sensor_Source_Sensor_Public_DepthCameraComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDepthCameraComponent(); \
	friend struct Z_Construct_UClass_UDepthCameraComponent_Statics; \
public: \
	DECLARE_CLASS(UDepthCameraComponent, USceneCaptureComponent2D, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Sensor"), NO_API) \
	DECLARE_SERIALIZER(UDepthCameraComponent)


#define HostProject_Plugins_Sensor_Source_Sensor_Public_DepthCameraComponent_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUDepthCameraComponent(); \
	friend struct Z_Construct_UClass_UDepthCameraComponent_Statics; \
public: \
	DECLARE_CLASS(UDepthCameraComponent, USceneCaptureComponent2D, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Sensor"), NO_API) \
	DECLARE_SERIALIZER(UDepthCameraComponent)


#define HostProject_Plugins_Sensor_Source_Sensor_Public_DepthCameraComponent_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDepthCameraComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDepthCameraComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDepthCameraComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDepthCameraComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDepthCameraComponent(UDepthCameraComponent&&); \
	NO_API UDepthCameraComponent(const UDepthCameraComponent&); \
public:


#define HostProject_Plugins_Sensor_Source_Sensor_Public_DepthCameraComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDepthCameraComponent(UDepthCameraComponent&&); \
	NO_API UDepthCameraComponent(const UDepthCameraComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDepthCameraComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDepthCameraComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDepthCameraComponent)


#define HostProject_Plugins_Sensor_Source_Sensor_Public_DepthCameraComponent_h_19_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_Sensor_Source_Sensor_Public_DepthCameraComponent_h_16_PROLOG
#define HostProject_Plugins_Sensor_Source_Sensor_Public_DepthCameraComponent_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_Sensor_Source_Sensor_Public_DepthCameraComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_Sensor_Source_Sensor_Public_DepthCameraComponent_h_19_SPARSE_DATA \
	HostProject_Plugins_Sensor_Source_Sensor_Public_DepthCameraComponent_h_19_RPC_WRAPPERS \
	HostProject_Plugins_Sensor_Source_Sensor_Public_DepthCameraComponent_h_19_INCLASS \
	HostProject_Plugins_Sensor_Source_Sensor_Public_DepthCameraComponent_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_Sensor_Source_Sensor_Public_DepthCameraComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_Sensor_Source_Sensor_Public_DepthCameraComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_Sensor_Source_Sensor_Public_DepthCameraComponent_h_19_SPARSE_DATA \
	HostProject_Plugins_Sensor_Source_Sensor_Public_DepthCameraComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_Sensor_Source_Sensor_Public_DepthCameraComponent_h_19_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_Sensor_Source_Sensor_Public_DepthCameraComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SENSOR_API UClass* StaticClass<class UDepthCameraComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_Sensor_Source_Sensor_Public_DepthCameraComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
