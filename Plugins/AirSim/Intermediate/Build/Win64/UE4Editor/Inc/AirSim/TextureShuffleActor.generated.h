// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIRSIM_TextureShuffleActor_generated_h
#error "TextureShuffleActor.generated.h already included, missing '#pragma once' in TextureShuffleActor.h"
#endif
#define AIRSIM_TextureShuffleActor_generated_h

#define Airsim_faster_rgbd_lib_Plugins_AirSim_Source_TextureShuffleActor_h_13_SPARSE_DATA
#define Airsim_faster_rgbd_lib_Plugins_AirSim_Source_TextureShuffleActor_h_13_RPC_WRAPPERS \
	virtual void SwapTexture_Implementation(int32 tex_id, int32 component_id, int32 material_id); \
 \
	DECLARE_FUNCTION(execSwapTexture);


#define Airsim_faster_rgbd_lib_Plugins_AirSim_Source_TextureShuffleActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SwapTexture_Implementation(int32 tex_id, int32 component_id, int32 material_id); \
 \
	DECLARE_FUNCTION(execSwapTexture);


#define Airsim_faster_rgbd_lib_Plugins_AirSim_Source_TextureShuffleActor_h_13_EVENT_PARMS \
	struct TextureShuffleActor_eventSwapTexture_Parms \
	{ \
		int32 tex_id; \
		int32 component_id; \
		int32 material_id; \
	};


#define Airsim_faster_rgbd_lib_Plugins_AirSim_Source_TextureShuffleActor_h_13_CALLBACK_WRAPPERS
#define Airsim_faster_rgbd_lib_Plugins_AirSim_Source_TextureShuffleActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATextureShuffleActor(); \
	friend struct Z_Construct_UClass_ATextureShuffleActor_Statics; \
public: \
	DECLARE_CLASS(ATextureShuffleActor, AStaticMeshActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AirSim"), NO_API) \
	DECLARE_SERIALIZER(ATextureShuffleActor)


#define Airsim_faster_rgbd_lib_Plugins_AirSim_Source_TextureShuffleActor_h_13_INCLASS \
private: \
	static void StaticRegisterNativesATextureShuffleActor(); \
	friend struct Z_Construct_UClass_ATextureShuffleActor_Statics; \
public: \
	DECLARE_CLASS(ATextureShuffleActor, AStaticMeshActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AirSim"), NO_API) \
	DECLARE_SERIALIZER(ATextureShuffleActor)


#define Airsim_faster_rgbd_lib_Plugins_AirSim_Source_TextureShuffleActor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATextureShuffleActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATextureShuffleActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATextureShuffleActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATextureShuffleActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATextureShuffleActor(ATextureShuffleActor&&); \
	NO_API ATextureShuffleActor(const ATextureShuffleActor&); \
public:


#define Airsim_faster_rgbd_lib_Plugins_AirSim_Source_TextureShuffleActor_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATextureShuffleActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATextureShuffleActor(ATextureShuffleActor&&); \
	NO_API ATextureShuffleActor(const ATextureShuffleActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATextureShuffleActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATextureShuffleActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATextureShuffleActor)


#define Airsim_faster_rgbd_lib_Plugins_AirSim_Source_TextureShuffleActor_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DynamicMaterial() { return STRUCT_OFFSET(ATextureShuffleActor, DynamicMaterial); } \
	FORCEINLINE static uint32 __PPO__SwappableTextures() { return STRUCT_OFFSET(ATextureShuffleActor, SwappableTextures); } \
	FORCEINLINE static uint32 __PPO__DynamicMaterialInstances() { return STRUCT_OFFSET(ATextureShuffleActor, DynamicMaterialInstances); }


#define Airsim_faster_rgbd_lib_Plugins_AirSim_Source_TextureShuffleActor_h_10_PROLOG \
	Airsim_faster_rgbd_lib_Plugins_AirSim_Source_TextureShuffleActor_h_13_EVENT_PARMS


#define Airsim_faster_rgbd_lib_Plugins_AirSim_Source_TextureShuffleActor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Airsim_faster_rgbd_lib_Plugins_AirSim_Source_TextureShuffleActor_h_13_PRIVATE_PROPERTY_OFFSET \
	Airsim_faster_rgbd_lib_Plugins_AirSim_Source_TextureShuffleActor_h_13_SPARSE_DATA \
	Airsim_faster_rgbd_lib_Plugins_AirSim_Source_TextureShuffleActor_h_13_RPC_WRAPPERS \
	Airsim_faster_rgbd_lib_Plugins_AirSim_Source_TextureShuffleActor_h_13_CALLBACK_WRAPPERS \
	Airsim_faster_rgbd_lib_Plugins_AirSim_Source_TextureShuffleActor_h_13_INCLASS \
	Airsim_faster_rgbd_lib_Plugins_AirSim_Source_TextureShuffleActor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Airsim_faster_rgbd_lib_Plugins_AirSim_Source_TextureShuffleActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Airsim_faster_rgbd_lib_Plugins_AirSim_Source_TextureShuffleActor_h_13_PRIVATE_PROPERTY_OFFSET \
	Airsim_faster_rgbd_lib_Plugins_AirSim_Source_TextureShuffleActor_h_13_SPARSE_DATA \
	Airsim_faster_rgbd_lib_Plugins_AirSim_Source_TextureShuffleActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Airsim_faster_rgbd_lib_Plugins_AirSim_Source_TextureShuffleActor_h_13_CALLBACK_WRAPPERS \
	Airsim_faster_rgbd_lib_Plugins_AirSim_Source_TextureShuffleActor_h_13_INCLASS_NO_PURE_DECLS \
	Airsim_faster_rgbd_lib_Plugins_AirSim_Source_TextureShuffleActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIRSIM_API UClass* StaticClass<class ATextureShuffleActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Airsim_faster_rgbd_lib_Plugins_AirSim_Source_TextureShuffleActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
