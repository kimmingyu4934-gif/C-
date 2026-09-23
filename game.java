package 김민규;

import java.util.Scanner;

public class game {
	User 용사;
	Monster 슬라임, 오크, 고블린;
	Monster now_enemy;
	Scanner sc = new Scanner(System.in);
	int chose;

	public game() {
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

	public void init() {
		Scanner sc = new Scanner(System.in);
		name();
		printing(1);
		System.out.println("========게임시작=========");
		Village();
	}

	public void name() {
		System.out.printf("닉네임을 입력하세요.\n>>");
		용사.name = sc.nextLine();
	}

	public void monster(int a) {
		switch (a) {
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
		if (0 < a && a < 4) {
			int store = now_enemy.hp;
			System.out.println(now_enemy.name + "이 나타났습니다!");
			System.out.println(now_enemy.name + " 공격력 : " + now_enemy.attack);

			boolean startflag = true;
			while (now_enemy.hp > 0) {

				printing(2);
				chose = sc.nextInt();
				if (chose == 2) {
					if (startflag) {
						System.out.println("마을로 돌아갑니다.");
					} else {
						System.out.println("무사히 도망쳤습니다.");
					}
					return;
				}
				용사.hp -= now_enemy.attack;
				now_enemy.hp -= 용사.attack;
			}

			System.out.println("처치하셨습니다.");
			System.out.println("경험치 10++");
			System.out.println("골드20++");
			용사.xp += 10;
			용사.gold += 20;
			now_enemy.hp = store;
			System.out.println();
		}

	}

	public void printing(int i) {
		if (i == 0) {
			System.out.println("===== 사냥터 =====");
			System.out.println("1. 슬라임");
			System.out.println("2. 고블린");
			System.out.println("3. 오크");
			System.out.println("4. 돌아가기");
			System.out.print(">>");
			return;
		}
		if (i == 1) {
			System.out.println("[" + 용사.name + "]Lv." + 용사.lv + "전사");
			System.out.println("");
			System.out.println("HP : " + 용사.hp);
			System.out.println("공격력 : " + 용사.attack);
			System.out.println("방어력 : " + 용사.defence);
			System.out.println("자원 : " + 용사.gold);
		}

		if (i == 2) {
			System.out.println("현재 나의 hp :" + 용사.hp);
			System.out.println("현재 몬스터 hp : " + now_enemy.hp);
			System.out.println("1.계속 싸우기\n2.도망가기");
			System.out.print(">>");
		}
		
		if(i == 3)
		{
			System.out.println("현재 공격력 : " + 용사.attack);
			System.out.println("현재 방어력 : " + 용사.defence);
			System.out.println("현재 경험치 : " + 용사.xp);
		}

		if(i == 4)
		{
			System.out.println("=======마을=======");
			System.out.println("1.상점");
			System.out.println("2.사냥터");
			System.out.println("3.게임 종료");
			System.out.print(">>");
		}
	}

	public static void main(String[] args) {
		game g = new game();
		g.init();
	}

	public void Village() {
		while (true) {
			printing(4);
			chose = sc.nextInt();
			if (chose == 1)
			{
				store();
			}

			else if (chose == 2) {
				printing(0);
				chose = sc.nextInt();
				monster(chose);
			} else
				return;
		}
	}

	public void store() 
	{
		Item[] items = 
		{
				new Item("방어의물약", 0, 10, 0, 30),
				new Item("공격의물약", 10, 0, 0, 20),
				new Item("xp증가", 0, 10, 0, 10)
		};
		while (true) 
		{
			System.out.println(용사.name + "님의 자원은" + 용사.gold + "입니다.");
			for(int i  = 0; i < items.length; i++)
			{
				System.out.println(i+1 + "." + items[i].name + "가격 : " + items[i].price);
			}
			System.out.print(">>");
			chose = sc.nextInt();
			if(chose == 1)
			{
				if(용사.gold <  items[chose-1].price)
				{
					System.out.println("자원이 부족합니다.");
				}
				else
				{
					용사.attack += 10;
					용사.gold -= 20;
					printing(3);
				}
			}
			
			if(chose == 2)
			{
				if(용사.gold < items[chose-1].price)
				{
					System.out.println("자원이 부족합니다.");
				}
				else
				{
					용사.defence += 10;
					용사.gold -= 30;
					printing(3);
				}
			}
			
			if(chose == 3)
			{
				if(용사.gold <  items[chose-1].price)
				{
					System.out.println("자원이 부족합니다.");
				}
				else
				{
					용사.xp += 10;
					용사.gold -= 10;
					printing(3);
				}
			}
			else
				return;
		}
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
	public int xp; //경험치 단위 % 
	

	public void settingItem(Item buyitem)
	{
		attack += buyitem.attack;
		defence += buyitem.defence;
		xp += buyitem.xp;
		levelup();
	}
	
	public void levelup()
	{
		while(xp >= 100) {
			xp -= 100;
			lv++;
		}
	}
}

class Monster 
{
	public String name;
	public int hp;
	public int attack;
	public int defence;
}

class Item{
	public String name;
	public int attack;
	public int defence;
	public int xp;
	public int price;
	
	public Item() {
		init("", 0,0,0,0);
	}
	public Item(String name) {
		init(name, 0,0,0,0);
	}
	public Item(String name, int attack, int defence, int xp, int price) {
		init(name, attack, defence, xp,price );
	}
	
	public void init(String name, int attack, int defence, int xp, int price)
	{
		this.name = name;
		this.attack = attack;
		this.defence = defence;
		this.xp = xp;
		this.price = price;
	}
	
}
//
//class Price 
//{
//	public int attack;
//	public int defence;
//	public int xp;
//}