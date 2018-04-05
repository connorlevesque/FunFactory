using UnityEngine;
using System;
using System.Collections;

public class Crate : GridThing {

   public override void Start() {
      base.Start();
      //Debug.LogFormat("Crate created at {0}", xy);
      //Crates.Add(this);
   }

   public bool TryMove(Vector2 direction) {
      Vector2 target = xy + direction;
      Debug.LogFormat("TryMove from {0} to {1}", xy, target);
      if (!Crates.InBounds((int)target.x, (int)target.y)) {
         Crates.Remove(x,y);
         Destroy(this.gameObject);
         return true;
      }

      Machine targetMachine = Machines.At((int)target.x, (int)target.y);
      bool blocked_by_obstacle = targetMachine && targetMachine.isObstacle;
      if (blocked_by_obstacle) return false;

      Crate targetCrate = Crates.At((int)target.x, (int)target.y);
      if (targetCrate) targetCrate.TryMove(direction);

      bool targetEmpty = !Crates.ElementAt((int)target.x, (int)target.y);
      if (targetEmpty) {
         Move(direction);
         return true;
      } else {
         return false;
      }
   }

   public void Move(Vector2 direction) {
      Crates.Remove(x,y);
      Action whenFinished = () => {
         xy += direction;
         transform.position = xy;
         Debug.LogFormat("  transform is {0}", transform.position);
         Crates.Add(this);
      };
      StartCoroutine(AnimateMotion(direction, whenFinished));
   }

   private IEnumerator AnimateMotion(Vector2 direction, Action whenFinished)
   {
      Vector2 startPosition = xy;
      int frames = 10;
      for (int i = 0; i < frames; i++) {
         transform.position += (Vector3)(direction / frames);
         yield return new WaitForSeconds(.05f / frames);
      }
      whenFinished();
   }
}