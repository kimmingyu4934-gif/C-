package 김민규;

import java.util.Scanner;

public class 축구구단관리프로그램 {
	Scanner sc = new Scanner(System.in);

	public static void main(String[] args) {
		축구구단관리프로그램 a = new 축구구단관리프로그램();
		a.start();
	}

	구단 team[] = new 구단[100];
	int teamcount = 0;

	void start() 
	{
		boolean flag = true;
		while (flag) 
		{
			System.out.println("<축구선수 관리 프로그램>");
			System.out.println("1.구단 추가");
			System.out.println("2.구단 편집");
			System.out.println("3.구단 삭제");
			System.out.println("4.구단 보기");
			System.out.println("5.프로그램 종료");
			int chose;
			chose = sc.nextInt();sc.nextLine();
			switch (chose) 
			{
			case 1:
				구단추가();
				break;
				
			case 2:
				구단편집();
				break;
				
			case 3:
				구단삭제();
				break;
				
			case 4:
				구단보기();
				
			default:
				flag = false;
			}
		}

	}

	public void 구단추가() 
	{
		System.out.println("<<구단추가>>");
		System.out.print("구단이름 입력 : ");
		String name;
		name = sc.nextLine();
		team[teamcount] = new 구단(name);
		System.out.println("구단이 생성되었습니다.");
		teamcount++;
	}

	public void 구단편집() 
	{
		System.out.println("<<구단 편집>>");
		for (int i = 0; i < teamcount; i++)
			System.out.println(i + 1 + ". " + team[i].getName());
		System.out.println(teamcount + 1 + ". 나가기");
		System.out.print("편집 할 구단 입력 : ");
		int chose = sc.nextInt();sc.nextLine();
		if (chose == teamcount + 1)
			return;

		team[chose-1].edit();
	}

	public void 구단삭제() 
	{

	}

	public void 구단보기() 
	{
		System.out.println("<<구단 보기>>");
	}
}

class 구단 
{
	Scanner sc = new Scanner(System.in);
	String name;
	String coachname;
	String playername;
	선수 player[] = new 선수[100];
	int playercount = 0;

	public 구단(String name) 
	{
		this.name = name;
	}
	
	public String getName() {
		return name;
	}

	public String getCoachname() {
		return coachname;
	}

	public void setCoachname(String coachname) {
		this.coachname = coachname;
	}
	public void edit() 
	{
		boolean flag = true;
		while(flag)
		{
			System.out.println("<<<"+ getName() +"를 편집합니다>>>");
			System.out.println("1.코치추가");
			System.out.println("2.선수추가");
			System.out.println("3.코치삭제");
			System.out.println("4.선수삭제");
			System.out.println("5.나가기");
			int chose = sc.nextInt();sc.nextLine();
			switch(chose)
			{
				case 1:
					코치추가();
					break;
				case 2:
					선수추가();
					break;
				case 3:
					코치삭제();
					break;
				case 4:
					선수삭제();
					break;
				default:
					flag = false;
					
			}
		}
		
	}

	public void 코치추가() 
	{
		System.out.print("코치이름을 입력해주세요 : ");
		String name = sc.next();
		setCoachname(name);
		
		System.out.println(">" + getCoachname() +"가 추가되었습니다.");
	}

	public void 선수추가() 
	{
		System.out.println("<<선수추가>>");
		System.out.print("선수이름 입력 : ");
		String name;
		name = sc.nextLine();
		System.out.print("선수연봉 입력(만원) : ");
		int income;
		income = sc.nextInt();sc.nextLine();
		player[playercount] = new 선수(name,income);
		System.out.println(name + "님이 추가되었습니다.");
		playercount++;
	}

	public void 코치삭제() {

	}

	public void 선수삭제() {

	}
}

class 선수 
{
	String name;
	int income;
	
	public 선수(String name, int income)
	{
		this.name = name;
		this.income = income;
	}
	
	public String getName() {
		return name;
	}
	public int getIncome() {
		return income;
	}
}