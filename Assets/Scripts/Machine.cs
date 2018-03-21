using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Machine : GridThing {

	public override void Start () {
      base.Start();
		Machines.Add(this);
	}
	
	void Update () {
		
	}
}
