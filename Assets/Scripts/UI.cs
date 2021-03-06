using System;
using UnityEngine;

public class UI : MonoBehaviour {

   public static RunUI RunControls {get{ return instance.runControls; }}
   public static MachineUI Machines {get{ return instance.machines; }}
   public static SelectUI Select {get{ return instance.select; }}
   private static UI instance;
   private RunUI runControls;
   private MachineUI machines;
   private SelectUI select;

   void Awake() {
      instance = this;
      GameObject toolBoxPanel = gameObject.transform.GetChild(0).gameObject;
      toolBoxPanel.SetActive(true);
      runControls = gameObject.transform.GetChild(1).GetComponent<RunUI>();
      machines = gameObject.transform.GetChild(2).GetComponent<MachineUI>();
      select = gameObject.transform.GetChild(3).GetComponent<SelectUI>();
   }
}
