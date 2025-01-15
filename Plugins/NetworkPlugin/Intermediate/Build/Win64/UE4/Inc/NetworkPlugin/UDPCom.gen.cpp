// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkPlugin/Public/UDPCom.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUDPCom() {}
// Cross Module References
	NETWORKPLUGIN_API UClass* Z_Construct_UClass_UUDPCom_NoRegister();
	NETWORKPLUGIN_API UClass* Z_Construct_UClass_UUDPCom();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_NetworkPlugin();
// End Cross Module References
	DEFINE_FUNCTION(UUDPCom::execsendData)
	{
		P_GET_TARRAY(uint8,Z_Param_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->sendData(Z_Param_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUDPCom::execrecvData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=P_THIS->recvData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUDPCom::execcreateUDP)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_remoteIP);
		P_GET_PROPERTY(FIntProperty,Z_Param_remotePort);
		P_GET_PROPERTY(FStrProperty,Z_Param_localIP);
		P_GET_PROPERTY(FIntProperty,Z_Param_localPort);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->createUDP(Z_Param_remoteIP,Z_Param_remotePort,Z_Param_localIP,Z_Param_localPort);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUDPCom::execcloseUDPPort)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->closeUDPPort();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUDPCom::execopenUDPPort)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__LocalIP);
		P_GET_PROPERTY(FIntProperty,Z_Param__LocalPort);
		P_GET_PROPERTY(FStrProperty,Z_Param__RemoteIP);
		P_GET_PROPERTY(FIntProperty,Z_Param__RemotePort);
		P_GET_UBOOL(Z_Param__autoBoundRemote);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUDPCom**)Z_Param__Result=UUDPCom::openUDPPort(Z_Param__LocalIP,Z_Param__LocalPort,Z_Param__RemoteIP,Z_Param__RemotePort,Z_Param__autoBoundRemote);
		P_NATIVE_END;
	}
	void UUDPCom::StaticRegisterNativesUUDPCom()
	{
		UClass* Class = UUDPCom::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "closeUDPPort", &UUDPCom::execcloseUDPPort },
			{ "createUDP", &UUDPCom::execcreateUDP },
			{ "openUDPPort", &UUDPCom::execopenUDPPort },
			{ "recvData", &UUDPCom::execrecvData },
			{ "sendData", &UUDPCom::execsendData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUDPCom_closeUDPPort_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUDPCom_closeUDPPort_Statics::Function_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "UDP Communication Serial" },
		{ "DisplayName", "Close UDP Port" },
		{ "ModuleRelativePath", "Public/UDPCom.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUDPCom_closeUDPPort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUDPCom, nullptr, "closeUDPPort", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUDPCom_closeUDPPort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUDPCom_closeUDPPort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUDPCom_closeUDPPort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUDPCom_closeUDPPort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUDPCom_createUDP_Statics
	{
		struct UDPCom_eventcreateUDP_Parms
		{
			FString remoteIP;
			int32 remotePort;
			FString localIP;
			int32 localPort;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_remoteIP;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_remotePort;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_localIP;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_localPort;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUDPCom_createUDP_Statics::NewProp_remoteIP = { "remoteIP", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDPCom_eventcreateUDP_Parms, remoteIP), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUDPCom_createUDP_Statics::NewProp_remotePort = { "remotePort", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDPCom_eventcreateUDP_Parms, remotePort), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUDPCom_createUDP_Statics::NewProp_localIP = { "localIP", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDPCom_eventcreateUDP_Parms, localIP), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUDPCom_createUDP_Statics::NewProp_localPort = { "localPort", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDPCom_eventcreateUDP_Parms, localPort), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUDPCom_createUDP_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UDPCom_eventcreateUDP_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUDPCom_createUDP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDPCom_eventcreateUDP_Parms), &Z_Construct_UFunction_UUDPCom_createUDP_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUDPCom_createUDP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDPCom_createUDP_Statics::NewProp_remoteIP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDPCom_createUDP_Statics::NewProp_remotePort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDPCom_createUDP_Statics::NewProp_localIP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDPCom_createUDP_Statics::NewProp_localPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDPCom_createUDP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUDPCom_createUDP_Statics::Function_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "UDP Communication" },
		{ "Comment", "/////////////////////////////////////////////////////////////\n" },
		{ "DisplayName", "CreateUDP 1" },
		{ "ModuleRelativePath", "Public/UDPCom.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUDPCom_createUDP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUDPCom, nullptr, "createUDP", nullptr, nullptr, sizeof(UDPCom_eventcreateUDP_Parms), Z_Construct_UFunction_UUDPCom_createUDP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUDPCom_createUDP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUDPCom_createUDP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUDPCom_createUDP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUDPCom_createUDP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUDPCom_createUDP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUDPCom_openUDPPort_Statics
	{
		struct UDPCom_eventopenUDPPort_Parms
		{
			FString _LocalIP;
			int32 _LocalPort;
			FString _RemoteIP;
			int32 _RemotePort;
			bool _autoBoundRemote;
			UUDPCom* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__LocalIP_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__LocalIP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__LocalPort_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__LocalPort;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__RemoteIP_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__RemoteIP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__RemotePort_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__RemotePort;
		static void NewProp__autoBoundRemote_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__autoBoundRemote;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUDPCom_openUDPPort_Statics::NewProp__LocalIP_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUDPCom_openUDPPort_Statics::NewProp__LocalIP = { "_LocalIP", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDPCom_eventopenUDPPort_Parms, _LocalIP), METADATA_PARAMS(Z_Construct_UFunction_UUDPCom_openUDPPort_Statics::NewProp__LocalIP_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUDPCom_openUDPPort_Statics::NewProp__LocalIP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUDPCom_openUDPPort_Statics::NewProp__LocalPort_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUDPCom_openUDPPort_Statics::NewProp__LocalPort = { "_LocalPort", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDPCom_eventopenUDPPort_Parms, _LocalPort), METADATA_PARAMS(Z_Construct_UFunction_UUDPCom_openUDPPort_Statics::NewProp__LocalPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUDPCom_openUDPPort_Statics::NewProp__LocalPort_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUDPCom_openUDPPort_Statics::NewProp__RemoteIP_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUDPCom_openUDPPort_Statics::NewProp__RemoteIP = { "_RemoteIP", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDPCom_eventopenUDPPort_Parms, _RemoteIP), METADATA_PARAMS(Z_Construct_UFunction_UUDPCom_openUDPPort_Statics::NewProp__RemoteIP_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUDPCom_openUDPPort_Statics::NewProp__RemoteIP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUDPCom_openUDPPort_Statics::NewProp__RemotePort_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUDPCom_openUDPPort_Statics::NewProp__RemotePort = { "_RemotePort", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDPCom_eventopenUDPPort_Parms, _RemotePort), METADATA_PARAMS(Z_Construct_UFunction_UUDPCom_openUDPPort_Statics::NewProp__RemotePort_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUDPCom_openUDPPort_Statics::NewProp__RemotePort_MetaData)) };
	void Z_Construct_UFunction_UUDPCom_openUDPPort_Statics::NewProp__autoBoundRemote_SetBit(void* Obj)
	{
		((UDPCom_eventopenUDPPort_Parms*)Obj)->_autoBoundRemote = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUDPCom_openUDPPort_Statics::NewProp__autoBoundRemote = { "_autoBoundRemote", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDPCom_eventopenUDPPort_Parms), &Z_Construct_UFunction_UUDPCom_openUDPPort_Statics::NewProp__autoBoundRemote_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUDPCom_openUDPPort_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDPCom_eventopenUDPPort_Parms, ReturnValue), Z_Construct_UClass_UUDPCom_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUDPCom_openUDPPort_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDPCom_openUDPPort_Statics::NewProp__LocalIP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDPCom_openUDPPort_Statics::NewProp__LocalPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDPCom_openUDPPort_Statics::NewProp__RemoteIP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDPCom_openUDPPort_Statics::NewProp__RemotePort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDPCom_openUDPPort_Statics::NewProp__autoBoundRemote,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDPCom_openUDPPort_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUDPCom_openUDPPort_Statics::Function_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "UDP Communication Serial" },
		{ "Comment", "/////////////////////////////////////////////////////////////\n" },
		{ "DisplayName", "Open UDP Port with AutoBound" },
		{ "ModuleRelativePath", "Public/UDPCom.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUDPCom_openUDPPort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUDPCom, nullptr, "openUDPPort", nullptr, nullptr, sizeof(UDPCom_eventopenUDPPort_Parms), Z_Construct_UFunction_UUDPCom_openUDPPort_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUDPCom_openUDPPort_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUDPCom_openUDPPort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUDPCom_openUDPPort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUDPCom_openUDPPort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUDPCom_openUDPPort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUDPCom_recvData_Statics
	{
		struct UDPCom_eventrecvData_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUDPCom_recvData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUDPCom_recvData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDPCom_eventrecvData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUDPCom_recvData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDPCom_recvData_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDPCom_recvData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUDPCom_recvData_Statics::Function_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "UDP Communication Serial" },
		{ "Comment", "/////////////////////////////////////////////////////////////\n" },
		{ "DisplayName", "Recv UDP Data" },
		{ "ModuleRelativePath", "Public/UDPCom.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUDPCom_recvData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUDPCom, nullptr, "recvData", nullptr, nullptr, sizeof(UDPCom_eventrecvData_Parms), Z_Construct_UFunction_UUDPCom_recvData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUDPCom_recvData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUDPCom_recvData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUDPCom_recvData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUDPCom_recvData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUDPCom_recvData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUDPCom_sendData_Statics
	{
		struct UDPCom_eventsendData_Parms
		{
			TArray<uint8> data;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_data_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUDPCom_sendData_Statics::NewProp_data_Inner = { "data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUDPCom_sendData_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDPCom_eventsendData_Parms, data), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUDPCom_sendData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDPCom_sendData_Statics::NewProp_data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDPCom_sendData_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUDPCom_sendData_Statics::Function_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "UDP Communication Serial" },
		{ "DisplayName", "Send UDP Data" },
		{ "ModuleRelativePath", "Public/UDPCom.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUDPCom_sendData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUDPCom, nullptr, "sendData", nullptr, nullptr, sizeof(UDPCom_eventsendData_Parms), Z_Construct_UFunction_UUDPCom_sendData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUDPCom_sendData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUDPCom_sendData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUDPCom_sendData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUDPCom_sendData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUDPCom_sendData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUDPCom_NoRegister()
	{
		return UUDPCom::StaticClass();
	}
	struct Z_Construct_UClass_UUDPCom_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUDPCom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUDPCom_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUDPCom_closeUDPPort, "closeUDPPort" }, // 2737878223
		{ &Z_Construct_UFunction_UUDPCom_createUDP, "createUDP" }, // 1372675295
		{ &Z_Construct_UFunction_UUDPCom_openUDPPort, "openUDPPort" }, // 3729613218
		{ &Z_Construct_UFunction_UUDPCom_recvData, "recvData" }, // 1930064477
		{ &Z_Construct_UFunction_UUDPCom_sendData, "sendData" }, // 300932986
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUDPCom_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "UDP Communication Serial" },
		{ "IncludePath", "UDPCom.h" },
		{ "ModuleRelativePath", "Public/UDPCom.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUDPCom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUDPCom>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUDPCom_Statics::ClassParams = {
		&UUDPCom::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUDPCom_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUDPCom_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUDPCom()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUDPCom_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUDPCom, 3781064277);
	template<> NETWORKPLUGIN_API UClass* StaticClass<UUDPCom>()
	{
		return UUDPCom::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUDPCom(Z_Construct_UClass_UUDPCom, &UUDPCom::StaticClass, TEXT("/Script/NetworkPlugin"), TEXT("UUDPCom"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUDPCom);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
