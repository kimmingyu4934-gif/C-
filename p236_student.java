package ±è¹Î±Ô;

public class p236_student 
{
	public static void main(String[] args) 
	{
		int korsum = 0, engsum = 0, mathsum = 0;
		double totalSum = 0.0, korAvg, engAvg, mathAvg, totalAvg;
		
		StudentScore [] students= new StudentScore[3];
		students[0] = new StudentScore("bmkim1", 2016001,70,80,90);
		students[1] = new StudentScore("bmkim2", 2016002,60,70,80);
		students[2] = new StudentScore("bmkim3", 2016003,50,60,70);
		
		for(int i = 0; i < 3; i++)
		{
			System.out.println(students[i].getInfo());
			korsum += students[i].kor;
			engsum += students[i].eng;
			mathsum += students[i].math;
			totalSum += students[i].getAverage();
			korAvg = korsum / 3.0;
			engAvg = engsum/3.0;
			mathAvg = mathsum / 3.0;
			totalAvg = totalSum / 3.0;
			System.out.println("±¹¾î Æò±Õ : " + korAvg);
			System.out.println("¿µ¾î Æò±Õ : " + engAvg);
			System.out.println("¼öÇÐ Æò±Õ : " + mathAvg);
			System.out.println("ÀüÃ¼ Æò±Õ : " +totalAvg);
		}
	}
}
class StudentScore
{
	String sname;
	int sid, kor, eng, math;
	
	public StudentScore(String name, int id, int k, int e, int m)
	{
		sname = name; sid = id; kor = k; eng = e; math = m;
	}
	double getAverage() {return (kor + eng + math)/3.0;}
	String getInfo() {return sname + ", " + sid + ", " + kor + ", " + eng + ", " + math;}
}