#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <string.h>

int find_k(int arr[3][3], int k, int* x, int* y)
{
	int i = 0;
	int j = *y - 1;
	while(i <= *x - 1 && j >= 0)
	if (arr[i][j] < k)
	{
		i++;
	}
	else if (arr[i][j] > k)
	{
		j--;
	}
	else
	{
		*x = i;
		*y = j;
		return 1;
	}
	return 0;
}


int main()
{
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int k = 8;
	int x = 3;
	int y = 3;

	int ret = find_k(arr, k, &x, &y);
	if (1 == ret)
	{
		printf("找到了\n");
		printf("下标是%d %d\n", x, y);
	}
	else
	{
		printf("找不到\n");
	}
	return 0;
}


//void reverse(char* left, char* right)
//{
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void left_move_2(char* pc, int k)
//{
//	int len = strlen(pc);
//	reverse(pc, pc+k-1);
//	reverse(pc+k, pc+len-1);
//	reverse(pc, pc+len-1);
//}
//
//void left_move_1(char* pc, int k)
//{
//	assert(pc != NULL);
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		char tmp = *pc;
//		int len = strlen(pc);
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(pc + j) = *(pc + j + 1);
//		}
//
//		*(pc + len - 1) = tmp;
//	}
//}
//
//int Is_left_move(char* s1, char* s2)
//{
//	int i = 0;
//	int len = strlen(s1);
//	for (i = 0; i < len; i++)
//	{
//		if (0 == strcmp(s1, s2))
//			return 1;
//		else
//			left_move_2(s1, 1);
//		
//	}
//	return 0;
//}
//
//int Is_left_move_2(char* s1, char* s2)
//{
//	char arr[20] = { 0 };
//	int len = strlen(s1);
//	int i = 0;
//	for (i = 0; i < 2 * len; i++)
//	{
//		arr[i] = *(s1 + i % len);
//	}
//	char* pc = arr;
//	while (*pc != s2[0])
//	{
//		if (pc < (arr + len))
//		{
//			pc++;
//		}
//		else
//		{
//			return 0;
//		}
//	}
//	int j = 0;
//	char* pcc = pc;
//	for (j = 0; j < len; j++)
//	{
//		if (*pcc == s2[j])
//		{
//			pcc++;
//		}
//	}
//	if (pcc == pc + len)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int Is_left_move_3(char* str1, char* str2)
//{
//	assert(str1);
//	assert(str2);
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//		return 0;
//
//	strncat(str1, str1, len1);
//	char* pc=strstr(str1, str2);
//	if (pc != NULL)
//		return 1;
//	else
//		return 0;
//
//}
//
//
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//
//	//left_move_1(arr1, 2);
//	//left_move_2(arr1, 2);
//	//printf("%s\n", arr1);
//	//int ret = Is_left_move(arr1, arr2);
//	//int ret = Is_left_move_2(arr1, arr2);
//	int ret = Is_left_move_3(arr1, arr2);
//	if (ret == 1)
//		printf("Yes\n");
//	else
//		printf("No\n");	
//
//	return 0;
//}