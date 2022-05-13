#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <float.h>


int main()
{
	int a = 9;
	float* p = (float*)&a;
	printf("%d\n", a);
	printf("%f\n", *p);

	*p = 9.0;
	printf("%d\n", a);

	printf("%f\n", *p);

	return 0;
}



//int main()
//{
//	char a[1000];
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d\n", strlen(a));
//	return 0;
//}


//int main()
//{
//	char a = -128;
//	printf("%u\n", a);
//
//	return 0;
//}



//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//}









//
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//
//	printf("%d %d %d", a, b, c);
//	return 0;
//}
//













//判断系统大小端函数，返回1为小端，0为大端
//int check_sys()
//{
//	int a = 1;
//	//char* p = (char*) & a;
//	return *((char*)&a);
//}
//
//
//int main()
//{
//	
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//
//	return 0;
//}





















//int main()
//{
//	int a = 10;
//	float f = 10;
//
//	short b = 10;
//	return 0;
//}

//void test(void)
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	test(100);
//	return 0;
//}


