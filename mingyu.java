package 김민규;

import java.util.Scanner;

public class mingyu {

	public static void main(String[] args) {

		int person;
		int menuCount = 0;
		String h_name;
		String m_name;

		System.out.println("===== Smart Dutch Pay =====");
		System.out.println("더치페이 계산기를 시작합니다.");

		Scanner sc = new Scanner(System.in);
		while (true) {
			System.out.print("사람 인원수를 입력하세요.\n>> ");
			person = sc.nextInt();
			if (person > 0)
				break;
			else
				System.out.println("잘못입력하셨습니다. 다시 입력하십시오.");
		}

		Menu[] full_menus = new Menu[1000];
		Humantype[] humans = new Humantype[person];

		for (int i = 0; i < person; i++) {
			System.out.print((i + 1) + "번째 이름을 입력하세요 : ");
			Humantype human = new Humantype();
			h_name = sc.next();
			human.setHuman(h_name);
			humans[i] = human;
		}

		for (int i = 0;; i++) {
			System.out.print((i + 1) + "번째 메뉴 이름을 입력하세요.(0을 입력하면 종료)\n>> ");
			m_name = sc.next();

			if (m_name.equals("0"))
				break;

			Menu menu = new Menu();
			menu.setMenuName(m_name);

			while (true) {
				System.out.print("메뉴 가격을 입력하세요.\n>> ");
				int price = sc.nextInt();
				menu.setPrice(price);
				if (menu.getPrice() > 0)
					break;
				else
					System.out.println("잘못 입력하셨습니다. 다시 입력하세요.");
			}
			
			full_menus[menuCount] = menu;
			menuCount++;

			System.out.println("누가 먹었나요?");
			for (int j = 0; j < person; j++) {
				System.out.println((j + 1) + ". " + humans[j].getHuman());
			}

			System.out.println("먹은 사람 번호를 입력하세요. (0을 입력하면 완료)");
			int choseCount = 0;

			while (true) {
				System.out.print(">> ");
				int input = sc.nextInt();

				if (input == 0) {
					if (choseCount == 0) {
						System.out.println("최소한명은 고르세요.");
						continue;
					} else {
						break;
					}
				}

				if (input < 1 || input > person) {
					System.out.println("다시 입력해주세요.");
					continue;
				}

				choseCount++;
				Humantype human = humans[input - 1];
				human.setMy_menu(menu);
			}

			int share_price = menu.getPrice() / choseCount;
			
			for (int r = 0; r < person; r++) {
				Humantype human = humans[r];
				for (int h = 0; h < human.getMenuCount(); h++) {
					if (human.getMy_menu(h) == menu) {
						humans[r].addPrice(share_price);
					}
				}
			}
		}

		System.out.println("\n===== 계산 결과 =====");
		for (int i = 0; i < person; i++) {
			System.out.println(humans[i].getHuman() + " 님 금액: " + humans[i].getPrice() + "원");
		}
		
		sc.close();
	}
}

class Humantype {
	private String human;
	private int price = 0;
	private Menu[] my_menu = new Menu[100];
	private int menu_count = 0;

	public String getHuman() {
		return human;
	}

	public void addPrice(int share_price) {
		price += share_price;	
	}

	public void setHuman(String human) {
		this.human = human;
	}

	public int getPrice() {
		return price;
	}

	public void setPrice(int price) {
		this.price = price;
	}

	public int getMenuCount() {
		return menu_count;
	}

	public Menu getMy_menu(int i) {
		return my_menu[i];
	}

	public void setMy_menu(Menu menu) {
		this.my_menu[menu_count] = menu;
		menu_count++;
	}
}

class Menu {
	private String menuName;
	private int price;

	public int getPrice() {
		return price;
	}

	public void setPrice(int price) {
		this.price = price;
	}

	public String getMenuName() {
		return menuName;
	}

	public void setMenuName(String menuName) 
	{
		this.menuName = menuName;
	}
}