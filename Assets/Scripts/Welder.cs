using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class Welder : Machine {

   public Vector2 direction;
   public static Vector2 placingDirection = new Vector3(1,0,0);
   public static Vector3 placingRotation = new Vector3(0,0,0);
   public bool hasWelded = false;
   public bool print = true;
   // public static List<Vector2> weldSquares;
   private static Vector2[] cardinalDirections = new Vector2[]
      { Vector2.up, Vector2.down, Vector2.left, Vector2.right };

   public override void Start() {
      base.Start();
      direction = placingDirection;
      transform.eulerAngles = placingRotation;
      isObstacle = true;
   }

   public override void OnStepStart() {
      List<CrateGroup> weldGroups = GetWeldGroups();
      Weld(weldGroups);
   }

   public override void Rotate(bool clockwise) {
      direction = RotateVector(direction, clockwise);
      Vector3 degrees = new Vector3(0,0,0);
      degrees.z = clockwise ? -90 : 90;
      transform.Rotate(degrees, Space.World);
      placingDirection = direction;
      placingRotation = transform.eulerAngles;
   }

   private void Weld(List<CrateGroup> weldGroups) {
      // Debug.Log(weldGroups.Count);
      int cratz = 0;
      if (weldGroups.Count <= 1) return;
      foreach (CrateGroup cg in weldGroups) {
         foreach (Crate c in cg.crates) {
            cratz++;
         }
      }
      
      if (cratz >= 6) Debug.Log("***Welding Big Group***");
      CrateGroup newGroup = weldGroups[0];
      weldGroups.RemoveAt(0);
      foreach (CrateGroup oldGroup in weldGroups) {
         newGroup.Merge(oldGroup);
      }
   }

   private List<CrateGroup> GetWeldGroups() {
      List<CrateGroup> weldGroups = new List<CrateGroup>();
      foreach (Vector2 cardinal in cardinalDirections) {
         Vector2 target = xy + direction;
         Vector2 adjacent = target + cardinal;
         bool weldingThere = GetWeldSquares().Contains(adjacent);
         Crate targetCrate = Crates.At(target);
         Crate adjacentCrate = Crates.At(adjacent);

         if (weldingThere) {
            if (targetCrate && adjacentCrate) {
               bool targetAlreadyAdded = weldGroups.Contains(targetCrate.group);
               if (!targetAlreadyAdded) weldGroups.Add(targetCrate.group);
               bool adjacentAlreadyAdded = weldGroups.Contains(adjacentCrate.group);
               if (!adjacentAlreadyAdded) weldGroups.Add(adjacentCrate.group);
            }
         }
      }
      return weldGroups;
   }

   private static List<Vector2> GetWeldSquares() {
      // if (Welder.weldSquares != null) return weldSquares;
      List<Vector2> weldSquares = new List<Vector2>();
      Action<Machine> addWeldSquare = (machine) => {
         if (machine is Welder) {
            Welder welder = (Welder)machine;
            weldSquares.Add(welder.xy + welder.direction);
         }
      };
      Machines.ForEach(addWeldSquare);
      return weldSquares;
   }
}
