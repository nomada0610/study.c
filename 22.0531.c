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
//	//�ȼ��� int* p = malloc(40);
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
//	//���ڴ�����10�����οռ�
//	int* p = (int*)malloc(10*sizeof(int));
//	if (p == NULL)
//	{
//		//����ʧ�ܣ���ӡ����ԭ��
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//����ɹ�
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
//	//���붯̬�ռ䲻��ʹ�ã��ͷŶ�̬�ռ�
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

