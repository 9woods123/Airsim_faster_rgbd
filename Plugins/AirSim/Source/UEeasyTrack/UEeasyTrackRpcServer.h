#ifndef UE_EASYTRACKRPCSERVER_HPP
#define UE_EASYTRACKRPCSERVER_HPP

#include "easytrack/easyTrackRpcServer.hpp"
#include "GameFramework/PlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "Math/Vector.h"
#include "Engine/Engine.h"

// This class extends the easyTrackRpcServerBase and overrides the GetPlayerPosition method
class UEeasyTrackRpcServer : public msr::airlib::easyTrackRpcServer
{
public:
    // Constructor: Initializes the server with a specified port (default is 50502)
    UEeasyTrackRpcServer(const std::string& ip_address = "127.0.0.1", uint16_t port = 50502);

    // Override the pure virtual function to get the player's position
    virtual std::vector<float> GetPlayerPosition(int32_t player_index) override;

private:
    // Function to get the UWorld context (necessary for retrieving player data)
    UWorld* GetWorld();
};

#endif // UE_EASYTRACKRPCSERVER_HPP
