//#include <stdio.h>
//int main()
//{
//	int num,num1;
//	scanf("%d", &num);
//	num1 = num / 4;
//	for (int i = 1; num1 > 0; i++)
//	{
//		printf("long ");
//		num1--;
//	}
//	printf("int");
//}
//#include <stdio.h>
//int main()
//{
//	int for_flag = 1;
//	int number = 0;
//	while (for_flag) {
//		printf("number = %d\n", number);
//		while (number++) {
//			printf(" >number = %d\n", number);
//			if (number == 3) {
//				for_flag = 0;
//				break;
//			}
//		}
//		number++;
//		printf(">>number = %d\n", number);
//	}
//	printf("%d %d\n", for_flag, number);
//	return 0;
//}
//#include <stdio.h>
//int suyel(int n)
//{
//	int sum = 0;
//	for (int x = 0; x <= n; x++)
//	{
//		sum += x;
//	}
//	return sum;
//}
//int main()
//{
//	int result = suyel(10);
//	printf("%d\n", result);
//
//	return 0;
//}
//#include <stdio.h>
//void function_test1()
//{
//	printf("function_test1()");
//	printf("함수안에서 실행\n");
//}
//int main()
//{
//	printf("실행전\n");
//	function_test1();
//	printf("실행후\n");
//	return 0;
//}
//#include <stdio.h>
//
//void eatFood()
//{
//	printf("밥먹기\n");
//}
//void goSleep()
//{
//	printf("잠자기\n");
//}
//int main()
//{
//	eatFood(); goSleep();
//	eatFood(); goSleep();
//	goSleep(); goSleep();
//
//
//	return 0;
//}
//#include <stdio.h>
//
//void person_A()
//{
//	int money = 10000;
//	printf("A : 주머니에");
//	printf("%d원\n", money);
//}
//
//void person_B()
//{
//	int money = 5000;
//	printf("B : 주머니에");
//	printf("%d원\n", money);
//}
//int main()
//{
//	person_A();
//	person_B();
//
//	return 0;
//}
//#include <stdio.h>
//
//int function_test2()
//{
//	int testNumber = 5;
//	return testNumber;
//}
//
//int main()
//{
//	int getNumber;
//	getNumber = function_test2();
//	printf("function_test()");
//	printf("에서 가져온 값 :");
//	printf("%d\n", getNumber);
//}
//#include <stdio.h>
//void sayHi() {
//	printf("hi");
//	return;
//}
//
//char getA() {
//	return 'A';
//}
//
//int get5() {
//	return 5;
//}
//
//double set1get5(int one) {
//	return one + 4.0;
//}
//
//void main() {
//	sayHi();
//	printf("%c\n", getA());
//	printf("%d\n", get5());
//	printf("%f\n", set1get5(1));
//}
//#include <stdio.h>
//
//void sayHi();
//void getA();
//int get5();
//double set1get5(int one);
//
//void main() {
//	sayHi();
//	getA();
//	printf("%d\n", get5());
//	printf("%f\n", set1get5(1));
//}
//void sayHi() {
//	printf("hi");
//	return;
//}
//void getA() {
//	return;
//}
//int get5() {
//	return 5;
//}
//double set1get5(int one){
//	return one + 4.0;
//}
//#include <stdio.h>
//
//float sendCard();
//int main() {
//	float result = sendCard();
//	printf("%f만원 받음", result);
//	return 0
//}
//float sendCard()
//{
//	printf("<크리스마스 카드>\n");
//	printf("비용: 0.7만원\n");
//	printf("돈내기(단위:만원) : ");
//	int manwon;
//	scanf("%d", &manwon);
//	float change = manwon - 0.7;
//	return change;
//}
#include <stdio.h>

