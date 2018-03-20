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
      Vector3 position = transform.position + (Vector3)direction;
		Instantiate(cratePrefab, position, Quaternion.identity);
	}
}
