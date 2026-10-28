package 김민규;

import java.util.Scanner;

public class Main 
{
	public static void main(String[] args) 
	{
		student stu = new student();
		Scanner sc = new Scanner(System.in);
		
		System.out.print("학과 입력 : ");	
		String a = sc.next();
		stu.setDepartment(a);
		
		System.out.print("학번입력 :");
		int a1 = sc.nextInt();
		stu.setmyClass(a1);
		
		
		System.out.println("학과 : " + stu.getDepartment() + "학번 : " + stu.getmyClass());
	}
}


class student
{
	private String department;
	private int  myClass = 0;
	public String getDepartment() 
	{
		return department;
	}
	public void setDepartment(String department) 
	{
		this.department = department;
	}
	
	public int getmyClass() 
	{
		return myClass;
	}
	public void setmyClass(int class1) 
	{
		myClass = class1;
	}
}
