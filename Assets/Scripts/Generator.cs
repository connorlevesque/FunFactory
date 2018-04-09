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
      DestroyUnmovedCrate();
      MakeCrate();
   }

   public Crate MakeCrate() {
      GameObject crateGO = Instantiate(cratePrefab, xy, Quaternion.identity);
      Crate crate = crateGO.GetComponent<Crate>();
      crate.xy = crate.RoundedPosition;
      crate.group.crates.Add(crate);
      crate.group.netForce += direction;
      Crates.Add(crate);
      return crate;
   }

   public void DestroyUnmovedCrate() {
      Crate crate = Crates.At(xy);
      bool occupied = crate != null;
      if (occupied) {
         Crates.Remove(xy);
         Destroy(crate.gameObject);
      }
   }
}
