package 김민규;
import java.util.Scanner;
import java.util.Arrays;

public class p129_ConditionOperatio 
{
	public static void main(String[] args)
	{
		int val, cnt = 0, sum = 0;
		int [] array = new int[100];
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("0과 100사이의 숫자 입력(그 외의 숫자 입력시 종료)");
		val = sc.nextInt();
		while(val >= 0 && val <= 100) 
		{
			array[cnt] = val;
			cnt++;
			System.out.println("0과 100사이의 숫자 입력(그 외의 숫자 입력시 종료)");
			val = sc.nextInt();
		}
		
		Arrays.sort(array,0,cnt);
		
		System.out.print("정렬 후 성적 : ");
		for(int i = 0; i < cnt; i++)	System.out.print(array[i] + " ");
		System.out.println();
		
		System.out.print("찾고자 하는 성적을 입력하세요 : ");
		
		val = sc.nextInt();
		
		int i = Arrays.binarySearch(array,0,cnt,val);
		
		if(i < 0)
			System.out.println("원하는 성적이 배열에 존재하지 않습니다.");
		else
			System.out.println("원하는 성적은 배열의" + (i+1) + "번째에 존재 합니다");
		
		sc.close();
	}
}
