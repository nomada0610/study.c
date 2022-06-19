#define _CRT_SECURE_NO_WARNINGS 1

#define NAME_MAX 20
#define SEX_MAX 5
#define TEL_MAX 12
#define ADDR_MAX 15

#define DEFAULT_SZ 3
//#define NUM_MAX 1000

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

enum Option
{
	Exit,
	add,
	del,
	search,
	modify,
	show,
	sort,
	save
};


typedef struct PeoInfo
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char tel[TEL_MAX];
	char addr[ADDR_MAX];
}PeoInfo;

typedef struct contact
{
	struct PeoInfo* data;
	int size;
	int capacity;
}contact;


void Init_con(struct contact*);
void ADD(struct contact*);
void DELETE(struct contact*);
void MODIFY(struct contact*);
void SHOW(const struct contact*);
void SEARCH(const struct contact*);
void SORT(struct contact*);
void DestoryContact(struct contact*);
void SAVE(contact*);
void LoadContact(contact*);