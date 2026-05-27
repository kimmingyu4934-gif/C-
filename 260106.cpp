//#include <stdio.h>
//
//int main()
//{
//	printf("안녕하세요\n");
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	printf("안녕하세요\n안녕하세요\n안녕하세요\n");
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//		printf("안녕하세요\n");
//		printf("안녕하세요\n");
//		printf("안녕하세요\n");
//		return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//		printf("사과 1개\n");
//		return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//		int apple = 1;
//		printf("사과 %d개\n", apple );
//		return 0;
//}
//#include <stdio.h>
//int main()
//{
//		printf("키보드 3개\n");
//		printf("마우스 2개\n");
//		return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int keyboard = 3;
//	int mouse = 2;
//	printf("키보드: %d개\n", keyboard);
//	printf("마우스: %d개\n", mouse);
//	return 0;
//}
//int main()
//{
//		int coin1 = 500;
//		int coin2 = 1000;
//		printf("%d + %d= %d\n",
//			coin1, coin2, coin1 + coin2);
//		return 0;
//}
//int main()
//{
//	char Alpha;
//	Alpha = 'A';
//	printf("A = %c, A = %d\n", Alpha, Alpha);
//	return 0;
//}
//int main()
//{
//	double pi;
//	pi = 3.14;
//	float e = 2.718;
//	printf("pi = %.2lf, e = %.3f.. \n", pi, e);
//	return 0;
//}
//int main()
//{
//	int radius = 5;
//	double pi;
//	pi = 3.14;
//	float area;
//	//반지름*반지름*3.14
//	area = radius * radius * pi;
//	printf("원의넓이=%f\n" ,area);
//	return 0;
//
//
//}
//int main()
//{
//	int bottom_side;
//	int upper_edge;
//	int high;
//	bottom_side = 3;
//	upper_edge = 5;
//	high = 7;
//	float area;
//	area = ((bottom_side + upper_edge) * high) / 2;
//	printf("사다리꼴의 넓이 = %f\n", area);
//	return 0;
//}
//int main()
//{
//	int k;
//	printf("원하는 숫자를 입력 :");
//	scanf("%d", &k); //vs: scanf_s
//	printf("입력한 숫자는 : %d\n", k);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int y, x;
//	printf("더하고 싶은 값 두개 입력:");
//	scanf("%d %d", &y, &x); //scanf_s
//	printf("두 값의 합은 %d입니다.\n", y + x);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char a, b, c;
//	printf("문자 두개 입력:");
//	scanf("%c%c%c", &a, &b, &c);
//	printf("문자출력 : %c%c%c\n", a, b, c);
//	return 0;

//}
//#include <stdio.h>
//int main()
//{
//	int r;
//	printf("반지름 길이 입력:");
//	scanf("%d", &r);
//	float area;
//	area = r * r * 3.14;
//	printf("원의넓의는=%f\n", area);
//	return 0;
//
//}
//#include <stdio.h>
//int main()
//{
//	float w1;
//	float w2;
//	float h;
//	printf("숫자 3개 입력:");
//	scanf("%f%f%f", &w1, &w2, &h);
//	float area;
//	area = ((w1 + w2) * h) / 2.0f;
//	printf("사다리꼴의 넓의:%f\n", area);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 15;
//	int b = 3;
//	printf("%d + %d = %d\n", a, b, a + b);
//	printf("%d - %d = %d\n", a, b, a - b);
//	printf("%d * %d = %d\n", a, b, a * b);
//	printf("%d / %d = %d\n", a, b, a / b);
//	printf("%d %% %d = %d\n", a, b, a % b);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int number = 1;
//	number = number + 3; printf("%2d\n",number);
//	number -= 2;		 printf("%2d\n", number);
//	number--;			 printf("%2d\n", number);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	printf("%d\n", a++);
//	printf("%d\n", a++);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	printf("%d\n", ++a);
//	printf("%d\n", a);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a;
//	int b;
//	printf("숫자 두개를 입력:");
//	scanf("%d%d", &a, &b);
//	printf("%d + %d = %d\n",a, b, a + b);
//	printf("%d - %d = %d\n", a, b, a - b);
//	printf("%d * %d = %d\n", a, b, a * b);
//	printf("%d / %d = %d\n", a, b, a / b);
//	printf("%d %% %d = %d\n",a, b, a % b);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	
//	int first = 1 % 4;
//	printf("%d = 1%%4\n", first);
//	int second = 5 % 3;
//	printf("%d = 5%%3\n", second);
//	int third = 4 % 2;
//	printf("%d = 4%%2\n", third);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int number1, number2;
//	scanf("%d %d", &number1, &number2);
//	printf("%d =number1%%4\n", number1 % 4);
//	printf("%d =number2%%3\n", number2 % 3);
//
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int first = 1 % 3;
//	printf("%d = 1%%3\n", first);
//	int second = 2 % 3;
//	printf("%d =2%%3\n", second);
//	int third = 3 % 3;
//	printf("%d = 3%%3\n", third);
//	int fourth = 4 % 3;
//	printf("%d = 4%%3\n", fourth);
//	int fifth = 5 % 3;
//	printf("%d = 5%%3\n", fifth);
//	int sixth = 6 % 3;
//	printf("%d = 6%%3\n", sixth);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int number1;
//	printf("숫자 입력:");
//	scanf("%d", &number1);
//	int value = number1 % 50;
//	printf("%d %% 50=%d\n", number1, value);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int data1 = 6 / 2;
//	printf("%d =6/2\n", data1);
//	int data2 = 6 / 3;
//	printf("%d =6/3\n", data2);
//	int data3 = 6 / 4;
//	printf("%d =6/4\n", data3);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int coin;
//	printf("돈을 입력해주세요.(원)");
//	scanf("%d", &coin);
//
//	int coin10000 = coin / 10000;
//	coin = coin % 10000;
//	int coin5000 = coin / 5000;
//	coin = coin % 5000;
//	int coin1000 = coin / 1000;
//	printf("만원권 %d개,", coin10000);
//	printf("오천원권 %d개,", coin5000);
//	printf("천원권 %d개,", coin1000);
//	printf("나머지는 동전입니다.");
//
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int A;
//	int price;
//	int coin = 1000;
//	printf("가격을 입력하시요");
//	scanf("%d", &price);
//	int change = coin - price;
//	int coin500= change / 500;
//	A = change % 500;
//	int coin100 = A / 100;
//	A = A % 100;
//	int coin50 = A / 50;
//	A = A % 50;
//	int coin10 = A / 10;
//	printf("500원 동전은 %d개 입니다\n", coin500);
//	printf("100원 동전은 %d개 입니다\n", coin100);
//	printf("50원 동전은 %d개 입니다\n", coin50);
//	printf("10원 동전은 %d개 입니다\n", coin10);
//
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int randInt = rand() % 10;
//	int nextInt = rand() % 10;
//	printf("첫숫자 :%d\n", randInt);
//	printf("다음숫자 :%d\n", nextInt);
//
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int randInt = rand() % 10;
//	int nextInt = rand() % 10+50;
//	printf("첫숫자 : %d\n", randInt);//0 ~9
//	printf("다음숫자 : %d\n", nextInt);//50~59
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//	
//int main()
//{
//	srand((unsigned int)time(NULL));
//	printf("내 주머니에 있는 돈은");
//	int myMoney = (rand() % 10 + 1) * 1000;
//		printf("%d원이다.\n", myMoney);
//		int coin500 = rand() % 4 * 500; //0~3 0~1500
//		int coin100 = rand() % 5000; //0~4999
//		coin100 = coin100 / 100 * 100; // 0-4900
// 		printf("그리고 과좌의 가격은");
//		printf("%d원이다.", coin500 + coin100);
//		printf("\n나는 과자를 살수 있을까?");
//		return 0;
//	}
//int main()

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int randInt = rand() % 4 * 500; //50~59
//	int nextInt = (rand() % 10+1)*1000;  //1000-10000
//	printf("첫숫자 : %d\n", randInt);
//	printf("다음숫자 : %d\n", nextInt);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple == 15)
//	{
//		printf("apple은 15개가 있습니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple != 17)
//	{
//		printf("apple은 17개가 아닙니다.\n");
//	}
//	return 0;
// }
//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (apple > 7)
//	{
//		printf("apple은 7개보다 많습니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (apple < 20)
//	{
//		printf("apple은 20개보다 적습니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (!apple) // apple이 0이면 실행
//	{
//		printf("apple은 하나도 없습니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int apple = 0;
//	if (apple == 10)
//	{
//		printf("apple은 10개 있습니다.\n");
//	}
//	else if (apple == 0)
//	{
//		printf("apple은 하나도 없습니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (!apple)
//	{
//		printf("apple은 하나도 없습니다.\n");
//	}
//	else
//	{
//		printf("apple은 0개가 아닙니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int a;
//	printf("숫자를 입력하시오");
//	scanf("%d", &a);
//	if (a > 0)
//	{
//		printf("양수입니다");
//	}
//	else if (a < 0)
//	{
//		printf("음수입니다");
//	}
//	else
//	{
//		printf("0입니다");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int input;
//	printf("숫자를 입력하시오");
//	scanf("%d", &input);
//	if (input >= 10 && input <= 99)
//	{
//		printf("input은 두자리 숫자입니다");
//	}
//	else
//	{
//		printf("input은 두자리숫자가 아닙니다.");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int height = 170;
//	if (height > 150)
//	{
//		printf("키가 150 이상입니다.\n");
//	}
//	if (height > 160)
//	{
//		printf("키가 160 이상입니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int height = 170;
//	if (height > 170)
//	{
//		printf("키가 150 이상입니다.\n");
//	}
//	else if (height > 160)
//	{
//		printf("키가 160이상입니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int y_age;
//	printf("나이를 입력하시오.");
//	scanf("%d", &y_age);
//	if (y_age > 0)
//	{
//		printf("전체 관람가\n");
//	}
//	if (y_age >= 12)
//	{
//		printf("12세 관람가\n");
//	}
//	if (y_age >= 15)
//	{
//		printf("15세 관람가");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int money;
//	printf("지폐로 교환할 돈은?\n");
//	scanf("%d", &money);
//	int a=50000;
//	int b=10000;
//	int c=5000;
//	int d=1000;
//	int result;
//	result = money / a;//15, 777777, 50000
//	printf("오만 원짜리 =>%d\n", result);
//	result = money % a;//277777, 777777,50000
//	money = result / b;//2, 27777, 10000
//	printf("만 원 짜리 =>%d\n", money);
//	result = result % b;//7777, 27777, 10000
//	money = result / c;//1, 7777, 5000
//	printf("오천 원 짜리 =>%d\n", money);
//	money = result % c;//2777, 7777, 5000
//	result = money / d;//2, 2777 , 1000
//	printf("천 원짜리 =>%d\n", result);
//	result = money % d;//777, 2777, 1000
//	printf("지폐로 바꾸지 못한 잔돈=>%d", result);
//}
//#include <stdio.h>
//
//int main()
//{
//	int num = 100;
//	num++;
//	printf("%d", num);
//	++num;
//	printf("%d", num);
//	printf("%d", num++);
//	printf("%d", ++num);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	char initial;
//	printf("영어 하나를 입력하시오\n");
//	scanf("%c", &initial);//'A':65
//	if ('A' <= initial && 'Z' >= initial)
//	{
//		printf("대문자");
//	}
//	else if ('a' <= initial && 'z' >= initial)
//	{
//		printf("소문자");
//	}
//	return 0;
//	
//
//}
//#include <stdio.h>
//
//int main()
//{
//	int number, answer;
//	scanf("%d %d", &number, &answer);
//	if (number > answer) {
//		printf("숫자1이 숫자2보다 큽니다.\n");
//	}
//	else
//	{
//		if (number < answer)
//		{
//			printf("숫자2가 숫자1보다 큽니다.\n");
//		}
//		else
//		{
//			printf("숫자1과 숫자2가 같습니다.\n");
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int number, answer;
//	scanf("%d %d", &number, &answer);
//	if (number > answer) {
//		printf("숫자1이 숫자2보다 큽니다.\n");
//	}
//	else if (number < answer)
//	{
//		printf("숫자2가 숫자1보다 큽니다.\n");
//	}
//	else
//	{
//		printf("숫자1과 숫자2가 같습니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int score = 75;
//	if (score > 90) {
//		printf("성적은 A등급 입니다\n");
//	}
//	else if (score > 80) {
//		printf("성적은 B등급입니다.\n");
//	}
//	else if (score > 70) {
//		printf("성적은 C등급입니다.\n");
//	}
//	else if (score > 60) {
//		printf("성적은 D등급입니다.\n");
//	}
//	else {
//		printf("성적은 F등급압니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int number = -11;
//	if (number > 0) {
//		printf("number는 양수입니다");
//	}
//	else if (number < 0) {
//		printf("number는 음수입니다");
//	}
//	else {
//		printf("number는 0입니다");
//	}
//	if (number % 2 == 0)
//	{
//		printf("number는 짝수입니다");
//	}
//	else
//	{
//		printf("number는 홀수입니다");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char arrow;
//	printf("방향키 하나를 입력하시오\n");
//	scanf("%c", &arrow);
//	if (arrow == 0x77) {
//		printf("위 방향키를 입력하셨습니다");
//	}
//	if (arrow == 0x61) {
//		printf("좌 방향키를 입력하셨습니다");
//	}
//	if (arrow == 0x64) {
//		printf("우 방향키를 입력하셨습니다");
//	}
//	if (arrow == 0x73) {
//		printf("아래 방향키를 입력하셨습니다");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int gauge;
//	printf("0~100사이의 수를 입력하시오\n");
//	scanf("%d", &gauge);
//	if (45 <= gauge && gauge<=55) {
//		printf("Perfect");
//	}
//	else if (35 <= gauge && gauge <= 65) {
//		printf("Exelent");
//	}
//	else
//	{
//		printf("good");
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main()
//{
//	int input, cnt=1;
//	srand((unsigned int)time(NULL));
//	int random = rand() % 2000 + 1;
//	for (; cnt<=12; cnt++)
//	{
//		printf("값을 입력하시오\n");
//		scanf("%d", &input);
//		if (input > rand()) {
//			printf("up\n");
//		}
//		else if (input < rand()) {
//			printf("down\n");
//		}
//		else
//		{
//			printf("perfect\n");
//			break;
//		}
//	}
//	if (cnt >= 13) {
//		printf("실패\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int input;
//	printf("값을 입력하시요\n");
//	scanf("%d", &input);
//	if (input % 3 == 0) {
//		printf("input은3의 배수입니다.\n");
//		if (input % 6 == 0) {
//			printf("input은6의 배수입니다.\n");
//		}
//		if (input % 9 == 0) {
//			printf("input은9의 배수입니다.\n");
//		}
//	}
//	else {
//		printf(".");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char command = 'i';
//
//	switch(command)
//	{
//	case 'i':
//		printf("아임템창 오픈\n");
//	}
//	return 0;
//}
//#include <stdio.h>

