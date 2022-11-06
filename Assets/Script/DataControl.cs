using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DataControl : MonoBehaviour
{
    public static int stage = 0;
    public static float master_vol = -60f;
    public static float music_vol = -390.0304f;
    public static float voice_vol = -60f;
    public static float master_slider = 1f;
    public static float music_slider = 0.8823529f;
    public static float voice_slider = 0.8818859f;

    public static void save_data(int num)
    {
        stage = num;
        PlayerPrefs.SetInt("Stage", stage);
        PlayerPrefs.Save();
    }

    public static void load_data()
    {
        stage = PlayerPrefs.GetInt("Stage");
    }

    public static void save_master_vol()
    {
        PlayerPrefs.SetFloat("Master", master_vol);
        PlayerPrefs.Save();
    }

    public static void save_music_vol()
    {
        PlayerPrefs.SetFloat("Music", music_vol);
        PlayerPrefs.Save();
    }

    public static void save_voice_vol()
    {
        PlayerPrefs.SetFloat("Voice", voice_vol);
        PlayerPrefs.Save();
    }

    public static void load_master_vol()
    {
        master_vol = PlayerPrefs.GetFloat("Master");
    }

    public static void load_music_vol()
    {
        music_vol = PlayerPrefs.GetFloat("Music");
    }

    public static void load_voice_vol()
    {
        voice_vol = PlayerPrefs.GetFloat("Voice");
    }

    public static void save_master_slider()
    {
        PlayerPrefs.SetFloat("Master_slider", master_slider);
        PlayerPrefs.Save();
    }

    public static void save_music_slider()
    {
        PlayerPrefs.SetFloat("Music_slider", music_slider);
        PlayerPrefs.Save();
    }

    public static void save_voice_slider()
    {
        PlayerPrefs.SetFloat("Voice_slider", voice_slider);
        PlayerPrefs.Save();
    }

    public static void load_master_slider()
    {
        master_slider = PlayerPrefs.GetFloat("Master_slider", master_slider);
    }

    public static void load_music_slider()
    {
        music_slider = PlayerPrefs.GetFloat("Music_slider", music_slider);
    }

    public static void load_voice_slider()
    {
        voice_slider = PlayerPrefs.GetFloat("Voice_slider", voice_slider);
    }
}
