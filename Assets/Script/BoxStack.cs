using System.Text.RegularExpressions;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class BoxStack : MonoBehaviour
{
    public ArrayList list;
    public int turn = 90;
    public int rotate = 90;
    public GameObject obj;
    public GameObject clear;
    public GameObject fail;
    public bool run_true = false;
    public bool end_check = false;
    public Animator ani;
    public int go_stack = 0;
    public int list_size = 0;
    private bool collider_bool = false;

    // Start is called before the first frame update
    void Start()
    {
        list = new ArrayList();
        ani = GetComponent<Animator>();
        clear.SetActive(false);
        fail.SetActive(false);
        StartCoroutine("Under_y");
    }

    public void add(int num)
    {
        list.Add(num);
    }

    public void run()
    {
        if (run_true != true)
        {
            run_true = true;
            if (list.Count != 0)
            {
                if (list[0].Equals(1))
                {
                    // 정상적인 리스트 상황(블록이 제대로 쌓임)
                    if (list_size < list.Count)
                    {
                        list_size += 1;
                        go();
                    }
                    // 블록 한개만 넣을 때
                    else if (list.Count == 1)
                    {
                        go();
                        // 이후 실행중 풀기
                    }
                    // 블록 없이 실행시킬 때
                    else
                    {
                        list = new ArrayList();
                        turn = 90;
                        go_stack = 0;
                        list_size = 0;
                        obj.transform.position = new Vector3(-19.6f, 13.77764f, 16);
                        run_true = false;
                        run_game();
                    }
                }
                else if (list[0].Equals(2))
                {
                    // 정상적인 리스트 상황(블록이 제대로 쌓임)
                    if (list_size < list.Count)
                    {
                        list_size += 1;
                        turn_left();
                    }
                    // 블록 한개만 넣을 때
                    else if (list.Count == 1)
                    {
                        turn_left();
                        // 이후 실행중 풀기
                    }
                    // 블록 없이 실행시킬 때
                    else
                    {
                        list = new ArrayList();
                        turn = 90;
                        go_stack = 0;
                        list_size = 0;
                        obj.transform.position = new Vector3(-19.6f, 13.77764f, 16);
                        run_true = false;
                        run_game();
                    }
                }
                else if (list[0].Equals(3))
                {
                    // 정상적인 리스트 상황(블록이 제대로 쌓임)
                    if (list_size < list.Count)
                    {
                        list_size += 1;
                        turn_right();
                    }
                    // 블록 한개만 넣을 때
                    else if (list.Count == 1)
                    {
                        turn_right();
                        // 이후 실행중 풀기
                    }
                    // 블록 없이 실행시킬 때
                    else
                    {
                        list = new ArrayList();
                        turn = 90;
                        go_stack = 0;
                        list_size = 0;
                        obj.transform.position = new Vector3(-19.6f, 13.77764f, 16);
                        run_true = false;
                        run_game();
                    }
                }
                else if (list[0].Equals(4))
                {
                    // 정상적인 리스트 상황(블록이 제대로 쌓임)
                    if (list_size < list.Count)
                    {
                        list_size += 1;
                        jump();
                    }
                    // 블록 한개만 넣을 때
                    else if (list.Count == 1)
                    {
                        jump();
                        // 이후 실행중 풀기
                    }
                    // 블록 없이 실행시킬 때
                    else
                    {
                        list = new ArrayList();
                        turn = 90;
                        go_stack = 0;
                        list_size = 0;
                        obj.transform.position = new Vector3(-19.6f, 13.77764f, 16);
                        run_true = false;
                        run_game();
                    }
                }
                else
                {
                    // 정상적인 리스트 상황(블록이 제대로 쌓임)
                    if (list_size < list.Count)
                    {
                        list_size += 1;
                        end();
                    }
                    // 블록 한개만 넣을 때
                    else if (list.Count == 1)
                    {
                        end();
                        // 이후 실행중 풀기
                    }
                    // 블록 없이 실행시킬 때
                    else
                    {
                        list = new ArrayList();
                        turn = 90;
                        go_stack = 0;
                        list_size = 0;
                        obj.transform.position = new Vector3(-19.6f, 13.77764f, 16);
                        run_true = false;
                        run_game();
                    }
                }
            }
            //run_true = false;
            else
            {
                run_game();
            }
        }
    }

    public void go()
    {
        if (ani.GetCurrentAnimatorStateInfo(0).IsName("WalkForward") != true)
        {
            ani.SetTrigger("WalkForward");
        }
        StartCoroutine("Animation_walkforward");
    }

    IEnumerator Animation_walkforward()
    {
        while (go_stack < 200)
        {
            go_stack += 1;
            yield return new WaitForSeconds(0.01f);
            if (turn == 90)
            {
                obj.transform.position += new Vector3(0.049f, 0, 0);
            }
            else if (turn == 0 || turn == 360)
            {
                obj.transform.position += new Vector3(0, 0, 0.049f);
            }
            else if (turn == -90 || turn == 270)
            {
                obj.transform.position += new Vector3(-0.049f, 0, 0);
            }
            else if (turn == -180 || turn == 180)
            {
                obj.transform.position += new Vector3(0, 0, -0.049f);
            }
        }
        go_stack = 0;
        if (list_size < list.Count)
        {
            if (list[list_size].Equals(1))
            {
                list_size += 1;
                collider_bool = false;
                StartCoroutine("Go_col");
                //go();
            }
            else if (list[list_size].Equals(2))
            {
                ani.SetTrigger("Idle");
                list_size += 1;
                collider_bool = false;
                StartCoroutine("Left_col");
                //turn_left();
            }
            else if (list[list_size].Equals(3))
            {
                ani.SetTrigger("Idle");
                list_size += 1;
                collider_bool = false;
                StartCoroutine("Right_col");
                //turn_right();
            }
            else if (list[list_size].Equals(4))
            {
                list_size += 1;
                collider_bool = false;
                StartCoroutine("Jump_col");
                //jump();
            }
            else
            {
                ani.SetTrigger("Idle");
                list_size += 1;
                collider_bool = false;
                StartCoroutine("End_col");
                //end();
            }
        }
        else
        {
            ani.SetTrigger("Idle");
            run_game();
        }
    }

    /*
    IEnumerator Animation_walkforward()
    {
        yield return new WaitForSeconds(0.01f);
        if (go_stack < 200)
        {
            go_stack += 1;
            if (turn == 90)
            {
                obj.transform.position += new Vector3(0.049f, 0, 0);
            }
            else if (turn == 0 || turn == 360)
            {
                obj.transform.position += new Vector3(0, 0, 0.049f);
            }
            else if (turn == -90 || turn == 270)
            {
                obj.transform.position += new Vector3(-0.049f, 0, 0);
            }
            else if (turn == -180 || turn == 180)
            {
                obj.transform.position += new Vector3(0, 0, -0.049f);
            }
            StartCoroutine("Animation_walkforward");
        }
        else
        {
            go_stack = 0;
            if (list_size < list.Count)
            {
                if (list[list_size].Equals(1))
                {
                    list_size += 1;
                    collider_bool = false;
                    StartCoroutine("Go_col");
                    //go();
                }
                else if (list[list_size].Equals(2))
                {
                    ani.SetTrigger("Idle");
                    list_size += 1;
                    collider_bool = false;
                    StartCoroutine("Left_col");
                    //turn_left();
                }
                else if (list[list_size].Equals(3))
                {
                    ani.SetTrigger("Idle");
                    list_size += 1;
                    collider_bool = false;
                    StartCoroutine("Right_col");
                    //turn_right();
                }
                else if (list[list_size].Equals(4))
                {
                    list_size += 1;
                    collider_bool = false;
                    StartCoroutine("Jump_col");
                    //jump();
                }
                else
                {
                    ani.SetTrigger("Idle");
                    list_size += 1;
                    collider_bool = false;
                    StartCoroutine("End_col");
                    //end();
                }
            }
            else
            {
                ani.SetTrigger("Idle");
                run_game();
            }
        }
    }
    */
    public void turn_left()
    {
        rotate = 90;
        turn -= 90;
        if (turn == -270 || turn == 450)
        {
            turn = 90;
        }
        StartCoroutine("TurnleftDelay");
    }

    // 코루틴을 이용한 부드러운 좌회전
    IEnumerator TurnleftDelay()
    {
        yield return new WaitForSeconds(0.01f);
        if (rotate > 0)
        {
            rotate -= 1;
            obj.transform.rotation = Quaternion.Euler(0, turn + rotate, 0);
            StartCoroutine("TurnleftDelay");
        }
        else
        {
            if (list_size < list.Count)
            {
                if (list[list_size].Equals(1))
                {
                    list_size += 1;
                    collider_bool = false;
                    StartCoroutine("Go_col");
                    //go();
                }
                else if (list[list_size].Equals(2))
                {
                    list_size += 1;
                    collider_bool = false;
                    StartCoroutine("Left_col");
                    //turn_left();
                }
                else if (list[list_size].Equals(3))
                {
                    list_size += 1;
                    collider_bool = false;
                    StartCoroutine("Right_col");
                    //turn_right();
                }
                else if (list[list_size].Equals(4))
                {
                    list_size += 1;
                    collider_bool = false;
                    StartCoroutine("Jump_col");
                    //jump();
                }
                else
                {
                    list_size += 1;
                    collider_bool = false;
                    StartCoroutine("End_col");
                    //end();
                }
            }
            else
            {
                ani.SetTrigger("Idle");
                run_game();
            }
        }
    }

    public void turn_right()
    {
        rotate = 90;
        turn += 90;
        if (turn == -270 || turn == 450)
        {
            turn = 90;
        }
        StartCoroutine("TurnrightDelay");
    }

    // 코루틴을 이용한 부드러운 우회전
    IEnumerator TurnrightDelay()
    {
        yield return new WaitForSeconds(0.01f);
        if (rotate > 0)
        {
            rotate -= 1;
            obj.transform.rotation = Quaternion.Euler(0, turn - rotate, 0);
            StartCoroutine("TurnrightDelay");
        }
        else
        {
            if (list_size < list.Count)
            {
                if (list[list_size].Equals(1))
                {
                    list_size += 1;
                    collider_bool = false;
                    StartCoroutine("Go_col");
                    //go();
                }
                else if (list[list_size].Equals(2))
                {
                    list_size += 1;
                    collider_bool = false;
                    StartCoroutine("Left_col");
                    //turn_left();
                }
                else if (list[list_size].Equals(3))
                {
                    list_size += 1;
                    collider_bool = false;
                    StartCoroutine("Right_col");
                    //turn_right();
                }
                else if (list[list_size].Equals(4))
                {
                    list_size += 1;
                    collider_bool = false;
                    StartCoroutine("Jump_col");
                    //jump();
                }
                else
                {
                    list_size += 1;
                    collider_bool = false;
                    StartCoroutine("End_col");
                    //end();
                }
            }
            else
            {
                ani.SetTrigger("Idle");
                run_game();
            }
        }
    }

    public void jump()
    {
        ani.SetTrigger("Jump");
        StartCoroutine("JumpDelay");
    }

    IEnumerator JumpDelay()
    {
        while (go_stack < 80)
        {
            yield return new WaitForSeconds(0.01f);
            if (go_stack < 40)
            {
                go_stack += 1;
                if (turn == 90)
                {
                    obj.transform.position += new Vector3(0.095f, 0.25f, 0);
                }
                else if (turn == 0 || turn == 360)
                {
                    obj.transform.position += new Vector3(0, 0.25f, 0.095f);
                }
                else if (turn == -90 || turn == 270)
                {
                    obj.transform.position += new Vector3(-0.095f, 0.25f, 0);
                }
                else if (turn == -180 || turn == 180)
                {
                    obj.transform.position += new Vector3(0, 0.25f, -0.095f);
                }
            }
            else if (go_stack >= 40 && go_stack < 80)
            {
                go_stack += 1;
                if (turn == 90)
                {
                    obj.transform.position += new Vector3(0.15f, -0.15f, 0);
                }
                else if (turn == 0 || turn == 360)
                {
                    obj.transform.position += new Vector3(0, -0.15f, 0.15f);
                }
                else if (turn == -90 || turn == 270)
                {
                    obj.transform.position += new Vector3(-0.15f, -0.15f, 0);
                }
                else if (turn == -180 || turn == 180)
                {
                    obj.transform.position += new Vector3(0, -0.15f, -0.15f);
                }
            }
        }
        go_stack = 0;
        if (list_size < list.Count)
        {
            if (list[list_size].Equals(1))
            {
                list_size += 1;
                collider_bool = false;
                StartCoroutine("Go_col");
                //go();
            }
            else if (list[list_size].Equals(2))
            {
                ani.SetTrigger("Idle");
                list_size += 1;
                collider_bool = false;
                StartCoroutine("Left_col");
                //turn_left();
            }
            else if (list[list_size].Equals(3))
            {
                ani.SetTrigger("Idle");
                list_size += 1;
                collider_bool = false;
                StartCoroutine("Right_col");
                //turn_right();
            }
            else if (list[list_size].Equals(4))
            {
                ani.SetTrigger("Idle");
                list_size += 1;
                collider_bool = false;
                StartCoroutine("Jump_col");
                //jump();
            }
            else
            {
                ani.SetTrigger("Idle");
                list_size += 1;
                collider_bool = false;
                StartCoroutine("End_col");
                //end();
            }
        }
        else
        {
            ani.SetTrigger("Idle");
            run_game();
        }
    }
    /*
    IEnumerator JumpDelay()
    {
        yield return new WaitForSeconds(0.01f);
        if (go_stack < 40)
        {
            go_stack += 1;
            if (turn == 90)
            {
                obj.transform.position += new Vector3(0.095f, 0.25f, 0);
            }
            else if (turn == 0 || turn == 360)
            {
                obj.transform.position += new Vector3(0, 0.25f, 0.095f);
            }
            else if (turn == -90 || turn == 270)
            {
                obj.transform.position += new Vector3(-0.095f, 0.25f, 0);
            }
            else if (turn == -180 || turn == 180)
            {
                obj.transform.position += new Vector3(0, 0.25f, -0.095f);
            }
            StartCoroutine("JumpDelay");
        }
        else if (go_stack >= 40 && go_stack < 80)
        {
            go_stack += 1;
            if (turn == 90)
            {
                obj.transform.position += new Vector3(0.15f, -0.15f, 0);
            }
            else if (turn == 0 || turn == 360)
            {
                obj.transform.position += new Vector3(0, -0.15f, 0.15f);
            }
            else if (turn == -90 || turn == 270)
            {
                obj.transform.position += new Vector3(-0.15f, -0.15f, 0);
            }
            else if (turn == -180 || turn == 180)
            {
                obj.transform.position += new Vector3(0, -0.15f, -0.15f);
            }
            StartCoroutine("JumpDelay");
        }
        else
        {
            go_stack = 0;
            if (list_size < list.Count)
            {
                if (list[list_size].Equals(1))
                {
                    list_size += 1;
                    collider_bool = false;
                    StartCoroutine("Go_col");
                    //go();
                }
                else if (list[list_size].Equals(2))
                {
                    ani.SetTrigger("Idle");
                    list_size += 1;
                    collider_bool = false;
                    StartCoroutine("Left_col");
                    //turn_left();
                }
                else if (list[list_size].Equals(3))
                {
                    ani.SetTrigger("Idle");
                    list_size += 1;
                    collider_bool = false;
                    StartCoroutine("Right_col");
                    //turn_right();
                }
                else if (list[list_size].Equals(4))
                {
                    ani.SetTrigger("Idle");
                    list_size += 1;
                    collider_bool = false;
                    StartCoroutine("Jump_col");
                    //jump();
                }
                else
                {
                    ani.SetTrigger("Idle");
                    list_size += 1;
                    collider_bool = false;
                    StartCoroutine("End_col");
                    //end();
                }
            }
            else
            {
                ani.SetTrigger("Idle");
                run_game();
            }
        }
    }
    */
    public void end()
    {
        ani.SetTrigger("Idle");
        if (list[(list.Count)-1].Equals(5) && end_check == true)
        {
            run_game();
        }
        else
        {
            run_game();
        }
    }

    public void end_check_true()
    {
        end_check = true;
    }

    public void end_check_false()
    {
        end_check = false;
    }

    public void run_game()
    {
        if (list.Count == 0)
        {
            StartCoroutine("Fail");
        }
        else if (list[(list.Count) - 1].Equals(5) && end_check == true)
        {
            StartCoroutine("Clear");
        }
        else
        {
            StartCoroutine("Fail");
        }
    }

    IEnumerator Clear()
    {
        clear.SetActive(true);
        yield return new WaitForSeconds(2.0f);
        string str = SceneManager.GetActiveScene().name;
        string temp = Regex.Replace(str, @"\D", "");
        int rstInt = int.Parse(temp);
        rstInt += 1;
        if (rstInt <= 7)
        {
            DataControl.save_data(rstInt);
            LoadingSceneController.LoadScene("" + rstInt + "Stage");
        }
        else
        {
            DataControl.save_data(7);
            LoadingSceneController.LoadScene("EndingCredit");
        }
    }

    IEnumerator Fail()
    {
        fail.SetActive(true);
        yield return new WaitForSeconds(2.0f);
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }

    private void OnCollisionStay(Collision collision)
    {
        collider_bool = true;
    }

    IEnumerator Go_col()
    {
        yield return new WaitForSeconds(0.1f);
        if (!collider_bool)
        {
            StartCoroutine("Go_col");
        }
        else
        {
            go();
        }
    }

    IEnumerator Left_col()
    {
        yield return new WaitForSeconds(0.1f);
        if (!collider_bool)
        {
            StartCoroutine("Left_col");
        }
        else
        {
            turn_left();
        }
    }

    IEnumerator Right_col()
    {
        yield return new WaitForSeconds(0.1f);
        if (!collider_bool)
        {
            StartCoroutine("Right_col");
        }
        else
        {
            turn_right();
        }
    }

    IEnumerator Jump_col()
    {
        yield return new WaitForSeconds(0.1f);
        if (!collider_bool)
        {
            StartCoroutine("Jump_col");
        }
        else
        {
            jump();
        }
    }

    IEnumerator End_col()
    {
        yield return new WaitForSeconds(0.1f);
        if (!collider_bool)
        {
            StartCoroutine("End_col");
        }
        else
        {
            end();
        }
    }

    IEnumerator Under_y()
    {
        while (!(obj.transform.position.y < 9f))
        {
            yield return null;
            if (obj.transform.position.y < 9.1f)
            {
                StartCoroutine("Fail");
                yield break;
            }
        }
    }
}