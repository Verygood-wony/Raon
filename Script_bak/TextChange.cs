using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.EventSystems;
using TMPro;

public class TextChange : MonoBehaviour
{
    public TextMeshProUGUI text_mesh;
    public string[] sound = new string[22];
    private string[] script = { "할아버지 재밌는 이야기 해주세요!",
    "그럼, 옛날 이야기좀 해줄까?",
    "좋아요!",
    "그래그래, 이번 이야기의 주인공은 촘퍼란다...",
    "촘퍼는, 신비의 숲에 산다는 생명체라고 알고있어요.",
    "맞단다... 이야기에 앞서 신비의 숲의 비밀을 말해주자면 옛날에 신비의 숲은 인간의 발길을 허락하지 않았단다...",
    "그리고, 신비의 숲에는 수많은 생명체가 어우러져 살고있었지",
    "그중 촘퍼는 인간과 비슷한 지능을 가진 생명체였단다...",
    "촘퍼는 긴 세월을 살면서 자신의 근원을 넘어 세상의 근원, 세상의 진리를 찾고싶어했단다...",
    "그렇게 촘퍼는 자신의 호기심을 채우기 위해 살아가고 있었단다...",
    "그 때, 인간의 발길을 허락하지 않던 신비의 숲이 한명의 인간을 들여보내는 사건이 발생했단다...",
    "이 일은 신비의 숲 생명체들에게도 큰 충격이었단다...",
    "인간이 들어오는 것을 허락하지 않던 숲이 인간을 들여보냈으니 말이다...",
    "그 인간이 바로 위대한 마법사 오즈란다...",
    "촘퍼는 그 때 직감했단다... 자신의 궁금증을 오즈가 풀 수 있을거라는 것을말이다...",
    "촘퍼는 오즈를 찾아가서 자신의 궁금증을 풀려고 노력했었단다...",
    "오즈는 촘퍼에게 세상의 진리를 알려주었지만 그 당시 촘퍼로써는 이해할 수 없었단다...",
    "그 후, 오즈는 숲에서 사라졌단다...",
    "어느날 촘퍼는 오즈의 말에서 진리의 파편을 찾고 그것을 깨달았단다...",
    "그 후, 촘퍼는 숲에서 나와 오즈를 찾는 여행을 시작했고...",
    "그 여행의 결말은 들려오지 않았단다... 아직도 촘퍼는 여행중일 수도 있고, 이미 세상의 진리를 찾았을 수도 있겠지...",
    "나도 촘퍼가 어떤 여행을 했는지 궁금하구나..."};
    public AudioClip[] clip = new AudioClip[22];
    public int num = 0;
    public AudioSource audios;
    public GameObject xr;

    // Start is called before the first frame update
    void Start()
    {
        audios = GetComponent<AudioSource>();
        num = 0;
        text_mesh.text = script[num];
        audios.clip = clip[num];
        audios.Play();
        // 최초 카메라 위치
        xr.transform.position = new Vector3(9.36f, 4.02f, 12.84f);
        // 최초 카메라 각도
        xr.transform.rotation = Quaternion.Euler(0f, 0f, 0f);
    }

    public void change_script()
    {
        EventSystem.current.SetSelectedGameObject(null);
        num += 1;
        if (num < 22)
        {
            string c = null;
            if (num == 0 || num == 2 || num == 4)
            {
                c = "<color=#12EBEB>" + script[num] + "</color>";
            }
            else
            {
                c = "<color=#FFFFFF>" + script[num] + "</color>";
            }
            if (num == 3)
            {
                xr.transform.position = new Vector3(19.6f, 0.8f, -18.2f);
                xr.transform.rotation = Quaternion.Euler(0f, 120f, 0f);
            }else if (num == 10)
            {
                xr.transform.position = new Vector3(2.64f, 6f, -0.5f);
                xr.transform.rotation = Quaternion.Euler(0f, 200f, 0f);
            }
            else if (num == 16)
            {
                xr.transform.position = new Vector3(-23.613f, 11f, -13.34f);
                xr.transform.rotation = Quaternion.Euler(0f, -130f, 0f);
            }
            else if (num == 18)
            {
                xr.transform.position = new Vector3(-54.16f, 12.55f, -21.429f);
                xr.transform.rotation = Quaternion.Euler(0f, -90f, 0f);
            }
            text_mesh.text = c;
            audios.clip = clip[num];
            audios.Play();
        }
        else if (num == 22)
        {
            LoadingSceneController.LoadScene("1Stage");
        }
    }
}
