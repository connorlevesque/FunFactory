using UnityEngine;
using System;

public class Cube : MonoBehaviour {

   public Vector2 xy;
      public int x {get{return (int)xy.x;}}
      public int y {get{return (int)xy.y;}}   
   public Vector2 RoundedTransformPosition { 
      get {
         float roundedX = (float) Math.Round(transform.position.x);
         float roundedY = (float) Math.Round(transform.position.y);
         Vector2 roundedPosition = new Vector2(roundedX, roundedY);
         return roundedPosition;
      }
   }

   void Start() {
      Debug.LogFormat("Sports forever {0}", x);
   }
}