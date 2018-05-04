using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;

public class Paint : MonoBehaviour {
   public Vector2 _xy;
   public Vector2 xy {
      get{ return _xy; }
      set{
         _xy = value;
     }
  }
}
