using UnityEngine;
using System;
using System.Collections.Generic;

public class CrateGroup {
  
   public List<Crate> crates;
   public int spin = 0;
   public Vector2 pusherForce = Vector2.zero;
   public Vector2 netForce = Vector2.zero;
   public Vector2 lastDirection = Vector2.zero;

   public void ApplyForces() {
      if (spin != 0) {

      } else if (pusherForce != Vector2.zero) {

      } else if (netForce != Vector2.zero) {
         Vector2 direction = DirectionFromVectorForce(netForce);
         if (direction != Vector2.zero && CanMove(direction)) Move(direction);
      }
   }

   public bool CanMove(Vector2 direction) {
      foreach (Crate crate in crates) {
         if (!crate.CanMove(direction)) return false;
      }
      return true;
   }

   public void Move(Vector2 direction) {
      foreach (Crate crate in crates) {
         Debug.LogFormat("  {0}", crate.xy);
      }

      foreach (Crate crate in crates) {
         crate.Move(direction);
      }
      lastDirection = direction;
   }

   public Vector2 DirectionFromVectorForce(Vector2 force) {
      if (force == Vector2.zero) return Vector2.zero;
      if (Math.Abs(force.x) == Math.Abs(force.y)) force += lastDirection;
      if (Math.Abs(force.x) > Math.Abs(force.y)) {
         return (force.x > 0) ? Vector2.right : Vector2.left;
      } else {
         return (force.y > 0) ? Vector2.up : Vector2.down;
      } 
   }

   public void OnStepStart() {
      spin = 0;
      pusherForce = Vector2.zero;
      netForce = Vector2.zero;
   }

   public CrateGroup() {
      crates = new List<Crate>();
   }
}