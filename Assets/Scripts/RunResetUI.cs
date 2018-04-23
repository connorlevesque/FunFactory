using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Events;

public class RunResetUI : MonoBehaviour {

   public GameObject playBtn;
   //public GameObject pauseBtn;
   //public GameObject resetBtn;

   void Start() {
      SetupButton(playBtn, ()=>Play());
      //SetupButton(pauseBtn, ()=>Pause());
      //SetupButton(resetBtn, ()=>Reset());
   }

   public void SetupButton(GameObject btnGO, UnityAction method) {
      Button btn = btnGO.GetComponent<Button>();
      btn.onClick.AddListener(method);
   }

   private void Play() {
      Debug.Log("Play button pressed");
   }

   private void Pause() {}
   private void Reset() {}
}
