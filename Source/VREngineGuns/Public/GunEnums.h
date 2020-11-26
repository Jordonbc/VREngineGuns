// Copyright 2017-2020 Jordon Brooks.

#pragma once

#include "CoreMinimal.h"
#include "GunEnums.generated.h"

UENUM(BlueprintType)
enum class EFireMode : uint8
{
	SingleShot 	UMETA(DisplayName = "SingleShot"),
	FullAuto 	UMETA(DisplayName = "FullAuto"),
	DoubleAction	UMETA(DisplayName = "Double Action")
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

