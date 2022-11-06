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
        "������ �̾߱� : ������ �л��� ���߷��� ����ϴٰ� �մϴ�.",
        "������ �̾߱� : ������ �л��� VR��⿡ ���������� �����ϴ�.",
        "������ �̾߱� : ��� ������ �л��� �ڵ��� �����Ѵٰ� �մϴ�.",
        "������ �̾߱� : ��� ������ �л��� �ڵ��� �ȴٰ� �մϴ�.",
        "������ �̾߱� : �̷� ���ӵ� �αⰡ �������?",
        "������ �̾߱� : �����ڵ��� ���� ������ ��ȸ�� ���ҽ��ϴ�.",
        "������ �̾߱� : ���Ӱ��߿��� ����� �κ��� �����ϴ�.",
        "������ �̾߱� : ���۴� ������ �� ���������?",
        "������ �̾߱� : ���� �� ����ó���� ���� ��������ϴ�.",
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
