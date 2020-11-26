#pragma once
#include "CoreMinimal.h"
#include "Engine/UserDefinedStruct.h"
#include "GunEnums.h"
#include "GunStructs.generated.h"

/**
*
*/

UCLASS()
class VRENGINEGUNS_API UGunStructs : public UUserDefinedStruct

{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct VRENGINEGUNS_API FAttachment
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		EAttachmentPosition Position;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class ABasicAttachment* AttachmentActor;

	bool operator == (const FAttachment& other) const
	{
		return (AttachmentActor == other.AttachmentActor && Position == other.Position);
	}
	
	FAttachment() {};
	FAttachment(ABasicAttachment* A, EAttachmentPosition Pos) { AttachmentActor = A; Position = Pos; };
	FAttachment(ABasicAttachment* A) { AttachmentActor = A;};
};