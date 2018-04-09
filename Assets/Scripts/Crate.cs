using UnityEngine;
using System;
using System.Collections;

public class Crate : GridThing {

   public CrateGroup group = new CrateGroup();
   public bool hasMoved = false;

   public override void Start() {
      base.Start();
      //Debug.LogFormat("Crate created at {0}", xy);
      //Crates.Add(this);
   }

   public bool CanMove(Vector2 direction) {
      if (hasMoved) return false;
      Vector2 target = xy + direction;
      bool offGrid = Crates.InBounds(target);
      if (offGrid) return true;

      Machine targetMachine = Machines.At(target);
      bool blocked_by_obstacle = targetMachine && targetMachine.isObstacle;
      if (blocked_by_obstacle) return false;

      Crate targetCrate = Crates.At(target);
      if (!targetCrate) return true;
      if (group.crates.Contains(targetCrate)) return true;
      return targetCrate.group.CanMove(direction);
   }

   public void Move(Vector2 direction) {
      Debug.LogFormat("Moving crate at {0} in direction {1}", xy, direction);
      Vector2 target = xy + direction;
      bool offGrid = !Crates.InBounds(target);
      if (offGrid) Destroy(this.gameObject);

      Crate targetCrate = Crates.At(target);
      if (targetCrate) targetCrate.Move(direction);

      Crates.Remove(xy);
      xy = target;
      Crates.Add(this);
      hasMoved = true;

      //StartCoroutine(AnimateMove(direction));
      transform.position = xy;
   }

   private IEnumerator AnimateMove(Vector2 direction) {
      int frames = 10;
      for (int i = 0; i < frames; i++) {
         transform.position += (Vector3)(direction / frames);
         yield return new WaitForSeconds(.05f / frames);
      }
      //transform.position = xy;
   }

   public void OnStepEnd() {
      hasMoved = false;
   }
}