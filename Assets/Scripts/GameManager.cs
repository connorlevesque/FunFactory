using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour {

   public int height;
   public int width;

	void Awake () {
		Grid.Init(height, width);
	}
}
