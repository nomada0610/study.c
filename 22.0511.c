#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int my_strlen(const char* str)
{
	assert(str != 0);//��ָ֤����Ч��
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
//	//��srcָ����ַ���������destָ��Ŀռ䣬����'\0'�ַ�
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
//	const int* p = &num;//����*p��ָ���ֵ�����޸�
//	int* const p;//����p��ָ�뱾�����ĵ�ַ�������޸�
//	*p = 20;
//	printf("%d\n", num);
//	return 0;
//}




//int main()
//{
//	const int num = 10;
//	int* p = &num;
//	*p = 20;//�Ƿ��������ƻ���const
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



//typedef struct Stu//�ṹ��ؼ���+tag=�ṹ������ //typedef ����������
//{
//	char name[20];
//	short age;
//	char tele[20];
//	char sex[sex]
//}Stu;//�����Stu������                     //s1, s2, s3;//ȫ�ֽṹ�����
//
//
//int main()
//{
//	struct Stu s={"����", 20, "12412344", "��"}; //�ֲ�����
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