#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stddef.h>

char* GetMemory(void)
{
	char p[] = "hello world";
	return p;
}

int main()
{
	char* str = NULL;
	str = GetMemory();
	printf(str);
}

//#define OFFSETOF(struct_name, member_name) (size_t)&(((struct_name*)0)->member_name)
//struct S
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//int main()
//{
//	struct S s;
//	printf("%d\n", OFFSETOF(struct S, c1));
//	printf("%d\n", OFFSETOF(struct S, a));
//	printf("%d\n", OFFSETOF(struct S, c2));
//	return 0;
//}


////#define DEBUG 0
//
//int main()
//{
//#if !defined(DEBUG)
//	printf("hehe\n");
//#endif
//
//#ifndef DEBUG
//	printf("haha\n");
//#endif
//
//	return 0;
//}
//


//int main()
//{
//#if 1==2 
//	printf("1\n");
//#elif 2==3
//	printf("2\n");
//#else
//	printf("3\n");
//#endif
//
//	return 0;
//}
//

//int main()
//{
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#if 1+1
//		printf("%d ", arr[i]);
//#endif
//	}
//
//	return 0;
//}



////#define DEBUG 1
//
//int main()
//{
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#ifdef DEBUG
//		printf("%d ", arr[i]);
//#endif
//	}
//
//	return 0;
//}



//#define MAX(X, Y) ((X)>(Y)?(X):(Y))
//
//int main()
//{
//	int a = 10;
//	int b = 11;
//
//	int max = MAX(a++, b++);
//	//int max = ((a++)>(b++)?(a++):(b++))
//	//            11    12   ²»Ö´ÐÐ  13
//	printf("%d\n", max);
//	printf("%d\n", a);
//	printf("%d\n", b);
//
//#undef MAX
//
//	int max2 = MAX(a, b);
//
//	return 0;
//}