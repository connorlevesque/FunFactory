using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StairMaster : MonoBehaviour {

   public const int STEP_SIZE = 50;
   private int stepCount = 0;
   private bool running = false;

   private List<Generator> generators = new List<Generator>();

   void Run() {
      generators = GetGenerators();
      running = true;
   }

	void Update () {
      if (!running) Run();
		// call step methods for each machine
      switch (stepCount % STEP_SIZE) {
         case 0:
            Debug.Log("START FACTORY STEP");
            StepGenerators();
            break;
         default:
            break;
      }

      stepCount++;
	}

   private void StepGenerators() {
      foreach (Generator gen in generators) {
         gen.MakeCrate();
      }
   }

   private List<Generator> GetGenerators() {
      List<Generator> list = new List<Generator>();
      Action<Machine> addGenerator = (machine) => {
         if (machine is Generator) {
            list.Add((Generator)machine);
            Debug.LogFormat("Generator at {0},{1}", machine.x, machine.y);
         }
      };
      Grid.ForEachMachine(addGenerator);
      return list;
   }
}
