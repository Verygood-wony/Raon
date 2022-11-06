using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BoxClick : MonoBehaviour
{
    public GameObject pref;
    public Transform parent;

    void start()
    {

    }

    public void clicked()
    {
        StartCoroutine("ClickProcess");
    }

    IEnumerator ClickProcess()
    {
        Vector3 pos = new Vector3(0, 40, 80);
        GameObject inst = Instantiate(pref, parent);
        inst.transform.position = pos;
        Destroy(inst, 0.5f);
        yield return null;
    }
}