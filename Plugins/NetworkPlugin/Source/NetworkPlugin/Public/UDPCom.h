// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

#include "string"
#include "stdio.h"
#include "Engine/Engine.h"

#ifdef _WIN32

#include "Windows/AllowWindowsPlatformTypes.h"
#include "Windows/PreWindowsApi.h"

#include <WinSock2.h>
#include <WS2tcpip.h>
#pragma comment(lib, "ws2_32.lib")

#include "Windows/PostWindowsApi.h"
#include "Windows/HideWindowsPlatformTypes.h"
using SocketType = SOCKET;
#define CLOSE_SOCKET closesocket
#define PLATFORM_INIT_WINSOCK WSADATA wsaData; WSAStartup(MAKEWORD(2, 2), &wsaData)
#define PLATFORM_CLEANUP_WINSOCK WSACleanup()
// ���� SOCKADDR_IN
typedef struct sockaddr_in SOCKADDR_IN;
#define INET_ADDR(ip) inet_addr(ip)

// Windows ʹ�õĴ�����
#define PLATFORM_GET_LAST_ERROR WSAGetLastError()
#define PLATFORM_EWOULDBLOCK WSAEWOULDBLOCK
#define SOCKLEN_T int
#else

#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
using SocketType = int;
#define CLOSE_SOCKET close
#define PLATFORM_INIT_WINSOCK // Linux �����ʼ��
#define PLATFORM_CLEANUP_WINSOCK // Linux ��������
// ���� SOCKADDR_IN
typedef struct sockaddr_in SOCKADDR_IN;
#define INET_ADDR(ip) inet_addr(ip)
// Linux �׽��ֳ���
#define INVALID_SOCKET (-1)
#define SOCKET_ERROR (-1)
// Linux ʹ�õĴ�����

#define PLATFORM_GET_LAST_ERROR errno
#define PLATFORM_EWOULDBLOCK EAGAIN  // ���� EWOULDBLOCK��ȡ����ƽ̨��ϵͳ����
#define SOCKLEN_T socklen_t
#endif

//#include "Networking.h"
//#include <Networking/Public/Interfaces/IPv4/IPv4Address.h>
//#include <Networking/Public/Interfaces/IPv4/IPv4Endpoint.h>
//#include <Networking/Public/Common/UdpSocketBuilder.h>
#include "vector"
#include <cerrno>
#include <cstring> // ���� strerror

#include "UDPCom.generated.h"

#define UDP_BUFFER_SIZE (100 * 1024)
#define UDP_MTU 15000

struct UDPStruct {
    std::string localIP;
    std::string remoteIP;

    int32_t localPort;
    int32_t remotePort;
};

// ��ͷ�����ݽṹ ============woods=============
struct PacketHeader {
    uint32_t seq_num;        // �����
    uint32_t total_pkgs_num; // �ܰ���
    bool is_last;           // �Ƿ������һ����
    uint32_t data_len;       // ��ǰ�������ݳ���
};


UCLASS(BlueprintType, Category = "UDP Communication Serial")
class NETWORKPLUGIN_API UUDPCom : public UObject {
    GENERATED_BODY()

public:
    UUDPCom() { autoBoundRemote = false; }

    ~UUDPCom()
    {
        UE_LOG(LogTemp, Warning, TEXT("=======~~~~UUDPCom=========="));

        closeUDPPort();
    }

    /////////////////////////////////////////////////////////////
    UFUNCTION(BlueprintType, meta = (DisplayName = "Open UDP Port with AutoBound"), Category = "UDP Communication Serial")
    static UUDPCom* openUDPPort(const FString& _LocalIP, const int32 _LocalPort, const FString& _RemoteIP, const int32 _RemotePort, bool _autoBoundRemote = false);


    UFUNCTION(BlueprintType, meta = (DisplayName = "Close UDP Port"), Category = "UDP Communication Serial")
    void closeUDPPort();

    /////////////////////////////////////////////////////////////
    UFUNCTION(BlueprintType, meta = (DisplayName = "CreateUDP 1"), Category = "UDP Communication")
    bool createUDP(FString remoteIP, int32 remotePort, FString localIP, int32 localPort);

    /////////////////////////////////////////////////////////////
    UFUNCTION(BlueprintType, meta = (DisplayName = "Recv UDP Data"), Category = "UDP Communication Serial")
    TArray<uint8> recvData();

    UFUNCTION(BlueprintType, meta = (DisplayName = "Send UDP Data"), Category = "UDP Communication Serial")
    void sendData(TArray<uint8> data);
    void sendFCUData(TArray<uint8> data);



private:
    //////////////////////////////////
    SocketType m_Socket;

    sockaddr_in m_LocalAddress;  // ���ص�ַ
    sockaddr_in m_RemoteAddress; // Զ�̵�ַ

    UDPStruct udpStruct;

    bool autoBoundRemote;

    char recvBuf[UDP_BUFFER_SIZE];

private:
    bool createUDP(std::string remoteIP, int32_t remotePort, std::string localIP, int32_t localPort);

    void ShouldAutoBound(bool should)
    {
        autoBoundRemote = should;
    }

    // ScreenMsg
    FORCEINLINE void ScreenMsg(const FString& Msg)
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, *Msg);
    }
    FORCEINLINE void ScreenMsg(const FString& Msg, const float Value)
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("%s %f"), *Msg, Value));
    }
    FORCEINLINE void ScreenMsg(const FString& Msg, const FString& Msg2)
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("%s %s"), *Msg, *Msg2));
    }
};