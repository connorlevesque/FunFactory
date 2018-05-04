using UnityEngine;
using System;
using System.Collections.Generic;

public class DropZoneGroup {
  
   public List<DropZone> zones;

   public void Merge(DropZoneGroup other) {
      zones.AddRange(other.zones);
      foreach (DropZone zone in zones) {
         zone.group = this;
      }
   }

   public DropZoneGroup() {
      zones = new List<DropZone>();
   }

   public void Buzz(){
      CrateGroup g = null;
      foreach(DropZone zone in zones) {
         Crate crate = Crates.At(zone.xy);
         if (crate == null) return;
         if (!zone.CheckPaint(crate)) return;
         else if (g == null) g = crate.group;
         else if (crate.group != g) return;
      }
      Debug.Log("________accept_________");

   }

}