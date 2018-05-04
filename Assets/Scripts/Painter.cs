using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class Painter : Machine {

   public Vector2 direction;
   // public bool hasPainted = false;
   
   private static Vector2[] cardinalDirections = new Vector2[]
      { Vector2.up, Vector2.down, Vector2.left, Vector2.right };

   public override void Start() {
      base.Start();
      isObstacle = true;
   }

   public override void OnStepStart() {
      Paint();
   }

   private void Paint() {
      Vector2 paintZone = this.direction + this.xy;
      Crate targetCrate = Crates.At(paintZone);
      if (targetCrate) {
         // Debug.LogFormat("painting at {0}", paintZone);
         targetCrate.Paint(-direction);
      }
   }

}
