//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	for (int i = 1; i <= 100; i++)
//	{
//		cout << i << " ";
//		if (i % 10 == 0)
//			cout << endl;
//	}
// rerturn 0;
//}

//#include <iostream>
//
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//
//	switch (n/10)
//	{
//		case 10:
//			cout << "A+";
//			break;
//
//		case 9:
//			cout << "A";
//			break;
//
//		case 8:
//			cout << "B";
//			break;
//
//		case 7:
//			cout << "C";
//			break;
//
//		case 6:
//			cout << "D";
//			break;
//
//		default:
//			cout << "F";
//	}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n,sum = 0;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//		sum += i;
//	cout << sum;
//}

//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//
//	for (int i = 1; i <= n; i++)
//	{
//		if (n % i == 0)
//			cout << i << " ";
//	}
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int p = 1;
//	int input;
//	for (int i = 1; ; i++)
//	{
//		if (i / 10 == 3 || i / 10 == 6 || i / 10 == 9 || i % 10 == 3 || i % 10 == 6 || i % 10 == 9)
//			i++;
//		cout << "P" << p << endl << ">>";
//		cin >> input;
//		if (input != i)
//			break;
//
//		if (p == 1)
//			p++;
//		else
//			p--;
//	}
//	if (p == 1)
//		cout << "p2 win";
//	else
//		cout << "p1win";
//}
// 
//--피보나치 수열(재귀호출)--
//#include <iostream>
//
//using namespace std;
//
//int list1(int a, int *p, int k)
//{
//	if (a == k)
//		return 0;
//	p[k] = p[k - 1] + p[k - 2];
//	return list1(a, p, k+1);
//}
//
//int main()
//{
//	int lists[256];
//	int n,a=2;
//	cin >> n;
//	lists[0] = 1;
//	lists[1] = 1;
//	list1(n, lists,a);
//	for (int i = 0; i < n; i++)
//	{
//		cout << lists[i] <<" ";
//	}
//}

//버블정렬
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int lists[5] = { 5, 3, 1, 2, 1 };
//    int store;
//
//    for (int i = 0; i < 4; i++)
//    {
//        for (int j = 0; j < 4 - i; j++)
//        {
//            if (lists[j] > lists[j + 1])
//            {
//                store = lists[j];
//                lists[j] = lists[j + 1];
//                lists[j + 1] = store;
//            }
//        }
//    }
//
//    for (int i = 0; i < 5; i++)
//    {
//        cout << lists[i] << " ";
//    }
//
//    return 0;
//}
//---선택정렬
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int lists[5] = { 5, 3, 1, 2, 1 };
//	int min = lists[0], store;
//	int	count = 0;
//
//	for (int i = 0; i < 5; i++)
//	{
//		if (min > lists[i])
//		{
//			min = lists[i];
//		}
//			
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		store = lists[count];
//		lists[count] = min;
//		lists[i] = store;
//		count++;
//	}
//	   for (int i = 0; i < 5; i++)
//	   {
//        cout << lists[i] << " ";
//    }
//}
//--제곱수 구하기
//#include <iostream>
//using namespace std;
//int main()
//{
//	int x, y,store;
//	cin >> x >> y;
//	if (y < x)
//	{
//		store = x;
//		x = y;
//		y = store;
//	}
//
//	for (int i = x; i <= y; i++)
//	{
//		if (i * i >= x && i * i <= y)
//			cout << i * i << " ";
//	}
//}
//--특정단어 바꾸기
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string a;
//	cin >> a;
//	int b = a.length();
//	string a_word, new_word;
//
//	while (true)
//	{
//		cout << "무엇을 무엇으로 바꾸고 싶나요?" << endl;
//		cin >> a_word >> new_word;
//		size_t pos = a.find(a_word);
//		if (pos == string::npos)
//			continue;
//		else
//			break;
//	}
//
//	a.replace(a.find(a_word), a_word.length(), new_word);
//	cout << a;
//}
//--포커 카드 섞기--
//#include <iostream>
//#include <stdlib.h>
//#include <time.h>
//using namespace std;
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int pocker_num[52] = {};
//	for (int i = 0; i < 52; i++)
//	{
//		int flag = 1;
//		int random = rand() % 52 + 1;
//		for (int j = 0; j < i; j++)
//		{
//			if (pocker_num[j] == random)
//			{
//				i--;
//				flag = 0;
//				break;
//			}
//		}
//		if (flag)
//			pocker_num[i] = random;
//	}
//
//	for(int i = 0; i < 52; i++)
//		cout << pocker_num[i] << " ";
//}
//--자기이름 코드값 출력--
//#include <iostream>
//#include <string>
//using namespace std;
//
//int hexa(int a, char *p)
//{
//	int i = 0;
//		for (i = 0; a > 0; i++)
//		{
//			if (a % 16 < 10)
//			{
//				p[i] = a % 16 + '0';
//			}
//	
//			else
//			{
//				p[i] = a % 16 - 10 + 0x41;
//			}
//			a = a / 16;
//		}
//		i--;
//		return i;
//}
//int main()
//{
//	string name;
//	cin >> name;
//	int lengh = name.length();
//	for (int i = 0; i < lengh; i++)
//	{
//		int name_num = (int)name[i];
//		char lists[100] = {};
//		int return1 = hexa(name_num,lists);
//
//		for (int j = return1; j >= 0; j--)
//			cout << lists[j];
//		cout << " ";
//	}
//		return 0;
//}