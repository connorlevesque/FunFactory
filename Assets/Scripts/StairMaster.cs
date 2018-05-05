using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StairMaster : MonoBehaviour {

   public float stepSize = SLOW_STEP_SIZE;
   public const float SLOW_STEP_SIZE = 0.5f;
   public const float FAST_STEP_SIZE = 0.3f;
   private float stepTime;
   public bool running = false;

   private List<Generator> generators = new List<Generator>();

   public void Run() {
      generators = GetGenerators();
      running = true;
   }

   public void Pause() {
      running = false;
   }

   public bool IsSlow() {
      return stepSize == SLOW_STEP_SIZE;
   }

   public void FastForward() {
      stepSize = FAST_STEP_SIZE;
   }

   public void SlowDown() {
      stepSize = SLOW_STEP_SIZE;
   }

	void Update () {
      //if (!running) Run();
		// call step methods for each machine
         // Debug.Log("----------STEP----------");

      if (running && IsNewStep()) {
         OnStepStart();
         ApplyForces();

      }
	}

   private bool IsNewStep() {
      stepTime += Time.deltaTime;
      if (stepTime > stepSize) {
         stepTime = 0;
         return true;
      } else {
         return false;
      }
   }

   private void OnStepStart() {
      // Debug.Log("===========stairmaster_start=============");
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
