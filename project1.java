package 김민규;

import java.util.Scanner;

public class project1
{
	public static void main(String[] args)
	{
		String name;
		int lv = 5;
		int hp = 180;
		int attack = 45;
		int defence = 20;
		int gold = 40;
		int xp = 0;
		
		System.out.printf("닉네임을 입력하세요.\n>>");
		Scanner sc = new Scanner(System.in);
		name = sc.next();
		System.out.println("========게임시작=========");
		
		while(hp > 0)
		{
			System.out.println("[" + name + "]Lv." + lv + "전사");
			System.out.println("");
			System.out.println("HP : "+hp);
			System.out.println("공격력 : "+ attack);
			System.out.println("방어력 : "+ defence);
			System.out.println("자원 : " + gold);
			
			int slime_hp = 50;
			int slime_attack = 10;
			int goblin_hp = 80;
			int goblin_attack = 15;
			int orc_hp = 150;
			int orc_attack = 25;
			int chose;
			System.out.println("===== 사냥터 =====");
			System.out.println("1. 슬라임");
			System.out.println("2. 고블린");
			System.out.println("3. 오크");
			System.out.println("4. 돌아가기");
			System.out.print(">>");
			chose = sc.nextInt();

			switch(chose)
			{
				case 1:
					System.out.println("슬라임이 나타났습니다!");
					System.out.println("슬라임 Hp : " + slime_hp);
					System.out.println("슬라임 공격력 : " + slime_attack);
					break;
				case 2:
					System.out.println("고블린이 나타났습니다!");
					System.out.println("고블린 Hp : " + goblin_hp);
					System.out.println("고블린 공격력 : " + goblin_attack);
					break;
				case 3:
					System.out.println("오크가 나타났습니다!");
					System.out.println("오크 Hp : " + orc_hp);
					System.out.println("오크 공격력 : " + orc_attack);
					break;
				case 4:
					System.out.println("마을로 돌아갑니다.");
					break;
			}

			System.out.println("\n1. 공격 \n2. 도망가기");
			System.out.print(">>");
			chose = sc.nextInt();
			
			if(chose == 1)
			{
				while(slime_hp > 0)
				{
					hp -= slime_attack - defence/5 ;
					slime_hp -= attack;
					if(slime_hp <= 0)
					{
						System.out.println("슬라임을 처치하셨습니다.");
						System.out.println("경험치 +20"); xp += 20;
						System.out.println("골드 +10"); gold += 10;

						if(xp >= 100)
					{
						System.out.println("레벨업 하셨습니다.");
						for(int i = 0; i < xp / 100; i++)
						{
							lv += 1;
							hp += 20;
							attack += 5;
							defence += 2;
							xp -= 100;
							System.out.println(lv + "레벨이 되었습니다.");
						}
					}
						break;
					}
					
					if(hp <= 0)
					{
						System.out.println("플레이어가 죽었습니다.");
						break;
					}
					System.out.println("\n1. 계속공격하기 \n2. 도망가기");
					System.out.print(">>");
					chose = sc.nextInt();
				}

			}
			
			if(chose == 2)
			{
				System.out.println("무사히 도망갔습니다.");
				break;
			}
		}
	}
}
