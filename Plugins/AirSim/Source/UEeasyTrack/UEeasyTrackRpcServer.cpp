#include "UEeasyTrackRpcServer.h"


UEeasyTrackRpcServer::UEeasyTrackRpcServer(const std::string& ip_address, uint16_t port)
    : easyTrackRpcServer(ip_address,port) // 调用基类构造函数，初始化端口
{

}


std::vector<float> UEeasyTrackRpcServer::GetPlayerPosition(int32_t player_index)
{
    if (APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), player_index))
    {
        FVector PlayerLocation = PlayerController->GetPawn()->GetActorLocation();
        return { PlayerLocation.X, PlayerLocation.Y, PlayerLocation.Z };
    }
    return { 0.0f, 0.0f, 0.0f };
}

UWorld* UEeasyTrackRpcServer::GetWorld()
{
    return GEngine->GetWorldContexts()[0].World();
}
