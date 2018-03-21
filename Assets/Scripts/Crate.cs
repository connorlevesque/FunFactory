using UnityEngine;
using System;

public class Crate : GridThing {

   public override void Start() {
      base.Start();
      Debug.LogFormat("Crate created at {0}", xy);
      Crates.Add(this);
   }
}