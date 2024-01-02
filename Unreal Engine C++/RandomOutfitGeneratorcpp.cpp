// RandomOutfitGenerator.cpp

#include "RandomOutfitGenerator.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/Button.h"

ARandomOutfitGenerator::ARandomOutfitGenerator()
{
    PrimaryActorTick.bCanEverTick = false;
}

void ARandomOutfitGenerator::BeginPlay()
{
    Super::BeginPlay();

    if (GenerateButton)
    {
        GenerateButton->OnClicked.AddDynamic(this, &ARandomOutfitGenerator::GenerateOutfit);
    }
}

void ARandomOutfitGenerator::GenerateOutfit()
{
    RandomizeOutfit(Pouch);
    RandomizeOutfit(Eyes);
    RandomizeOutfit(Beard);
    RandomizeOutfit(Hair);
    RandomizeOutfit(Backpack);
    RandomizeOutfit(CharacterMesh);
    RandomizeMeshMaterial(CharacterMesh);
}

void ARandomOutfitGenerator::RandomizeOutfit(USkeletalMeshComponent* OutfitGroup)
{
    if (OutfitGroup)
    {
        OutfitGroup->SetVisibility(false);
        // Implementare la logica per attivare casualmente uno degli elementi dell'outfit
        // Hint: Utilizzare OutfitGroup->SetVisibility(true) per attivare un componente specifico
    }
}

void ARandomOutfitGenerator::RandomizeMeshMaterial(USkeletalMeshComponent* MeshComponent)
{
    if (MeshComponent)
    {
        TArray<UMaterialInterface*> MeshMaterials = MeshComponent->GetMaterials();
        for (int32 i = 0; i < MeshMaterials.Num(); ++i)
        {
            int32 RandomMaterialIndex = FMath::RandRange(0, AvailableMaterials.Num() - 1);
            MeshMaterials[i] = AvailableMaterials[RandomMaterialIndex];
        }
        MeshComponent->SetMaterials(MeshMaterials);
    }
}
