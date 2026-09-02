package 김민규;

import java.util.Scanner;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class p166_RegularExpression 
{
	private static String getString(String s1, String s2, String s3) 
	{
		int flag = 1;
		String input = null;
		Matcher m;
		Pattern  p;
		while(flag != 0)
		{
			System.out.println(s1);
			Scanner sc = new Scanner(System.in);
			input = sc.nextLine();
		
			p = Pattern.compile(s2);
			m = p.matcher(input);
			if(!m.matches())
			{
				System.out.println(s3 + "다시 작성하세요.");
				continue;
			}
			flag = 0;
		}
		return input;
	}
	public static void main(String[] args)
	{
		String name = getString("이름 : ","^[가-힣]{2,4}$",  "이름 형식에 맞지 않습니다.");
		
		String gender = getString("성별 : ","^남|여$","성별 형식에 맞지 않습니다.");

		String adress = getString("주소 : ","^[가-힣]{2,4}도\\s+[가-힣]{2,4}시\\s+[가-힣]{2,6}로\\s+\\d{2,4}$","주소형식에 맞지 않습니다.");
		
		String postal_code = getString("우편번호 : ","^\\d{5}$","우편번호 형식에 마지 않습니다");
		
		String phone_number = getString("핸드폰 번호 : ","^01[01]-\\d{4}-\\d{4}$","핸드폰 번호 형식에 맞지 않습니다");
		
		String email = getString("이메일 : ","^([A-Z]|[a-z]|[0-9])+@(gmail|naver)\\.com$","이메일 형식에 맞지 않습니다.");
		
		String blood = getString("혈액혁 : ","^(A|B|O|AB)$","혈액형 형식에 맞지 않습니다");
		
		
		System.out.println("모든 자료를 형식에 맞게 입력하셨습니다.");
		System.out.println("이름 : "+ name);
		System.out.println("성별 : " + gender);
		System.out.println("주소 : "+ adress);
		System.out.println("우편번호 : "+ postal_code);
		System.out.println("핸드폰 번호 : "+ phone_number);
		System.out.println("이메일 :" + email);
		System.out.println("혈액형 : " + blood + "형");
//		Scanner sc = new Scanner (System.in);
//		String input;
//		Pattern pattern;
//		Matcher m;
//		
//		System.out.print("이름 : ");
//		input = sc.nextLine();
//		pattern = Pattern.compile("^[가-힣]{2,4}$");
//		m = pattern.matcher(input);
//		if(!m.matches()) {
//			System.out.println("이름 형식에 맞지 않습니다.");
//			return;
//		}
//		
//		System.out.print("주소 : ");
//		input = sc.nextLine();
//		pattern = Pattern.compile("^[가-힣]{2,4}도\\s+[가-힣]{2,4}시\\s+[가-힣]{2,6}로\\s+\\d{2,4}$");
//		m = pattern.matcher(input);
//		if(!m.matches()) {
//			System.out.println("주소 형식에 맞지 않습니다.");
//			return;
//		}
//		
//		System.out.print("우편번호 : ");
//		input = sc.next();
//		pattern = Pattern.compile("^\\d{5}$");
//		m = pattern.matcher(input);
//		if(!m.matches()) {
//			System.out.println("우편번호가 형식에 맞지 않습니다.");
//			return;
//		}
//		
//		System.out.print("핸드폰 번호 : ");
//		input = sc.next();
//		pattern = Pattern.compile("^01[01]-\\d{4}-\\d{4}$");
//		m = pattern.matcher(input);
//		if(!m.matches()) {
//			System.out.println("핸드폰 번호 형식에 맞지 않습니다.");
//			return;
//		}
	
	}

}
