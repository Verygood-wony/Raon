using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneChange : MonoBehaviour{

    public void MainMenuScene()
    {
        //SceneManager.LoadScene("MainMenuScene");
        LoadingSceneController.LoadScene("MainMenuScene");
    }

    public void GamePreviewScene()
    {
        //SceneManager.LoadScene("GamePreview");
        LoadingSceneController.LoadScene("GamePreview");
    }

    public void StartScene()
    {
        //SceneManager.LoadScene("1Stage");
        LoadingSceneController.LoadScene("1Stage");
    }

    public void Stage2()
    {
        //SceneManager.LoadScene("2Stage");
        LoadingSceneController.LoadScene("2Stage");
    }

    public void Stage3()
    {
        //SceneManager.LoadScene("3Stage");
        LoadingSceneController.LoadScene("3Stage");
    }

    public void Stage4()
    {
        //SceneManager.LoadScene("4Stage");
        LoadingSceneController.LoadScene("4Stage");
    }

    public void Stage5()
    {
        //SceneManager.LoadScene("5Stage");
        LoadingSceneController.LoadScene("5Stage");
    }

    public void Stage6()
    {
        //SceneManager.LoadScene("6Stage");
        LoadingSceneController.LoadScene("6Stage");
    }

    public void Stage7()
    {
        //SceneManager.LoadScene("7Stage");
        LoadingSceneController.LoadScene("7Stage");
    }

    public void EndingCredit()
    {
        //SceneManager.LoadScene("7Stage");
        LoadingSceneController.LoadScene("EndingCredit");
    }
}