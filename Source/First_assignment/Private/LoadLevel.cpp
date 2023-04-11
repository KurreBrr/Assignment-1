#include "LoadLevel.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"

void LoadLevel::LoadLevel4()
{
    UGameplayStatics::OpenLevel(GetWorld(), "Level_4");
}


