#define _CRT_SECUE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Stu
{
	char name[20];
	int age;
};

int st_cmp(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

int st_cmp_by_name(const void* e1, const void* e2)
{

	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

void test()
{
	int i = 0;
	struct Stu s[3] = { {"zhangsan", 20}, {"lisi", 35}, {"wangwu", 18} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), st_cmp_by_name);
	//for (i = 0; i < sz; i++)
	//{
	//	printf();
	//}
}

int main()
{
	test();
	return 0;
}



//int fl_cmp(const void* e1, const void* e2)
//{
//	return (int)(*(float*)e1 - *(float*)e2);
//}
//
//int main()
//{
//	int i = 0;
//	float arr[] = { 9.0, 8.0, 5.0, 6.0, 4.0, };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), fl_cmp);
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%.1f ", arr[i]);
//	}
//
//	return 0;
//}
//
//



//int main()
//{
//	int arr[] = { 1, 2, 3, 4 };
//	int* p = arr;
//	int(*pa)[4] = arr;
//	printf("%d\n", **pa);
//	printf("%d\n", pa[0][1]);
//	printf("%d\n", pa[1]);
//
//
//	return 0;
//}