using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Events;

public class MachineUI : MonoBehaviour {

   public GameObject conveyorBtn;
   public GameObject spinnerBtn;
   public GameObject welderBtn;
   public GameObject pusherBtn;
   public GameObject sensorBtn;
   public GameObject wireBtn;

   void Start() {
      SetupMachineButton(conveyorBtn, ()=>MachineToPlace());
      //SetupButton(pauseBtn, ()=>Pause());
      //SetupButton(resetBtn, ()=>Reset());
   }

   public void SetupMachineButton(GameObject btnGO, Machine machine) {
      Button btn = btnGO.GetComponent<Button>();
      //UnityAction a = ()=>MachineToPlace(machine);
      btn.onClick.AddListener(()=>MachineToPlace(machine));
   }

   private void MachineToPlace(Machine machine) {}
}
