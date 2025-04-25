#pragma once

#include "CoreMinimal.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Kismet/KismetRenderingLibrary.h"
#include "UDPCom.h"
#include "TimerManager.h"
#include "Misc/FileHelper.h"
#include "rgbCaptureComponent.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class SENSOR_API UrgbCaptureComponent : public USceneCaptureComponent2D
{
    GENERATED_BODY()

public:
    // Constructor
    UrgbCaptureComponent();

    // Capture method to render RGB image and send via UDP
    UFUNCTION(BlueprintCallable, Category = "rgbCamera")
    void CaptureAndSendRGBImage();

    UFUNCTION(BlueprintCallable, Category = "rgbCamera")
    void InitializeComponentSettings();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "rgbCamera|UDP", Meta = (DisplayName = "Send Frequency"))
    float SendFreq;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "rgbCamera|UDP", Meta = (DisplayName = "Local IP"))
    FString LocalIP;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "rgbCamera|UDP", Meta = (DisplayName = "Local Port"))
    int32 LocalPort;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "rgbCamera|UDP", Meta = (DisplayName = "Remote IP"))
    FString RemoteIP;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "rgbCamera|UDP", Meta = (DisplayName = "Remote Port"))
    int32 RemotePort;

private:

    double LastCaptureTime = 0.0;

    // Capture method to render RGB image
    UFUNCTION(BlueprintCallable, Category = "rgbCamera")
    TArray<uint8> CaptureRGBImage();

    UFUNCTION(BlueprintCallable, Category = "rgbCamera")
    void resetSettings();

    FTimerHandle CaptureTimerHandle;

    UUDPCom* udpCom;

protected:
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
    virtual void BeginPlay() override;

};