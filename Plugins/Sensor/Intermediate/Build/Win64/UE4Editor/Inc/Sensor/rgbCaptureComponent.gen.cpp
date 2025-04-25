// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sensor/Public/rgbCaptureComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodergbCaptureComponent() {}
// Cross Module References
	SENSOR_API UClass* Z_Construct_UClass_UrgbCaptureComponent_NoRegister();
	SENSOR_API UClass* Z_Construct_UClass_UrgbCaptureComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D();
	UPackage* Z_Construct_UPackage__Script_Sensor();
// End Cross Module References
	DEFINE_FUNCTION(UrgbCaptureComponent::execresetSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->resetSettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UrgbCaptureComponent::execCaptureRGBImage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=P_THIS->CaptureRGBImage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UrgbCaptureComponent::execInitializeComponentSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeComponentSettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UrgbCaptureComponent::execCaptureAndSendRGBImage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CaptureAndSendRGBImage();
		P_NATIVE_END;
	}
	void UrgbCaptureComponent::StaticRegisterNativesUrgbCaptureComponent()
	{
		UClass* Class = UrgbCaptureComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CaptureAndSendRGBImage", &UrgbCaptureComponent::execCaptureAndSendRGBImage },
			{ "CaptureRGBImage", &UrgbCaptureComponent::execCaptureRGBImage },
			{ "InitializeComponentSettings", &UrgbCaptureComponent::execInitializeComponentSettings },
			{ "resetSettings", &UrgbCaptureComponent::execresetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UrgbCaptureComponent_CaptureAndSendRGBImage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UrgbCaptureComponent_CaptureAndSendRGBImage_Statics::Function_MetaDataParams[] = {
		{ "Category", "rgbCamera" },
		{ "Comment", "// Capture method to render RGB image and send via UDP\n" },
		{ "ModuleRelativePath", "Public/rgbCaptureComponent.h" },
		{ "ToolTip", "Capture method to render RGB image and send via UDP" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UrgbCaptureComponent_CaptureAndSendRGBImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UrgbCaptureComponent, nullptr, "CaptureAndSendRGBImage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UrgbCaptureComponent_CaptureAndSendRGBImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UrgbCaptureComponent_CaptureAndSendRGBImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UrgbCaptureComponent_CaptureAndSendRGBImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UrgbCaptureComponent_CaptureAndSendRGBImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UrgbCaptureComponent_CaptureRGBImage_Statics
	{
		struct rgbCaptureComponent_eventCaptureRGBImage_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UrgbCaptureComponent_CaptureRGBImage_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UrgbCaptureComponent_CaptureRGBImage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(rgbCaptureComponent_eventCaptureRGBImage_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UrgbCaptureComponent_CaptureRGBImage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UrgbCaptureComponent_CaptureRGBImage_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UrgbCaptureComponent_CaptureRGBImage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UrgbCaptureComponent_CaptureRGBImage_Statics::Function_MetaDataParams[] = {
		{ "Category", "rgbCamera" },
		{ "Comment", "// Capture method to render RGB image\n" },
		{ "ModuleRelativePath", "Public/rgbCaptureComponent.h" },
		{ "ToolTip", "Capture method to render RGB image" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UrgbCaptureComponent_CaptureRGBImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UrgbCaptureComponent, nullptr, "CaptureRGBImage", nullptr, nullptr, sizeof(rgbCaptureComponent_eventCaptureRGBImage_Parms), Z_Construct_UFunction_UrgbCaptureComponent_CaptureRGBImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UrgbCaptureComponent_CaptureRGBImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UrgbCaptureComponent_CaptureRGBImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UrgbCaptureComponent_CaptureRGBImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UrgbCaptureComponent_CaptureRGBImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UrgbCaptureComponent_CaptureRGBImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UrgbCaptureComponent_InitializeComponentSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UrgbCaptureComponent_InitializeComponentSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "rgbCamera" },
		{ "ModuleRelativePath", "Public/rgbCaptureComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UrgbCaptureComponent_InitializeComponentSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UrgbCaptureComponent, nullptr, "InitializeComponentSettings", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UrgbCaptureComponent_InitializeComponentSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UrgbCaptureComponent_InitializeComponentSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UrgbCaptureComponent_InitializeComponentSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UrgbCaptureComponent_InitializeComponentSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UrgbCaptureComponent_resetSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UrgbCaptureComponent_resetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "rgbCamera" },
		{ "ModuleRelativePath", "Public/rgbCaptureComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UrgbCaptureComponent_resetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UrgbCaptureComponent, nullptr, "resetSettings", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UrgbCaptureComponent_resetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UrgbCaptureComponent_resetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UrgbCaptureComponent_resetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UrgbCaptureComponent_resetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UrgbCaptureComponent_NoRegister()
	{
		return UrgbCaptureComponent::StaticClass();
	}
	struct Z_Construct_UClass_UrgbCaptureComponent_Statics
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
	UObject* (*const Z_Construct_UClass_UrgbCaptureComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneCaptureComponent2D,
		(UObject* (*)())Z_Construct_UPackage__Script_Sensor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UrgbCaptureComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UrgbCaptureComponent_CaptureAndSendRGBImage, "CaptureAndSendRGBImage" }, // 525147083
		{ &Z_Construct_UFunction_UrgbCaptureComponent_CaptureRGBImage, "CaptureRGBImage" }, // 1779764581
		{ &Z_Construct_UFunction_UrgbCaptureComponent_InitializeComponentSettings, "InitializeComponentSettings" }, // 107556174
		{ &Z_Construct_UFunction_UrgbCaptureComponent_resetSettings, "resetSettings" }, // 3361718850
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UrgbCaptureComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Collision Object Physics SceneComponent Collision Object Physics SceneComponent Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "rgbCaptureComponent.h" },
		{ "ModuleRelativePath", "Public/rgbCaptureComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UrgbCaptureComponent_Statics::NewProp_SendFreq_MetaData[] = {
		{ "Category", "rgbCamera|UDP" },
		{ "DisplayName", "Send Frequency" },
		{ "ModuleRelativePath", "Public/rgbCaptureComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UrgbCaptureComponent_Statics::NewProp_SendFreq = { "SendFreq", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UrgbCaptureComponent, SendFreq), METADATA_PARAMS(Z_Construct_UClass_UrgbCaptureComponent_Statics::NewProp_SendFreq_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UrgbCaptureComponent_Statics::NewProp_SendFreq_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UrgbCaptureComponent_Statics::NewProp_LocalIP_MetaData[] = {
		{ "Category", "rgbCamera|UDP" },
		{ "DisplayName", "Local IP" },
		{ "ModuleRelativePath", "Public/rgbCaptureComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UrgbCaptureComponent_Statics::NewProp_LocalIP = { "LocalIP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UrgbCaptureComponent, LocalIP), METADATA_PARAMS(Z_Construct_UClass_UrgbCaptureComponent_Statics::NewProp_LocalIP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UrgbCaptureComponent_Statics::NewProp_LocalIP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UrgbCaptureComponent_Statics::NewProp_LocalPort_MetaData[] = {
		{ "Category", "rgbCamera|UDP" },
		{ "DisplayName", "Local Port" },
		{ "ModuleRelativePath", "Public/rgbCaptureComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UrgbCaptureComponent_Statics::NewProp_LocalPort = { "LocalPort", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UrgbCaptureComponent, LocalPort), METADATA_PARAMS(Z_Construct_UClass_UrgbCaptureComponent_Statics::NewProp_LocalPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UrgbCaptureComponent_Statics::NewProp_LocalPort_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UrgbCaptureComponent_Statics::NewProp_RemoteIP_MetaData[] = {
		{ "Category", "rgbCamera|UDP" },
		{ "DisplayName", "Remote IP" },
		{ "ModuleRelativePath", "Public/rgbCaptureComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UrgbCaptureComponent_Statics::NewProp_RemoteIP = { "RemoteIP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UrgbCaptureComponent, RemoteIP), METADATA_PARAMS(Z_Construct_UClass_UrgbCaptureComponent_Statics::NewProp_RemoteIP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UrgbCaptureComponent_Statics::NewProp_RemoteIP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UrgbCaptureComponent_Statics::NewProp_RemotePort_MetaData[] = {
		{ "Category", "rgbCamera|UDP" },
		{ "DisplayName", "Remote Port" },
		{ "ModuleRelativePath", "Public/rgbCaptureComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UrgbCaptureComponent_Statics::NewProp_RemotePort = { "RemotePort", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UrgbCaptureComponent, RemotePort), METADATA_PARAMS(Z_Construct_UClass_UrgbCaptureComponent_Statics::NewProp_RemotePort_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UrgbCaptureComponent_Statics::NewProp_RemotePort_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UrgbCaptureComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UrgbCaptureComponent_Statics::NewProp_SendFreq,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UrgbCaptureComponent_Statics::NewProp_LocalIP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UrgbCaptureComponent_Statics::NewProp_LocalPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UrgbCaptureComponent_Statics::NewProp_RemoteIP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UrgbCaptureComponent_Statics::NewProp_RemotePort,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UrgbCaptureComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UrgbCaptureComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UrgbCaptureComponent_Statics::ClassParams = {
		&UrgbCaptureComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UrgbCaptureComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UrgbCaptureComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UrgbCaptureComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UrgbCaptureComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UrgbCaptureComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UrgbCaptureComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UrgbCaptureComponent, 156005835);
	template<> SENSOR_API UClass* StaticClass<UrgbCaptureComponent>()
	{
		return UrgbCaptureComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UrgbCaptureComponent(Z_Construct_UClass_UrgbCaptureComponent, &UrgbCaptureComponent::StaticClass, TEXT("/Script/Sensor"), TEXT("UrgbCaptureComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UrgbCaptureComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
