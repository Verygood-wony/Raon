using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Audio;

public class MixVolume : MonoBehaviour
{
    public AudioMixer mixer;
    public string mixerParameter;

    // Start is called before the first frame update
    void Start()
    {
        if (mixerParameter.Equals("MasterVolume"))
        {
            DataControl.load_master_vol();
            mixer.SetFloat(mixerParameter, DataControl.master_vol);
        }
        else if (mixerParameter.Equals("MusicVolume"))
        {
            DataControl.load_music_vol();
            mixer.SetFloat(mixerParameter, DataControl.music_vol);
        }
        else
        {
            DataControl.load_voice_vol();
            mixer.SetFloat(mixerParameter, DataControl.voice_vol);
        }
    }
}
