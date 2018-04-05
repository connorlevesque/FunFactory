using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Generator : Machine {

   public GameObject cratePrefab;
   public Vector2 direction;

	public override void Start() {
      base.Start();
	}
	
	public void MakeCrate() {
      Vector3 target = transform.position + (Vector3)direction;
      Crate targetCrate = Crates.At((int)target.x, (int)target.y);
      if (targetCrate) {
         bool success = targetCrate.TryMove(direction);
         Debug.LogFormat(" success? = {0}", success);
      }
      bool targetEmpty = !Crates.ElementAt((int)target.x, (int)target.y);
      if (targetEmpty) {
	      GameObject crateGO = Instantiate(cratePrefab, xy, Quaternion.identity);
         Crate crate = crateGO.GetComponent<Crate>();
         crate.xy = xy;
         crate.Move(direction);
      }
	}
}
