using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Events;

public class SelectUI : MonoBehaviour {

   public GameObject[] buttons;
   public GameObject turnLeftBtn;
   public GameObject turnRightBtn;
   public GameObject deleteBtn;

   public GameObject selectedMachineGob;

   void Start() {
      buttons = new GameObject[] { turnLeftBtn, turnRightBtn, deleteBtn };
      SetupButton( turnLeftBtn, ()=>Turn(clockwise:false));
      SetupButton(turnRightBtn, ()=>Turn(clockwise:true));
      SetupButton(   deleteBtn, ()=>Delete());
   }

   public void SetupButton(GameObject btnGO, UnityAction method) {
      Button btn = btnGO.GetComponent<Button>();
      btn.onClick.AddListener(method);
   }

   public void Select(Machine machine) {
      selectedMachineGob = machine.gameObject;
      Vector3 position = Camera.main.WorldToScreenPoint(machine.xy);
      transform.position = position;
      Show();
   }

   public void Deselect() {
      selectedMachineGob = null;
      Hide();
   }

   private void Turn(bool clockwise) {
      if (selectedMachineGob) {
         Machine machine = selectedMachineGob.GetComponent<Machine>();
         machine.Rotate(clockwise);
      }
   }

   private void Delete() {
      if (selectedMachineGob) {
         Machine machine = selectedMachineGob.GetComponent<Machine>();
         machine.Delete();
         Hide();
      }
   }

   public void Show() {
      foreach (GameObject btnGob in buttons) btnGob.SetActive(true);
   }

   public void Hide() {
      foreach (GameObject btnGob in buttons) btnGob.SetActive(false);
   }
}
