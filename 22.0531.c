#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

char* GetMemory()
{
	char* p = (char*)malloc(100);
	return p;
}

void Test()
{
	char* str = NULL;
	str = GetMemory();
	strcpy(str, "hello world");
	printf(str);
	free(str);
	str = NULL;
}

int main()
{
	Test();

	return 0;
}



//int main()
//{
//	char arr[] = "abcdef";
//	printf("%s\n", arr);
//	printf("abcdef\n");
//	printf(arr);
//
//
//	return 0;
//}



//int main()
//{
//	int* p = realloc(NULL, 40);
//	//等价于 int* p = malloc(40);
//	return 0;
//}

//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//		printf("%s\n", strerror(errno));
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		/*for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p+i));
//		}*/
//	}
//
//	int* ptr = realloc(p, 80);
//	if (ptr != NULL)
//	{
//		p = ptr;
//		int i = 0;
//		for (i = 10; i < 20; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 20; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//
//
//	free(p);
//	p = NULL;
//
//
//	return 0;
//}


//int main()
//{
//	//向内存申请10个整形空间
//	int* p = (int*)malloc(10*sizeof(int));
//	if (p == NULL)
//	{
//		//申请失败，打印错误原因
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//申请成功
//		int i = 0;
//		for (; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//申请动态空间不再使用，释放动态空间
//	free(p);
//	p = NULL;
//
//	return 0;
//}



//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	struct Stu arr[n];
//
//	return 0;
//}

