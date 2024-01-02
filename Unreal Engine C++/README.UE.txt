# RandomOutfitGenerator

## Description
This code provides a basic functionality for generating random outfits for a character in Unreal Engine. It utilizes `ARandomOutfitGenerator` class to randomize various parts of the character's attire and apply random materials to the character's mesh components.

## How to Use
### Setup:
1. Add the provided `RandomOutfitGenerator.h` and `RandomOutfitGenerator.cpp` files to your Unreal Engine project's C++ source code folder.
2. Compile the code to generate the necessary binaries for usage in the engine.

### Implementation:
1. **Header File (`RandomOutfitGenerator.h`):**
   - Declare and define the `ARandomOutfitGenerator` class with its properties and functions. Adjust the properties like `Pouch`, `Eyes`, `Beard`, `Hair`, `Backpack`, `CharacterMesh`, `AvailableMaterials`, and `GenerateButton` as needed.
   
2. **Source File (`RandomOutfitGenerator.cpp`):**
   - Implement the functions declared in the header file (`RandomOutfitGenerator.h`). The implementation includes logic for generating random outfits and applying random materials to the character's mesh components.

### Usage:
1. Drag and drop an instance of `ARandomOutfitGenerator` class into your level from the "Classes" browser.
2. In the Details panel, assign the required skeletal mesh components (`Pouch`, `Eyes`, `Beard`, `Hair`, `Backpack`, `CharacterMesh`), available materials (`AvailableMaterials`), and the generation button (`GenerateButton`).
3. Ensure the `GenerateButton` is correctly linked to the `GenerateOutfit()` function through the Unreal Engine editor's blueprint or C++ code.

### Customization (if needed):
- Customize the logic inside the `RandomizeOutfit()` function to activate specific parts of the outfit randomly.
- Modify the `RandomizeMeshMaterial()` function for any specific handling or manipulation of materials on the character's mesh components.

### Run:
- Play the level in Unreal Engine and interact with the linked generation button to generate random outfits for the character.

## Notes:
- Ensure proper setup and linkage of components within the Unreal Engine editor for the script to function correctly.
- Modify the code as necessary to fit the specific requirements and structure of your project.