package 김민규;

import java.util.Random;

public class p134_ArrayArgument 
{
	public static void main(String[] args)
	{
		int array[] = new int[10];
		Random rnd = new Random();
		
		for(int i = 0; i < 10; i++)	array[i] = rnd.nextInt(26);
		
		System.out.print("변경 전 : ");
		printArray(array);
		
		increaseArray(array);
		
		System.out.print("변경후 : ");
		printArray(array);
	}
	public static void printArray(int[] arr)
	{
		for(int i = 0; i < arr.length ; i++) System.out.print(arr[i]+ " ");
		System.out.println();
	}
		
		public static void increaseArray(int[] arr)
		{
			
			for (int i = 0; i < arr.length; i++)	System.out.print(arr[i] + " ");
			System.out.println();
		}
}
