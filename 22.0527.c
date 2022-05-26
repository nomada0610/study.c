#define _CRT_SECURE_NO_WARNINGS 0

#include <stdio.h>

//一个例子
struct S
{
	int b : 16;
	int a : 16;
	char c : 5;
	char d : 4;
};
int main()
{
	struct S s = { 0 };
	s.a = 10;
	s.b = 12;
	s.c = 3;
	s.d = 4;
	printf("%d %d %d %d\n", s.a, s.b, s.c, s.d);
	printf("%d\n", sizeof(short));
	return 0;
}


//int main()
//{
//	struct C
//	{
//		char a : 3;
//		char b : 4;
//		long long int c : 30;
//	}c;
//	
//	printf("%d\n", sizeof(c));
//	return 0;
//}

//int check_sys(void)
//{
//	union
//	{
//		char c;
//		int i;
//	}u;
//
//	u.c = 1;
//
//	return u.c;
//}
//
//int main()
//{
//	int ret = check_sys();
//
//	if (1 == ret)
//		printf("小端\n");
//	else
//		printf("大端\n");
//
//	return 0;
//}



//union Un
//{
//	char arr[5];
//	int i;
//};
//
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//
//	//printf("%p\n", &u);
//	//printf("%p\n", &(u.c));
//	//printf("%p\n", &(u.i));
//
//	//u.c = 1;
//	//printf("%d\n", u.i);
//	return 0;
//}



//enum Sex
//{
//	//枚举常量
//	MALE,// = 2,
//	FEMALE,// = 4,
//	SECRET = 8
//};
//
//enum Color
//{
//	RED,
//	GREEN,
//	BLUE
//};
//
//int main()
//{
//	enum Sex s = MALE;
//	enum Color c = BLUE;
//
//	//printf("%d %d %d\n", RED, GREEN, BLUE);
//	//printf("%d %d %d\n", MALE, FEMALE, SECRET);
//
//	printf("%d\n", sizeof(c));
//	
//	return 0;
//}


//struct S
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};//位段：数字为比特位，一次开辟一个int的空间
//
//
//int main()
//{
//	struct S s = { 0 };
//
//	printf("%d\n", sizeof(s));// 8，两个整型空间
//
//	return 0;
//}