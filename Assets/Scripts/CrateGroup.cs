using UnityEngine;
using System;
using System.Collections.Generic;

public class CrateGroup {
  
   public List<Crate> crates = new List<Crate>();
   public int spin = 0;
   public Vector2 pusherForce = Vector2.zero;
   public Vector2 netForce = Vector2.zero;
   public Vector2 lastForce = Vector2.zero;

   public void ApplyForces() {
      if (spin != 0) {

      } else if (pusherForce != Vector2.zero) {

      } else if (netForce != Vector2.zero) {
         Vector2 direction = DirectionFromVectorForce(netForce);
         if (CanMove(direction)) Move(direction);
      }
   }

   public bool CanMove(Vector2 direction) {
      foreach (Crate crate in crates) {
         Debug.LogFormat("CanMove crate at {0} = {1}", crate.xy, crate.CanMove(direction));
         if (!crate.CanMove(direction)) return false;
      }
      return true;
   }

   public void Move(Vector2 direction) {
      foreach (Crate crate in crates) {
         crate.Move(direction);
      }
   }

   public Vector2 DirectionFromVectorForce(Vector2 force) {
      if (force == Vector2.zero) return Vector2.zero;
      if (Math.Abs(force.x) == Math.Abs(force.y)) force += lastForce;
      if (Math.Abs(force.x) > Math.Abs(force.y)) {
         return (force.x > 0) ? Vector2.right : Vector2.left;
      } else {
         return (force.y > 0) ? Vector2.up : Vector2.down;
      } 
   }
}