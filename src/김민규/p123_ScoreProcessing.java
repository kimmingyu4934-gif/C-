package 김민규;

import java.util.Arrays;
import java.util.Scanner;

public class p123_ScoreProcessing 
{
	public static void main(String[] args)
	{
		int v,c=0,s=0;
		int [] a = new int[100];
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("0과 100사이의 값을 입력(그 외의 값을 입력하면 종료) : ");
		v = sc.nextInt();
		while(v >= 0 && v <= 100)
		{
			a[c] = v;
			c++;
			System.out.println("0과 100사이의 값을 입력(그 외의 값을 입력하면 종료) : ");
			v = sc.nextInt();
		}
		System.out.print("정렬 전 성적 : ");
		for(int e : a)
		{
			System.out.print(e + " ");
		}
			
		
		Arrays.sort(a,0,c);
		System.out.println();
		
		System.out.print("정렬 후 성적 : ");
		for(int e : a)
		{
			System.out.print(e + " ");
		}
		
	}
}
