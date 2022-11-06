using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveSky : MonoBehaviour
{
    float degree;

    // Start is called before the first frame update
    void Start()
    {
        degree = 0;
    }

    // Update is called once per frame
    void Update()
    {
        degree += Time.deltaTime;
        if (degree >= 360)
            degree = 0;

        RenderSettings.skybox.SetFloat("_Rotation", degree);
    }
}
