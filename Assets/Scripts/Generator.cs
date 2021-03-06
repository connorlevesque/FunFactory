﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Generator : Machine {

   public GameObject cratePrefab;
   public Vector2 direction;
   public int stepsPerCrate = 2;
   private int stepsSinceCrate;

	public override void Start() {
      base.Start();
      stepsSinceCrate = stepsPerCrate;
	}

   public override void OnStepStart() {
      DestroyUnmovedCrate();
      if (stepsSinceCrate >= stepsPerCrate) {
         MakeCrate();
         stepsSinceCrate = 0;
      } else {
         stepsSinceCrate++;
      }
   }

   public Crate MakeCrate() {
      GameObject crateGO = Instantiate(cratePrefab, xy, Quaternion.identity);
      Crate crate = crateGO.GetComponent<Crate>();
      crate.xy = crate.RoundedPosition;
      crate.group = new CrateGroup();
      crate.group.crates = new List<Crate>();
      crate.group.crates.Add(crate);
      //Debug.LogFormat("group count = {0}", crate.group.crates.Count);
      crate.group.netForce += direction;
      Crates.Add(crate);
      return crate;
   }

   public void DestroyUnmovedCrate() {
      Crate crate = Crates.At(xy);
      bool occupied = crate != null;
      if (occupied) {
         Crates.Remove(xy);
         Destroy(crate.gameObject);
      }
   }
}
