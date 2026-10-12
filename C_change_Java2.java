package 김민규;
import java.util.Scanner;
import java.util.Random;
public class C_change_Java2 
{
	public static void main(String[] args) 
	{
		Dicegame game = new Dicegame();
		game.startPlaying();
	}
}
class Dicegame
{
	Scanner sc = new Scanner(System.in);
	Random random = new Random();
	int stage = 1;
	int scope = 3;
	int life = 5;
	String chose = "y";
	
	private int RollDice()
	{
		int dice_random = (int)((random.nextInt() % scope) + 1);
		return dice_random;
	}
	private int getUserInput(String prompt, String stage)
	{
		int chose;
		System.out.println(stage);
		System.out.print(prompt);
		chose = sc.nextInt();
		return chose;
	}
	private boolean checkUserGuess(int ce, int er)
	{
		if(ce == er)
		{
			System.out.println("맞았습니다.");
			scope++;
			stage++;
			return true;
		}
		else
		{
			System.out.println("틀렸습니다.");
			return false;
		}
	}
	public void startPlaying()
	{
		while(true)
		{
			int dice = RollDice();
			int user = getUserInput("예상 값을 입력하시오: ", "스테이지" + stage);
			boolean decide = checkUserGuess(dice,user);
			
			if(!decide)
			{
				System.out.println("게임을 다시 하시겠습니까?(y/n)");
				System.out.print(">>");
				chose = sc.next();
				
				if(chose.equals("y"))
				{
					stage = 1;
				}
				else
				{
					break;
					//return;
				}
			}
		}
		System.out.println("게임을 종료합니다.");
		
	}
}