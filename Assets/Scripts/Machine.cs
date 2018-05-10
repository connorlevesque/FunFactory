using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Machine : GridThing {

   public bool isObstacle = true;
   public bool wasPlaced = false;

	public override void Start () {
      base.Start();
		Machines.Add(this);
	}

   public void Delete() {
      Machines.Remove(xy);
      Destroy(this.gameObject);
   }

   public Vector2 RotateVector(Vector2 v, bool clockwise) {
      Vector2 u = new Vector2(-1*v.y, v.x);
      if (clockwise) {
         u.x *= -1;
         u.y *= -1;
      }
      return u;
   }

   public virtual void OffsetRotation()       {}
   public virtual void Rotate(bool clockwise) {}
   public virtual void OnStepStart()          {}
}
