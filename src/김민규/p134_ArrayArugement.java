package 김민규;

import java.util.Random;

public class p134_ArrayArugement
{
	public static void main(String[] args)
	{
		int [] array = new int[10];
		Random rnd = new Random();
		for(int i = 0; i < 10; i++)
		array[i] = rnd.nextInt();
		
		System.out.println("변경 전 : " );
		for(int i = 0; i < 10; i++) array[i]++;
		
		System.out.println("변경 후 : ");
		for(int i =0; i < 10; i++)
		{
			System.out.print(array[i] + " ");
		}
		System.out.println();
	}
}
