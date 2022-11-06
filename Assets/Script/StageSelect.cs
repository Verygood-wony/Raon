using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class StageSelect : MonoBehaviour
{
    public GameObject obj;
    public Sprite true_img;
    public Sprite false_img;
    public string obj_name;

    void start()
    {

    }

    public void stage_select()
    {
        obj.GetComponent<Image>().sprite = false_img;
        obj.GetComponent<Button>().interactable = false;
        DataControl.load_data();
        if (int.Parse(obj_name.Substring(0, 1)) <= DataControl.stage)
        {
            obj.GetComponent<Image>().sprite = true_img;
            obj.GetComponent<Button>().interactable = true;
        }
    }
}