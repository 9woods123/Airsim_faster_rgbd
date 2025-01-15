// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/ObjectFilter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectFilter() {}
// Cross Module References
	AIRSIM_API UScriptStruct* Z_Construct_UScriptStruct_FObjectFilter();
	UPackage* Z_Construct_UPackage__Script_AirSim();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FObjectFilter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIRSIM_API uint32 Get_Z_Construct_UScriptStruct_FObjectFilter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FObjectFilter, Z_Construct_UPackage__Script_AirSim(), TEXT("ObjectFilter"), sizeof(FObjectFilter), Get_Z_Construct_UScriptStruct_FObjectFilter_Hash());
	}
	return Singleton;
}
template<> AIRSIM_API UScriptStruct* StaticStruct<FObjectFilter>()
{
	return FObjectFilter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FObjectFilter(FObjectFilter::StaticStruct, TEXT("/Script/AirSim"), TEXT("ObjectFilter"), false, nullptr, nullptr);
static struct FScriptStruct_AirSim_StaticRegisterNativesFObjectFilter
{
	FScriptStruct_AirSim_StaticRegisterNativesFObjectFilter()
	{
		UScriptStruct::DeferCppStructOps<FObjectFilter>(FName(TEXT("ObjectFilter")));
	}
} ScriptStruct_AirSim_StaticRegisterNativesFObjectFilter;
	struct Z_Construct_UScriptStruct_FObjectFilter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_static_mesh__MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_static_mesh_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_skeletal_mesh__MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_skeletal_mesh_;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_wildcard_mesh_names__Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_wildcard_mesh_names__MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_wildcard_mesh_names_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actor_class__MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_actor_class_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_component_class__MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_component_class_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actor_tag__MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_actor_tag_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_component_tag__MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_component_tag_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actor_instance__MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actor_instance_;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectFilter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "ObjectFilter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FObjectFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FObjectFilter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectFilter_Statics::NewProp_static_mesh__MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "ObjectFilter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FObjectFilter_Statics::NewProp_static_mesh_ = { "static_mesh_", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FObjectFilter, static_mesh_), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectFilter_Statics::NewProp_static_mesh__MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectFilter_Statics::NewProp_static_mesh__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectFilter_Statics::NewProp_skeletal_mesh__MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "ObjectFilter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FObjectFilter_Statics::NewProp_skeletal_mesh_ = { "skeletal_mesh_", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FObjectFilter, skeletal_mesh_), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectFilter_Statics::NewProp_skeletal_mesh__MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectFilter_Statics::NewProp_skeletal_mesh__MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FObjectFilter_Statics::NewProp_wildcard_mesh_names__Inner = { "wildcard_mesh_names_", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectFilter_Statics::NewProp_wildcard_mesh_names__MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "ObjectFilter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FObjectFilter_Statics::NewProp_wildcard_mesh_names_ = { "wildcard_mesh_names_", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FObjectFilter, wildcard_mesh_names_), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectFilter_Statics::NewProp_wildcard_mesh_names__MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectFilter_Statics::NewProp_wildcard_mesh_names__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectFilter_Statics::NewProp_actor_class__MetaData[] = {
		{ "Category", "Class" },
		{ "ModuleRelativePath", "ObjectFilter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FObjectFilter_Statics::NewProp_actor_class_ = { "actor_class_", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FObjectFilter, actor_class_), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectFilter_Statics::NewProp_actor_class__MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectFilter_Statics::NewProp_actor_class__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectFilter_Statics::NewProp_component_class__MetaData[] = {
		{ "Category", "Class" },
		{ "Comment", "/* Will match for components that have the provided class or Actors that have\n     * at least one component with the provided class.*/" },
		{ "ModuleRelativePath", "ObjectFilter.h" },
		{ "ToolTip", "Will match for components that have the provided class or Actors that have\n    * at least one component with the provided class." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FObjectFilter_Statics::NewProp_component_class_ = { "component_class_", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FObjectFilter, component_class_), Z_Construct_UClass_UActorComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectFilter_Statics::NewProp_component_class__MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectFilter_Statics::NewProp_component_class__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectFilter_Statics::NewProp_actor_tag__MetaData[] = {
		{ "Category", "Tag" },
		{ "Comment", "/* This will Match Actors that have the provided Tag or components if their\n     * Owner has the provided Tag */" },
		{ "ModuleRelativePath", "ObjectFilter.h" },
		{ "ToolTip", "This will Match Actors that have the provided Tag or components if their\n    * Owner has the provided Tag" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FObjectFilter_Statics::NewProp_actor_tag_ = { "actor_tag_", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FObjectFilter, actor_tag_), METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectFilter_Statics::NewProp_actor_tag__MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectFilter_Statics::NewProp_actor_tag__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectFilter_Statics::NewProp_component_tag__MetaData[] = {
		{ "Category", "Tag" },
		{ "ModuleRelativePath", "ObjectFilter.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FObjectFilter_Statics::NewProp_component_tag_ = { "component_tag_", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FObjectFilter, component_tag_), METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectFilter_Statics::NewProp_component_tag__MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectFilter_Statics::NewProp_component_tag__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectFilter_Statics::NewProp_actor_instance__MetaData[] = {
		{ "Category", "Instance" },
		{ "Comment", "/* This will only match with if the tested actor is the same as the provided\n     * instance.*/" },
		{ "ModuleRelativePath", "ObjectFilter.h" },
		{ "ToolTip", "This will only match with if the tested actor is the same as the provided\n    * instance." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FObjectFilter_Statics::NewProp_actor_instance_ = { "actor_instance_", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FObjectFilter, actor_instance_), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectFilter_Statics::NewProp_actor_instance__MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectFilter_Statics::NewProp_actor_instance__MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FObjectFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectFilter_Statics::NewProp_static_mesh_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectFilter_Statics::NewProp_skeletal_mesh_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectFilter_Statics::NewProp_wildcard_mesh_names__Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectFilter_Statics::NewProp_wildcard_mesh_names_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectFilter_Statics::NewProp_actor_class_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectFilter_Statics::NewProp_component_class_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectFilter_Statics::NewProp_actor_tag_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectFilter_Statics::NewProp_component_tag_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectFilter_Statics::NewProp_actor_instance_,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FObjectFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AirSim,
		nullptr,
		&NewStructOps,
		"ObjectFilter",
		sizeof(FObjectFilter),
		alignof(FObjectFilter),
		Z_Construct_UScriptStruct_FObjectFilter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectFilter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectFilter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FObjectFilter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FObjectFilter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AirSim();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ObjectFilter"), sizeof(FObjectFilter), Get_Z_Construct_UScriptStruct_FObjectFilter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FObjectFilter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FObjectFilter_Hash() { return 929397586U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
