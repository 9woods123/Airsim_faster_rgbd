// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sensor/Public/DepthCameraComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDepthCameraComponent() {}
// Cross Module References
	SENSOR_API UClass* Z_Construct_UClass_UDepthCameraComponent_NoRegister();
	SENSOR_API UClass* Z_Construct_UClass_UDepthCameraComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D();
	UPackage* Z_Construct_UPackage__Script_Sensor();
// End Cross Module References
	DEFINE_FUNCTION(UDepthCameraComponent::execCaptureDepthImage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=P_THIS->CaptureDepthImage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDepthCameraComponent::execInitializeComponentSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeComponentSettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDepthCameraComponent::execCaptureAndSendDepthImage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CaptureAndSendDepthImage();
		P_NATIVE_END;
	}
	void UDepthCameraComponent::StaticRegisterNativesUDepthCameraComponent()
	{
		UClass* Class = UDepthCameraComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CaptureAndSendDepthImage", &UDepthCameraComponent::execCaptureAndSendDepthImage },
			{ "CaptureDepthImage", &UDepthCameraComponent::execCaptureDepthImage },
			{ "InitializeComponentSettings", &UDepthCameraComponent::execInitializeComponentSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDepthCameraComponent_CaptureAndSendDepthImage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDepthCameraComponent_CaptureAndSendDepthImage_Statics::Function_MetaDataParams[] = {
		{ "Category", "DepthCamera" },
		{ "Comment", "// Capture method to render depth image and send via UDP\n" },
		{ "ModuleRelativePath", "Public/DepthCameraComponent.h" },
		{ "ToolTip", "Capture method to render depth image and send via UDP" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDepthCameraComponent_CaptureAndSendDepthImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDepthCameraComponent, nullptr, "CaptureAndSendDepthImage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDepthCameraComponent_CaptureAndSendDepthImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDepthCameraComponent_CaptureAndSendDepthImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDepthCameraComponent_CaptureAndSendDepthImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDepthCameraComponent_CaptureAndSendDepthImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDepthCameraComponent_CaptureDepthImage_Statics
	{
		struct DepthCameraComponent_eventCaptureDepthImage_Parms
		{
			TArray<uint8> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDepthCameraComponent_CaptureDepthImage_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDepthCameraComponent_CaptureDepthImage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DepthCameraComponent_eventCaptureDepthImage_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDepthCameraComponent_CaptureDepthImage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDepthCameraComponent_CaptureDepthImage_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDepthCameraComponent_CaptureDepthImage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDepthCameraComponent_CaptureDepthImage_Statics::Function_MetaDataParams[] = {
		{ "Category", "DepthCamera" },
		{ "Comment", "// Capture method to render depth image\n" },
		{ "ModuleRelativePath", "Public/DepthCameraComponent.h" },
		{ "ToolTip", "Capture method to render depth image" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDepthCameraComponent_CaptureDepthImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDepthCameraComponent, nullptr, "CaptureDepthImage", nullptr, nullptr, sizeof(DepthCameraComponent_eventCaptureDepthImage_Parms), Z_Construct_UFunction_UDepthCameraComponent_CaptureDepthImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDepthCameraComponent_CaptureDepthImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDepthCameraComponent_CaptureDepthImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDepthCameraComponent_CaptureDepthImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDepthCameraComponent_CaptureDepthImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDepthCameraComponent_CaptureDepthImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDepthCameraComponent_InitializeComponentSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDepthCameraComponent_InitializeComponentSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "DepthCamera" },
		{ "ModuleRelativePath", "Public/DepthCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDepthCameraComponent_InitializeComponentSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDepthCameraComponent, nullptr, "InitializeComponentSettings", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDepthCameraComponent_InitializeComponentSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDepthCameraComponent_InitializeComponentSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDepthCameraComponent_InitializeComponentSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDepthCameraComponent_InitializeComponentSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDepthCameraComponent_NoRegister()
	{
		return UDepthCameraComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDepthCameraComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SendFreq_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SendFreq;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalIP_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LocalIP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalPort_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LocalPort;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoteIP_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RemoteIP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemotePort_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RemotePort;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDepthCameraComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneCaptureComponent2D,
		(UObject* (*)())Z_Construct_UPackage__Script_Sensor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDepthCameraComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDepthCameraComponent_CaptureAndSendDepthImage, "CaptureAndSendDepthImage" }, // 3228915078
		{ &Z_Construct_UFunction_UDepthCameraComponent_CaptureDepthImage, "CaptureDepthImage" }, // 37323039
		{ &Z_Construct_UFunction_UDepthCameraComponent_InitializeComponentSettings, "InitializeComponentSettings" }, // 1967026808
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDepthCameraComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Collision Object Physics SceneComponent Collision Object Physics SceneComponent Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "DepthCameraComponent.h" },
		{ "ModuleRelativePath", "Public/DepthCameraComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDepthCameraComponent_Statics::NewProp_SendFreq_MetaData[] = {
		{ "Category", "DepthCamera|UDP" },
		{ "DisplayName", "Send Frequency" },
		{ "ModuleRelativePath", "Public/DepthCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDepthCameraComponent_Statics::NewProp_SendFreq = { "SendFreq", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDepthCameraComponent, SendFreq), METADATA_PARAMS(Z_Construct_UClass_UDepthCameraComponent_Statics::NewProp_SendFreq_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDepthCameraComponent_Statics::NewProp_SendFreq_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDepthCameraComponent_Statics::NewProp_LocalIP_MetaData[] = {
		{ "Category", "DepthCamera|UDP" },
		{ "DisplayName", "Local IP" },
		{ "ModuleRelativePath", "Public/DepthCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDepthCameraComponent_Statics::NewProp_LocalIP = { "LocalIP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDepthCameraComponent, LocalIP), METADATA_PARAMS(Z_Construct_UClass_UDepthCameraComponent_Statics::NewProp_LocalIP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDepthCameraComponent_Statics::NewProp_LocalIP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDepthCameraComponent_Statics::NewProp_LocalPort_MetaData[] = {
		{ "Category", "DepthCamera|UDP" },
		{ "DisplayName", "Local Port" },
		{ "ModuleRelativePath", "Public/DepthCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDepthCameraComponent_Statics::NewProp_LocalPort = { "LocalPort", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDepthCameraComponent, LocalPort), METADATA_PARAMS(Z_Construct_UClass_UDepthCameraComponent_Statics::NewProp_LocalPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDepthCameraComponent_Statics::NewProp_LocalPort_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDepthCameraComponent_Statics::NewProp_RemoteIP_MetaData[] = {
		{ "Category", "DepthCamera|UDP" },
		{ "DisplayName", "Remote IP" },
		{ "ModuleRelativePath", "Public/DepthCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDepthCameraComponent_Statics::NewProp_RemoteIP = { "RemoteIP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDepthCameraComponent, RemoteIP), METADATA_PARAMS(Z_Construct_UClass_UDepthCameraComponent_Statics::NewProp_RemoteIP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDepthCameraComponent_Statics::NewProp_RemoteIP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDepthCameraComponent_Statics::NewProp_RemotePort_MetaData[] = {
		{ "Category", "DepthCamera|UDP" },
		{ "DisplayName", "Remote Port" },
		{ "ModuleRelativePath", "Public/DepthCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDepthCameraComponent_Statics::NewProp_RemotePort = { "RemotePort", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDepthCameraComponent, RemotePort), METADATA_PARAMS(Z_Construct_UClass_UDepthCameraComponent_Statics::NewProp_RemotePort_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDepthCameraComponent_Statics::NewProp_RemotePort_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDepthCameraComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDepthCameraComponent_Statics::NewProp_SendFreq,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDepthCameraComponent_Statics::NewProp_LocalIP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDepthCameraComponent_Statics::NewProp_LocalPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDepthCameraComponent_Statics::NewProp_RemoteIP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDepthCameraComponent_Statics::NewProp_RemotePort,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDepthCameraComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDepthCameraComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDepthCameraComponent_Statics::ClassParams = {
		&UDepthCameraComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDepthCameraComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDepthCameraComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDepthCameraComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDepthCameraComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDepthCameraComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDepthCameraComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDepthCameraComponent, 3541780297);
	template<> SENSOR_API UClass* StaticClass<UDepthCameraComponent>()
	{
		return UDepthCameraComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDepthCameraComponent(Z_Construct_UClass_UDepthCameraComponent, &UDepthCameraComponent::StaticClass, TEXT("/Script/Sensor"), TEXT("UDepthCameraComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDepthCameraComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
