#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

char* my_strncpy(char* dst, const char* src, size_t count)
{
	char* start = dst;
	while (count && (*dst++ = *src++) != '\0')
		count--;

	if (count)
		while (--count)
			*dst++ = '\0';

	return start;
}

char* my_strncat(char* str1, const char* str2, int count)
{
	char* start = str1;
	while (*str1)
		str1++;

	//while (count && (*str1++ = *str2++) != '\0')
	//	count--;
	//if (count == 0)
	//	*str1 = '\0';
	//return start;

	while (count--)
		if ((*str1++ = *str2++) == '\0')
			return start;
	*str1 = '\0';
	return start;
}

int main()
{
	char arr1 [20] = "hello\0xxxxxxxxxxxxx";
	char arr2 [] = "world";

	/*int ret = strcmp(p1, p2);*/

	my_strncpy(arr1, arr2, 6);
	printf("%s\n", arr1);

	return 0;
}

//int main()
//{
//	int arr[5] = { 1,3,5,7,9 };
//	int* p = arr;
//	int b = 1;
//	//printf("%d\n", *++p);
//	// 
//	//printf("%d\n", *p++);
//	//printf("%d\n", *p);
//
//	//printf("%d\n", *(p++));
//	//printf("%d\n", *p);
//
//	printf("%d\n", b++);
//	printf("%d\n", (*p)++);
//	//printf("%d\n", ++*p);
//
//
//	return 0;
//}


//char* my_strcpy(char* dst, const char* src)
//{
//	assert(dst && src);
//	char* cp = dst;
//	while (*cp++ = *src++);
//	//while(1)
//	//{
//	//	*cp = *src;		
//	//	
//
//	//	if (*cp == 0)
//	//	{
//	//		cp++;
//	//		src++;
//	//		break;
//	//	}
//	//	else
//	//	{
//	//		cp++;
//	//		src++;
//	//	}
//	//}
//	return dst;
//}
//
//char* my_strcat(char* dst, const char* src)
//{
//	assert(dst && src);
//	char* cp = dst;
//	while (*cp)
//	{
//		cp++;
//	}
//
//	while (*cp++ = *src++);
//
//	return dst;
//}
//
//int main()
//{
//	char arr1[20] = "helloi";
//	char arr2[] = "bit";
//
//	//my_strcpy(arr1, arr2);
//	my_strcat(arr1, arr2);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}


//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//
//	return 0;
//}