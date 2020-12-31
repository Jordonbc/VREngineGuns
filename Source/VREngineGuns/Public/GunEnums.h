// Copyright 2017-2020 Jordon Brooks.

#pragma once

#include "CoreMinimal.h"
#include "GunEnums.generated.h"

UENUM(BlueprintType)
enum class EFireMode : uint8
{
	SingleShot 	UMETA(DisplayName = "SingleShot", ToolTip = "Gun fires one bullet, player has to manually reload."),
	FullAuto 	UMETA(DisplayName = "FullAuto", ToolTip = "Gun continuously fires."),
	DoubleAction	UMETA(DisplayName = "Double Action", ToolTip = "Gun auto reloads if mag is not empty.")
};

UENUM(BlueprintType)
enum class EAttachmentPosition : uint8
{
	Sight 	UMETA(DisplayName = "Sight"),
	Ammo 	UMETA(DisplayName = "Ammo"),
	Side	UMETA(DisplayName = "Side"),
	Front	UMETA(DisplayName = "Front"),
	Bottom	UMETA(DisplayName = "Bottom"),
	Other	UMETA(DisplayName = "Other")
};

