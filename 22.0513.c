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
	
	////相差一个int，4字节
	//printf("%p\n", arr1);
	//printf("%p\n", arr1+1);
	////相差一个8个字节的地址
	//printf("%p\n", p);
	//printf("%p\n", p+1);
	////相差一个数组（24=3个8字节地址）
	//printf("%p\n", &p);
	//printf("%p\n", &p+1);
	////同上
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
//	//两个独立数组，地址不同
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//
//	//对同一个字符常量创立指针，所以pa==pb
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
//	const char* p = "abcdef";//常量字符串，不能被*p修改，前面加const更好，强化代码
//	*p = 'w';//非法操作
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
//	int(*p)[10] = arr;//int[10]为p的指针类型，既数组，所以p为指向数组的指针
//	int* pa = arr;//int为pa的指针类型，指向的是一个整型
//	int* pb[10] = {0};//指针数组，数组里面的内容是指针
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