//char getA() { return 'A'; }
//char getB() { return 'B'; }
//char getE() { return 'E'; }
//char getF() { return 'E'; }
//char getL() { return 'L'; }
//char getG() { return 'G'; }
//char getP() { return 'P'; }
//int main()
//{
//	printf("벌을 영어로?\n");
//	printf("%c%c%c\n", getB(), getE(), getE());
//	return 0;
//}
//char getA() { return 'A'; }
//char getB() { return 'B'; }
//char getE() { return 'E'; }
//char getF() { return 'E'; }
//char getL() { return 'L'; }
//char getG() { return 'G'; }
//char getP() { return 'P'; }
//int main()
//{
//	printf("사과를 영어로?\n");
//	printf("%c%c%c%c%c\n", getA(), getP(), getP(), getL(), getE());
//	return 0;
//}
//char getA() { return 'A'; }
//char getB() { return 'B'; }
//char getE() { return 'E'; }
//char getF() { return 'F'; }
//char getL() { return 'L'; }
//char getG() { return 'G'; }
//char getP() { return 'P'; }
//char getT() { return 'F'; }
//int main()
//{
//	printf("왼쪽을 영어로?\n");
//	printf("%c%c%c%c\n", getL(), getE(), getF(), getT());
//	return 0;
//}
//#include <stdio.h>
//
//void makeHambuger(int count)
//{
//	printf("햄버거 %d개 나왔습니다.\n", count);
//}
//
//int main()
//{
//	int ham_count;
//	printf("햄버거 몇 개 주문하시겠습니까?\n");
//	scanf("%d", &ham_count);
//	makeHambuger(ham_count);
//	return 0;
//}
//#include <stdio.h>
//void print_Number();
//void print_Number2(int num);
//void print_Number4_charB(int num, char b);
//void print_charaterX(char X);
//
//int main()
//{
//	print_Number();
//	print_Number2(2);
//	print_Number4_charB(4, 'b');
//	print_charaterX('X');
//	return 0;
//}
//void print_Number()
//{
//	printf("Number\n");
//}
//void print_Number2(int num)
//{
//	printf("Number :%d\n", num);
//}
//void print_Number4_charB(int num, char b)
//{
//	printf("Number :%d.charater :%c\n", num, b);
//}
//void print_charaterX(char X)
//{
//	printf("charater :%c\n", X);
//}
//#include <stdio.h>
//char rightType(char type) {
//	if (type != 'A' && type != 'B') {
//		printf("주문할 수 없는 햄버거입니다.\n");
//		return 'C';
//	}
//	return type;
//}
//void makeHambuger(char type, int count) {
//	if (type == 'A') {
//		printf("A타입 햄버거");
//	}
//	else {
//		printf("B타입 햄버거");
//	}
//	printf("%d개 나왔습니다.\n",count);
//}
//int main()
//{
//	char ham_type;
//	int ham_count;
//	printf("어느타입 햄버거를");
//	printf("주문하시겠습니까?(AorB)\n");
//	scanf("%c", &ham_type);
//	if (rightType(ham_type) == 'C') {
//		return 0;
//	}
//	printf("햄버거 몇개 주문 하시겠습니까?.\n");
//	scanf("%d", &ham_count);;
//	makeHambuger(ham_type, ham_count);
//	return 0;
//}
//#include <stdio.h>
//int sum(int n)
//{
//	if (n <= 1) return 1;
//	return sum(n-1) + n;
//}
//int main()
//{
//	int num;
//	scanf("%d", &num);
//	printf("%d", sum(num));
//}
	//int i;
	//int odd_hap = 0;
	//int even_hap = 0;

	//for (i = 1; i <= 100; i++)
	//{
	//	if (i % 2 == 0)
	//		even_hap = even_hap + i;
	//	else
	//		odd_hap = odd_hap + i;
	//}
	//printf("홀수의 합: %d \n", odd_hap);
	//printf("짝수의 합: %d \n", even_hap);
