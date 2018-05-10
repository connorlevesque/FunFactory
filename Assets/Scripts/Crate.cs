using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;

public class Crate : GridThing {
	public GameObject paintPrefab;
	public GameObject dotPrefab;
	private bool dot = false;
   	public CrateGroup group;
   	public bool hasMoved = false;
   	private int[] painted = new int[] {0, 0, 0, 0};

   	public override void Start() {
      // BEWARE: unpredictable execution with respect to animations !!!
   	}
   	public bool[] WorldPainted(){
   		bool[] l = new bool[] {false, false, false, false};
   		for (int i = 0; i<4; i++) {
   			l[i] = IsPaintedWorldSide(i);
   		}
   		// Debug.LogFormat("worldPaint: [{0}, {1}, {2}, {3}]", l[0], l[1], l[2], l[3]);

   		return l;
   	}
   	public void Paint(Vector2 side) {
   		// crateRotationInt: 0->0, 1->90, 2->180, 3->270 => rotation of crate in world
   		// paintSide => accounting for rotation of crate to get paint to show up on right side
     	int crateRotation = (int)Math.Round(this.transform.eulerAngles.z);
     	int crateRotationInt = crateRotation/90;
     	int paintSide = nfmod(GetSideIntFromVector(side) - crateRotationInt, 4);
   		// Debug.LogFormat("crate: {0}, side: {1}, paintSide: {2}, modded: {3}", crateRotationInt, GetSideIntFromVector(side), paintSide, nfmod(paintSide, 4));
   		if (painted[paintSide] == 0) PaintCrateOnCrateSide(paintSide);
   		// WorldPainted();
   	}

    int nfmod(int x,int y) {
 		float a = (float) x;
 		float b = (float) y;
   		return (int)(a - b * Math.Floor(a / b));
	}

   	private int GetSideIntFromVector(Vector2 sideVect) {
		int side = 0;
		if (sideVect==Vector2.right){
   			side = 0;

   		}
   		else if (sideVect == Vector2.up) {
   			side = 1;
   		}
   		else if (sideVect == Vector2.left) {
   			side = 2;
   		}
   		else if (sideVect == Vector2.down) {
   			side = 3;
   		}
   		return side;
   	}

   	private void PaintCrateOnCrateSide(int side) {
   		GameObject paintGO = Instantiate(paintPrefab, this.transform, false);
		paintGO.transform.parent = this.transform;
     	Vector3 pos = Vector3.zero;
     	int ang = 0;
   		switch(side){
   			case 0:
   				pos.x = 1;
   				break;
   				
   			case 1:
   				pos.y = 1;
   				ang = 90;
   				break;
   			
   			case 2:
   				pos.x = -1;
   				ang = 180;
   				break;
   			
   			default:
   				pos.y = -1;
   				ang = 270;
   				break;
   		}
   		this.painted[side] = 1;
   		// Debug.LogFormat("cratePaint: [{0}, {1}, {2}, {3}]", painted[0], painted[1], painted[2], painted[3]);
   		// Debug.LogFormat("xy: {0}, ang: {1}", pos, ang);
   		paintGO.transform.Rotate(new Vector3(0, 0, ang));
   		paintGO.transform.localPosition = pos * 0.25F;
   	}

   	public bool IsPaintedWorldSide(int side) {

   		int crateRotation = (int)Math.Round(this.transform.eulerAngles.z);
     	int crateRotationInt = crateRotation/90;
     	int paintSide = nfmod(side - crateRotationInt, 4);
   		return this.painted[paintSide] == 1;

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

   	public bool CanRotate(Vector3 spin) {
   		// List<Vector2> toCheck = Rotator.GetSquaresToCheck(this.xy, spin);
   		// foreach (Vector2 p in toCheck) {
   		// 	// Debug.Log(p);
   		// }
   		// ------testing:
   		// spin = new Vector3 (10, 10, 1);
   		// Vector2 pos = new Vector3 (10, 20);
   		// Debug.Log("GROUP:::::::");
   		// foreach (Crate crate in this.group.crates) {
   		// 	Debug.Log(crate.xy);
   		// }
   		List<Vector2> toCheck = Rotator.GetSquaresToCheck(this.xy, spin);
   		if (dot){
   			foreach(Vector2 v in toCheck) {
   				GameObject dotGO = Instantiate(dotPrefab);
				dotGO.transform.position = v;
   			}
   		}
   		Debug.LogFormat("Crate: Can Rotate {0}", this.xy);
   		foreach (Vector2 target in toCheck) {
   			// Debug.LogFormat("Checking {0}",target);
   			Machine targetMachine = Machines.At(target);
   			bool blockedByObstacle = targetMachine && targetMachine.isObstacle;
   			if (blockedByObstacle) {
   				Debug.Log("blockedByObstacle");
   				return false;
   			}

   			bool blockedByPusherArm = CheckPusherArms(target);
   			if (blockedByPusherArm) {
   				Debug.Log("blockedByPusherArm");
   				return false;
   			}

   			Crate targetCrate = Crates.At(target);
   			if (targetCrate) {
				  if (targetCrate && !group.crates.Contains(targetCrate)) {
				  	Debug.Log("blockedByOtherCrateGroup");
				  	return false;
				  }
   			}
   		}
   		return true;
   	}

   	public void Rotate(Vector3 spin) {
   		if (hasMoved) return;
   		hasMoved = true;
   		Vector2 target = Rotator.RotateVector(this.xy, spin);
   		// Crates.Remove(xy);
   		Vector2 direction = target - xy;
   		xy = target;
   		Crates.Add(this);
   		// try {Crates.Add(this);}
   		// catch (ArgumentException) {
   			// Debug.Log("gridofCrates doesn't register this move correctly");
   		// }
   		StartCoroutine(AnimateRotation(target, spin));

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
   		// Debug.LogFormat("Confirm: moving {0} in dir {1}", this.xy, direction);
      if (hasMoved || direction == Vector2.zero) return;
      hasMoved = true;
      Vector2 target = xy + direction;
      bool offGrid = !Crates.InBounds(target);
      if (offGrid) {
         FallOffGrid(target, direction);
         return;
      }

      Crate targetCrate = Crates.At(target);
      if (targetCrate && targetCrate != this) targetCrate.group.Move(direction);

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
      float animationTime = GameManager.StairMaster.stepSize - 0.02f;
      for (int i = 0; i < frames; i++) {
         transform.position += (Vector3)(direction / frames);
         yield return new WaitForSeconds(animationTime / frames);
      }
      transform.position = destination;
      if (destroyAfter) Destroy(this.gameObject);
   }

	private IEnumerator AnimateRotation(Vector2 destination, Vector3 spin, bool destroyAfter=false) {
		int frames = 10;
		float animationTime = GameManager.StairMaster.stepSize - 0.02f;
		float angle = (float)((spin[2]==1) ? 90: -90)/frames;
		for (int i = 0; i < frames; i++) {
			Vector3 pp = new Vector3 (spin[0], spin[1], 0);
			transform.RotateAround(pp, Vector3.forward, angle);
			yield return new WaitForSeconds(animationTime / frames);
		}
		transform.position = destination;
		if (destroyAfter) Destroy(this.gameObject);
	}




   public void OnStepStart() {
      hasMoved = false;
   }
}
