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
   public GameObject openGameMenuBtn;
   public GameObject closeGameMenuBtn;
   public GameObject exitBtn;
   public GameObject gameMenu;
   public GameObject levelCompletePopup;
   public bool completePopupShown = false;
   public Sprite playSprite;
   public Sprite pauseSprite;
   private Image playPauseImage;

   void Start() {
      exitBtn = transform.parent.GetChild(4).GetChild(0).gameObject;
      playPauseImage = playPauseBtn.GetComponent<Image>();
      SetupButton(playPauseBtn,     ()=>PlayPause());
      SetupButton(resetBtn,         ()=>Reset());
      SetupButton(clearBtn,         ()=>Clear());
      SetupButton(fastForwardBtn,   ()=>FastForward());
      SetupButton(exitBtn,          ()=>LevelManager.LoadLevel(0));
      SetupButton(openGameMenuBtn,  ()=>gameMenu.SetActive(true));
      SetupButton(closeGameMenuBtn, ()=>{
         gameMenu.SetActive(false);
         levelCompletePopup.SetActive(false);
      });
   }

   public void SetupButton(GameObject btnGO, UnityAction method) {
      Button btn = btnGO.GetComponent<Button>();
      btn.onClick.AddListener(method);
   }

   private void PlayPause() {
      if (Running()) Pause(); else Play();
   }

   private void Play() {
      UI.Machines.Hide();
      this.Show();
      playPauseImage.sprite = pauseSprite;
      GameManager.StairMaster.Run();
   }

   private void Pause() {
      playPauseImage.sprite = playSprite;
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
      Machines.ForEach((machine) => {
         if (machine is DropZone) {
            DropZone zone = (DropZone)machine;
            zone.group.count = 0;
         }
      });
      this.Hide();
      UI.Machines.Show();
   }

   private void Clear() {
      Reset();
      Machines.ForEach((machine) => {
         if (machine.wasPlaced) {
            Machines.Remove(machine.xy);
            Destroy(machine.gameObject);
         }
      });
      gameMenu.SetActive(false);
   }

   private void Show() {
      fastForwardBtn.SetActive(true);
      resetBtn.SetActive(true);
      clearBtn.SetActive(true);
   }

   private void Hide() {
      fastForwardBtn.SetActive(false);
      resetBtn.SetActive(false);
   }

   private bool Running() {
      return GameManager.StairMaster.running;
   }

   public void Congratulate() {
      if (completePopupShown) return;
      gameMenu.SetActive(true);
      levelCompletePopup.SetActive(true);
      completePopupShown = true;
   }
}
