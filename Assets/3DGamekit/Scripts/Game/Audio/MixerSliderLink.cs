using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Audio;

namespace Gamekit3D
{
    [RequireComponent(typeof(Slider))]
    public class MixerSliderLink : MonoBehaviour
    {
        public AudioMixer mixer;
        public string mixerParameter;

        public float maxAttenuation = 0.0f;
        public float minAttenuation = -80.0f;

        protected Slider m_Slider;


        void Awake ()
        {
            m_Slider = GetComponent<Slider>();

            float value;
            mixer.GetFloat(mixerParameter, out value);

            if (mixerParameter.Equals("MasterVolume"))
            {
                DataControl.load_master_vol();
                mixer.SetFloat(mixerParameter, DataControl.master_vol);
                DataControl.load_master_slider();
                m_Slider.value = DataControl.master_slider;
            }
            else if (mixerParameter.Equals("MusicVolume"))
            {
                DataControl.load_music_vol();
                mixer.SetFloat(mixerParameter, DataControl.music_vol);
                DataControl.load_music_slider();
                m_Slider.value = DataControl.music_slider;
            }
            else
            {
                DataControl.load_voice_vol();
                mixer.SetFloat(mixerParameter, DataControl.voice_vol);
                DataControl.load_voice_slider();
                m_Slider.value = DataControl.voice_slider;
            }

            m_Slider.onValueChanged.AddListener(SliderValueChange);
        }


        void SliderValueChange(float value)
        {
            mixer.SetFloat(mixerParameter, minAttenuation + value * (maxAttenuation - minAttenuation));
            if (mixerParameter.Equals("MasterVolume"))
            {
                DataControl.master_vol = minAttenuation + value * (maxAttenuation - minAttenuation);
                DataControl.save_master_vol();
                DataControl.master_slider = m_Slider.value;
                DataControl.save_master_slider();
            }
            else if(mixerParameter.Equals("MusicVolume"))
            {
                DataControl.music_vol = minAttenuation + value * (maxAttenuation - minAttenuation);
                DataControl.save_music_vol();
                DataControl.music_slider = m_Slider.value;
                DataControl.save_music_slider();
            }
            else
            {
                DataControl.voice_vol = minAttenuation + value * (maxAttenuation - minAttenuation);
                DataControl.save_voice_vol();
                DataControl.voice_slider = m_Slider.value;
                DataControl.save_voice_slider();
            }
        }
    }
}