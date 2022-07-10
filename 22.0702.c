#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define CAT(X, Y) X##Y
int main()
{
	int class84 = 2010;

	printf("%d\n", CAT(class, 84));

	return 0;
}
//#define PRINT(X) printf("the value of "#X" is %d\n", X)
//int main()
//{
//	int a = 10;
//	int b = 5;
//
//	PRINT(a);
//	PRINT(b);
//	return 0;
//}
//
//


//#define DOUBLE(X) ((X)+(X))
//
//int main()
//{
//	int a = 5;
//	int ret = 10 * DOUBLE(a);
//	printf("%d\n", ret);
//
//	return 0;
//}


//#define SQUARE(X) (X)*(X)
//
//int main()
//{
//	int ret = SQUARE(5+1);
//	//int ret = (5+1)*(5+1);
//
//	printf("%d\n", ret);
//
//	return 0;
//}


//
//#define MAX 100
//#define STR "hehe"
//#define reg register
//#define do_forever for(;;)
//
//
//int main()
//{
//	do_forever;
//	//reg int a;
//	//register int b;
//	//int max = MAX;
//	//int max2 = 100;
//	//printf("%d\n", max);
//	//printf("%s\n", STR);
//
//
//	return 0;
//}

//int main()
//{
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __TIME__);
//	printf("%s\n", __DATE__);
//	return 0;
//}

//int main()
//{
//	int  i = 0;
//	int arr[10] = { 0 };
//	FILE* pf = fopen("log.txt", "w");
//
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "FILE:%s LINE:%d DATE:%s TIME:%s i:%d\n",
//			__FILE__, __LINE__,  __DATE__, __TIME__, i);
//		printf("%s\n", __FUNCTION__);
//	}
//	fclose(pf);
//	pf = NULL;
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	//printf("%d\n", __STDC__);
//	return 0;
//}