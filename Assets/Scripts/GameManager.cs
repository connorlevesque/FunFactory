﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour {

   private static GameManager instance;
   private StairMaster stairMaster;
   public static StairMaster StairMaster {get{ return instance.stairMaster; }}
   private Tap tap;
   public static Tap Tap {get{ return instance.tap; }}
   public int height;
   public int width;

	void Awake () {
      instance = this;
      stairMaster = gameObject.GetComponent<StairMaster>();
		Machines.Init(height, width);
      Crates.Init(height, width);
	}
}
