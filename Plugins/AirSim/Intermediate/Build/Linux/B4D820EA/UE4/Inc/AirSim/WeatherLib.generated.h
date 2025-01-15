// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AExponentialHeightFog;
class AActor;
class UWorld;
class UUserWidget;
struct FVector;
enum class EWeatherParamScalar : uint8;
#ifdef AIRSIM_WeatherLib_generated_h
#error "WeatherLib.generated.h already included, missing '#pragma once' in WeatherLib.h"
#endif
#define AIRSIM_WeatherLib_generated_h

#define uav_sim_Plugins_AirSim_Source_Weather_WeatherLib_h_41_SPARSE_DATA
#define uav_sim_Plugins_AirSim_Source_Weather_WeatherLib_h_41_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execsetWeatherFog); \
	DECLARE_FUNCTION(execactorGetWorld); \
	DECLARE_FUNCTION(execwidgetGetWorld); \
	DECLARE_FUNCTION(exectoggleWeatherMenu); \
	DECLARE_FUNCTION(execisMenuVisible); \
	DECLARE_FUNCTION(exechideWeatherMenu); \
	DECLARE_FUNCTION(execshowWeatherMenu); \
	DECLARE_FUNCTION(execsetWeatherEnabled); \
	DECLARE_FUNCTION(execgetIsWeatherEnabled); \
	DECLARE_FUNCTION(execsetWeatherWindDirection); \
	DECLARE_FUNCTION(execgetWeatherWindDirection); \
	DECLARE_FUNCTION(execgetWeatherParamScalar); \
	DECLARE_FUNCTION(execsetWeatherParamScalar); \
	DECLARE_FUNCTION(execinitWeather);


#define uav_sim_Plugins_AirSim_Source_Weather_WeatherLib_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execsetWeatherFog); \
	DECLARE_FUNCTION(execactorGetWorld); \
	DECLARE_FUNCTION(execwidgetGetWorld); \
	DECLARE_FUNCTION(exectoggleWeatherMenu); \
	DECLARE_FUNCTION(execisMenuVisible); \
	DECLARE_FUNCTION(exechideWeatherMenu); \
	DECLARE_FUNCTION(execshowWeatherMenu); \
	DECLARE_FUNCTION(execsetWeatherEnabled); \
	DECLARE_FUNCTION(execgetIsWeatherEnabled); \
	DECLARE_FUNCTION(execsetWeatherWindDirection); \
	DECLARE_FUNCTION(execgetWeatherWindDirection); \
	DECLARE_FUNCTION(execgetWeatherParamScalar); \
	DECLARE_FUNCTION(execsetWeatherParamScalar); \
	DECLARE_FUNCTION(execinitWeather);


#define uav_sim_Plugins_AirSim_Source_Weather_WeatherLib_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeatherLib(); \
	friend struct Z_Construct_UClass_UWeatherLib_Statics; \
public: \
	DECLARE_CLASS(UWeatherLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AirSim"), NO_API) \
	DECLARE_SERIALIZER(UWeatherLib)


#define uav_sim_Plugins_AirSim_Source_Weather_WeatherLib_h_41_INCLASS \
private: \
	static void StaticRegisterNativesUWeatherLib(); \
	friend struct Z_Construct_UClass_UWeatherLib_Statics; \
public: \
	DECLARE_CLASS(UWeatherLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AirSim"), NO_API) \
	DECLARE_SERIALIZER(UWeatherLib)


#define uav_sim_Plugins_AirSim_Source_Weather_WeatherLib_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWeatherLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeatherLib) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeatherLib); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeatherLib); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeatherLib(UWeatherLib&&); \
	NO_API UWeatherLib(const UWeatherLib&); \
public:


#define uav_sim_Plugins_AirSim_Source_Weather_WeatherLib_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWeatherLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeatherLib(UWeatherLib&&); \
	NO_API UWeatherLib(const UWeatherLib&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeatherLib); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeatherLib); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeatherLib)


#define uav_sim_Plugins_AirSim_Source_Weather_WeatherLib_h_41_PRIVATE_PROPERTY_OFFSET
#define uav_sim_Plugins_AirSim_Source_Weather_WeatherLib_h_38_PROLOG
#define uav_sim_Plugins_AirSim_Source_Weather_WeatherLib_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	uav_sim_Plugins_AirSim_Source_Weather_WeatherLib_h_41_PRIVATE_PROPERTY_OFFSET \
	uav_sim_Plugins_AirSim_Source_Weather_WeatherLib_h_41_SPARSE_DATA \
	uav_sim_Plugins_AirSim_Source_Weather_WeatherLib_h_41_RPC_WRAPPERS \
	uav_sim_Plugins_AirSim_Source_Weather_WeatherLib_h_41_INCLASS \
	uav_sim_Plugins_AirSim_Source_Weather_WeatherLib_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define uav_sim_Plugins_AirSim_Source_Weather_WeatherLib_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	uav_sim_Plugins_AirSim_Source_Weather_WeatherLib_h_41_PRIVATE_PROPERTY_OFFSET \
	uav_sim_Plugins_AirSim_Source_Weather_WeatherLib_h_41_SPARSE_DATA \
	uav_sim_Plugins_AirSim_Source_Weather_WeatherLib_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	uav_sim_Plugins_AirSim_Source_Weather_WeatherLib_h_41_INCLASS_NO_PURE_DECLS \
	uav_sim_Plugins_AirSim_Source_Weather_WeatherLib_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIRSIM_API UClass* StaticClass<class UWeatherLib>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID uav_sim_Plugins_AirSim_Source_Weather_WeatherLib_h


#define FOREACH_ENUM_EWEATHERPARAMVECTOR(op) \
	op(EWeatherParamVector::WEATHER_PARAM_VECTOR_WIND) 

enum class EWeatherParamVector : uint8;
template<> AIRSIM_API UEnum* StaticEnum<EWeatherParamVector>();

#define FOREACH_ENUM_EWEATHERPARAMSCALAR(op) \
	op(EWeatherParamScalar::WEATHER_PARAM_SCALAR_RAIN) \
	op(EWeatherParamScalar::WEATHER_PARAM_SCALAR_ROADWETNESS) \
	op(EWeatherParamScalar::WEATHER_PARAM_SCALAR_SNOW) \
	op(EWeatherParamScalar::WEATHER_PARAM_SCALAR_ROADSNOW) \
	op(EWeatherParamScalar::WEATHER_PARAM_SCALAR_MAPLELEAF) \
	op(EWeatherParamScalar::WEATHER_PARAM_SCALAR_ROADLEAF) \
	op(EWeatherParamScalar::WEATHER_PARAM_SCALAR_DUST) \
	op(EWeatherParamScalar::WEATHER_PARAM_SCALAR_FOG) \
	op(EWeatherParamScalar::WEATHER_PARAM_SCALAR_WEATHERENABLED) 

enum class EWeatherParamScalar : uint8;
template<> AIRSIM_API UEnum* StaticEnum<EWeatherParamScalar>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
