using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EndlingCredit : MonoBehaviour
{
    public RectTransform obj;
    private float pos_y = -410f;

    // Start is called before the first frame update
    void Start()
    {
        obj = GetComponent<RectTransform>();
        obj.anchoredPosition = new Vector2(0, -410f);
        StartCoroutine("Moving");
    }

    IEnumerator Moving()
    {
        while (pos_y < 535f)
        {
            yield return new WaitForSeconds(0.01f);
            pos_y += 0.1f;
            obj.anchoredPosition = new Vector2(0, pos_y);
        }
        obj.anchoredPosition = new Vector2(0, 535f);
        LoadingSceneController.LoadScene("MainMenuScene");
    }
}
