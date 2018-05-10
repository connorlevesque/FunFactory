using System;
using UnityEngine;
using UnityEngine.EventSystems;

public class Tap : MonoBehaviour {

   public bool isStarted = false;
   public bool isHeld = false;
   public GameObject cameraGob;
   public CameraMover cameraMover;
   private const float TOOLBOX_TOP = 290;

   void Start() {
      cameraMover = cameraGob.GetComponent<CameraMover>();
   }

   void Update() {
      isStarted = Input.GetMouseButtonDown(0);
      isHeld = Input.GetMouseButton(0);
      HandleDrag();

      bool notRunning = !GameManager.StairMaster.running;
      if (isStarted && notRunning) {
         if (CanPlaceMachine()) PlaceMachine();
         if (CanSelectMachine()) SelectMachine();
      }
      if (isStarted && notRunning && !IsPointerOverTag("SelectUI") && !CanSelectMachine()) {
         UI.Select.Deselect();
      }
   }

   private void HandleDrag() {
      if (isStarted) cameraMover.RecordDragStart();
      if (CanDragCamera()) cameraMover.Move();
   }

   private bool CanDragCamera() {
      return isHeld && !CanPlaceMachine() && !CanSelectMachine();
   }

   private bool CanPlaceMachine() {
      if (IsPointerOverUI() || !UI.Machines.toPlace 
            || UI.Select.selectedMachineGob != null) return false;
      Vector2 position = RoundVector(MouseWorldPosition());
      return !Machines.ElementAt(position);
   }

   private void PlaceMachine() {
      Vector2 position = RoundVector(MouseWorldPosition());
      GameObject prefab = Instantiate(UI.Machines.toPlace, position, Quaternion.identity);
      Machine machine = prefab.GetComponent<Machine>();
      //prefab.transform.rotation = UI.Machines.toPlace.transform.rotation;
      machine.wasPlaced = true;
   }

   private bool CanSelectMachine() {
      if (IsPointerOverUI()) return false;
      Vector2 position = RoundVector(MouseWorldPosition());
      return Machines.ElementAt(position);
   }

   private void SelectMachine() {
      Vector2 position = RoundVector(MouseWorldPosition());
      Machine machine = Machines.At(position);
      if (machine.wasPlaced) {
         UI.Select.Select(machine);
      }
   }

   public static bool IsPointerOverUI() {
      bool overToolbox = Input.mousePosition.y < TOOLBOX_TOP;
      return IsPointerOverTag("UI") || IsPointerOverTag("SelectUI") || overToolbox;
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