//#include <stdio.h>
//struct BYTE
//{
//	char b;
//	char a;
//};
//
//void main()
//{
//	struct BYTE a;
//	a.b = 20;
//	a.a = 10;
//	printf("%d %d", a.a, a.b);
//}
//#include <stdio.h>
//
//int main()
//{
//	float number[2] = { 1,2 };
//	void* p = number;
//
//	printf("%d\n", *(float*)p);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int fibonacci[5] = { 3,5,8,13,21 };
//	int* ptrFibo;
//	ptrFibo = fibonacci;
//
//	int* ptrFibo1 = &fibonacci[1];
//	int* ptrFibo4 = fibonacci + 4;
//	printf("> %d - %d", *ptrFibo4, *ptrFibo1);
//	printf(">> %d\n", ptrFibo4 - ptrFibo1);
//
//	printf("%d\n", ptrFibo[1]);
//	printf("%d\n", ptrFibo[0]);
//	printf("%d\n", ptrFibo[-1]);
//}

//#include <stdio.h>
//
//int main()
//{
//	int numArr[5] = { 11,22,33,44,55 };
//	int *numptrA;
//	void *ptr;
//
//	numptrA = &numArr[2];
//	ptr = numArr;
//
//	printf("%d\n", numptrA[-1]);
//	printf("%d\n", *((int *)ptr + 4));
//}

//#include <stdio.h>
//
//int main()
//{
//	char arr[5] = { 1,2,3,4,5 };
//	char *ptr = &arr[0] ;
//	
//	ptr += 2;
//
//	printf("%d", *ptr);
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[5] = { 2,4,6,8,10 };
//	int* p = &arr[0];
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", *p++);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[2][3] = { 
//		{1,2,3},
//		{4,5,6} 
//	};
//	int* p = arr[1];
//	printf("%4d", *p);
//	//for (int i = 0; i < 6; i++)
//	//{
//	//	printf("%4d", *p++);
//	//}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int arr[2][3] = { {1,2,3},{4,5,6} };
//	int* p = arr[0];
//	for (int i = 0; i < 6; i++)
//	{
//		printf()
//	}
//}
//#include <stdio.h>
//
//int main()
//{
//	int num[4] = { 1,2,3,4 };
//	int* pt = num;
//
//	pt++;
//	*pt++ = 5;
//	*pt++ = 10;
//
//	pt--;
//	*pt++ += 20;
//
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%4d", num[i]);
//	}
//	printf("\n");
//	return 0;
//}
//#include <stdio.h>
//
//void main()
//{
//	char str[] = "기울어진운동장 : 애초부터 공정힌 경쟁을 할 수 없는 상황을 비유적으로 이르는 말.";
//	char* ptr = &str[7];
//
//	printf("%s\n\n", ptr);
//}

