using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class RandomOutfitGenerator : MonoBehaviour
{
    public GameObject player;

    // Lista dei GameObjects contenenti i diversi pezzi dell'outfit come figli
    public GameObject pouch;
    public GameObject eyes;
    public GameObject beard;
    public GameObject hair;
    public GameObject backpack;
    public GameObject mesh;
    public Button generateButton;

    public Material[] availableMaterials; // Array dei 9 materiali disponibili

    private void Awake()
    {
        generateButton.GetComponentInParent<UnityEngine.UI.Button>().onClick.AddListener(GenerateOutfit);
    }

    public void GenerateOutfit()
    {
        RandomizeOutfit(pouch);
        RandomizeOutfit(eyes);
        RandomizeOutfit(beard);
        RandomizeOutfit(hair);
        RandomizeOutfit(backpack);
        RandomizeOutfit(mesh);
        RandomizeMeshMaterial(mesh);
    }

    void RandomizeOutfit(GameObject outfitGroup)
    {
        for (int i = 0; i < outfitGroup.transform.childCount; i++)
        {
            outfitGroup.transform.GetChild(i).gameObject.SetActive(false);
        }

        int randomChildIndex = Random.Range(0, outfitGroup.transform.childCount);
        outfitGroup.transform.GetChild(randomChildIndex).gameObject.SetActive(true);
    }

    void RandomizeMeshMaterial(GameObject meshObject)
    {
        for (int i = 0; i < meshObject.transform.childCount; i++)
        {
            SkinnedMeshRenderer meshRenderer = meshObject.transform.GetChild(i).GetComponent<SkinnedMeshRenderer>();
            if (meshRenderer != null)
            {
                Material[] newMaterials = new Material[meshRenderer.materials.Length];
                for (int j = 0; j < meshRenderer.materials.Length; j++)
                {
                    int randomMaterialIndex = Random.Range(0, availableMaterials.Length);
                    newMaterials[j] = availableMaterials[randomMaterialIndex];
                }
                meshRenderer.materials = newMaterials;
            }
        }

    }
    public void OnButtonClick()
    {
        GenerateOutfit();
        RandomizeMeshMaterial(mesh);
    }
}
