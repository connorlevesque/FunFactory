using UnityEngine;
using System;
using System.Collections.Generic;
using System.Linq;


public class Rotator : Machine {

	public bool isCCW;
	private static int STEPS = 50;
	private static double ANG_STEP = 2*(Math.PI)/STEPS;
	private CrateGroup lastGroup;


	public override void Start() {
		base.Start();
		isObstacle = false;
		// midpointCenterAlgorithm();	
	}
	
	public void setLastGroup (CrateGroup g) {
		this.lastGroup = g;
	}
	
	public CrateGroup getLastGroup () {
		return this.lastGroup;
	}

	public override void OnStepStart() {
		// Debug.Log("Rotator onsttepstart");
		Crate crate = Crates.At(xy);
		int isCCWInt = (isCCW) ? 1:0;
		Vector3 spin = new Vector3 (this.x, this.y, isCCWInt);
		if (crate) {
			if (crate.group != this.lastGroup) {
			 crate.group.spins.Add(spin);
			 this.lastGroup = crate.group;
			}
		}
  	}

  	public static List<Vector2> GetSquaresToCheck (Vector2 xy, Vector3 spin){
  		// List<Vector2> circle = Rotator.MidpointCenterAlgorithm(xy, spin);
  		// Debug.LogFormat("checking {0}", xy);
  		double xt = (double)spin[0]-(double)xy[0];
	   	double yt = (double)spin[1]-(double)xy[1];
	   	double radius = Math.Sqrt(xt*xt + yt*yt);
  		Vector2 center = new Vector2 (spin[0], spin[1]);
  		List<Vector2> circle = Rotator.MakeCircle(center, radius);
  		// Debug.LogFormat("xy:{0}, center: {1}", xy, center);
  		// Debug.Log("logging circle");
  		// foreach(Vector2 p in circle) {
   			// Debug.LogFormat("--{0}",p);
   		// }
  		
  		Vector2 target = Rotator.RotateVector(xy, spin);
   		bool ccw = (spin[2] == 1) ? true : false;
   		
   		// Debug.LogFormat("xy: {0}, target: {1}, ccw: {2}", xy, target, ccw);
   		List<Vector2> a = Rotator.InclusiveSlice(circle, xy, target, ccw);
   		
   		// return circle; 
   		
   		return a;
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

	private static int Quadrent(double[] point){
		double[] center = new double[] {Math.Round(point[0]), Math.Round(point[1])};
		int[,] l = new int[,] {{6, 3, 0}, {7, 4, 1}, {8, 5, 2}};
		double x = 2*(point[0] - center[0]);
		double y = 2*(point[1] - center[1]);
		int xr = (int) Math.Round(x, 0);
		int yr = (int) Math.Round(y, 0);
		int xi = xr + 1;
		int yi = yr + 1;
		return l[xi, yi];
	}

	private static List<Vector2> MakeCircle(Vector2 center, double radius){
		
		List<Vector2> buddie = new List<Vector2>();
		for (int i=0; i <= STEPS; i++){
			double t = ANG_STEP * i;
			double x_0 = center[0];
			double y_0 = center[1];

			double x_t = radius*Math.Cos(t);
			double y_t = radius*Math.Sin(t);
			
			double x = x_0 + x_t;
			double y = y_0 + y_t;

			int xint = (int)Math.Round(x);
			int yint = (int)Math.Round(y);

			int q = Quadrent(new double[] {x, y});
			if (q == 0) {	
				buddie.Add(new Vector2(xint, yint+1));
				buddie.Add(new Vector2(xint-1, yint+1));
				buddie.Add(new Vector2(xint-1, yint));
			}
			else if (q == 1) {
				buddie.Add(new Vector2(xint, yint+1));
			}
			else if (q == 2) {
				buddie.Add(new Vector2(xint, yint+1));
				buddie.Add(new Vector2(xint+1, yint+1));
				buddie.Add(new Vector2(xint+1, yint));
			}
			else if (q == 3) {
				buddie.Add(new Vector2(xint-1, yint));
			}
			else if (q == 5){
				buddie.Add(new Vector2(xint+1,yint));
			}
			else if (q == 6){
				buddie.Add(new Vector2(xint-1, yint));
				buddie.Add(new Vector2(xint-1, yint-1));
				buddie.Add(new Vector2(xint, yint-1));
			}
			else if (q == 7){
				buddie.Add(new Vector2(xint, yint-1));
			}
			else if (q == 8){
				buddie.Add(new Vector2(xint+1,yint));
				buddie.Add(new Vector2(xint+1, yint-1));
				buddie.Add(new Vector2(xint, yint-1));
			}
			buddie.Add(new Vector2(xint, yint));
		}
		List<Vector2> distinctBuddie = buddie.Distinct().ToList();
		return distinctBuddie;
	}


}