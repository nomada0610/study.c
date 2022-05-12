#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int my_strlen(const char* str)
{
	assert(str != 0);//保证指针有效性
	int count = 0;
	while (*str != 0)
	{
		count++;
		str++;
	}

	return count;
}


int main()
{
	char* arr = "abcdef";
	printf("%d\n", my_strlen(arr));
	return 0;
}



//char* my_strcpy(char* dest, const char* src)
//{
//	int* ret = dest;
//	assert(dest != 0);
//	assert(src !=0);
//	//把src指向的字符串拷贝到dest指向的空间，包含'\0'字符
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "#######******";
//	char arr2[] = "bit123";
//	char* p = NULL;
//	
//	printf("%s\n", my_strcpy(arr1, arr2));
//
//	return 0;
//}


//int main()
//{
//	const int num = 10;
//	const int* p = &num;//修饰*p，指向的值不能修改
//	int* const p;//修饰p，指针本身代表的地址，不能修改
//	*p = 20;
//	printf("%d\n", num);
//	return 0;
//}




//int main()
//{
//	const int num = 10;
//	int* p = &num;
//	*p = 20;//非法操作，破坏了const
//
//	printf("%d\n", num);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d",&n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//



//typedef struct Stu//结构体关键字+tag=结构体类型 //typedef 给变量改名
//{
//	char name[20];
//	short age;
//	char tele[20];
//	char sex[sex]
//}Stu;//这里的Stu是类型                     //s1, s2, s3;//全局结构体变量
//
//
//int main()
//{
//	struct Stu s={"张三", 20, "12412344", "男"}; //局部变量
//	//Stu s2;
//
//	system("pasue");
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//
//	}
//	system("pause");
//	return 0;
//}