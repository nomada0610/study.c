#define _CRT_SECURE_NO_WARNINGS 1

#define NAME_MAX 20
#define SEX_MAX 5
#define TEL_MAX 12
#define ADDR_MAX 15

#define NUM_MAX 1000

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

enum Option
{
	Exit,
	add,
	del,
	search,
	modify,
	show,
	sort
};

void Init_con(struct contact*);
void ADD(struct contact*);
void DELETE(struct contact*);
void MODIFY(struct contact*);
void SHOW(const struct contact*);
void SEARCH(const struct contact*);
void SORT(struct contact*);


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
};


