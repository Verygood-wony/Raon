using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MainFunction : MonoBehaviour
{
    public BoxStack bs;
    public ArrayList al;
    public List<GameObject> clone;
    public int page, lastpage;
    public int[] x_pos;
    public int y_pos;
    public GameObject parent;
    public GameObject go, right, left, jump, end;
    public Button prev_btn, next_btn;

    // Start is called before the first frame update
    void Start()
    {
        bs = GameObject.Find("Charactor").GetComponent<BoxStack>();
        page = 0;
        lastpage = 0;
        x_pos = new int[] { -350, -150, 50, 250, 450 };
        y_pos = -10;
        al = new ArrayList();
        clone = new List<GameObject>();
        prev_btn.interactable = false;
        next_btn.interactable = false;
    }

    // 앞으로가기 등 버튼 클릭시 스택 업데이트
    public void stack_update()
    {
        /*
        al = new ArrayList();
        for(int i=0; i<bs.list.Count; i++)
        {
            al.Add(bs.list[i]);
        }
        */
        al.Add(bs.list[bs.list.Count-1]);
        if (al.Count >= 6 && al.Count % 5 == 1 && clone.Count==5)
        {
            page += 1;
            lastpage = page;
        }
        page = lastpage;
        grid_layout();
    }

    // 휴지통 버튼 클릭시 스택 초기화
    public void stack_clear()
    {
        delete_clone();
        bs.list = new ArrayList();
        al = new ArrayList();
        clone = new List<GameObject>();
        prev_btn.interactable = false;
        next_btn.interactable = false;
        page = 0;
        lastpage = 0;
    }

    public void delete_clone()
    {
        if(clone.Count != 0)
        {
            for (int i = 0; i < clone.Count; i++)
            {
                Destroy(clone[i]);
            }
        }
        clone = new List<GameObject>();
    }

    public void prev()
    {
        page -= 1;
        grid_layout();
    }

    public void next()
    {
        page += 1;
        grid_layout();
    }

    // main_function 위치에 블록 표시 알고리즘
    public void grid_layout()
    {
        delete_clone();
        if (page == 0)
        {
            prev_btn.interactable = false;
        }
        else
        {
            prev_btn.interactable = true;
        }
        if (al.Count > page * 5 + 5)
        {
            next_btn.interactable = true;
        }
        else
        {
            next_btn.interactable = false;
        }
        for(int i=page*5; i<page*5+5; i++)
        {
            if (i>=al.Count && i!=0)
            {
                break;
            }
            else if (i == page * 5)
            {
                if (al[i].Equals(1))
                {
                    //Instantiate(go, new Vector3(x_pos[0], y_pos, 0), Quaternion.identity).transform.SetParent(parent.transform, false);
                    GameObject temp = Instantiate(go, new Vector3(x_pos[0], y_pos, 0), Quaternion.identity);
                    temp.transform.SetParent(parent.transform, false);
                    clone.Add(temp);
                }
                else if (al[i].Equals(2))
                {
                    //Instantiate(left, new Vector3(x_pos[0], y_pos, 0), Quaternion.identity).transform.SetParent(parent.transform, false);
                    GameObject temp = Instantiate(left, new Vector3(x_pos[0], y_pos, 0), Quaternion.identity);
                    temp.transform.SetParent(parent.transform, false);
                    clone.Add(temp);
                }
                else if (al[i].Equals(3))
                {
                    //Instantiate(right, new Vector3(x_pos[0], y_pos, 0), Quaternion.identity).transform.SetParent(parent.transform, false);
                    GameObject temp = Instantiate(right, new Vector3(x_pos[0], y_pos, 0), Quaternion.identity);
                    temp.transform.SetParent(parent.transform, false);
                    clone.Add(temp);
                }
                else if (al[i].Equals(4))
                {
                    //Instantiate(jump, new Vector3(x_pos[0], y_pos, 0), Quaternion.identity).transform.SetParent(parent.transform, false);
                    GameObject temp = Instantiate(jump, new Vector3(x_pos[0], y_pos, 0), Quaternion.identity);
                    temp.transform.SetParent(parent.transform, false);
                    clone.Add(temp);
                }
                else
                {
                    //Instantiate(end, new Vector3(x_pos[0], y_pos, 0), Quaternion.identity).transform.SetParent(parent.transform, false);
                    GameObject temp = Instantiate(end, new Vector3(x_pos[0], y_pos, 0), Quaternion.identity);
                    temp.transform.SetParent(parent.transform, false);
                    clone.Add(temp);
                }
            }
            else if(i == page * 5 + 1)
            {
                if (al[i].Equals(1))
                {
                    //Instantiate(go, new Vector3(x_pos[1], y_pos, 0), Quaternion.identity).transform.SetParent(parent.transform, false);
                    GameObject temp = Instantiate(go, new Vector3(x_pos[1], y_pos, 0), Quaternion.identity);
                    temp.transform.SetParent(parent.transform, false);
                    clone.Add(temp);
                }
                else if (al[i].Equals(2))
                {
                    //Instantiate(left, new Vector3(x_pos[1], y_pos, 0), Quaternion.identity).transform.SetParent(parent.transform, false);
                    GameObject temp = Instantiate(left, new Vector3(x_pos[1], y_pos, 0), Quaternion.identity);
                    temp.transform.SetParent(parent.transform, false);
                    clone.Add(temp);
                }
                else if (al[i].Equals(3))
                {
                    //Instantiate(right, new Vector3(x_pos[1], y_pos, 0), Quaternion.identity).transform.SetParent(parent.transform, false);
                    GameObject temp = Instantiate(right, new Vector3(x_pos[1], y_pos, 0), Quaternion.identity);
                    temp.transform.SetParent(parent.transform, false);
                    clone.Add(temp);
                }
                else if (al[i].Equals(4))
                {
                    //Instantiate(jump, new Vector3(x_pos[1], y_pos, 0), Quaternion.identity).transform.SetParent(parent.transform, false);
                    GameObject temp = Instantiate(jump, new Vector3(x_pos[1], y_pos, 0), Quaternion.identity);
                    temp.transform.SetParent(parent.transform, false);
                    clone.Add(temp);
                }
                else
                {
                    //Instantiate(end, new Vector3(x_pos[1], y_pos, 0), Quaternion.identity).transform.SetParent(parent.transform, false);
                    GameObject temp = Instantiate(end, new Vector3(x_pos[1], y_pos, 0), Quaternion.identity);
                    temp.transform.SetParent(parent.transform, false);
                    clone.Add(temp);
                }
            }
            else if (i == page * 5 + 2)
            {
                if (al[i].Equals(1))
                {
                    //Instantiate(go, new Vector3(x_pos[2], y_pos, 0), Quaternion.identity).transform.SetParent(parent.transform, false);
                    GameObject temp = Instantiate(go, new Vector3(x_pos[2], y_pos, 0), Quaternion.identity);
                    temp.transform.SetParent(parent.transform, false);
                    clone.Add(temp);
                }
                else if (al[i].Equals(2))
                {
                    //Instantiate(left, new Vector3(x_pos[2], y_pos, 0), Quaternion.identity).transform.SetParent(parent.transform, false);
                    GameObject temp = Instantiate(left, new Vector3(x_pos[2], y_pos, 0), Quaternion.identity);
                    temp.transform.SetParent(parent.transform, false);
                    clone.Add(temp);
                }
                else if (al[i].Equals(3))
                {
                    //Instantiate(right, new Vector3(x_pos[2], y_pos, 0), Quaternion.identity).transform.SetParent(parent.transform, false);
                    GameObject temp = Instantiate(right, new Vector3(x_pos[2], y_pos, 0), Quaternion.identity);
                    temp.transform.SetParent(parent.transform, false);
                    clone.Add(temp);
                }
                else if (al[i].Equals(4))
                {
                    //Instantiate(jump, new Vector3(x_pos[2], y_pos, 0), Quaternion.identity).transform.SetParent(parent.transform, false);
                    GameObject temp = Instantiate(jump, new Vector3(x_pos[2], y_pos, 0), Quaternion.identity);
                    temp.transform.SetParent(parent.transform, false);
                    clone.Add(temp);
                }
                else
                {
                    //Instantiate(end, new Vector3(x_pos[2], y_pos, 0), Quaternion.identity).transform.SetParent(parent.transform, false);
                    GameObject temp = Instantiate(end, new Vector3(x_pos[2], y_pos, 0), Quaternion.identity);
                    temp.transform.SetParent(parent.transform, false);
                    clone.Add(temp);
                }
            }
            else if (i == page * 5 + 3)
            {
                if (al[i].Equals(1))
                {
                    //Instantiate(go, new Vector3(x_pos[3], y_pos, 0), Quaternion.identity).transform.SetParent(parent.transform, false);
                    GameObject temp = Instantiate(go, new Vector3(x_pos[3], y_pos, 0), Quaternion.identity);
                    temp.transform.SetParent(parent.transform, false);
                    clone.Add(temp);
                }
                else if (al[i].Equals(2))
                {
                    //Instantiate(left, new Vector3(x_pos[3], y_pos, 0), Quaternion.identity).transform.SetParent(parent.transform, false);
                    GameObject temp = Instantiate(left, new Vector3(x_pos[3], y_pos, 0), Quaternion.identity);
                    temp.transform.SetParent(parent.transform, false);
                    clone.Add(temp);
                }
                else if (al[i].Equals(3))
                {
                    //Instantiate(right, new Vector3(x_pos[3], y_pos, 0), Quaternion.identity).transform.SetParent(parent.transform, false);
                    GameObject temp = Instantiate(right, new Vector3(x_pos[3], y_pos, 0), Quaternion.identity);
                    temp.transform.SetParent(parent.transform, false);
                    clone.Add(temp);
                }
                else if (al[i].Equals(4))
                {
                    //Instantiate(jump, new Vector3(x_pos[3], y_pos, 0), Quaternion.identity).transform.SetParent(parent.transform, false);
                    GameObject temp = Instantiate(jump, new Vector3(x_pos[3], y_pos, 0), Quaternion.identity);
                    temp.transform.SetParent(parent.transform, false);
                    clone.Add(temp);
                }
                else
                {
                    //Instantiate(end, new Vector3(x_pos[3], y_pos, 0), Quaternion.identity).transform.SetParent(parent.transform, false);
                    GameObject temp = Instantiate(end, new Vector3(x_pos[3], y_pos, 0), Quaternion.identity);
                    temp.transform.SetParent(parent.transform, false);
                    clone.Add(temp);
                }
            }
            else
            {
                if (al[i].Equals(1))
                {
                    //Instantiate(go, new Vector3(x_pos[4], y_pos, 0), Quaternion.identity).transform.SetParent(parent.transform, false);
                    GameObject temp = Instantiate(go, new Vector3(x_pos[4], y_pos, 0), Quaternion.identity);
                    temp.transform.SetParent(parent.transform, false);
                    clone.Add(temp);
                }
                else if (al[i].Equals(2))
                {
                    //Instantiate(left, new Vector3(x_pos[4], y_pos, 0), Quaternion.identity).transform.SetParent(parent.transform, false);
                    GameObject temp = Instantiate(left, new Vector3(x_pos[4], y_pos, 0), Quaternion.identity);
                    temp.transform.SetParent(parent.transform, false);
                    clone.Add(temp);
                }
                else if (al[i].Equals(3))
                {
                    //Instantiate(right, new Vector3(x_pos[4], y_pos, 0), Quaternion.identity).transform.SetParent(parent.transform, false);
                    GameObject temp = Instantiate(right, new Vector3(x_pos[4], y_pos, 0), Quaternion.identity);
                    temp.transform.SetParent(parent.transform, false);
                    clone.Add(temp);
                }
                else if (al[i].Equals(4))
                {
                    //Instantiate(jump, new Vector3(x_pos[4], y_pos, 0), Quaternion.identity).transform.SetParent(parent.transform, false);
                    GameObject temp = Instantiate(jump, new Vector3(x_pos[4], y_pos, 0), Quaternion.identity);
                    temp.transform.SetParent(parent.transform, false);
                    clone.Add(temp);
                }
                else
                {
                    //Instantiate(end, new Vector3(x_pos[4], y_pos, 0), Quaternion.identity).transform.SetParent(parent.transform, false);
                    GameObject temp = Instantiate(end, new Vector3(x_pos[4], y_pos, 0), Quaternion.identity);
                    temp.transform.SetParent(parent.transform, false);
                    clone.Add(temp);
                }
                //page++;
            }
        }
    }
}
