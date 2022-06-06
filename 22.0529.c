#define _CRT_SECURE_NO_WARNINGS 1

#define NAME_MAX 20
#define SEX_MAX 5
#define TEL_MAX 12
#define ADDR_MAX 15

#define NUM_MAX 1000

#include <stdio.h>

int main()
{
	struct PeoInfo
	{
		char name[NAME_MAX];
		int age;
		char sex[SEX_MAX];
		char tel[TEL_MAX];
		char addr[ADDR_MAX];
	};
	struct contact
	{
		struct PeoInfo data[NUM_MAX];
		int size;
	}con;

	struct contact* p = &con;

	memset(p, 0, sizeof(*p));
	printf("%d\n", p->size);

	return 0;

}