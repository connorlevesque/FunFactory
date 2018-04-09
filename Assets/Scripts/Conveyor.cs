using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Conveyor : Machine {

   public Vector2 direction;

   public override void Start() {
      base.Start();
      isObstacle = false;
   }

   public override void OnStepStart() {
      Crate crate = Crates.At(x,y);
      if (crate) crate.group.netForce += direction;
   }
}
