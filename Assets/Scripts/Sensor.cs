using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Sensor : Wire {

   public Vector2 direction;

   public override void Start() {
      base.Start();
   }

   public override void Rotate(bool clockwise) {
      direction = RotateVector(direction, clockwise);
      Vector3 degrees = new Vector3(0,0,0);
      degrees.z = clockwise ? -90 : 90;
      transform.Rotate(degrees, Space.World);
      UI.Machines.sensorPrefab.transform.Rotate(degrees, Space.World);
   }

   public bool Activated() {
      return Crates.ElementAt(xy+direction);
   }
}