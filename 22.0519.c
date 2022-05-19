#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

int main()
{
	int arr[7][7] = { 0 };
	int i = 0;
	for (i = 0; i < 7; i++)
	{
		int j = 0;
		for (j = 0; j < 7; j++)
		{
			if(j==0)
			{
				arr[i][j] = 1;
			}
			if (j == i)
			{
				arr[i][j] = 1;
			}
			if (i >=2 && 0< j < i)
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
		}
	}

	for (i = 0; i < 7; i++)
	{
		int j = 0;
		for (j = 0; j <=i; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");

	}

	return 0;
}



//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf("%d %d", a + b, c);
//
//	return 0;
//}

//int main()
//{
//	printf("%c", 255);
//
//	return 0;
//}



//struct stu
//{
//	char name[20];
//	int a;
//}a;
//
//int main()
//{
//	a.a = 20;
//	struct stu *p = &a; 
//	printf("%d\n", (*p).a);
//
//	return 0;
//}



//void reverse(char* str)
//{
//	assert(str!=0);
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//
//	}
//}
//
//int main()
//{
//	char arr[100]={0};
//	gets(arr);
//
//	reverse(arr);
//
//	printf("%s\n", arr);
//
//
//	return 0;
//}