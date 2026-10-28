package ±è¹Î±Ô;

import java.util.Scanner;

public class Main1 
{
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		double high = sc.nextDouble();
		double radius = sc.nextDouble();
		
		Cylinder cd = new Cylinder(new Circle(2.8), 5.6); 	
//		Cylinder c = new Cylinder(radius, high);
//		double area = c.getVolume();
//		System.out.println("ºÎÇÇ:"+area);
	}
}


class Circle
{
	private double radius = 0;
	private static double PI = 3.141592;
	public Circle(double radius) 
	{
		this.radius = radius;
	}
	
	public double getArea()
	{
		return radius * radius * PI;
	}
	
}

class Cylinder
{
	private double high;
	private Circle circle;
	public Cylinder(double r, double h)
	{
		high = h;
		circle = new Circle(r);
	}
	public Cylinder(Circle c, double h)
	{
		high = h;
		circle = c;
	}
	
	public double getVolume() 
	{
		return circle.getArea() * high;
	}
}