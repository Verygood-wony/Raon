using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;

public class LoadingSceneController : MonoBehaviour
{
    public TextMeshProUGUI text_mesh;
    static string nextScene;
    static string[] script = {
        "오늘의 이야기 : 유병현 학생은 집중력이 대단하다고 합니다.",
        "오늘의 이야기 : 정원용 학생은 VR기기에 어지러움을 느낍니다.",
        "오늘의 이야기 : 사실 유병현 학생은 코딩을 좋아한다고 합니다.",
        "오늘의 이야기 : 사실 정원용 학생은 코딩이 싫다고 합니다.",
        "오늘의 이야기 : 이런 게임도 인기가 있을까요?",
        "오늘의 이야기 : 개발자들은 주제 선정에 후회가 많았습니다.",
        "오늘의 이야기 : 게임개발에는 고려할 부분이 많습니다.",
        "오늘의 이야기 : 촘퍼는 여행을 잘 끝냈을까요?",
        "오늘의 이야기 : 게임 속 광원처리가 가장 힘들었습니다.",
    };

    [SerializeField]
    Image progressBar;

    public static void LoadScene(string sceneName)
    {
        nextScene = sceneName;
        SceneManager.LoadScene("Loading");
    }

    // Start is called before the first frame update
    void Start()
    {
        int num = Random.Range(0, 9);
        text_mesh.text = script[num];
        StartCoroutine("LoadSceneProcess");
    }

    IEnumerator LoadSceneProcess()
    {
        AsyncOperation op = SceneManager.LoadSceneAsync(nextScene);
        op.allowSceneActivation = false;

        float timer = 0f;

        while (!op.isDone)
        {
            yield return null;

            if(op.progress < 0.9f)
            {
                progressBar.fillAmount = op.progress;
            }
            else
            {
                yield return new WaitForSeconds(0.1f);
                timer += Time.unscaledDeltaTime;
                progressBar.fillAmount = Mathf.Lerp(0.9f, 2f, timer);
                if(progressBar.fillAmount >= 1f)
                {
                    yield return new WaitForSeconds(2.0f);
                    op.allowSceneActivation = true;
                    yield break;
                }
            }
        }
    }
}
