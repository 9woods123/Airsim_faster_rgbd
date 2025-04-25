#pragma once

#include "CoreMinimal.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Kismet/KismetRenderingLibrary.h"
#include "UDPCom.h"
#include "TimerManager.h"
#include "ImageUtils.h"
#include "Misc/FileHelper.h"

#include "DepthCameraComponent.generated.h"



UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class SENSOR_API UDepthCameraComponent : public USceneCaptureComponent2D
{
    GENERATED_BODY()

public:
    // Constructor
    UDepthCameraComponent();


    // Capture method to render depth image and send via UDP
    UFUNCTION(BlueprintCallable, Category = "DepthCamera")
    void CaptureAndSendDepthImage();



    UFUNCTION(BlueprintCallable, Category = "DepthCamera")
    void InitializeComponentSettings();



    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DepthCamera|UDP", Meta = (DisplayName = "Send Frequency"))
    float SendFreq;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DepthCamera|UDP", Meta = (DisplayName = "Local IP"))
    FString LocalIP;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DepthCamera|UDP", Meta = (DisplayName = "Local Port"))
    int32 LocalPort;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DepthCamera|UDP", Meta = (DisplayName = "Remote IP"))
    FString RemoteIP;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DepthCamera|UDP", Meta = (DisplayName = "Remote Port"))
    int32 RemotePort;
    


private:

    // Capture method to render depth image
    UFUNCTION(BlueprintCallable, Category = "DepthCamera")
    TArray<uint8> CaptureDepthImage();

    UFUNCTION(BlueprintCallable, Category = "DepthCamera")
    bool  SaveDepthImage( const FString& ImagePath);
    
    UFUNCTION(BlueprintCallable, Category = "DepthCamera")
    FString GenerateImageName();

    FTimerHandle CaptureTimerHandle;

    UUDPCom* udpCom;


protected:

    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
    virtual void BeginPlay() override;


};
