// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUDPCom;
#ifdef NETWORKPLUGIN_UDPCom_generated_h
#error "UDPCom.generated.h already included, missing '#pragma once' in UDPCom.h"
#endif
#define NETWORKPLUGIN_UDPCom_generated_h

#define HostProject_Plugins_NetworkPlugin_Source_NetworkPlugin_Public_UDPCom_h_90_SPARSE_DATA
#define HostProject_Plugins_NetworkPlugin_Source_NetworkPlugin_Public_UDPCom_h_90_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execsendData); \
	DECLARE_FUNCTION(execrecvData); \
	DECLARE_FUNCTION(execcreateUDP); \
	DECLARE_FUNCTION(execcloseUDPPort); \
	DECLARE_FUNCTION(execopenUDPPort);


#define HostProject_Plugins_NetworkPlugin_Source_NetworkPlugin_Public_UDPCom_h_90_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execsendData); \
	DECLARE_FUNCTION(execrecvData); \
	DECLARE_FUNCTION(execcreateUDP); \
	DECLARE_FUNCTION(execcloseUDPPort); \
	DECLARE_FUNCTION(execopenUDPPort);


#define HostProject_Plugins_NetworkPlugin_Source_NetworkPlugin_Public_UDPCom_h_90_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUDPCom(); \
	friend struct Z_Construct_UClass_UUDPCom_Statics; \
public: \
	DECLARE_CLASS(UUDPCom, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NetworkPlugin"), NO_API) \
	DECLARE_SERIALIZER(UUDPCom)


#define HostProject_Plugins_NetworkPlugin_Source_NetworkPlugin_Public_UDPCom_h_90_INCLASS \
private: \
	static void StaticRegisterNativesUUDPCom(); \
	friend struct Z_Construct_UClass_UUDPCom_Statics; \
public: \
	DECLARE_CLASS(UUDPCom, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NetworkPlugin"), NO_API) \
	DECLARE_SERIALIZER(UUDPCom)


#define HostProject_Plugins_NetworkPlugin_Source_NetworkPlugin_Public_UDPCom_h_90_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUDPCom(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUDPCom) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUDPCom); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUDPCom); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUDPCom(UUDPCom&&); \
	NO_API UUDPCom(const UUDPCom&); \
public:


#define HostProject_Plugins_NetworkPlugin_Source_NetworkPlugin_Public_UDPCom_h_90_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUDPCom(UUDPCom&&); \
	NO_API UUDPCom(const UUDPCom&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUDPCom); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUDPCom); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUDPCom)


#define HostProject_Plugins_NetworkPlugin_Source_NetworkPlugin_Public_UDPCom_h_90_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_NetworkPlugin_Source_NetworkPlugin_Public_UDPCom_h_88_PROLOG
#define HostProject_Plugins_NetworkPlugin_Source_NetworkPlugin_Public_UDPCom_h_90_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_NetworkPlugin_Source_NetworkPlugin_Public_UDPCom_h_90_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_NetworkPlugin_Source_NetworkPlugin_Public_UDPCom_h_90_SPARSE_DATA \
	HostProject_Plugins_NetworkPlugin_Source_NetworkPlugin_Public_UDPCom_h_90_RPC_WRAPPERS \
	HostProject_Plugins_NetworkPlugin_Source_NetworkPlugin_Public_UDPCom_h_90_INCLASS \
	HostProject_Plugins_NetworkPlugin_Source_NetworkPlugin_Public_UDPCom_h_90_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_NetworkPlugin_Source_NetworkPlugin_Public_UDPCom_h_90_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_NetworkPlugin_Source_NetworkPlugin_Public_UDPCom_h_90_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_NetworkPlugin_Source_NetworkPlugin_Public_UDPCom_h_90_SPARSE_DATA \
	HostProject_Plugins_NetworkPlugin_Source_NetworkPlugin_Public_UDPCom_h_90_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_NetworkPlugin_Source_NetworkPlugin_Public_UDPCom_h_90_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_NetworkPlugin_Source_NetworkPlugin_Public_UDPCom_h_90_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORKPLUGIN_API UClass* StaticClass<class UUDPCom>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_NetworkPlugin_Source_NetworkPlugin_Public_UDPCom_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