//int main()
//{
//	char command = 'i';
//	switch (command)
//	{
//	case 'i':
//		printf("아이템창 오픈\n");
//	case 'm':
//		printf("지도창 오픈\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	char command = 'm';
//
//	switch (command)
//	{
//	case 'i':	printf("아이템창 오픈\n");
//	case 'm':	printf("지도창 오픈\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	char command = 'm';
//	switch (command)
//	{
//	case 'i':	printf("아이템창 오픈\n");
//				break;
//	case 'm':	printf("지도창 오픈\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	char command;
//	printf("커멘드를 압력하세요:\n");
//	scanf("%c", &command);
//	switch (command)
//	{
//	case 'i':	printf("아이템창 오픈\n");
//				break;
//	case 'm':	printf("지도창 오픈\n");
//				break;
//	default: printf("지정된 기능이 없습니다");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	char number = 1;
//	switch (number)
//	{
//	case 1:printf("two\n");	break;
//	case 2:printf("one\n");	break;
//	case 3:printf("three\n");	break;
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int input1, input2;
//	char oper;
//	printf("숫자두개를 입력하시오\n");
//	printf("기호 한개를 입력하시오\n");
//	scanf("%d %d %c", &input1, &input2, & oper);
//	switch (oper)
//	{
//	case'+':printf("%d + %d = %d\n", input1, input2, input1 + input2);	break;
//	case'-':printf("%d - %d = %d\n", input1, input2, input1 - input2);	break;
//	case'*':printf("%d * %d = %d\n", input1, input2, input1 * input2);	break;
//	case'/':printf("%d / %d = %d\n", input1, input2, input1 / input2);	break;
//	case'%':printf("%d %% %d = %d\n", input1, input2, input1 % input2);	break;
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int month;
//	printf("1~12중에 하나를 입력하시요\n");
//	scanf("%d", &month);
//	switch (month)
//	{
//	case 1:printf("January\n");		break;
//	case 2:printf("February\n");	break;
//	case 3:printf("March\n");	break;
//	case 4:printf("April\n");	break;
//	case 5:printf("May\n");	break;
//	case 6:printf("June\n");	break;
//	case 7:printf("July\n");	break;
//	case 8:printf("Agust\n");	break;
//	case 9:printf("september\n");	break;
//	case 10:printf("Octuber\n");	break;
//	case 11:printf("November\n");	break;
//	case 12:printf("Decenber\n");	break;
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	char command;
//
//	printf("<, a 왼쪽 이동 \n");
//	printf(">, d 오른쪽 이동\n");
//	scanf("%c", &command);
//	switch (command)
//	{
//	case '<' :
//	case 'a' :
//		printf("왼쪽으로 이동합니다\n");
//		break;
//	case '>': case'd':
//		printf("오른쪽으로 이동합니다.\n");
//		break;
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int input;
//	const int option = 3;
//	printf("메뉴를 선택하세요.");
//	printf("1.새 게임 2.이어하기 3.옵션\n");
//	scanf("%d", &input);
//
//	switch (input)
//	{
//	case 1:
//		printf("새 게임 시작\n");
//		break;
//	case 2:
//		printf("세이브 테이터 로드.\n");
//		break;
//	case option:
//		printf("옵션 세팅.\n");
//		break;
//	default :
//		printf("저장된 기능이 없습니다.\n");
//	}
//}
//#include <stdio.h>
//int main()
//{
//	int number;
//	printf("0부터9사이의 숫자를 고르시요\n");
//	scanf("%d", &number);
//	switch(number)
//	{
//	case 3:
//	case 6:
//	case 9:
//		printf("짝\n");
//		break;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char command = 'x';
//
//	switch (command)
//	{
//	case 'x':	printf("알파벳 x 입력.\n");
//		break;
//	case 'X':	printf("엑스표 입력\n");
//		break;
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int number = 1;
//	int multi = 1;
//	while (1)
//	{
//		multi = number * multi;
//		if (multi >= 50000)
//		{
//			printf("%d", number);
//			break;
//		}
//		number ++;
//	}
//}
//#include <stdio.h>
//
//int main()
//{
//	char alphabet='A';
//	while (alphabet <= 'Z')
//	{
//		if (alphabet != 'F')
//		{
//			printf("%c\n", alphabet);
//		}
//		alphabet++;
//	}
//}
//#include <stdio.h>
//
//int main()
//{
//	int input= 0;
//	int total = 0;
//	int turn = 0;
//	while (1)
//	{
//		printf("%c:", 'A' + turn);
//		scanf("%d", &input);
//		if (input > 3 || input < 1)
//		{
//			printf("다시입력해주세요\n");
//			continue;
//		}
//		total += input;
//		printf("=> %d\n", total);
//
//		//turn = !turn;
//
//		if (total >= 31)
//		{
//			break;
//		}
//		turn++;
//		turn %= 5;
//	}
//	/*if (turn == 0)
//	{
//		printf("A가 졌습니다\n");
//	}
//	else
//	{
//		printf("B가 졌습니다\n");
//	}
//	*/
//	printf("%c가 졌습니다\n", 'A' + turn);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int temperature = 30;
//	do
//	{
//		printf("현재 온도 :%d도\n", temperature);
//		temperature--;
//	} while (temperature > 28);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int input;
//	enum { GAMEOVER, NEWGAME, LOADGAME, OPTION };
//	do {
//		printf("\n메뉴를 선택하세요\n");
//		printf("1.새 게암 2.이어하기 3.옵션(0:게임종료)\n");
//		scanf("%d", &input);
//
//		switch (input) {
//		case NEWGAME:
//			printf("새 게임 시작\n");
//			break;
//
//		case LOADGAME:
//			printf("세이브 데이터 로드\n");
//			break;
//		case OPTION:
//			printf("옵션 세팅\n");
//			break;
//		}
//	} while (input != GAMEOVER);
//
//	printf("게임을 종료합니다\n");
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int select;
//	do {
//	printf("메뉴를 선택해주세요\n");
//	printf("1.로그인 2.회원가입 3.옵션 4.만든 사람들\n");
//	scanf("%d", &select);
//	switch (select)
//	{
//	case 1:
//		printf("로그인\n");
//		break;
//	case 2:
//		printf("회원가입\n");
//		break;
//	case 3:
//		printf("옵션\n");
//		break;
//	case 4:
//		printf("만든 사람들\n");
//		break;
//	}
//	} while (select>=1 && select<=4);
//
//	printf("out\n");
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int command;
//	int day = 0;
//	int study = 0;
//	int sport = 0;
//	int singing = 0;
//	int reading = 0;
//	do {
//		printf("\n%d번쨰 날 !\n", ++day);
//		printf("오늘도 뭐 할까요?\n");
//		printf("1. 코딩공부한다.\n");
//		printf("2. 운동한다.\n");
//		printf("3. 노래한다.\n");
//		printf("4. 책읽는다.\n");
//		printf("5. 그외 끝낸다.\n>>");
//		scanf("%d", &command);
//		int randInt = rand() % 5 + 1;
//		if (command == 1)
//		{	
//			switch (randInt)
//			{
//			case 1:
//				printf("기분아 좋네요\n");
//			case 3:
//				printf("도서관에서. ");
//				break;
//			case 2:
//				printf("기분이 나빠요.\n");
//			case 4:
//				printf("카페에서 ");
//				break;
//			case 5:
//				printf("학원에서 ");
//			}
//			printf("코딩 공부합니다\n");
//			study++;
//		}
//		else if (command == 2)
//		{
//			switch (randInt)
//			{
//			case 1:
//				printf("기분이 좋아요\n");
//			case 2:
//				printf("헬스장에서 ");
//				break;
//			case 3:
//				printf("기분이 안좋아요\n");
//			case 4:
//				printf("집에서 ");
//				break;
//			}
//			printf("운동합니다\n");
//			sport++;
//		}
//		else if (command == 3)
//		{
//			switch (randInt)
//			{
//			case 1:
//				printf("기분이 나빠요\n");
//			case 3:
//				printf("집에서 ");
//				break;
//			case 2:
//				printf("기분이 좋아요\n");
//			case 4:
//				printf("음악실에서 ");
//				break;
//			}
//			printf("노래를 부릅니다\n");
//			singing++;
//		}
//		else if (command == 4)
//		{
//			switch (randInt)
//			{
//			case 3:
//				printf("기분이 좋네요\n");
//			case 1:
//				printf("도서관에서 ");
//				break;
//			case 2:
//				printf("기분이 나빠요\n");
//			case 4:
//				printf("집에서 ");
//				break;
//			}
//			printf("책을 읽습니다\n");
//			reading++;
//		}
//		else{
//			break;
//		}
//	} while (1);
//	if (day <= 3){
//		printf("그대로입니다...\n");
//	}
//	else {
//		if (study > sport && study > reading && study > singing)
//		{
//		int level = study / 8;
//			switch (level) {
//
//			case 0:
//				printf("코딩새싹이 되었습니다\n");
//				break;
//			case 1:
//				printf("프로그래머가 되었습니다\n");
//				break;
//			case 2:
//				printf("FrontEnd 개발자가 되었습니다\n");
//				break;
//			case 3:
//				printf("BackEnd 개발자가 되었습니다\n");
//				break;
//			default:
//				printf("풀스택 개발자가 되었습니다\n");
//				break;
//			}
//		}
//		else if (sport > study && sport > reading && sport > singing)
//		{
//		int level = sport / 8;
//			switch (level)
//			{
//			case 1:
//				printf("헬스새싹이 되었습니다\n");
//				break;
//			case 2:
//				printf("헬스 마스터가 되었습니다\n");
//				break;
//			case 3:
//				printf("헬스 트레이너가 되었습니다\n");
//				break;
//			}
//		}
//		else if (singing > study && singing > sport && singing > reading)
//		{
//		int level = singing / 8;
//			switch (level)
//			{
//			case 1:
//				printf("노래새싹이 되었습니다\n");
//				break;
//			case 2:
//				printf("노래 장인이 되었습니다\n");
//				break;
//			case 3:
//				printf("음악 선생님이 되었습니다\n");
//				break;
//			}
//		}
//		else if (reading > study && reading > sport && reading > singing)
//		{
//		int level = reading / 8;
//			switch (level)
//			{
//			case 1:
//				printf("책새싹이 되었습니다\n");
//				break;
//			case 2:
//				printf("책 애호가가 되었습니다\n");
//				break;
//			case 3:
//				printf("작가가 되었습니다\n");
//				break;
//			}
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int number;
//	for (number = 10; number <100; number++)
//	{
//		printf("%d\n",number);
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int number;
//	int store=1;
//	for (number = 3; number <= 8; number++)
//	{
//		store = store*number;
//	}
//	printf("%d", store);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int number;
//	for (number = 3; number <= 50; number++)
//	{
//		int ten = number / 10;
//		int first_digit = number % 10;
//
//		if (ten == 3 || first_digit == 3 || first_digit == 6 || first_digit == 9)
//		{
//			printf("%d\n", number);
//		}
//
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int number;
//	printf("100 이하의 제곱수를 출력합니다.\n");
//	for (number = 1; (number * number) <= 100; number++)
//	{
//		printf("%d\n", number * number);
//	}
//	return 0;
//}
//#include <stdio.h> 
//
//int main(){
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++) {
//		printf("양 %d마리\n", sheep);
//	}
//	printf("잠들었다!\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++)
//	{
//		printf("양 %d마리\n", sheep);
//		if (sheep == 3) {
//			printf("도중에 잠들었디\n");
//			break;
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++) {
//		if (sheep == 3) {
//			printf("졸아서 양을 세지 못했다!\n");
//			continue;
//		}
//		printf("양 %d마리\n", sheep);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int start, end, i;
//	printf("시작값 ==>");
//	scanf("%d", &start);
//	printf("끝값 ==>");
//	scanf("%d", &end);
//	i = end - start + 1;
//	if (i < 0)
//	{
//		while (end <= start)
//		{
//			if (end % 2 == 1) {
//				printf("%d\n", end);
//			}
//			end++;
//		}
//	}
//	else
//	{
//		while (start <= end)
//		{
//			if (start % 2 == 1)
//			{
//				printf("%d\n", start);
//			}
//			start++;
//		}
//	}
//}
//#include <stdio.h>
//int main()
//{
//	int number,turn = 0,digit = 1;
//	int a,b;
//	printf("숫자를 여러개 입력:");
//	scanf("%d", &number);
//	int number1 = number;
//	while (number > 10) {
//		//printf("%d\n", number);
//		number = number / 10;
//		turn++;
//		digit *= 10;
//	}
//	//printf("%d\n", digit);
//
//	while (number1>0) {
//		b = number1 / digit;
//		while (b>0) {
//			printf("\u2665\u2665");
//			b--;
//		}
//		printf("\n");
//		number1 = number1 % digit;
//		digit = digit / 10;
//	}
//		
//}
//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 20; sheep++)
//	{
//		printf("양%d마리\n", sheep);
//	}
//}
//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 50; sheep++)
//	{
//		if (sheep%10==0)
//		{
//			printf("깜빡 졸았다\n");
//			continue;
//		}
//		printf("양%d마리\n", sheep);
//		if (sheep == 45) {
//			break;
//		}
//	}
//}
//#include <stdio.h>
//
//int main()
//{
//	int round;
//	for (round = 0; round < 10; round++)
//	{
//		printf("라운드 %d\n", round);
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int round;
//	for (round = 0; round <= 10; round++)
//	{
//		printf("라운드 %d\n", round);
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int count;
//	for (count = 101; count < 111; count++)
//	{
//		printf("아파트 %d동\n", count);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int number;
//	int sum_number = 0;
//	for (number = 1; number <= 20; number++) {
//		sum_number = sum_number + number;
//	}
//	printf("도합 %d\n", sum_number);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int count;
//	int number;
//	printf("반복할 횟수를 입력하세요\n");
//	scanf("%d", &count);
//	for (number = 0; number < count; number++)
//	{
//		printf("삐약");
//	}
//	printf("\n");
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int number;
//	for (number = 10; number < 100; number++) {
//		printf("%d\n", number);
//	}
//}
//#include <stdio.h>
//
//int main()
//{
//	int number,sum_number=0;
//	for (number = 3; number <= 8; number++)
//	{
//		sum_number = number + sum_number;
//	}
//	printf("%d", sum_number);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int number,number1=0,number2=0;
//	for (number = 1; number <= 50; number++)
//	{
//		number1 = number % 10;
//		number2 = number / 10;
//		if (number1 == 0)
//		{
//			continue;
//		}
//		if (number2 == 3 || number1 % 3 == 0)
//		{
//			printf("%d\n",number);
//		}
//		else {}
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int number;
//	printf("100이하의 제곱수를 출력합니다\n");
//	for (number = 1; (number * number) <= 100; number++)
//	{
//		printf("%d\n", number * number);
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int num;
//	printf("100이하의 7의 배수를 출력합니다\n");
//
//	for (num = 7; num <= 100; num += 7)
//	{
//		printf("%d\n", num);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char input;
//	for (; ; )
//	{
//		scanf("%c", &input);
//		switch (input)
//		{
//		case 's':
//			printf("START GAME\n");
//			break;
//		case 'e':
//			printf("EXIT GAME\n");
//			return 0;
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int exitFor, number,count=1;
//	printf("1부터 10까지 곱한 수 출력 :");
//	for (number = 10, exitFor = number - 1; exitFor; number *= exitFor,exitFor--)
//	{
//
//	}
//	printf("%d\n", number);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//
//	printf("1부터 10까지 곱한 수 출력:");
//	for (int number = 10, int exitFor = number - 1; exitFor; number * exitFor, exitFor)
//	{
//		
//	}
//	printf("%d\n", number1);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int count;
//	for (count = 0; count < 5; count++)
//	{
//		printf("%d\n", count);
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int number;
//	for (number = 0; number <= 200; number+=11)
//	{
//		//if (number % 11 == 0)
//		//{
//		printf("%d\n", number);
//		//}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	float sqLine;
//	for (sqLine = 0.1; (sqLine * 4) <= 21; sqLine+=0.1)
//	{
//		printf("%.1lf\n", sqLine);
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	printf("1반 1번\n");
//	printf("1반 2번\n");
//	printf("1반 3번\n");
//	printf("2반 1번\n");
//	printf("2반 2번\n");
//	printf("2반 3번\n");
//
//	return 0;
////}
//#include <stdio.h>
//
//int main()
//{
//	int myClass = 1;
//	int student = 1;
//	printf("d%반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//
//	myClass++; student = 1;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int myClass = 1;
//	int student = 1;
//	for (student = 1; student <= 3; student++)
//	{
//		printf("%d반 %d번 \n", myClass, student);
//	}
//	myClass++;
//	for(student = 1; student <= 3; student++)
//	{
//		printf("%d반 %d번\n", myClass, student);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int myClass;
//	int student;
//	for (myClass = 1; myClass <= 2; myClass++)
//	{
//		for (student = 1; student <= 3; student++)
//		{
//			printf("%d반 %d번 \n", myClass, student);
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int myClass;
//	int student;
//	for (myClass = 1; myClass <= 8; myClass++)
//	{
//		for (student = 1; student <= 30; student++)
//		{
//			printf("%d반 %d번 \n", myClass, student);
//		}
//	}
//}
//#include <stdio.h>
//
//int main()
//{
//	int grade;
//	int myClass;
//	int student;
//	for (grade = 1; grade <= 8; grade++)
//	{
//		for (myClass = 1; myClass <= 8; myClass++)
//		{
//			for (student = 1; student <= 30; student++)
//			{
//				printf("%d학년 %d반 %d번 \n", grade, myClass, student);
//			}
//		}
//	}
//}
//#include <stdio.h>
//int main()
//{
//	int number,number1;
//		for (number = 2; number <= 9; number++)
//		{
//			for (number1 = 1; number1 <= 9; number1++)
//			{
//				printf("%d * %d = %d\n", number, number1, number * number1);
//			}
//		}
//}
//#include <stdio.h>
//int main()
//{
//	int number, number2;
//	for (number = 2; number <= 9; number++)
//	{
//		if (number == 3)
//		{
//			continue;
//		}
//		for (number2 = 1; number2 <= 9; number2++)
//		{
//			printf("%d * %d = %d\n", number, number2, number * number2);
//		}
//	}
//}
//#include <stdio.h>
//int main()
//{
//	int number1, number2;
//	for (number1 = 1; number1 <= 4; number1++)
//	{
//		for (number2 = 1; number2 <= 6; number2++)
//		{
//			printf("4면: %d, 6면: %d \n", number1, number2);
//		}
//	}
//}
//#include <stdio.h>
//int main()
//{
//	int outer;
//	int inter;
//	for (outer = 0; outer < 5; outer++)
//	{
//		for (inter = 0; inter < 5; inter++)
//		{
//			printf("내부 반복문 %d번 반복\n", inter);
//		}
//		printf("%d번쨰 내부 반복문 탈출\n\n",outer);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int outer;
//	int inter;
//	for (outer = 0; outer < 5; outer++)
//	{
//		for (inter = 0; inter < 5; inter++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int outer;
//	int inter;
//	for (outer = 0; outer < 5; outer++)
//	{
//		for (inter = 0; inter < outer + 1; inter++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}
//#include <stdio.h>
//int main()
//{
//	int outer, inter1, inter2;
//	for (outer = 0; outer < 5; outer++) {
//		for (outer = 0; outer < 5; outer++) {
//			printf(" ");
//		}
//		for (inter2 = 0; inter2 < outer + 1; inter2++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int outer;
//	int inter1, inter2;
//	for (outer = 0; outer < 5; outer++)
//	{
//		for (inter1 = 0; inter1 < 5 - outer; inter1++)
//		{
//			printf(" ");
//		}
//		for (inter2 = 0; inter2 < outer + 1; inter2++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	printf("*");
//	printf("\n");
//	printf("*");
//	printf("*");
//	printf("\n");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("\n");
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	for (int x = 1; x <= 1; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	for (int x = 1; x <= 2; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	for (int x = 1; x <= 3; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int y = 1;
//
//	for (int x = 1; x <= y; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	y +=1;
//	for (int x = 1; x <= y; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	y += 1;
//	for (int x = 1; x <= y; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	y += 1;
//	
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	
//	for (int y = 1; y <= 3; y += 1) {
//		for (int x = 1; x <= y; x++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int LINE = 3;
//	scanf("%d", &LINE);
//	for (int y = 1; y <= LINE; y += 1)
//	{
//		for (int x = 1; x <= y; x++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}

	/*printf("*");
	printf("*");
	printf("*");
	printf("*");
	printf("\n");
	printf("*");
	printf("*");
	printf("*");
	printf("\n");
	printf("*");
	printf("*");
	printf("\n");
	printf("*");
	printf("\n");
	for (int x = 1; x <= 4; x++)
	{
		printf("*");
	}
	printf("\n");
	for (int x = 1; x <= 3; x++)
	{
		printf("*");
	}
	printf("\n");
	for (int x = 1; x <= 2; x++)
	{
		printf("*");
	}
	printf("\n");
	for (int x = 1; x <= 1; x++)
	{
		printf("*");
	}
	printf("\n");
	*/
	//int y = 4;
	/*for (int x = 1; x <= y; x++)
	{
		printf("*");
	}
	printf("\n");
	for (int x = 1; x <= 3; x++)
	{
		printf("*");
	}
	printf("\n");
	for (int x = 1; x <= 2; x++)
	{
		printf("*");
	}
	printf("\n");
	for (int x = 1; x <= 1; x++)
	{
		printf("*");
	}
	printf("\n");*/


	/*int y = 4;
	for (int x = 1; x <= y; x++)
	{
		printf("*");
	}
	printf("\n");
	y--;
	for (int x = 1; x <= y; x++)
	{
		printf("*");
	}
	printf("\n");
	y--;
	for (int x = 1; x <= y; x++)
	{
		printf("*");
	}
	printf("\n");
	y--;
	for (int x = 1; x <= y; x++)
	{
		printf("*");
	}
	printf("\n");*/

	/*int y = 4;*/
	/*for (; y >= 1;)
	{
		for (int x = 1; x <= y; x++)
		{
			printf("*");
		}
		printf("\n");
		y -= 1;
	}*/
	//for (int y = 4; y >= 1; y -= 1)
	//{
	//	for (int x = 1; x <= y; x++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	//int LINE=1;
	//for (int y = 4; y >= LINE; y--)
	//{
	//	for (int x = 1; x <= y; x++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	// 
//#include <stdio.h>
//int main()
//{
//	int LINE=0;
//	scanf("%d",&LINE);
//	for (int y = LINE; y >= 1; y--)
//	{
//		for (int x = 1; x <= y; x++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}
//#include <stdio.h>
//int main()
//{
//	printf(" ");
//	printf(" ");
//	printf(" ");
//	printf("*");
//	printf("\n");
//	printf(" ");
//	printf(" ");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("\n");
//	printf(" ");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("\n");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//}
//#include <stdio.h>
//int main()
//{
//	for (int i = 1; i < 4; i++)
//	{
//		printf(" ");
//	}
//	for (int i = 1; i < 2; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	for (int i = 1; i < 3; i++)
//	{
//		printf(" ");
//	}
//	for (int i = 1; i < 4; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	for (int i = 1; i < 2; i++)
//	{
//		printf(" ");
//	}
//	for (int i = 1; i < 6; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	for (int i = 1; i < 1; i++)
//	{
//		printf(" ");
//	}
//	for (int i = 1; i < 8; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//}
//#include <stdio.h>
//int main()
//{
//	int x = 3;
//	int y = 1;
//
//
//	for (int i = 0; i < x; i++)
//	{
//		printf(" ");
//	}
//	for (int i = 0; i < y; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	x--; 
//	y+=2;
//	for (int i = 0; i < x; i++)
//	{
//		printf(" ");
//	}
//	for (int i = 0; i < y; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	x--;
//	y += 2;
//	for (int i = 0; i < x; i++)
//	{
//		printf(" ");
//	}
//	for (int i = 0; i < y; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	x--;
//	y += 2;
//	for (int i = 0; i < x; i++)
//	{
//		printf(" ");
//	}
//	for (int i = 0; i < y; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	x--;
//	y += 2;
//}
//#include <stdio.h>
//int main()
//{
//	int x = 3, y = 1;
//	for (int i = 0; i < 4; i++)
//	{
//		for (int i = 0; i < x; i++)
//		{
//			printf(" ");
//		}
//		for (int i = 0; i < y; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		x--; y += 2;
//	}
//}
//#include <stdio.h>
//int main()
//{
//	int LINE = 5;
//	int x = LINE - 1, y = 1;
//	for (int i = 0; i < LINE; i++)
//	{
//		for (int i = 0; i < x; i++)
//		{		
//		printf(" ");
//		}
//		for (int i = 0; i < y; i++)
//		{
//		printf("*");
//		}
//		printf("\n");
//		x--; y += 2;
//	}
//}
//#include <stdio.h>
//int main()
//{
//	int LINE = 4;
//	scanf("%d", &LINE);
//	int x = LINE - 1, y = 1;
//	for (int i = 0; i < LINE; i++)
//	{
//		for (int i = 0; i < x; i++)
//		{
//			printf(" ");
//		}
//		for (int i = 0; i < y; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		x--; y += 2;
//	}
//}
//#include <stdio.h>
//int main()
//{
//	printf(" ");
//	printf(" ");
//	printf(" ");
//	printf("*");
//	printf("\n");
//	printf(" ");
//	printf(" ");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("\n");
//	printf(" ");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("\n");
//	printf(" ");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("\n");
//	printf(" ");
//	printf(" ");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("\n");
//	printf(" ");
//	printf(" ");
//	printf(" ");
//	printf("*");
//}
//#include <stdio.h>
//int main()
//{
//	for (int i = 0; i < 3; i++)
//	{
//		printf(" ");
//	}
//	for (int i = 0; i < 1; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	for (int i = 0; i < 2; i++)
//	{
//		printf(" ");
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	for (int i = 0; i < 1; i++)
//	{
//		printf(" ");
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	for (int i = 0; i < 1; i++)
//	{
//		printf(" ");
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	for (int i = 0; i < 2; i++)
//	{
//		printf(" ");
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	for (int i = 0; i < 3; i++)
//	{
//		printf(" ");
//	}
//	for (int i = 0; i < 1; i++)
//	{
//		printf("*");
//	}
//}
//#include <stdio.h>
//int main()
//{
//	int x = 3;
//	int y = 1;
//	for (int i = 0; i < x; i++)
//	{
//		printf(" ");
//	}
//	for (int i = 0; i < y; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	x--; y += 2;
//	for (int i = 0; i < x; i++)
//	{
//		printf(" ");
//	}
//	for (int i = 0; i < y; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	x--; y += 2;
//	for (int i = 0; i < x; i++)
//	{
//		printf(" ");
//	}
//	for (int i = 0; i < y; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	for (int i = 0; i < x; i++)
//	{
//		printf(" ");
//	}
//	for (int i = 0; i < y; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	x++; y -= 2;
//	for (int i = 0; i < x; i++)
//	{
//		printf(" ");
//	}
//	for (int i = 0; i < y; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	x++; y -= 2;
//	for (int i = 0; i < x; i++)
//	{
//		printf(" ");
//	}
//	for (int i = 0; i < y; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//}
//#include <stdio.h>
//int main()
//{
//	int x = 3, y = 1;
//	for (int i = 0; i < 3; i++)
//	{
//		for (int i = 0; i < x; i++)
//		{
//			printf(" ");
//		}
//		for (int i = 0; i < y; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		x--; y += 2;
//	}
//	x = 1; y = 5;
//	for (int i = 0; i < 3; i++)
//	{
//		for (int i = 0; i < x; i++)
//		{
//			printf(" ");
//		}
//		for (int i = 0; i < y; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		x++; y -= 2;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int x = 3, y = 1, LINE = 6/2;
//	for (int i = 0; i < LINE; i++)
//	{
//		for (int i = 0; i < x; i++)
//		{
//			printf(" ");
//		}
//		for (int i = 0; i < y; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		x--; y += 2;
//	}
//	x = 1; y = 5;
//	for (int i = 0; i < LINE; i++)
//	{
//		for (int i = 0; i < x; i++)
//		{
//			printf(" ");
//		}
//		for (int i = 0; i < y; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		x++; y -= 2;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int LINE = 0;
//	scanf("%d", &LINE);
//	int x = LINE-1, y=1;
//	for (int i = 0; i < LINE; i++)
//	{
//		for (int i = 0; i < x; i++)
//		{
//			printf(" ");
//		}
//		for (int i = 0; i < y; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		x--; y += 2;
//	}
//	x++; y -= 2;
//	for (int i = 0; i < LINE; i++)
//	{
//		for (int i = 0; i < x; i++)
//		{
//			printf(" ");
//		}
//		for (int i = 0; i < y; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		x++; y -= 2;
//	}
//	return 0;
//}
	//	printf(" ");
	//	printf(" ");
	//	printf(" ");
	//	printf("1");
	//	printf("\n");
	//	printf(" ");
	//	printf(" ");
	//	printf("2");
	//	printf("2");
	//	printf("\n");
	//	printf(" ");
	//	printf("3");
	//	printf("3");
	//	printf("3");
	//	printf("\n");
	//	printf("4");
	//	printf("4");
	//	printf("4");
	//	printf("4");
		//for (int i = 0; i < 3; i++)
		//{
		//	printf(" ");
		//}
		//for (int i = 0; i < 1; i++)
		//{
		//	printf("1");
		//}
		//printf("\n");
		//for (int i = 0; i < 2; i++)
		//{
		//	printf(" ");
		//}
		//for (int i = 0; i < 2; i++)
		//{
		//	printf("2");
		//}
		//printf("\n");
		//for (int i = 0; i < 1; i++)
		//{
		//	printf(" ");
		//}
		//for (int i = 0; i < 3; i++)
		//{
		//	printf("3");
		//}
		//printf("\n");
		//for (int i = 0; i < 0; i++)
		//{
		//	printf(" ");
		//}
		//for (int i = 0; i < 4; i++)
		//{
		//	printf("4");
		//}
		//printf("\n");

	//for (int i = 0; i < x; i++)
	//{
	//	printf(" ");
	//}
	//for (int i = 0; i < y; i++)
	//{
	//	printf("%d", y);
	//}
	//printf("\n");
	//x--; y++;
	//for (int i = 0; i < x; i++)
	//{
	//	printf(" ");
	//}
	//for (int i = 0; i < y; i++)
	//{
	//	printf("%d", y);
	//}
	//printf("\n");
	//x--; y++;
	//for (int i = 0; i < x; i++)
	//{
	//	printf(" ");
	//}
	//for (int i = 0; i < y; i++)
	//{
	//	printf("%d", y);
	//}
	//printf("\n");
	//x--; y++;
	//for (int i = 0; i < x; i++)
	//{
	//	printf(" ");
	//}
	//for (int i = 0; i < y; i++)
	//{
	//	printf("%d", y);
	//}
	//printf("\n");
	//x--; y++;
//int x = 3, y = 1, LINE = 4;
//for (int i = 0; i < LINE; i++)
//{
//	for (int i = 0; i < x; i++)
//	{
//		printf(" ");
//	}
//	for (int i = 0; i < y; i++)
//	{
//		printf("%d", y);
//	}
//	printf("\n");
//	x--; y++;
//}
//}
//#include <stdio.h>
//int main()
//{
//	int LINE=0;
//	scanf("%d", &LINE);
//	int x = LINE - 1, y = 1;
//	for (int i = 0; i < LINE; i++)
//	{
//		for (int i = 0; i < x; i++)
//		{
//			printf(" ");
//		}
//		for (int i = 0; i < y; i++)
//		{
//			printf("%d", y);
//		}
//		printf("\n");
//		x--; y++;
//	}
//}
//#include <stdio.h>
//int main()
//{
//	int turn = 0;
//	int A = 0, B = 0;
//	printf("게임을 시작합니다! : 뒤에 숫자를 입력해주세요.\n");
//	char player = 0;
//	while (1)
//	{
//			for (int i = 0; i < 3; i++)
//			{
//				printf("%c :", 'A' + player);
//				scanf("%d", &A);
//			}
//			player++;
//			player = player % 2;
//	}
//}
//#include <stdio.h>
//int main()
//{
//	int input = 0, score = 1;
//	char player = 0;
//	printf("<베스킨 라빈스 31!>\n게임을 시작합니다! 31을 말하는 사람이 지게됩니다.(0입력시 턴 넘김)\n");
//	while (1)
//	{
//		for (int i = 0; i < 3; i++)
//		{
//			printf("%c :", 'A' + player);
//			scanf("%d", &input);
//			if (input == 0) {
//				if (i == 0) {
//					printf("턴을 넘기기 위해서는 하나 이상의 수를 말해야 됩니다\n");
//					i--; continue;
//				}
//				break;
//			}
//			if (input != score)
//			{
//				printf("잘못된 입력입니다.\n 지금 입력해야 되는 값은 %d 입니다\n", score);
//				i--;
//				continue;
//			}
//			score++;
//			if (input >= 31) {
//				break;
//			}
//		}
//		player++;
//		player %= 2;
//		if (input >= 31) {
//			break;
//		}
//		printf("턴이 넘어갑니다.\n");
//	}
//	printf("유저 %c의 승리입니다!", 'A' + player);
//}
//#include <stdio.h>
//int main()
//{
//	float conversion = 0;
//	while (conversion < 2)
//	{
//		printf("%.1f\n", conversion);
//		conversion = conversion + 0.1;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	for (double conversion = 90; conversion > 0.1; conversion /= 3)
//	{
//		if (conversion == 10.0) {
//			continue;
//		}
//		printf("%.3lf\n", conversion);
//	}
//	return 0;
//}
////#include <stdio.h>
//int main()
//{
//	int number;
//	while (1) {
//		scanf("%d", &number);
//		if (number == 0) {
//			printf("프로그램 종료\n");
//			break;
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	float conversion = 0;
//	for (; conversion < 2;)
//	{
//		printf("%.1f\n", conversion);
//		conversion += 0.1;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	double conversion = 90;
//	while (conversion > 0.1)
//	{
//		if (conversion == 10.0) {
//			conversion /= 3;
//			continue;
//		}
//		printf("%.3lf\n", conversion);
//		conversion /= 3;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int number;
//	for (; ;)
//	{
//		scanf("%d", &number);
//		if (number == 0)
//		{
//			printf("프로그램 종료\n");
//			break;
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int for_flag = 1;//1
//	int number = 0;//2
//	while(for_flag) { //3
//		printf("number = %d\n", number); //4 8
//		while (number++) { //5 9
//			printf(" >number = %d\n", number); //10
//			if (number == 3) { //11
//				for_flag = 0; //12
//				break;//13
//			}
//		}
//		number++;//6 14
//		printf(">>number = %d\n", number); //7 15
//	}
//	printf("%d %d\n", for_flag, number); //16
//	return 0;//17
//}
//#include <stdio.h>
//int main()
//{
//	int for_flag = 1;//1
//	int number = 0;//2
//	for (; for_flag;) { //3
//		printf("number = %d\n", number); //4 8
//		for (; number++;) {//5 9
//			printf(" >number = %d\n", number); //10
//			if (number == 3) { //11
//				for_flag = 0; //12
//				break;//13
//			}
//		}
//		number++;//6 14
//		printf(">>number = %d\n", number); //7 15
//	}
//	printf("%d %d\n", for_flag, number); //16
//	return 0;//17
//}
//#include <stdio.h>
//char rightType(char type) {
//	if (type != 'A' && type != 'B') {
//		printf("주문할 수 없는 햄버거입니다.\n");
//		return 'C';
//	}
//}
//void makeHamburger(char type, int count) {
//	if (type == 'A') {
//		printf("A타입 햄버거");
//	}
//	else {
//		printf("B타입 햄버거");
//	}
//	printf("%d개 나왔습니다.\n", count);
//}
//int main()
//{
//	char ham_type;
//	int ham_count;
//	printf("어느타입 햄버거를");
//	printf("주문하시겠습니까?(AorB)\n");
//	scanf("%c", &ham_type);
//	if(rightType(ham_type) == 'C') {
//		return 0;
//	}
//	printf("햄버거 몇개 주문하시겠습니까?.\n");
//	scanf("%d", &ham_count);
//	makeHamburger(ham_type, ham_count);
//	return 0;
//}
//#include <stdio.h>
//int add_number(int num1, int num2)
//{
//	int retVal = num1 + num2;
//	return retVal;
//}
//
//int main()
//{
//	int a = 1, b = 2;
//	int data1 = add_number(a, b);
//	printf("결과 : %d\n", data1);
//	return 0;
//}
//#include <stdio.h>
//int plus(int num1, int num2)
//{
//	int sum = num1 + num2;
//	return sum;
//}
//
//int mienus(int num1, int num2)
//{
//	int mie = num1 - num2;
//	return mie;
//}
//
//int multiple(int num1, int num2)
//{
//	int mul = num1 * num2;
//	return mul;
//}
//
//double division(int num1, int num2)
//{
//	double div = (double)num1 / num2;
//	return div;
//}
//
//int main()
//{
//	int m_num1, m_num2;
//	scanf("%d %d", &m_num1, &m_num2);
//	int sum = plus(m_num1, m_num2);
//	int mie = mienus(m_num1, m_num2);
//	int mul = multiple(m_num1, m_num2);
//	double div = division(m_num1, m_num2);
//	printf("합 : %d\n차 : %d\n곱 : %d\n나누기 : %lf", sum, mie, mul, div);
//}
//#include <stdio.h>
//
//int minus(int n)
//{
//	if (n <= 1) return -3;
//	return minus(n - 1) - 2;
//}
//int main()
//{
//	int n; scanf("%d", &n);
//	printf("%d", minus(n));
//	return 0;
//}
//#include <stdio.h>
//void printNumber(int n)
//{
//	if (n <= 0) return;
//	printf("%d", n);
//	printNumber(n - 1);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printNumber(n);
//	return 0;
//}
//#include <stdio.h>
//
//int fibonacci(int n)
//{
//	printf("%d ", n);
//	if (n <= 2) return 1;
//	printf("%d\n", n);
//	return fibonacci(n - 1) + fibonacci(n - 2);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("\n%d\n", fibonacci(n));
//	return 0;
//}
//#include <stdio.h>
//int sum(int n)
//{
//	if (n <= 1) return 1;
//	return sum(n-1) + sum(n-2);
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int sum1 = sum(num);
//	printf("%d", sum1);
//}
//#include <stdio.h>
//struct BYTE
//{
//	char a;
//	char b;
//};
//
//void main()
//{
//	struct BYTE a,b;
//	b.a = 10;
//	a.b = 20;
//	printf("%d %d", b.a, a.b);
//}
//#include <stdio.h>
//struct student
//{
//	int id;
//	char *name;
//	float aver;
//};
//
//void main()
//{
//	struct student s;
//	s.id = 1;
//	s.name = (char*)"이샘";
//	s.aver = 90.5;
//	printf("아이디: %d\n", s.id);
//	printf("이름: %c\n", s.name);
//	printf("백분율 : %lf\n", s.aver);
//}
//#include <stdio.h>
//struct GUN
//{
//	char name[10];
//	float bullet_type;
//	bool scope;
//	bool muzzle;
//	bool handgrip;
//	bool magazine;
//	bool tactical_stock;
//	int magzine_size;
//};
//
//int main()
//{
//	struct GUN M416 = { "M416", 5.56, false,true,true,true,true,30 };
//	printf("화기명 : %s\n", M416.name);
//	printf("탄 종류 : %.2f\n", M416.bullet_type);
//	printf("스코프유무 : %s", M416.scope ? "true" : "false");
//	return 0;
//}
//#include <stdio.h>
//struct __dummy__ {
//	int data_0;
//	char data_1;
//	float data_2;
//};
//struct VIP_PERSON {
//	char grade;
//	char personCode;
//	char milleage;
//};
//int main()
//{
//	int sizedummy = sizeof(__dummy__);
//	int sizevip = sizeof(VIP_PERSON);
//	printf("더미 크기 : %d\n", sizedummy);
//	printf("vip정보 크기 : %d\n", sizevip);
//
//	return 0;
//}
//#include <stdio.h>
//
//	struct VIP_PERSON 
//	{
//		char grade;
//		char personCode;
//		char millege;
//	};
//
//int main()
//{
//	VIP_PERSON lee_sam;
//	printf("고객 등급을 입력하세요.\n");
//	while (true)
//	{
//		scanf("%c", &lee_sam.grade);
//		if (lee_sam.grade == 'S' || 'A' <= lee_sam.grade && lee_sam.grade <= 'D') break;
//	}
//	int tmp;
//	printf("고객 코드를 입력하세요\n");
//	scanf("%d", &tmp);
//	lee_sam.personCode = (char)tmp;
//	printf("마일리지를 입력하세요\n");
//	scanf("%d", &tmp);
//	lee_sam.millege = (char)tmp;
//	printf("%c %d %d\n", lee_sam.grade,lee_sam.personCode, lee_sam.millege);
//	return 0;
//}
//#include <stdio.h>
//struct A
//{
//	int a;
//	int b;
//};
//
//struct B {
//	int a;
//	char b;
//};
//
//int main()
//{
//	int BYTE = sizeof(A);
//	printf("%d", BYTE);
//	int BYTE1 = sizeof(B);
//	printf("%d", BYTE1);
//}
//#include <stdio.h>
//
//struct __dummy__ {
//	int data_0;
//	char data_1;
//	float data_2;
//};
//
//int main()
//{
//	__dummy__ A;
//	scanf("%d", &A.data_0);
//	scanf(" %c", &A.data_1);
//	scanf("%f", &A.data_2);
//	printf("%d %c %f", A.data_0, A.data_1, A.data_2);
//}
//#include <stdio.h>
//
//void main()
//{
//	short pt1;
//	scanf("%hd", &pt1);
//	printf("값 :%hd\n", pt1);
//}
//#include <stdio.h>
//
//short getDefaultData()
//{
//	short pt1;
//	scanf("%hd", &pt1);
//	return pt1;
//}
//void main()
//{
//	short pt;
//	pt = getDefaultData();
//	printf("값: %d\n", pt);
//}
//#include <stdio.h>
//
//short getDefaultData();
//void printData(short pt2);
//
//void main()
//{
//	short pt;
//	pt = getDefaultData();
//	printData(pt);
//}
//
//short getDefaultData()
//{
//	short pt1;
//	scanf("%hd", &pt1);
//	return pt1;
//}
//
//void printData(short pt2)
//{
//	printf("값 :%hd\n", pt2);
//}
//#include <stdio.h>
//
//struct POINT { short x, y; };
//
//POINT getDefaultData()
//{
//	POINT pt1;
//	printf("2개 입력 >> ");
//	scanf("%hd", &pt1.x);
//	scanf("%hd", &pt1.y);
//	return pt1;
//}
//
//void printData(POINT pt2)
//{
//	printf("값: %hd\n", pt2.x);
//	printf("값: %hd\n", pt2.y);
//}
//
//POINT plus_5(POINT pt)
//{
//	pt.x += 5;
//	pt.y += 5;
//	return pt;
//}
//
//void main()
//{
//	POINT pt = getDefaultData();
//	printData(pt); 
//	pt = plus_5(pt); 
//	printData(pt);
//}
//#include <stdio.h>
//
//void main()
//{
//	char arr[4];
//	printf("%d\n", sizeof(arr));
//}
//#include <stdio.h>
//
//void main()
//{
//	int arr[4];
//	printf("%d\n", sizeof(arr));
//}
//#include <stdio.h>
//
//void main()
//{
//	char alpha[4] = { 'a','b','c','d' };
//	printf("%c%c%c%c\n", alpha[0],alpha[1],alpha[2],alpha[3]);
//}
//#include <stdio.h>
//
//void main()
//{
//	int num[3] = { 3,6,9 };
//	printf("num의 안에 들어있는");
//	printf("1 번쨰 숫자는? %d\n", num[0]);
//}
//#include <stdio.h>
//int main()
//{
//	int num[3] = { 3,6,9 };
//	printf("%d번쨰에 %d 저장\n", 0, num[0]);
//	printf("%d번쨰에 %d 저장\n", 1, num[1]);
//	printf("%d번쨰에 %d 저장\n", 2, num[2]);
//}
//#include <stdio.h>
//int main()
//{
//	int num[3] = { 3,6,9 };
//	int k = 0;
//	printf("%d번쨰에 %d 저장\n", k, num[k]); k++;
//	printf("%d번쨰에 %d 저장\n", k, num[k]); k++;
//	printf("%d번쨰에 %d 저장\n", k, num[k]); k++;
//}
//#include <stdio.h>
//int main()
//{
//	int num[3] = { 3,6,9 };
//	for (int i = 0; i < 3; i++) {
//		printf("%d번쨰의 %d 저장\n", i, num[i]);
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int arr[5];
//	for (int i = 0; i < 5; i++)	scanf("%d", &arr[i]);
//	printf("\n\n");
//	for (int i = 0; i < 5; i++)	printf(" %d ", arr[i]);
//	return 0;
//}
//#include <stdio.h>
//void main()
//{
//	int list[10],num,a;
//	for (int i = 0; i < 10; i++)	scanf("%d", &list[i]);
//	printf("값을 입력하세요\n");
//	int flag = 1;
//	while (flag)
//	{
//		scanf("%d", &num);
//		for (a = 0; a < 10; a++) {
//			if (num == list[a]) {
//				flag = 0;
//				break;
//			}
//		}
//	}
//	printf("exist");
//}
//#include <stdio.h>
//int main()
//{
//	int a[32],b[32];
//	int store = 0;
//	int input;
//	int num;
//
//	scanf("%d", &input);
//	for (num = 0; input >= 1; num++)
//	{
//		store = input % 2;
//		a[num] = store;
//		input /= 2;
//	}
//	
//	for (num--; num >= 0; num--)
//	{
//		printf("%d", a[num]);
//	}
//}
//#include <stdio.h>
//int main()
//{
//	int a[10];
//	int input;
//	int i, T = 1;
//	for (i = 0; i < 10; i++) 
//		scanf("%d", &a[i]);
//	while (T)
//	{
//		scanf("%d", &input);
//		for (i = 0; i < 10; i++)
//		{
//			if (a[i] == input)
//			{
//				printf("exist");
//				T=0;
//				break;
//			}
//		}
//	}
//	printf("fin.");
//}
//#include <stdio.h>
//
//void main()
//{
//	int left = 3, right = 5;
//	int temp;
//	temp = left;
//	left = right;
//	right = temp;
//	printf("left = %d, ", left);
//	printf("right = %d \n", right);
//}
//#include <stdio.h>
//
//void main()
//{
//	int num[2] = { 10,3 };
//	int temp;
//	temp = num[0];
//	num[0] = num[1];
//	num[1] = temp;
//	printf("num[0] =%d, ", num[0]);
//	printf("num[1] =%d\n", num[1]);
//}
//#include <stdio.h>
//int main()
//{
//	int a[4] = { 4,3,1,2 };
//	int temp;
//	temp = a[0];
//	a[0] = a[2];
//	a[2] = temp;
//	temp = a[1];
//	a[1] = a[3];
//	a[3] = temp;
//	temp = a[2];
//	a[2] = a[3];
//	a[3] = temp;
//	for(int i = 0; i < 4; i++)
//		printf("%d", a[i]);
//}
//#include <stdio.h>
//int main()
//{
//	int a[4];
//	int temp;
//	for (int i = 0; i < 4; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//
//	for (int turn = 3; turn > 0; turn--)
//	{
//		for (int i = 1; i <= turn; i++)
//		{
//			if (a[i - 1] > a[i])
//			{
//				temp = a[i - 1];
//				a[i - 1] = a[i];
//				a[i] = temp;
//			}
//		}
//	}
//	
//	//for (int i = 1; i <= 2; i++)
//	//{
//	//	if (a[i - 1] > a[i])
//	//	{
//	//		temp = a[i - 1];
//	//		a[i - 1] = a[i];
//	//		a[i] = temp;
//	//	}
//	//}
//
//	//for (int i = 1; i <= 1; i++)
//	//{
//	//	if (a[i - 1] > a[i])
//	//	{
//	//		temp = a[i - 1];
//	//		a[i - 1] = a[i];
//	//		a[i] = temp;
//	//	}
//	//}
//
//	//if (a[1] > a[2])
//	//{
//	//	temp = a[1];
//	//	a[1] = a[2];
//	//	a[2] = temp;
//	//}
//
//	//if (a[2] > a[3])
//	//{
//	//	temp = a[2];
//	//	a[2] = a[3];
//	//	a[3] = temp;
//	//}
//
//	for (int i = 0; i < 4; i++)
//		printf("%d", a[i]);
//
//}

//#include <stdio.h>
//
//void main()
//{
//	int one = 1, two = 2;
//	int max = 0;
//
//	if (one > two) max = one;
//	else
//	{
//		max = two;
//	}
//	printf("max = %d \n", max);
//}

//#include <stdio.h>
//
//void main()
//{
//	int one = 1, two = 3, three = 2;
//	int max = 0;
//
//	if (one > two) 
//	{
//		if (one > three)
//		{
//			max = one;
//		}
//		else
//		{
//			max = three;
//		}
//	}
//	else
//	{
//		if (two > three)
//		{
//			max = two;
//		}
//		else
//		{
//			max = three;
//		}
//	}
//	printf("%d", max);
//}

//#include <stdio.h>
//
//void main()
//{
//	int a[3] = { 1,3,2 };
//	int max = a[0];
//	for (int i = 0; i < 3; i++)
//	{
//		if (max < a[i])
//			max = a[i];
//	}
//	printf("max = %d\n", max);
//}
//#include <stdio.h>
//int main()
//{
//	int a[5] = { 1,3,6,4,2 };
//	int max = a[0];
//	for (int i = 1; i < 5; i++)
//	{
//		if (max < a[i])
//			max = a[i];
//	}
//
//	int min = a[0];
//	for (int i = 1; i < 5; i++)
//	{
//		if (min > a[i])
//			min = a[i];
//	}
//
//	int sum = 0;
//	for (int i = 0; i <5; i++)
//		sum += a[i];
//
//	float ave = sum / 5.0;
//
//	printf("%d\n", min);
//	printf("%d\n", max);
//	printf("%d\n", sum);
//	printf("%.2lf\n", ave);
//}
//#include <stdio.h>
//int main()
//{
//	int a[10] = { 1,1,4,5,6,2,3,3,4,1 };
//	int count[6+1] = {};//0, 1-6
//	for (int i = 0; i < 10; i++)
//	{
//				count[a[i]]++;
//	}
//	for (int i = 1; i <= 6; i++)
//		printf("%d ", count[i]);
//
//}
//#include <stdio.h>
//
//int main()
//{
//	char arr[2][3] = { '1','2','3','4','5','6' };
//	printf("%d\n", sizeof(arr));
//	return 0;
//#include <stdio.h>
//
//int main()
//{
//	int arr[2][3] = { {'1','2','3'},{'4','5','6'} };
//	printf("%d\n", sizeof(arr));
//	return 0;
//}
//#include <stdio.h>
//void main()
//{
//	int arr2d[5][4] = { {662,7,4,74},{8,396,299,95},{66,73,86,0},{116,26,586,42},{84,7,41,11} };
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			printf("%4d", arr2d[i][j]);
//		}
//		printf("\n");
//	}
//}
//#include <stdio.h>
//
//int main()
//{
//	int arr[3][3] = { {2,4,6},{8,10,12},{14,16,18} };
//	int store;
//
//	//store = arr[0][1];
//	//arr[0][1] = arr[1][0];
//	//arr[1][0] = store;
//
//	//store = arr[0][2];
//	//arr[0][2] = arr[2][0];
//	//arr[2][0] = store;
//
//	//store = arr[1][2];
//	//arr[1][2] = arr[2][1];
//	//arr[2][1] = store;
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			printf("%3d", arr[j][i]);
//		}
//		printf("\n");
//	}
//}
//#include <stdio.h>
//void main()
//{
//	const int m = 4;
//	const int n = 3;
//	long data[m][n];
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//			data[i][j] = i + j;
//	}
//
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//			printf("%3d", data[i][j]);
//		printf("\n");
//	}
//}
//#include<stdio.h>
//
//void main()
//{
//	const int m = 5;
//	int arr[m][m] = {};
//	int sum = 1;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			arr[i][j] = sum;
//			sum++;
//		}	
//	}
//
//	int arr1[m * m] = {};
//	int num = 0;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			arr1[num] = arr[i][j];
//			num++;
//		}
//	}
//
//	for (int i = 0; i < m * m; i++)
//		printf("%3d", arr1[i]);
//}           
//#include <stdio.h>
//
//int main()
//{
//	const int N = 10;
//	int rep;
//	scanf("%d", &rep);
//	int arr[N] = {};
//	char arr1[N][N] = {};
//
//	for (int i = 0; i < rep; i++)
//		scanf("%d", &arr[i]);
//
//	for (int i = 0; i < rep; i++)
//	{
//		for (int j = 0; j < arr[i]; j++)
//			arr1[j][i] = '*';
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++) {
//			if(arr1[i][j] == 0) printf(" ");
//			else printf("%c", arr1[i][j]);
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//void main()
//{
//	const int n = 5;
//	int arr[n][n] = {};
//	int num = 1;
//	int x = 0, y = -1;
//	int rep = n;
//	int ope = 1;
//	while(1)
//	{
//		for (int i = 0; i < rep; i++, num++) {
//			y += ope;
//			arr[x][y] = num;
//		}
//		rep--;
//		if (rep == 0)
//			break;
//
//		for (int i = 0; i < rep; i++, num++) {
//			x += ope;
//			arr[x][y] = num;
//		}
//		ope = -ope;
		//a *= -1;

		//for (int i = 0; i < rep; i++, num++) {
		//	y += a;
		//	arr[x][y] = num;
		//}
		//rep--;
		//if (rep == 0)
		//	break;

		//for (int i = 0; i < rep; i++, num++) {
		//	x += a;
		//	arr[x][y] = num;
		//}
		//a = -1;
//	}
//
//	for (int i = 0; i < rep; i++, num++) {
//		y++;
//		arr[x][y] = num;
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			printf("%3d", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//#include <iostream>
//
//void main()
//{
//	int number;
//	int count;
//	std::cin >> number >> count;
//
//	std::cout << "new : " << number << " " << count << std::endl;
//}
//#include <iostream>
//using namespace std;
//
//void main()
//{
//	int number;
//	int count;
//	cin >> number >> count;
//
//	cout << "new : " << number << " " << count << endl;
//}
//#include <iostream>
//using namespace std;
//
//void main()
//{
//	int n = 2;
//	int* buff;
//	buff = new int[n];
//	cin >> buff[0] >> buff[1];
//
//	cout << "new : " << buff[0] << " " << buff[1] << endl;
//}
//#include <iostream>
//#include <fstream>
//using namespace std;
//
//void main()
//{
//	int* buff;
//	buff = new int[4];
//	cin >> buff[0] >> buff[1];
//
//	ofstream fout("file.txt");
//	fout << buff[0] << " " << buff[1] << endl;
//	fout.close();
//
//	ifstream fin;
//	fin.open("file.txt");
//	fin >> buff[2] >> buff[3];
//	cout << "new : " << buff[2] << " " << buff[3] << endl;
//	fin.close();
//
//	delete buff;
//}
//#include <iostream>
//#include <stdlib.h>
//#include <time.h>
//
//void main()
//{
//	int student, max, max1;
//	//int score[101] = {};
//	int count[101] = {};
//	scanf("%d", &student);
//	int* score = new int[student];
//	srand((unsigned int)time(NULL));
//	printf("성적 : ");
//
//	for (int i = 0; i < student ; i++)
//	{
//		score[i] = (rand() % 101 + 1);
//		printf("%d, ", score[i]);
//	}
//
//
//	for (int i = 0; i < student; i++)
//	{
//		count[score[i]]++;
//	}
//
//	max = count[0];
//	for (int i = 0; i <= 100; i++)
//	{
//		if (max < count[i])
//		{
//			max = count[i];
//			max1 = i;
//		}
//	}
//
//	
//	printf("\n최다점수 : %d, 인원 : %d", max1, max);
//	delete score;
//}
//#include <iostream>
//#include <string>
//
//int main()
//{
//	std::string s = "example string";
//	char search = 'x';
//	int at = s.find(search, 0);
//	std::cout << s << std::endl;
//	std::cout << "'x' is at" << at << std::endl;
//}
//#include <iostream>
//using namespace std;
//struct GM {
//	int no;
//	string name;
//	string part;//부서
//	int salary;//월급
//};
//struct COMPANY {
//	GM gms[5];
//	int gmCount = 0;
//};
//
//COMPANY HireGM_once(COMPANY n)
//{
//	n.gms[n.gmCount].no = n.gmCount + 1;
//
//	cout << "GM의 이름을 알려주세요" << endl;
//	cin >> n.gms[n.gmCount].name;
//
//	cout << "GM의 부서을 알려주세요" << endl;
//	cin >> n.gms[n.gmCount].part;
//
//	cout << "GM의 월급을 알려주세요" << endl;
//	cin >> n.gms[n.gmCount].salary;
//
//	n.gmCount++;
//	return n;
//}
//
//void main()
//{
//	printf("게임을 출시해보자!\n");
//	COMPANY gameCo;
//
//	printf("먼저 GM부터 고용할까?\n");
//	while (1) {
//		gameCo = HireGM_once(gameCo);
//		printf("더 고용할까?(y/n) : ");
//		char ch;
//		do {
//			ch = getchar();
//		} while (ch != 'y' && ch != 'n');
//		if (ch == 'n')
//			break;
//	}
//	printf("GM %d명을 뽑았다!\n", gameCo.gmCount);
//
//
//	for (int i = 0; i < gameCo.gmCount; i++)
//	{
//		cout << "이름은 >> " << gameCo.gms[i].name << endl;
//	}
//	
//	 
//}
//#include <iostream>
//using namespace std;
//
//struct SNACK {
//	int price;
//	int stock;
//	string name;
//};
//void main()
//{
//	const int N = 2;
//	SNACK snacks[N] = { { 1500,3,"레몬칩" }, { 1000,2,"달고나" } };
//
//	printf("<<과자자판기!>>\n");
//	for (int i = 0; i < N; i++)
//	{
//		printf("%d.[%6s] %4d원 (%d개남음)\n", (i + 1), snacks[i].name, snacks[i].price, snacks[i].stock);
//	}
//	int choise;
//	scanf("%d", &choise);
//	printf("%s가 나왔습니다.\n", snacks[choise - 1].name);
//}
//#include <iostream>
//using namespace std;
//
//struct product
//{
//	string name;
//	int price;
//	int stock;
//};
//
//void main()
//{
//	const int N = 3;
//	product products[N] = { {"초코송이", 1100, 5}, {"칸쵸",1000,3}, {"젤리",2000,10} };
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d.[%6s] %4d원 (%d개남음)\n", (i + 1), products[i].name.c_str(), products[i].price, products[i].stock);
//	}
//	cout << "0. 돈 추가하기\n" << endl;
//
//	int money = 0;
//	printf("갖고있는 돈을 입력하세요.\n>>");
//	scanf("%d", &money);
//
//	while (1)
//	{
//		printf("==========\n");
//		cout << "0. 돈 추가하기\n" << endl;
//		for (int i = 0; i < 3; i++)
//		{
//			if (money >= products[i].price && products[i].stock > 0)
//			{
//				printf("%d.[%6s] %4d원 (%d개남음)\n", (i + 1), products[i].name.c_str(), products[i].price, products[i].stock);
//			}
//		}
//
//		int pro_num;
//
//		printf("번호를 입력하세요.\n>>");
//		scanf("%d", &pro_num);
//
//		if (pro_num == 0)
//		{
//			int store = 0;
//			printf("추가할 금액을 입력하세요\n>>");
//			scanf("%d", &store);
//			money += store;
//			continue;
//		}
//
//		if (products[pro_num - 1].price > money)
//		{
//			printf("상품을 다시 골라주세요.\n");
//			continue;
//		}
//
//
//		if (products[pro_num - 1].stock == 0)
//		{
//			printf("재고가 없습니다. 다시 입력해주세요.\n");
//			continue;
//		}
//
//		money -= products[pro_num - 1].price;
//		products[pro_num - 1].stock--;
//
//		cout << products[pro_num - 1].name << "가 나와습니다." << endl;
//
//
//
//
//#include <stdio.h>
//
//void main()
//{
//	int b = 100;
//	int* p8 = &b;
//
//	printf("b = %d\n", b);
//	printf("b = %x\n", &b);
//	printf("b = %d\n", *p8);
//	printf("b = %x\n", p8);
//}
//#include <stdio.h>
//
//void main()
//{
//	char str[] = "programing";
//	char* ptr1, * ptr2;
//	ptr1 = &str[0];
//	ptr2 = &str[7];
//
//	printf("두 포인터 간의 차는 %d입니다.\n",ptr2 - ptr1);
//
//	printf("%x\n", ptr1 + 1);
//	printf("%c\n", *(ptr1 + 1));
//
//	printf("%x\n", ptr1 + 3);
//	printf("%c\n", *(ptr1 + 3));
//}
//#include <stdio.h>
//
//void main()
//{
//	char a = 'A';
//	char* pA = &a;
//
//	int B = 100;
//	int* pB = &B;
//
//	double C = 3.14;
//	double* pC = &C;
//
//	printf("pA의 크기 : %d byte\n", sizeof(pA));
//	printf("pB의 크기 : %d byte\n", sizeof(pB));
//	printf("pC의 크기 : %d byte\n", sizeof(pC));
//
//	printf("*pA의 크기 : %d byte\n", sizeof(*pA));
//	printf("*pB의 크기 : %d byte\n", sizeof(*pB));
//	printf("*pC의 크기 : %d byte\n", sizeof(*pC));
//}
//#include <stdio.h>
//
//void main()
//{
//	int* numptr;
//	int num1 = 10;
//	int num2 = 20;
//
//	numptr = &num1;
//	printf("%d\n", *numptr);
//
//	numptr = &num2;
//	printf("%d\n", *numptr);
//}
//#include <stdio.h>
//
//int main()
//{
//	FILE* fp1 = fopen("MIN.txt", "w");
//	char name1[100]; 
//
//	FILE* fp2 = fopen("GYU.txt", "w");
//	char name2[100];
//
//	scanf("%s", &name1);
//	scanf("%s", &name2);
//
//	fprintf(fp1,"%s", name1);
//	fprintf(fp2,"%s", name2);
//
//	fclose (fp1);
//	fclose (fp2);
//}
//#include <stdio.h>
//int main()
//{
//	FILE* pfile = fopen("myfile.txt", "w");
//	FILE* pfile1 = fopen("myfile1.txt", "w");
//
//	char text[100];
//	char text1[100];	
//
//	fprintf(pfile, "HelloWorld");
//	fprintf(pfile1,"byeworld");
//	
//	fclose(pfile);
//	fclose(pfile1);
//
//	fopen("myfile.txt", "r");
//	fopen("myfile1.txt", "r");
//
//	fscanf(pfile, "%s", text);
//	fscanf(pfile1, "%s", text1);
//	
//	fclose(pfile);
//	fclose(pfile1);
//
//	printf("%s\n%s\n", text, text1);
//
//	int count = 0;
//
//	for (int i = 0; text[i] != NULL; i++)
//	{
//		if (text[i] == text1[i])
//			count++;
//	}
//
//	printf("%d", count);
//}
#include <iostream>
#include <string.h>
#include <time.h>
using namespace std;

#define MAXENERGY 6

void printenergy(int my)
{
	printf("내 목숨 : ");
	for (int i = 0; i < my; i++)
		 cout << "■";
	for (int i = my; i < MAXENERGY; i++)
		 cout << "□";
	cout << "\n" << endl;
}

int main()
{
	srand((unsigned int)time(NULL));
	char *num = new char[5];
	char *tmp = new char[4];

	for (int i = 0; i < 4; i++)
	{
		num[i] = '_';
	}
	num[4] = NULL;

	int answer = rand() % 1000;
	sprintf(tmp, "%03d", answer);
	int energy = MAXENERGY;
	char input;
	while (1)
	{
		printenergy(energy);
		if (!energy)
		{
			cout << "게임 오버..." << endl;
			cout << "정답 : " << tmp;
			break;
		}
		cout << "정답 : " << num << endl << endl;
		if (atoi(num) == answer)
		{
			cout << "게임 승리" << endl;
			break;
		}
		cout << "숫자를 맞춰보세요 : ";
		cin >> input;

		bool check = true;
		for (int i = 0; i < 3; i++)
		{
			if (tmp[i] == input)
			{
				num[i] = input;
				check = false;
			}
		}
		if (check) energy--;
	}
	return 0;
}