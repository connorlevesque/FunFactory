using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Sensor : Wire {

   public Vector2 direction;

   public override void Start() {
      base.Start();
   }

   public bool Activated() {
      return Crates.ElementAt(xy+direction);
   }
}