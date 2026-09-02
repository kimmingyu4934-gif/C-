package 김민규;

import java.util.Scanner;

public class Idpassword 
{
	public static void Login(int member, String ideas[], String passwords[])
	{
		String idea,password;
		int flag = 0;
		Scanner sc = new Scanner(System.in);
		System.out.print("아이디를 입력하세요\n>>");
		idea = sc.next();
		System.out.print("비밀번호를 입력하세요\n>>");
		password = sc.next();
		for(int i = 0; i < member; i++)
		{
			if(idea.equals(ideas[i]))
			{
				if(password.equals(passwords[i]))
				{
					flag = 2;
					break;
				}
				else
				{
					flag = 1;
					break;
				}
			}
		}
		if(flag == 0)
		{
			System.out.println("아이디가 일치하지 않습니다.");
		}
		else if(flag == 2)
		{
			System.out.println("아이디 패스워드 모두 일치합니다.");
			p142_SeatReservation.main(null);
		}
		else
		{
			System.out.println("패스워드가 일치하지 않습니다.");
		}
	}
	
	public static int join(int members, String ideas[], String passwords[])
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("아이디를 입력해주세요\n>>");
		ideas[members] = sc.next();
		System.out.print("비밀번호를 입력해주세요\n>>");
		passwords[members] = sc.next();
		members++;
		return members;
	}
	
	public static void main(String[] args)
	{
		String[] ids = new String[100];
		String[] pws = new String[100];
		int count = 0;//회원가입한 인원수
		boolean flag = true;
		while(flag)
		{
			int input;
			Scanner sc = new Scanner(System.in);
			System.out.println();
			System.out.println("1.회원가입 2.로그인 3.프로그램 종료");
			System.out.print(">>");
			input = sc.nextInt();
			switch(input)
			{
			case 1: count = join(count,ids,pws);	break;
			case 2: Login(count, ids, pws);		break;
			case 3: System.out.println("프로그램이 종료되었습니다"); flag = false;
			}
		}
	}
}
