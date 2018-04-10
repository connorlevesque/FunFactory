using UnityEngine;
using System;
using System.Collections.Generic;

public class WireGroup {
  
   public List<Wire> wires;

   public List<Sensor> Sensors() {
      List<Sensor> sensors = new List<Sensor>();
      foreach (Wire wire in wires) {
         if (wire is Sensor) sensors.Add((Sensor)wire);
      }
      return sensors;
   }

   public void Merge(WireGroup other) {
      wires.AddRange(other.wires);
      foreach (Wire wire in wires) {
         wire.group = this;
      }
   }

   public WireGroup() {
      wires = new List<Wire>();
   }
}