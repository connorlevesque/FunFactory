using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Generator : Machine {

   public GameObject cratePrefab;
   public Vector2 direction;

	public override void Start() {
      base.Start();
	}

   public override void OnStepStart() {
      MakeCrate();
   }

   public Crate MakeCrate() {
      GameObject crateGO = Instantiate(cratePrefab, xy, Quaternion.identity);
      Crate crate = crateGO.GetComponent<Crate>();
      crate.xy = xy;
      crate.group.netForce += direction;
      return crate;
   }

   public override void OnStepEnd() {
      Crate crate = Crates.At(x,y);
      bool occupied = crate != null;
      if (occupied) Destroy(crate.gameObject);
   }
}
