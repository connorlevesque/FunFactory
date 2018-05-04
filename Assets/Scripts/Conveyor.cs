using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Conveyor : Machine {

   public Vector2 direction;

   public override void Start() {
      base.Start();
      isObstacle = false;
   }

   public override void Rotate(bool clockwise) {
      direction = RotateVector(direction, clockwise);
      Vector3 degrees = new Vector3(0,0,0);
      degrees.z = clockwise ? -90 : 90;
      transform.Rotate(degrees, Space.World);
      UI.Machines.conveyorPrefab.transform.Rotate(degrees, Space.World);
   }

   public override void OnStepStart() {
      Crate crate = Crates.At(xy);
      if (crate) crate.group.netForce += direction;
   }
}
