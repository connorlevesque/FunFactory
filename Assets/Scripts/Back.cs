using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Events;

public class Back : MonoBehaviour {

   public GameObject backBtn;

   void Start() {
      SetupButton(backBtn, ()=>LevelManager.LoadLevel(0));
   }

   public void SetupButton(GameObject btnGO, UnityAction method) {
      Button btn = btnGO.GetComponent<Button>();
      btn.onClick.AddListener(method);
   }
}
