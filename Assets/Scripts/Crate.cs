using UnityEngine;
using System;
using System.Collections;

public class Crate : GridThing {

   public CrateGroup group;
   public bool hasMoved = false;

   public override void Start() {
      // BEWARE: unpredictable execution with respect to animations !!!
   }

   public bool CanMove(Vector2 direction) {
      if (hasMoved) return false;
      Vector2 target = xy + direction;
      bool offGrid = !Crates.InBounds(target);
      if (offGrid) return true;

      Machine targetMachine = Machines.At(target);
      bool blockedByObstacle = targetMachine && targetMachine.isObstacle;
      if (blockedByObstacle) return false;

      bool blockedByPusherArm = CheckPusherArms(target);
      if (blockedByPusherArm) return false;

      Crate targetCrate = Crates.At(target);
      if (!targetCrate) return true;
      if (group.crates.Contains(targetCrate)) return true;
      return targetCrate.group.CanMove(direction);
   }

   private bool CheckPusherArms(Vector2 target) {
      bool blockedByPusherArm = false;
      Action<Machine> checkPusherArm = (machine) => {
         if (machine is Pusher) {
            Pusher pusher = (Pusher)machine;
            Vector2 reachSquare = pusher.xy + pusher.direction;
            if (pusher.extended && reachSquare == target) {
               blockedByPusherArm = true;
            }
         }
      };
      Machines.ForEach(checkPusherArm);
      return blockedByPusherArm;
   }

   public void Move(Vector2 direction) {
      if (hasMoved || direction == Vector2.zero) return;
      hasMoved = true;
      Vector2 target = xy + direction;
      bool offGrid = !Crates.InBounds(target);
      if (offGrid) {
         FallOffGrid(target, direction);
         return;
      }

      Crate targetCrate = Crates.At(target);
      if (targetCrate && targetCrate != this) targetCrate.Move(direction);

      Crates.Remove(xy);
      xy = target;
      Crates.Add(this);
      StartCoroutine(AnimateMove(target, direction));
   }

   private void FallOffGrid(Vector2 destination, Vector2 direction) {
      Crates.Remove(xy);
      hasMoved = true;
      bool destroyAfter = true;
      StartCoroutine(AnimateMove(destination, direction, destroyAfter));
   }

   private IEnumerator AnimateMove(Vector2 destination, Vector2 direction, bool destroyAfter=false) {
      int frames = 10;
      float animationTime = StairMaster.STEP_SIZE - 0.02f;
      for (int i = 0; i < frames; i++) {
         transform.position += (Vector3)(direction / frames);
         yield return new WaitForSeconds(animationTime / frames);
      }
      transform.position = destination;
      if (destroyAfter) Destroy(this.gameObject);
   }

   public void OnStepStart() {
      hasMoved = false;
   }
}
