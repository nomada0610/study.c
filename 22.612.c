#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>

//int main()
//{
//	char arr[10] = "abcd";
//	printf(arr);
//	return 0;
//}

struct str {
    int len;
    char s[0];
};

struct foo {
    struct str* a;
};

int main(int argc, char** argv) {
    struct foo f = { 0 };
    if (f.a->s) {
        //printf("%x\n", f.a->s);


        printf(f.a->s);
    }
    return 0;
}










//#include <stdio.h>
//#include <stdlib.h>





//struct S
//{
//	int n;
//	int arr[0];//结构体最后一个元素，位置大小，柔性数组
//};
//
//int main()
//{
//	struct S s;
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//
//	printf("%d", sizeof(*ps));
//	return 0;
//}

//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5*sizeof(int));
//
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//
//	struct S* ptr = realloc(ps, 44);
//	if (ptr != NULL)
//		ps = ptr;
//
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	printf("\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}

//struct S
//{
//	int n;
//	int* arr;//指针模拟柔性数组
//};
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	ps->arr = (struct S*)malloc(5 * sizeof(int));
//
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//
//	struct S* ptr = realloc(ps->arr, 10 * sizeof(int));
//	if (ptr != NULL)
//		ps->arr = ptr;
//
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	printf("\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//
//	free(ps->arr);
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}
