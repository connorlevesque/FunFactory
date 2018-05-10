using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Conveyor : Machine {

   public Vector2 direction;
   public static Vector2 placingDirection = new Vector3(0,1,0);
   public static Vector3 placingRotation = new Vector3(0,0,0);

   public override void Start() {
      base.Start();
      direction = placingDirection;
      transform.eulerAngles = placingRotation;
      isObstacle = false;
   }

   public override void Rotate(bool clockwise) {
      direction = RotateVector(direction, clockwise);
      Vector3 degrees = new Vector3(0,0,0);
      degrees.z = clockwise ? -90 : 90;
      transform.Rotate(degrees, Space.World);
      placingDirection = direction;
      placingRotation = transform.eulerAngles;
   }

   public override void OnStepStart() {
      Crate crate = Crates.At(xy);
      if (crate) crate.group.netForce += direction;
   }
}
