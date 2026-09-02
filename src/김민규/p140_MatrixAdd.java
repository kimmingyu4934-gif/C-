package 김민규;

import java.util.Random;

public class p140_MatrixAdd 
{
	public static void main(String[] args)
	{
		int [][] m1 = new int [3][3], m2 = new int[3][3], m3 = new int[3][3];
		
		initialize(m1,m2);
		
		sum(m3,m1,m2);
		
		printing(m1);
		
		printing(m2);
		
		System.out.println("===================");
		
		printing(m3);
		
	}
	public static void printing(int[][] arr)
	{
		for(int i = 0; i < arr.length; i++)
		{
			for(int j = 0; j < arr[i].length; j++)
			{
				System.out.print(arr[i][j] + " ");
			}
			System.out.println();
		}
		System.out.println();
	}
	
	public static void initialize(int[][] arr, int[][] arr2)
	{
		Random rnd = new Random();
		for(int i = 0; i < arr.length; i++)
		{
			for(int j = 0; j < arr[i].length; j++)
			{
				arr[i][j] = rnd.nextInt(100);
				arr2[i][j] = rnd.nextInt(100);
			}
		}
	}
	
	public static void sum(int[][] arr, int[][]arr1, int[][]arr2)
	{
		for(int i = 0; i < arr.length; i++)
		{
			for(int j = 0; j < arr[i].length; j++)
			{
				arr[i][j] = arr1[i][j] + arr2[i][j];
			}
		}
	}
}
