#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <errno.h>


//int main()
//{
//	char arr[] = "I Am A Student";
//	
//	int i = 0;
//	while(arr[i])
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//
//
//	return 0;
//}

int main()
{
	char ch = 'W';
	ch = tolower(ch);
	putchar(ch);


	return 0;
}


//int main()
//{
//	//char* str = strerror(errno);
//
//	FILE* fp = fopen("test.txt", "r");
//
//	if (fp == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open file successfully\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	char arr[] = "nomad0610@hotmail.com";
//	char* p = "@.";
//
//	char* ret = NULL;
//
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}

