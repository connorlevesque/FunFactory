using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Events;

public class LevelSelectScene : MonoBehaviour {

   public GameObject[] lvlButtons;
   private int levelIndexOffset = 3;

   void Start() {
      for (int i = 0; i < lvlButtons.Length; i++) {
         GameObject lvlBtn = lvlButtons[i];
         int levelIndex = i+levelIndexOffset;
         SetupButton(lvlBtn, ()=>LevelManager.LoadLevel(levelIndex));
      }
   }

   public void SetupButton(GameObject btnGO, UnityAction method) {
      Button btn = btnGO.GetComponent<Button>();
      btn.onClick.AddListener(method);
   }
}
