using UnityEngine;
using System;
using System.Collections.Generic;
using System.Linq;

public class DropZoneGroup {
  
   public List<DropZone> zones;
   public int count = 0;
   public int quota = 5;

   public void Merge(DropZoneGroup other) {
      zones.AddRange(other.zones);
      foreach (DropZone zone in zones) {
         zone.group = this;
      }
      List<DropZone> tmp = zones.Distinct().ToList();
      zones = tmp;
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
         if (g == null) g = crate.group;
         else if (crate.group != g) return;
      }
      if (g.crates.Count != zones.Count){
         Debug.LogFormat("Broke cuz group overflow\n {0} crates, {1} zones", g.crates.Count, zones.Count);
         return;
      }
      count++;
      foreach(Crate crate in g.crates) {
         Crates.Remove(crate.xy);
         GridThing.Destroy(crate.gameObject);
      }
   }
}