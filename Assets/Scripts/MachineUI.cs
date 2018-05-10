using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Events;

public class MachineUI : MonoBehaviour {

   private GameObject[] buttons;
   public GameObject conveyorBtn;
   public GameObject spinnerBtn;
   public GameObject welderBtn;
   public GameObject pusherBtn;
   public GameObject sensorBtn;
   public GameObject wireBtn;

   public GameObject conveyorPrefab;
   public GameObject spinnerPrefab;
   public GameObject welderPrefab;
   public GameObject pusherPrefab;
   public GameObject sensorPrefab;
   public GameObject wirePrefab;

   private bool[] machinePermissions;
   public bool enableConveyors;
   public bool enableSpinners;
   public bool enableWelders;
   public bool enablePushers;
   public bool enableSensors;
   public bool enableWires;

   public GameObject toPlace;

   void Start() {
      buttons = new GameObject[] {conveyorBtn, spinnerBtn, welderBtn, 
                                    pusherBtn, sensorBtn, wireBtn};
      machinePermissions =   new bool[] {enableConveyors, enableSpinners, enableWelders, 
                                    enablePushers, enableSensors, enableWires};
      SetupButton(conveyorBtn, conveyorPrefab);
      SetupButton( spinnerBtn, spinnerPrefab );
      SetupButton(  welderBtn, welderPrefab  );
      SetupButton(  pusherBtn, pusherPrefab  );
      SetupButton(  sensorBtn, sensorPrefab  );
      SetupButton(    wireBtn, wirePrefab    );
      Show();
      GrayOutButtons();
   }

   public void SetupButton(GameObject btnGob, GameObject machineGob) {
      Button btn = btnGob.GetComponent<Button>();
      btn.onClick.AddListener(() => {
         GrayOutButtons();
         if (toPlace != machineGob) {
            toPlace = machineGob;
            GameObject grayOut = btnGob.transform.GetChild(0).gameObject;
            grayOut.SetActive(false);
         } else {
            toPlace = null;
         }
      });
      Image btnImage = btnGob.GetComponent<Image>();
      SpriteRenderer machineRenderer = machineGob.GetComponent<SpriteRenderer>();
      btnImage.sprite = machineRenderer.sprite;
   }

   public void GrayOutButtons() {
      foreach (GameObject btnGob in buttons) {
         GameObject grayOut = btnGob.transform.GetChild(0).gameObject;
         grayOut.SetActive(true);
      }
   }

   public void Show() {
      for (int i = 0; i < buttons.Length; i++) {
         buttons[i].SetActive(machinePermissions[i]);
      }
   }

   public void Hide() {
      foreach (GameObject btnGob in buttons) btnGob.SetActive(false);
   }
}
