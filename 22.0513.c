#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void print(int(*p)[5], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ", *(*(p+i)+j));
		}
		printf("\n");
	}
}

int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	print(arr, 3, 5);

	return 0;
}














//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int* p = arr;
//	int (*pa)[5] = &arr;
//	printf("%d\n", *p);
//	printf("%d\n", **pa);
//	printf("%d\n", *(*pa+1));
//	printf("%p\n", p);
//	printf("%p\n", pa);
//	printf("%p\n", p+1);
//	printf("%p\n", pa+1);
//
//
//	return 0;
//}





//
//int main()
//{
//	int arr1[5] = { 1,8,3,4,5 };
//	int arr2[5] = { 2,9,4,5,6 };
//	int arr3[5] = { 4,10,5,6,7 };
//
//	int* p1 = arr1;
//	int* p2 = arr2;
//	int* p3 = arr3;
//
//	int* p[3] = { p1, p2, p3 };
//	int p[3] = { arr1,arr2,arr3 };

	//int* (*pa)[3] = p;

	//printf("%d\n", *(*(pa + 1) + 1));

	//printf("%d\n", (*pa)[0]);
	//printf("%d\n", arr1);
	//printf("%p\n", pa);
	//printf("%p\n", pa+1);

	//printf("%p\n", p);
	//printf("%p\n", p+1);
	
	////���һ��int��4�ֽ�
	//printf("%p\n", arr1);
	//printf("%p\n", arr1+1);
	////���һ��8���ֽڵĵ�ַ
	//printf("%p\n", p);
	//printf("%p\n", p+1);
	////���һ�����飨24=3��8�ֽڵ�ַ��
	//printf("%p\n", &p);
	//printf("%p\n", &p+1);
	////ͬ��
	//printf("%p\n", pa);
	//printf("%p\n", pa+1);


	//printf("%d\n", arr1[0]);
	//printf("%d\n", *arr1);
	//printf("%d\n", arr1[1]);
	//printf("%d\n", *(arr1 + 1));
	//printf("%d\n", p[0][0]);
	//printf("%d\n", (*pa)[0][0]);

	//printf("%d\n", arr1[0]);
	//printf("%d\n", (*p)[0]);
	//printf("%d\n", (**pa)[0]);

	//printf("%d\n", *arr1);
	//printf("%d\n", *p[0]);

	//printf("%d\n", *(p + 1)[0]);
	//printf("%d\n", *(*pa+1)[0]);

	//printf("%d\n", *(**pa+1));
	//printf("%d\n", *(*(*pa+1)+1));

	//printf("%d\n", *(*(*pa + 2) + 1));
	//printf("%d\n", (*pa)[2][1]);
	//printf("%d\n", *((*pa)[2] + 1));



	//





	/*printf("%d\n", arr2[0]);
	printf("%d\n", (p + 1)[0]);
	printf("%d\n", (p+1));*/



	

//	return 0;
//}




//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int* p = arr;
//	int(*pa)[5] = &arr;
//
//	printf("%p\n", p);
//	printf("%p\n", p+1);
//	printf("%p\n", &arr[1]);
//	
//
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//	printf("%p\n", &arr + 1);
//
//	return 0;
//}




//int main()
//{
//	char* arr[5];
//	char* (*pa)[5] = &arr;
//
//	int arr[5];
//	int(*pa)[5] = &arr;
//	return 0;
//}
//



//int main()
//{
//	//�����������飬��ַ��ͬ
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//
//	//��ͬһ���ַ���������ָ�룬����pa==pb
//	char* pa = "abcdef";
//	char* pb = "abcdef";
//
//	printf("%c\n", *arr1);
//	printf("%d\n", arr2);
//	printf("%d\n", pa);
//	printf("%d\n", pb);
//
//	return 0;
//}





//int main()
//{
//	const char* p = "abcdef";//�����ַ��������ܱ�*p�޸ģ�ǰ���const���ã�ǿ������
//	*p = 'w';//�Ƿ�����
//	printf("%s\n", p);
//
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	char* p = &arr;
//	char* p1 = &arr[0];
//
//	printf("%s\n", &arr[0]);
//	printf("%s\n", arr);
//
//	printf("%p\n", p);
//	printf("%p\n", p+1);
//
//	printf("%p\n", p1);
//	printf("%p\n", p1+1);
//
//	return 0;
//}

//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = arr;//int[10]Ϊp��ָ�����ͣ������飬����pΪָ�������ָ��
//	int* pa = arr;//intΪpa��ָ�����ͣ�ָ�����һ������
//	int* pb[10] = {0};//ָ�����飬���������������ָ��
//
//	printf("%p\n", p);
//	printf("%p\n", pa);
//
//	printf("%p\n", p + 1);
//	printf("%p\n", pa + 1);
//
//
//	return 0;
//}