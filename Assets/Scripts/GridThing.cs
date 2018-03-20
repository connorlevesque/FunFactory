using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GridThing : MonoBehaviour {

   public Vector2 xy;
      public int x {get{return (int)xy.x;}}
      public int y {get{return (int)xy.y;}} 
   public Vector2 RoundedPosition { 
      get {
         float roundedX = (float) Math.Round(transform.position.x);
         float roundedY = (float) Math.Round(transform.position.y);
         Vector2 roundedPosition = new Vector2(roundedX, roundedY);
         return roundedPosition;
      }
   }

	public virtual void Start() {
      xy = RoundedPosition;
	}
	
	void Update() {
		
	}
}
