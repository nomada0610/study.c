#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stddef.h>

struct
{
	char name[10];
	int age;
}x;//û��tag�Ľṹ�����ͣ�ֻ���ڴ˴���������һ����Ϊһ����ʹ��


struct
{
	char name[10];
	int age;
}*p;//�����ṹ�����Ϳ���һ�������������ǻᵱ�������ṹ�壬����p=&a���Ϸ�����Ϊ���Ͳ�ͬ

typedef struct Node
{
	int data;
	struct Node* next;
}Node;


struct S1
{
	char c1;
	int a;
	char c2;
};

struct S2
{
	char c1;
	char c2;
	int a;
};

struct S3
{
	double d;
	char c;
	int a;
};

struct S4
{
	char c;
	struct S3 s;
	double d;
};

//#pragma pack(1)
struct S
{
	char c;
	int a;
	double d;
};
//#pragma pack()

int main()
{
	//struct S1 S1 = { 0 };
	//printf("%d\n", sizeof(S1));
	//struct S2 s2 = { 0 };
	//printf("%d\n", sizeof(s2));
	//struct S3 s3 = { 0 };
	//printf("%d\n", sizeof(s3));
	//struct S4 s4 = { 0 };
	//printf("%d\n", sizeof(s4));
	//struct S s = { 0 };
	//printf("%d\n", sizeof(s));

	printf("%d\n", offsetof(struct S, c));
	printf("%d\n", offsetof(struct S, a));
	printf("%d\n", offsetof(struct S, d));


	return 0;
}