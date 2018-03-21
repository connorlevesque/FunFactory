// using System;
// using System.Collections;
// using System.Collections.Generic;
// using UnityEngine;

// public class GridOf<T> {

//    private static Grid instance;
//    public int width;
//    public int height;
//    private T[,] ts;


//    public static int Width() {
//       return instance.width;
//    }

//    public static int Height() {
//       return instance.height;
//    }

//    public static bool InBounds(int x, int y) {
//       return 0 <= x && x < instance.width && 0 <= y && y < instance.height;
//    }

//    public static bool ElementAt(int x, int y) {
//       return InBounds(x,y) && instance.ts[x,y] != null;
//    }

//    public static T At(int x, int y) {
//       if (!InBounds(x,y)) {
//          string message = string.Format("Cannot add {0} at out of bounds position {1},{2}", T, x, y);
//          throw new ArgumentException(message);
//       }
//       return instance.ts[x,y];
//    }

//    public static void Add(T t) {
//       if (ElementAt(t.x, t.y)) {
//          string message = string.Format("Cannot add machine at position {0}", t.xy);
//          throw new ArgumentException(message);
//       }
//       instance.ts[t.x, t.y] = t;
//    }

//    public static T Remove(int x, int y) {
//       T removed = instance.ts[x,y];
//       instance.ts[x,y] = null;
//       return removed;
//    }

//    public static void ForEach(Action<T> action) {
//       for (int y = 0; y < Height(); y++) {
//          for (int x = 0; x < Width(); x++) {
//             if (ElementAt(x,y)) action(instance.ts[x,y]);
//          }
//       }
//    }

// 	public static void Init(int h, int w) {
// 		instance = new Grid(h,w);
// 	}

//    private Grid(int h, int w) {
//       height = h;
//       width = w;
//       ts = new T[width,height];
//    }
// }
