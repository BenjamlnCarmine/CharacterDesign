# RandomOutfitGenerator

## Description
This script, written in C# for Unity, is designed to randomly generate an outfit for a 3D character within a game. It relies on a series of GameObjects containing parts of the character's attire (such as pouch, eyes, beard, hair, backpack, and the character's mesh). It also utilizes an array of available materials to change the visual appearance of the body parts.

## How It Works
1. **Assigning GameObjects:** In Unity, assign the GameObjects related to the different outfit pieces (pouch, eyes, beard, hair, backpack, mesh), and the outfit generation button (generateButton).

2. **Available Materials:** Make sure you have an array of Materials (`Material[] availableMaterials`) containing the materials you want to use to customize the character's outfit appearance.

3. **Button Linking:** The `Awake()` method sets up the click listener for the "generateButton" to trigger the `GenerateOutfit()` method.

4. **Outfit Generation:** The `GenerateOutfit()` method calls `RandomizeOutfit()` for each part of the outfit. This method deactivates all children of the specific GameObject and randomly activates one of them.

5. **Mesh Material Changing:** The `RandomizeMeshMaterial()` method randomly selects materials from the `availableMaterials` array and applies them to the various meshRenderers of the children of the mesh GameObject.

6. **Button Usage:** By calling `OnButtonClick()`, a new random outfit for the character is generated, and the mesh materials are randomly changed.

## How to Use the Script
1. Ensure you have Unity installed on your computer.
2. Open the Unity project where you want to use this script.
3. Create an empty GameObject in the scene and assign the `RandomOutfitGenerator` script to the new GameObject.
4. Drag and drop the GameObjects related to the outfit parts and the outfit generation button into the designated fields in the script within Unity's Inspector.
5. Make sure you have the desired materials in the `availableMaterials` array.
6. Ensure the generation button is correctly linked to the script.
7. Run the game in Unity and press the linked button to randomly generate an outfit for the character.