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
      if (stepCount % STEP_SIZE == 0) {
         Debug.Log("Step");
         OnStepStart();
         ApplyForces();
         OnStepEnd();
      }
      stepCount++;
	}

   private void OnStepStart() {
      Action<Machine> onStart = (machine) => machine.OnStepStart();
      Machines.ForEach(onStart); 
   }

   private void ApplyForces() {
      Action<CrateGroup> applyForces = (group) => group.ApplyForces();
      Crates.ForEachGroup(applyForces);
   }

   private void OnStepEnd() {
      Action<Machine> onStepEndM = (machine) => machine.OnStepEnd();
      Machines.ForEach(onStepEndM);
      Action<Crate> onStepEndC = (crate) => crate.OnStepEnd();
      Crates.ForEach(onStepEndC);
      Action<CrateGroup> onStepEndG = (group) => group.OnStepEnd();
      Crates.ForEachGroup(onStepEndG);
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
      Machines.ForEach(addGenerator);
      return list;
   }
}
