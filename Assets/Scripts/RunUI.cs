using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Events;

public class RunUI : MonoBehaviour {

   public GameObject playPauseBtn;
   public GameObject fastForwardBtn;
   public GameObject resetBtn;
   public GameObject clearBtn;
   private Text playPause;

   void Start() {
      SetupButton(playPauseBtn,   ()=>PlayPause());
      SetupButton(resetBtn,       ()=>Reset());
      SetupButton(clearBtn,       ()=>Clear());
      SetupButton(fastForwardBtn, ()=>FastForward());
      playPause = playPauseBtn.transform.GetChild(0).GetComponent<Text>();
   }

   public void SetupButton(GameObject btnGO, UnityAction method) {
      Button btn = btnGO.GetComponent<Button>();
      btn.onClick.AddListener(method);
   }

   private void PlayPause() {
      if (!Running()) { Play();  }
      else            { Pause(); }
   }

   private void Play() {
      UI.Machines.Hide();
      this.Show();
      playPause.text = "Pause";
      GameManager.StairMaster.Run();
   }

   private void Pause() {
      playPause.text = "Play";
      GameManager.StairMaster.Pause();
   }

   private void FastForward() {
      if (GameManager.StairMaster.IsSlow()) {
         GameManager.StairMaster.FastForward();
      } else {
         GameManager.StairMaster.SlowDown();
      }
   }

   private void Reset() {
      Pause();
      Crates.ForEach((crate) => Destroy(crate.gameObject));
      Crates.RemoveAll();
      this.Hide();
      UI.Machines.Show();
   }

   private void Clear() {
      // add confirmation popup
      Reset();
      Machines.ForEach((machine) => {
         if (machine.wasPlaced) {
            Machines.Remove(machine.xy);
            Destroy(machine.gameObject);
         }
      });
   }

   private void Show() {
      fastForwardBtn.SetActive(true);
      resetBtn.SetActive(true);
      clearBtn.SetActive(true);
   }

   private void Hide() {
      fastForwardBtn.SetActive(false);
      resetBtn.SetActive(false);
      clearBtn.SetActive(false);
   }

   private bool Running() {
      return GameManager.StairMaster.running;
   }
}
