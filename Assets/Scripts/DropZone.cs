using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DropZone : Machine {
	public GameObject paintPrefab;
	// public bool painted0;
	// public bool painted1;
	// public bool painted2;
	// public bool painted3;
	public bool[] paintEncoding = new bool[4];
	public DropZoneGroup group;
	private static Vector2[] cardinalDirections = new Vector2[]
      { Vector2.up, Vector2.down, Vector2.left, Vector2.right };


	// Use this for initialization
	public override void Start () {
		base.Start();
		isObstacle = false;
		group = new DropZoneGroup();
		group.zones.Add(this);
		for (int i = 0; i < 4; i++) {
			if (paintEncoding[i]) PaintZone(i);
		}
		Connect();
	}

	private void PaintZone(int side) {
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
   		// Debug.LogFormat("cratePaint: [{0}, {1}, {2}, {3}]", painted[0], painted[1], painted[2], painted[3]);
   		// Debug.LogFormat("xy: {0}, ang: {1}", pos, ang);
   		paintGO.transform.Rotate(new Vector3(0, 0, ang));
   		paintGO.transform.localPosition = pos * 0.25F;
   	}

	public override void OnStepStart(){
		group.Buzz();
	}

	public bool CheckPaint(Crate crate) {
		bool[] cratePaintEncoding = crate.WorldPainted();
		for (int i = 0; i < 4; i++) {
			if (paintEncoding[i] != cratePaintEncoding[i]) return false;
		}
		return true;
	}

	private void Connect() {
      foreach (Vector2 cardinal in cardinalDirections) {
         bool offGrid = !Machines.InBounds(xy+cardinal);
         if (offGrid) continue;
         Machine machine = Machines.At(xy+cardinal);
         if (machine is DropZone) {
            DropZone other = (DropZone)machine;
            group.Merge(other.group);
         }
      }
   }

}