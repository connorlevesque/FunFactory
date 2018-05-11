using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LevelManager : MonoBehaviour {

   private static LevelManager instance;
   private int currentScene;

   void Awake () {
      if (instance == null) {
         instance = this;
         DontDestroyOnLoad(gameObject);
      }
      if (instance != this) Destroy(gameObject);
   }

   void Start() {
      currentScene = SceneManager.GetActiveScene().buildIndex;
   }

   public static void LoadLevel(int lvl) {
      instance.StopAllCoroutines();
      instance.currentScene = lvl;
      SceneManager.LoadScene(instance.currentScene);
   }

   public static void Quit() {
      Application.Quit();
   }
}
