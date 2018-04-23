using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StairMaster : MonoBehaviour {

   public const float STEP_SIZE = 0.5f;
   private float stepTime;
   private bool running = false;

   private List<Generator> generators = new List<Generator>();

   void Run() {
      generators = GetGenerators();
      running = true;
   }

	void Update () {
      if (!running) Run();
		// call step methods for each machine
      if (IsNewStep()) {
         //Debug.Log("----------STEP----------");
         OnStepStart();
         ApplyForces();
      }
	}

   private bool IsNewStep() {
      stepTime += Time.deltaTime;
      if (stepTime > STEP_SIZE) {
         stepTime = 0;
         return true;
      } else {
         return false;
      }
   }

   private void OnStepStart() {
      Crates.ForEach((crate) => crate.OnStepStart());
      Crates.ForEachGroup((group) => group.OnStepStart());
      Machines.ForEach((machine) => machine.OnStepStart()); 
   }

   private void ApplyForces() {
      Action<CrateGroup> applyForces = (group) => group.ApplyForces();
      Crates.ForEachGroup(applyForces);
   }

   private void StepGenerators() {
      foreach (Generator gen in generators) {
         gen.MakeCrate();
      }
   }

   private List<Generator> GetGenerators() {
      List<Generator> list = new List<Generator>();
      Machines.ForEach((machine) => {
         if (machine is Generator) list.Add((Generator)machine);
      });
      return list;
   }
}
