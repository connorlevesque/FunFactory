using System;
using UnityEngine;
using UnityEngine.EventSystems;

public class Tap : MonoBehaviour {

   public bool isStarted = false;
   public bool isHeld = false;

   void Update() {
      isStarted = Input.GetMouseButtonDown(0);
      isHeld = Input.GetMouseButton(0);
      bool notRunning = !GameManager.StairMaster.running;
      if (isStarted && notRunning && !IsPointerOverUI()) {
         if (CanPlaceMachine()) {
            PlaceMachine();
         }
         if (CanSelectMachine()) {
            SelectMachine();
         } else {
            UI.Select.Deselect();
         }
      }
      if (isStarted && notRunning && !IsPointerOverTag("SelectUI") && !CanSelectMachine()) {
         UI.Select.Deselect();
      }
   }

   private bool CanPlaceMachine() {
      if (!UI.Machines.toPlace) return false;
      if (UI.Select.selectedMachineGob != null) return false;
      Vector2 position = RoundVector(MouseWorldPosition());
      return !Machines.ElementAt(position);
   }

   private void PlaceMachine() {
      Vector2 position = RoundVector(MouseWorldPosition());
      GameObject prefab = Instantiate(UI.Machines.toPlace, position, Quaternion.identity);
      Machine machine = prefab.GetComponent<Machine>();
      prefab.transform.rotation = UI.Machines.toPlace.transform.rotation;
      machine.wasPlaced = true;
   }

   private bool CanSelectMachine() {
      Vector2 position = RoundVector(MouseWorldPosition());
      return Machines.ElementAt(position);
   }

   private void SelectMachine() {
      Vector2 position = RoundVector(MouseWorldPosition());
      Machine machine = Machines.At(position);
      if (machine.wasPlaced) UI.Select.Select(machine);
   }

   public static bool IsPointerOverUI() {
      return IsPointerOverTag("UI") || IsPointerOverTag("SelectUI");
   }

   public static bool IsPointerOverTag(string tag) {
      if (EventSystem.current.currentSelectedGameObject) {
         GameObject pointerObject = EventSystem.current.currentSelectedGameObject;
         if (pointerObject.transform.parent) {
            GameObject parent = pointerObject.transform.parent.gameObject;
            return parent.CompareTag(tag);
         }
      }
      return false;
   }

   private Vector2 MouseWorldPosition() {
      Vector3 position3D = Camera.main.ScreenToWorldPoint(Input.mousePosition);
      return new Vector2(position3D.x, position3D.y);
   }

   private Vector2 RoundVector(Vector2 v) {
      return new Vector2((float)Math.Round(v.x), (float)Math.Round(v.y));
   }
}
