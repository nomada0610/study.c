#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main()
{
	char* c[] = { "ENTER", "NEW", "POINT", "FIRST" };
	char** cp[] = { c + 3, c + 2, c + 1,c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);
	printf("%s\n", *-- * ++cpp + 3);
	printf("%s\n", *cpp[-2] + 3);
	printf("%s\n", cpp[-1][-1] + 1);


	return 0;
}








//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x, %x", ptr1[-1], *ptr2);
//
//	//printf("%d\n", (int)a);
//	//printf("%p\n", a);
//
//
//	return 0;
//}



//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d, %d\n", *(a + 1), *(ptr - 1));
//
//	return 0;
//}
//








//int main()
//{
//	int arr[3][4] = { 0 };
//	int a[4] = { 0 };
//	printf("%d\n", arr[0]);
//	printf("%d\n", arr[0]+1);
//	printf("%d\n", arr);
//	printf("%d\n", arr + 1);
//
//	printf("%d\n", sizeof(arr[3]));
//
//	printf("%d\n", sizeof(*(&a+1)));
//
//
//	return 0;
//}
//










//int main()
//{
//	int a[] = { 1,2,3,4 };
//	int(*p)[4] = a;
//	printf("%d", sizeof(*p));
//
//	return 0;
//}