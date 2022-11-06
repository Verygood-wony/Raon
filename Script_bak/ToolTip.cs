using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ToolTip : MonoBehaviour
{
    public GameObject tooltip;
    public AudioSource audio_system;
    public AudioSource audio_ui;
    // Start is called before the first frame update
    void Start()
    {
        DataControl.load_data();
        if (DataControl.stage < 2)
        {
            tooltip.SetActive(true);
            audio_ui.Play();
}
        else
        {
            tooltip.SetActive(false);
            audio_system.Play();
        }
    }
}
