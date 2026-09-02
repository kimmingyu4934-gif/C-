package 김민규;

import java.util.Scanner;

public class p155_SearchReplace 
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("문장 입력 : ");
		String statement = sc.nextLine();
		System.out.print("찾고자 하는 단어 : ");
		String sword = sc.next();
		System.out.print("바꾸고자 하는 단어 : ");
		String rword = sc.next();
		
		statement = statement.replaceFirst(sword, rword);
		System.out.println(statement);
	}
}
