using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ClickedDelete : MonoBehaviour
{
    public BoxStack bs;
    public MainFunction mf;

    // Start is called before the first frame update
    void Start()
    {
        bs = GameObject.Find("Charactor").GetComponent<BoxStack>();
        mf = GameObject.Find("MainFunction").GetComponent<MainFunction>();
    }

    public void clicked()
    {
        //Destroy(gameObject);
        for (int i = 0; i < mf.clone.Count; i++)
        {
            if (gameObject.Equals(mf.clone[i]))
            {
                mf.clone.RemoveAt(i);
                mf.al.RemoveAt(mf.page*5+i);
                bs.list.RemoveAt(mf.page * 5 + i);
                Destroy(gameObject);
                break;
            }
        }
        if(mf.page == mf.lastpage && mf.clone.Count == 0)
        {
            if(mf.page != 0)
            {
                mf.page -= 1;
                mf.lastpage = mf.page;
            }
        }
        mf.lastpage = (mf.al.Count-1)/5;
        if (mf.al.Count != 0)
        {
            mf.grid_layout();
        }
    }
}
