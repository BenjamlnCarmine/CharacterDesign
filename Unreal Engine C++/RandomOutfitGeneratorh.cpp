// RandomOutfitGenerator.h

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/Button.h"
#include "RandomOutfitGenerator.generated.h"

UCLASS()
class YOURPROJECT_API ARandomOutfitGenerator : public AActor
{
    GENERATED_BODY()

public:
    ARandomOutfitGenerator();

    UPROPERTY(EditAnywhere, Category = "Outfit")
    USkeletalMeshComponent* Pouch;

    UPROPERTY(EditAnywhere, Category = "Outfit")
    USkeletalMeshComponent* Eyes;

    UPROPERTY(EditAnywhere, Category = "Outfit")
    USkeletalMeshComponent* Beard;

    UPROPERTY(EditAnywhere, Category = "Outfit")
    USkeletalMeshComponent* Hair;

    UPROPERTY(EditAnywhere, Category = "Outfit")
    USkeletalMeshComponent* Backpack;

    UPROPERTY(EditAnywhere, Category = "Outfit")
    USkeletalMeshComponent* CharacterMesh;

    UPROPERTY(EditAnywhere, Category = "Materials")
    TArray<UMaterialInterface*> AvailableMaterials;

    UPROPERTY(EditAnywhere, Category = "UI")
    UButton* GenerateButton;

    virtual void BeginPlay() override;

    UFUNCTION()
    void GenerateOutfit();

    void RandomizeOutfit(USkeletalMeshComponent* OutfitGroup);

    void RandomizeMeshMaterial(USkeletalMeshComponent* MeshComponent);
};
