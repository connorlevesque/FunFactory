using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Pusher : Machine {

   public Vector2 direction;
   public bool extended = false;
   private List<Sensor> sensors;

   public Sprite spriteExtended;
   public Sprite spriteRetracted;
   private new SpriteRenderer renderer;

   private static Vector2[] cardinalDirections = new Vector2[]
      { Vector2.up, Vector2.down, Vector2.left, Vector2.right };

   public override void Start() {
      base.Start();
      renderer = gameObject.GetComponent<SpriteRenderer>();
   }

   public override void OnStepStart() {
      if (AnySensorActivated()) {
         Crate crate = Crates.At(xy+direction);
         if (crate) crate.group.pusherForce += direction;
         Extend();
      } else {
         Retract();
      }
   }

   public void Extend() {
      extended = true;
      renderer.sprite = spriteExtended;
   }

   public void Retract() {
      extended = false;
      renderer.sprite = spriteRetracted;
   }

   public bool AnySensorActivated() {
      List<Sensor> sensors = GetSensors();
      foreach (Sensor sensor in sensors) {
         if (sensor.Activated()) return true;
      }
      return false;
   }

   public List<Sensor> GetSensors() {
      List<Sensor> sensors = new List<Sensor>();
      foreach (Vector2 cardinal in cardinalDirections) {
         if (cardinal == direction) continue;
         Machine machine = Machines.At(xy+cardinal);
         if (machine && machine is Wire) {
            Wire wire = (Wire)machine;
            sensors.AddRange(wire.group.Sensors());
         }
      }
      return sensors;
   }
}