// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SENSOR_rgbCaptureComponent_generated_h
#error "rgbCaptureComponent.generated.h already included, missing '#pragma once' in rgbCaptureComponent.h"
#endif
#define SENSOR_rgbCaptureComponent_generated_h

#define HostProject_Plugins_Sensor_Source_Sensor_Public_rgbCaptureComponent_h_15_SPARSE_DATA
#define HostProject_Plugins_Sensor_Source_Sensor_Public_rgbCaptureComponent_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execresetSettings); \
	DECLARE_FUNCTION(execCaptureRGBImage); \
	DECLARE_FUNCTION(execInitializeComponentSettings); \
	DECLARE_FUNCTION(execCaptureAndSendRGBImage);


#define HostProject_Plugins_Sensor_Source_Sensor_Public_rgbCaptureComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execresetSettings); \
	DECLARE_FUNCTION(execCaptureRGBImage); \
	DECLARE_FUNCTION(execInitializeComponentSettings); \
	DECLARE_FUNCTION(execCaptureAndSendRGBImage);


#define HostProject_Plugins_Sensor_Source_Sensor_Public_rgbCaptureComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUrgbCaptureComponent(); \
	friend struct Z_Construct_UClass_UrgbCaptureComponent_Statics; \
public: \
	DECLARE_CLASS(UrgbCaptureComponent, USceneCaptureComponent2D, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Sensor"), NO_API) \
	DECLARE_SERIALIZER(UrgbCaptureComponent)


#define HostProject_Plugins_Sensor_Source_Sensor_Public_rgbCaptureComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUrgbCaptureComponent(); \
	friend struct Z_Construct_UClass_UrgbCaptureComponent_Statics; \
public: \
	DECLARE_CLASS(UrgbCaptureComponent, USceneCaptureComponent2D, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Sensor"), NO_API) \
	DECLARE_SERIALIZER(UrgbCaptureComponent)


#define HostProject_Plugins_Sensor_Source_Sensor_Public_rgbCaptureComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UrgbCaptureComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UrgbCaptureComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UrgbCaptureComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UrgbCaptureComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UrgbCaptureComponent(UrgbCaptureComponent&&); \
	NO_API UrgbCaptureComponent(const UrgbCaptureComponent&); \
public:


#define HostProject_Plugins_Sensor_Source_Sensor_Public_rgbCaptureComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UrgbCaptureComponent(UrgbCaptureComponent&&); \
	NO_API UrgbCaptureComponent(const UrgbCaptureComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UrgbCaptureComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UrgbCaptureComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UrgbCaptureComponent)


#define HostProject_Plugins_Sensor_Source_Sensor_Public_rgbCaptureComponent_h_15_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_Sensor_Source_Sensor_Public_rgbCaptureComponent_h_12_PROLOG
#define HostProject_Plugins_Sensor_Source_Sensor_Public_rgbCaptureComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_Sensor_Source_Sensor_Public_rgbCaptureComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_Sensor_Source_Sensor_Public_rgbCaptureComponent_h_15_SPARSE_DATA \
	HostProject_Plugins_Sensor_Source_Sensor_Public_rgbCaptureComponent_h_15_RPC_WRAPPERS \
	HostProject_Plugins_Sensor_Source_Sensor_Public_rgbCaptureComponent_h_15_INCLASS \
	HostProject_Plugins_Sensor_Source_Sensor_Public_rgbCaptureComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_Sensor_Source_Sensor_Public_rgbCaptureComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_Sensor_Source_Sensor_Public_rgbCaptureComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_Sensor_Source_Sensor_Public_rgbCaptureComponent_h_15_SPARSE_DATA \
	HostProject_Plugins_Sensor_Source_Sensor_Public_rgbCaptureComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_Sensor_Source_Sensor_Public_rgbCaptureComponent_h_15_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_Sensor_Source_Sensor_Public_rgbCaptureComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SENSOR_API UClass* StaticClass<class UrgbCaptureComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_Sensor_Source_Sensor_Public_rgbCaptureComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
