using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Machine : GridThing {

   public bool isObstacle;

	public override void Start () {
      base.Start();
      isObstacle = true;
		Machines.Add(this);
	}

   public virtual void OnStepStart() {}
}
