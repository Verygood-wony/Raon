using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CanvasToCamera : MonoBehaviour
{
    public Camera cameraToLookAt;
    public GameObject gb;
    public GameObject tp;
    // Start is called before the first frame update
    void Start()
    {
        //cameraToLookAt = GameObject.FindGameObjectWithTag("MainCamera").GetComponent<Camera>();
    }

    // Update is called once per frame
    void Update()
    {
        gb.transform.rotation = cameraToLookAt.transform.rotation;
        //gb.transform.position = tp.transform.position;
    }
}
