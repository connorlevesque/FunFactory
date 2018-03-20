using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Grid {

   private static Grid instance;
   public int width;
   public int height;
   private Machine[,] machines;
   private Crate[,] crates;


   public static int Width() {
      return instance.width;
   }

   public static int Height() {
      return instance.height;
   }

   public static bool InBounds(int x, int y) {
      return 0 <= x && x < instance.width && 0 <= y && y < instance.height;
   }

   // Machine Methods
   public static bool MachineAt(int x, int y) {
      return InBounds(x,y) && instance.machines[x,y] != null;
   }

   public static void AddMachine(Machine machine) {
      if (MachineAt(machine.x, machine.y)) {
         string message = string.Format("Cannot add machine at position {0}", machine.xy);
         throw new ArgumentException(message);
      }
      instance.machines[machine.x, machine.y] = machine;
   }

   public static void RemoveMachine(int x, int y) {
      instance.machines[x,y] = null;
   }

   public static void ForEachMachine(Action<Machine> action) {
      for (int y = 0; y < Height(); y++) {
         for (int x = 0; x < Width(); x++) {
            if (MachineAt(x,y)) action(instance.machines[x,y]);
         }
      }
   }

   // Crate Methods
   public static bool CrateAt(int x, int y) {
      return InBounds(x,y) && instance.crates[x,y] != null;
   }

   public static void AddCrate(Crate crate) {
      if (CrateAt(crate.x, crate.y)) {
         string message = string.Format("Cannot add crate at position {0}", crate.xy);
         throw new ArgumentException(message);
      }
      instance.crates[crate.x, crate.y] = crate;
   }

   public static void RemoveCrate(int x, int y) {
      instance.crates[x,y] = null;
   }

   public static void ForEachCrate(Action<Crate> action) {
      for (int y = 0; y < Height(); y++) {
         for (int x = 0; x < Width(); x++) {
            if (CrateAt(x,y)) action(instance.crates[x,y]);
         }
      }
   }

	public static void Init(int h, int w) {
		instance = new Grid(h,w);
	}

   private Grid(int h, int w) {
      height = h;
      width = w;
      machines = new Machine[width,height];
      crates = new Crate[width,height];
   }
}