//#include <stdio.h>
//void main()
//{
//	char str[] = "기울어진 운동장 : 어느 한 쪽으로 기울어진 운동장에서는 아무리 뛰어난 사람이라도 경기에서 이길 수 없다는 데서 유래.";
//	char* ptr = &str[7];
//
//	printf("%s\n\n", str);
//	str[15] = 'a'; str[23] = 'b'; str[25] = 'c';
//	printf("%s\n\n", ptr);
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[100] = {};
//	for (int i = 1; i <= 100; i++)
//		arr[i-1] = i;
//
//	int* ptr = &arr[50];
//
//	for (; *ptr != 50; ptr += 1)
//	{
//		printf("%4d", *ptr);
//
//		if (*ptr == 100)
//			ptr -= 100;
//	}
//}
//#include <stdio.h>
//
//void main()
//{
//	FILE* pFile;
//	pFile = fopen("myfile.txt", "w");
//	printf("안녕하세요");
//	fclose(pFile);
//}
//#include <stdio.h>
//
//void main()
//{
//	FILE* pFile;
//	pFile = fopen("myfile.txt", "w");
//	fprintf(pFile, "안녕하세요");
//	fclose(pFile);
//}
//#include <stdio.h>
//
//void main()
//{
//	FILE* pFile;
//	char name[100];
//
//	pFile = fopen("nyfile.txt", "w");
//	fscanf(pFile, "%c", name);
//	printf("%c", name);
//	fclose(pFile);
//}
//#include <stdio.h>
//
//void main()
//{
//	FILE* pFile;
//	char name[100];
//	pFile = fopen("myfile.txt", "w");
//	for (int n = 0; n < 5; ++n)
//	{
//		printf("파일에 쓰고 싶은 말을 입력하세요. : ");
//		scanf("%s", name);
//		fprintf(pFile, "%d번 내용 )..% - 10s..]\n", n, name);
//	}
//}
//#include <stdio.h>
//void main()
//{
//	FILE* readfp, * writefp;
//	char buff[1024];
//
//	readfp = fopen("myfile.txt", "r");
//	writefp = fopen("outfile.txt", "w");
//	if (readfp == NULL) {
//		printf("파일을 찾지 못하였습니다.\n");
//		return;
//	}
//	while (!feof(readfp))
//	{
//		fgets(buff, 1024, readfp);
//		fputs(buff, writefp);
//	}
//	fclose(readfp);
//	fclose(writefp);
//}
//#include <stdio.h>
//#include <stdlib.h>
//
//#define BUFF_SIZE 30
//
//int main()
//{
//	char buff[BUFF_SIZE];
//	int readLen = 0;
//	FILE* src, * dst;
//	char name1[100], name2[100], enter;
//	printf("입려받을 파일의 이름을 입력하세요. :");
//	scanf("%s%c", name1, enter);
//
//	printf("출력받을 파일의 이름을 입력하세요. :");
//	gets_s(name2);
//
//	src = fopen(name1, "rb");
//	dst = fopen(name2, "wb");
//
//	if (src == NULL || dst == NULL)
//	{
//		puts("파일을 못 찾음");
//		return -1;
//	}
//	while (true)
//	{
//		readLen = fread(buff, 1, BUFF_SIZE, src);
//		if (readLen < BUFF_SIZE)
//		{
//			if (feof(src) != 0)
//			{
//				fwrite(buff, 1, readLen, dst);
//				puts("파일 복사 완료");
//				break;
//			}
//			else
//			{
//				printf("파일 복사 실패");
//				return -1;
//			}
//		}
//		fwrite(buff, 1, BUFF_SIZE, dst);
//	}
//	if (fclose(src) != 0 || fclose(dst) != 0)
//	{
//		puts("파일을 닫지 못했습니다.");
//		return -1;
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	FILE* fp = fopen("Coding.txt", "w");
//	int i = 123;
//	int j = -123;
//	double f = 3.141592;
//
//	fprintf(fp, "폭맞추기\n");
//	fprintf(fp, "i: %6d \n", i);
//	fprintf(fp, "i: %7d \n", i);
//	fprintf(fp, "i: %2d \n\n", i);
//
//	fprintf(fp, "오른쪽 정렬\n");
//	fprintf(fp, "i: %5d \n",i);
//	fprintf(fp, "왼쪽정렬\n");
//	fprintf(fp, "i: %-5d끝\n\n", i);
//
//	fprintf(fp, "#문자의 사용\n");
//	fprintf(fp, "i: %#x \n", i);
//	fprintf(fp, "j: %x\n\n", j);
//
//	fprintf(fp, "부호붙이기\n");
//	fprintf(fp, "i: %+d, j: %+d \n", i, j);
//
//	fclose(fp);
//	return 0;
//}
#include <stdio.h>

int main()
{
	FILE* f1 = fopen("Min.txt", "w");
	fprintf(f1,"Hello world");

	FILE* f2 = fopen("Gyu.txt", "w");
	fprintf(f2, "byeworld");

	fclose(f1);
	fclose(f2);
}
