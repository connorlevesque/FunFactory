using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Wire : Machine {

   public WireGroup group;
   private static Vector2[] cardinalDirections = new Vector2[]
      { Vector2.up, Vector2.down, Vector2.left, Vector2.right };

   public override void Start() {
      base.Start();
      group = new WireGroup();
      group.wires.Add(this);
      Connect();
   }

   private void Connect() {
      foreach (Vector2 cardinal in cardinalDirections) {
         bool offGrid = !Machines.InBounds(xy+cardinal);
         if (offGrid) continue;
         Machine machine = Machines.At(xy+cardinal);
         if (machine is Wire) {
            Wire other = (Wire)machine;
            group.Merge(other.group);
         }
      }
   }
}
