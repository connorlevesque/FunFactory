using UnityEngine;
using System;
using System.Collections.Generic;
using System.Linq;

public class Rotator : Machine {
	public bool isCCW;


	public override void Start() {
		base.Start();
		isObstacle = false;
		// midpointCenterAlgorithm();	
	}

	public override void OnStepStart() {
		Crate crate = Crates.At(xy);
		int isCCWInt = (isCCW) ? 1:0;
		Vector3 spin = new Vector3 (this.x, this.y, isCCWInt);
		if (crate) crate.group.spins.Add(spin);
  	}

  	public static List<Vector2> GetSquaresToCheck (Vector2 xy, Vector3 spin){
  		List<Vector2> circle = Rotator.MidpointCenterAlgorithm(xy, spin);
  		Vector2 center = new Vector2 (spin[0], spin[1]);
  		Vector2 target = Rotator.RotateVector(xy, spin);
   		bool ccw = (spin[2] == 1) ? true : false;
   		// Debug.Log("running get squares to check");
   		// Debug.LogFormat("xy: {0}, target: {1}, ccw: {2}", xy, target, ccw);

   		return Rotator.InclusiveSlice(circle, xy, target, ccw);
  	}

  	private static List<Vector2> InclusiveSlice(List<Vector2> l, Vector2 start, Vector2 end, bool ccw) {
  		int s = l.IndexOf(start);
   		int e = l.IndexOf(end);
  		List<Vector2> p = new List<Vector2>();
		if (ccw) {
   			if (s < e) {
   				p = l.GetRange(s, e-s+1);
   			}
   			else {
   				p = l.GetRange(s, l.Count - s);
   				List<Vector2> p1 = l.GetRange(0, e+1);
   				p.AddRange(p1);
   			}
   		}
   		else {
   			if (s > e) {
   				p = l.GetRange(e, s-e+1);
   			}
   			else {
   				p = l.GetRange(e, l.Count - e);
   				List<Vector2> p1 = l.GetRange(0, s+1);
   				p.AddRange(p1);
   			}
   		}
   		foreach(Vector2 v in p){
   			// Debug.Log(v);
   		}
   		return p;
  	}

  	private static Vector2 RotateNinety (Vector2 xy, bool ccw) {
  		if (ccw) return new Vector2 (-xy.y, xy.x);
  		else return new Vector2 (xy.y, -xy.x);
  	}

  	public static Vector2 RotateVector(Vector2 xy, Vector3 spin) {
  		Vector2 originXY = new Vector2 (spin[0], spin[1]);
  		Vector2 centeredxy = xy - originXY;
  		bool ccw = (spin[2] == 1) ? true : false;
  		Vector2 rotated = RotateNinety(centeredxy, ccw) + originXY;
  		return rotated;
  	}

   	private static List<Vector2> MidpointCenterAlgorithm(Vector2 pt, Vector3 spin) {
	   	List<List<Vector2>> pixels = new List<List<Vector2>>();
	   	for (int i = 0; i < 8; i++){
	   		List<Vector2> tmp = new List<Vector2>();
	   		pixels.Add(tmp);
	   	}

	   	// Debug.Log("Running Midpoint Center Algorithm");
	   	int xt = (int)(spin[0]-pt[0]);
	   	int yt = (int)(spin[1]-pt[1]);
	   	int radius = (int)Math.Sqrt(xt*xt + yt*yt);
	   	int x0 = (int)spin[0];
	   	int y0 = (int)spin[1];
		int x = radius;
	    int y = 0;
	    int err = 0;
	 
	    while (x >= y)
	    {
	    	Vector2 one = new Vector2(x0 + x, y0 + y);
		    Vector2 two = new Vector2(x0 + y, y0 + x);
		    Vector2 three = new Vector2(x0 - y, y0 + x);
		    Vector2 four = new Vector2(x0 - x, y0 + y);
		    Vector2 five = new Vector2(x0 - x, y0 - y);
		    Vector2 six = new Vector2(x0 - y, y0 - x);
		  	Vector2 seven = new Vector2(x0 + y, y0 - x);
		    Vector2 eight = new Vector2(x0 + x, y0 - y);
		 	
		 	pixels[0].Add(one);
		    pixels[1].Add(two);
		    pixels[2].Add(three);
		    pixels[3].Add(four);
		    pixels[4].Add(five);
		    pixels[5].Add(six);
		  	pixels[6].Add(seven);
		    pixels[7].Add(eight);

		    if (err <= 0)
		    {
		        y += 1;
		        err += 2*y + 1;
		    }
		 
		    if (err > 0)
		    {
		        x -= 1;
		        err -= 2*x + 1;
		    }
	    }

	    List<Vector2> buddie = new List<Vector2>();
	    for (int i = 0; i < 8; i++) {
	    	List<Vector2> t = pixels[i];
	    	if ((i%2)==1) pixels[i].Reverse();
		    buddie.AddRange(pixels[i]);
		}
		// Debug.Log("-----The Circle Is");
	 //     foreach(Vector2 xy in buddie) {
	 //     	Debug.Log(xy);
	 //     }
	   	return buddie;
  	}





}