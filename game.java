package 김민규;

import java.util.Scanner;

public class game 
{
	User 용사;
	Monster 슬라임, 오크, 고블린;
	Monster now_enemy;
	Scanner sc = new Scanner(System.in);
	int chose;

	public game() 
	{	
		용사 = new User();
		용사.lv = 5;
		용사.hp = 180;
		용사.attack = 45;
		용사.defence = 20;
		용사.gold = 40;
		용사.xp = 0;
		
		슬라임 = new Monster();
		슬라임.name = "슬라임";
		슬라임.hp = 50;
		슬라임.attack = 10;
		슬라임.defence = 3;
		
		고블린 = new Monster();
		고블린.name = "고블린";
		고블린.hp = 80;
		고블린.attack = 15;
		고블린.defence = 5;
		
		오크 = new Monster();
		오크.name = "오크";
		오크.hp = 150;
		오크.attack = 25;
		오크.defence = 10;
	}


	public void  init()
	{	
		Scanner sc = new Scanner(System.in);
		printing(1);
		System.out.println("========게임시작=========");
		while(true)
		{
			printing(0);
			int chose = sc.nextInt();
			monster(chose);
		}
	}
	
	public void name()
	{
		System.out.printf("닉네임을 입력하세요.\n>>");
		용사.name = sc.next();
	}
	
	public void monster(int a)
	{
		switch(a)
		{
			case 1:
				now_enemy = 슬라임;
				break;
			case 2:
				now_enemy = 고블린;
				break;
			case 3:
				now_enemy = 오크;
				break;
			case 4:
				System.out.println("마을로 돌아갑니다.");
				break;
			default:
				
		}
		System.out.println(now_enemy.name+"이 나타났습니다!");
		System.out.println(now_enemy.name+" Hp : " + now_enemy.hp);
		System.out.println(now_enemy.name+" 공격력 : " + now_enemy.attack);
		
		System.out.println("1.전투/n2.도망가기");	System.out.print(">>");
		int c = sc.nextInt();
		
		if(c == 1)
		{
			while(now_enemy.hp <= 0)
			{
				용사.hp -= now_enemy.attack;
				now_enemy.hp -= 용사.attack;
				if(now_enemy.hp <= 0)
				{
					System.out.println("처치하셨습니다.");
					용사.xp += 10;
					용사.gold += 20;
				}
				
				else
				{
					printing(2);
					chose = sc.nextInt();
					if(chose == 1)
					{
						
					}
					
					else
					{
						System.out.println("무사히 도망쳤습니다.");
						break;
					}
				}
					
			}
			
			if(c == 2)
			{
				System.out.println("마을로 돌아갑니다.");
			}
			}
	}
	
	public void printing(int i)
	{
		if(i==0)
		{
			System.out.println("===== 사냥터 =====");
			System.out.println("1. 슬라임");
			System.out.println("2. 고블린");
			System.out.println("3. 오크");
			System.out.println("4. 돌아가기");
			System.out.print(">>");
			return;
		}
		if(i==1)
		{
			System.out.println("[" + 용사.name + "]Lv." + 용사.lv + "전사");
			System.out.println("");
			System.out.println("HP : "+용사.hp);
			System.out.println("공격력 : "+ 용사.attack);
			System.out.println("방어력 : "+ 용사.defence);
			System.out.println("자원 : " + 용사.gold);
		}
		
		if(i == 2)
		{
			System.out.println("현재 몬스터 hp : " + now_enemy.hp);
			System.out.println("1.계속 싸우기/n2.도망가기");
			System.out.print(">>");
		}
	}
	
	public static void main(String[] args)
	{
		game g = new game();
		g.init();
	}
}
class User
{
	public String name;
	public int lv;
	public int hp;
	public int attack;
	public int defence;
	public int gold;
	public int xp;
}

class Monster
{
	public String name;
	public int hp;
	public int attack;
	public int defence;
}

