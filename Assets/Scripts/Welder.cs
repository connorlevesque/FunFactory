using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class Welder : Machine {

   public Vector2 direction;
   public bool hasWelded = false;
   public static List<Vector2> weldSquares;
   private static Vector2[] cardinalDirections = new Vector2[]
      { Vector2.up, Vector2.down, Vector2.left, Vector2.right };

   public override void Start() {
      base.Start();
   }

   public override void OnStepStart() {
      List<CrateGroup> weldGroups = GetWeldGroups();
      Weld(weldGroups);
   }

   private void Weld(List<CrateGroup> weldGroups) {
      if (weldGroups.Count <= 1) return;
      // Debug.Log("**WELD**");
      // foreach (CrateGroup cg in weldGroups) {
      //    foreach (Crate c in cg.crates) {
      //       Debug.Log(c.xy);
      //    }
      // }
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
      if (Welder.weldSquares != null) return weldSquares;
      weldSquares = new List<Vector2>();
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
