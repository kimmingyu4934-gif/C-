package 김민규;

import java.util.Scanner;

public class p66_Median 
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("첫번째 숫자(음수도 가능)");
		int s1 = sc.nextInt();
		System.out.println("두번째 숫자(음수도 가능)");
		int s2 = sc.nextInt();
		System.out.println("세번째 숫자(음수도 가능)");
		int s3 = sc.nextInt();
		sc.close();
		
		int meadianVal;
		if(s1 > s2)
		{
			if(s2 > s2)
				meadianVal = s2;
			
			else if(s1 > s3)
				meadianVal = s3;
			
			else
				meadianVal = s1;
		}
		else
		{
			if( s1 > s3)
				meadianVal = s1;
			
			else if(s2 > s3)
				meadianVal = s3;
			
			else
				meadianVal = s2;
		}
		System.out.println("중간값 : " + meadianVal);
		
	}
}
