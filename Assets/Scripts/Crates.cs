using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;

public class Crates : GridOf<Crate> {

   public Crates(int h, int w) : base(h,w) {}

   public static List<CrateGroup> Groups() {
      List<CrateGroup> groups = new List<CrateGroup>();
      Action<Crate> addGroup = (crate) => {
         bool alreadyAdded = groups.Contains(crate.group);
         Debug.Log("1");
         if (!alreadyAdded) {
            groups.Add(crate.group);
         }
      };
      ForEach(addGroup);
      return groups;
   }

   public static void ForEachGroup(Action<CrateGroup> action) {
      foreach (CrateGroup group in Groups()) {
         action(group);
      }
   }
}