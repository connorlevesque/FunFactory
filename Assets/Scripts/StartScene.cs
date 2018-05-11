using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Events;

public class StartScene : MonoBehaviour {

   public GameObject instructionsBtn;
   public GameObject playBtn;
   public GameObject quitBtn;

   void Start() {
      SetupButton(instructionsBtn, ()=>LevelManager.LoadLevel(1));
      SetupButton(playBtn, ()=>LevelManager.LoadLevel(2));
      SetupButton(quitBtn, ()=>LevelManager.Quit());
   }

   public void SetupButton(GameObject btnGO, UnityAction method) {
      Button btn = btnGO.GetComponent<Button>();
      btn.onClick.AddListener(method);
   }
}
