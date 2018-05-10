using UnityEngine;
using System;
using System.Collections.Generic;
 
public class CameraMover : MonoBehaviour {

   public float dragSpeed = 8;
   public float mapBuffer = 0;
   public bool scrollVert = false;
   public bool scrollHor = true;
   
   private Vector3 dragOrigin;
   private float dragStartTime;
   private float dragTimeThreshold = 0.15f;

   public float leftBound;
   public float rightBound;
   public float upperBound;
   public float lowerBound;
 
   void Start() {
      Camera camera = GetComponent<Camera>();
      float halfCamHeight = camera.orthographicSize;
      float halfCamWidth = camera.orthographicSize * camera.aspect;
      float offset = 0.5f;
      float verticalOffset = 4f;
      leftBound = halfCamWidth - mapBuffer - offset;
      rightBound = Crates.Width() + mapBuffer - offset - halfCamWidth;
      lowerBound = halfCamHeight - mapBuffer - offset - verticalOffset;
      upperBound = Crates.Height() + mapBuffer - offset - halfCamHeight;
      SnapToBoundaries();
   }

   public void RecordDragStart() {
      dragOrigin = Input.mousePosition;
      dragStartTime = Time.time;
   }

   public void Move() {
      Vector3 pos = Camera.main.ScreenToViewportPoint(Input.mousePosition - dragOrigin);
      Vector3 move = new Vector3(pos.x * dragSpeed * -1, pos.y * dragSpeed * -1, 0);
      if (!scrollVert) move.y = 0;
      if (!scrollHor) move.x = 0;

      transform.position += move;
      dragOrigin = Input.mousePosition;
      SnapToBoundaries();
   }

   public void SnapToBoundaries() {
      if (transform.position.x < leftBound) {
         transform.position += new Vector3(leftBound - transform.position.x, 0, 0);
      } else if (transform.position.x > rightBound) {
         transform.position += new Vector3(rightBound - transform.position.x, 0, 0);
      }

      if (transform.position.y < lowerBound) {
         transform.position += new Vector3(0, lowerBound - transform.position.y, 0);
      } else if (transform.position.y > upperBound) {
         transform.position += new Vector3(0, upperBound - transform.position.y, 0);
      }
   }

   private RaycastHit2D[] GameObjectsUnderTap() {
      return Physics2D.RaycastAll(MouseWorldPosition(), Vector2.zero);
   } 

   private Vector2 MouseGridPosition() {
      return RoundVector(MouseWorldPosition());
   }

   private Vector2 MouseWorldPosition() {
      Vector3 position3D = Camera.main.ScreenToWorldPoint(Input.mousePosition);
      return new Vector2(position3D.x, position3D.y);
   }

   private Vector2 RoundVector(Vector2 v) {
      return new Vector2((float)Math.Round(v.x), (float)Math.Round(v.y));
   }
}
