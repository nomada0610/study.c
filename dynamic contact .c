#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

//封装函数，按姓名查找通讯录，返回数组下标
static int FindByName(const struct contact* p)
{
	int i = 0;
	char name[NAME_MAX];
	printf("请输入姓名>:");
	scanf("%s", name);
	for (; i < p->size; i++)
	{
		if (0 == strcmp(p->data[i].name, name))
		{
			return i;
		}
	}
	return -1;

}

//初始化通讯录结构体
void Init_con(struct contact* p)
{
	p->data = (PeoInfo*)malloc(DEFAULT_SZ * sizeof(PeoInfo));
	if (p->data == NULL)
		return;
	p->size = 0;
	p->capacity = DEFAULT_SZ;
}

//通讯录检测
void CheckContact(contact* p)
{
	if (p->size == p->capacity)
	{
		PeoInfo* ptr = (contact*)realloc(p->data, (p->capacity + 2) * sizeof(PeoInfo));
		if (ptr != NULL)
		{
			p->data = ptr;
			p->capacity += 2;
			printf("增容成功\n");
		}
		else
			printf("增容失败\n");
	}
}


//添加通讯录结构体成员
void ADD(struct contact* p)
{
	//检测通讯录容量
	CheckContact(p);

	printf("请输入姓名>:");
	scanf("%s", p->data[p->size].name);
	printf("请输入年龄>:");
	scanf("%d", &(p->data[p->size].age));
	printf("请输入性别>:");
	scanf("%s", p->data[p->size].sex);
	printf("请输入电话>:");
	scanf("%s", p->data[p->size].tel);
	printf("请输入地址>:");
	scanf("%s", p->data[p->size].addr);

	p->size++;
	printf("添加成功\n");

	/*if (NUM_MAX == p->size)
	{
		printf("通讯录已满\n");
	}
	else
	{
		printf("请输入姓名>:");
		scanf("%s", p->data[p->size].name);
		printf("请输入年龄>:");
		scanf("%d", &(p->data[p->size].age));
		printf("请输入性别>:");
		scanf("%s", p->data[p->size].sex);
		printf("请输入电话>:");
		scanf("%s", p->data[p->size].tel);
		printf("请输入地址>:");
		scanf("%s", p->data[p->size].addr);

		p->size++;
		printf("添加成功\n");
	}*/
}

//删除通讯录成员函数
void DELETE(struct contact* p)
{
	int ret = FindByName(p);
	int i = 0;

	if (-1 == ret)
	{
		printf("要删除的人不存在\n");
	}
	else
	{
		while (ret < (p->size - 1))
		{
			memcpy(&(p->data[ret]), &(p->data[ret + 1]), sizeof(p->data[0]));
			ret++;
		}
		p->size--;
		printf("删除成功\n");
	}
}

//按姓名查找通讯录，并打印出来
void SEARCH(const struct contact* p)
{
	int ret = FindByName(p);

	if (-1 == ret)
	{
		printf("查找的人不存在\n");
	}
	else
	{
		printf("找到了\n");
		printf("%-10s%-5s%-5s%-12s%-15s\n", "姓名", "年龄", "性别", "电话", "地址");
		printf("%-10s%-5d%-5s%-12s%-15s\n", 
			p->data[ret].name, 
			p->data[ret].age, 
			p->data[ret].sex, 
			p->data[ret].tel, 
			p->data[ret].addr);

	}
}

//查找修改通讯录成员
void MODIFY(struct contact* p)
{
	int ret = FindByName(p);

	if (-1 == ret)
	{
		printf("要修改的人不存在\n");
	}
	else
	{
		printf("请输入姓名>:");
		scanf("%s", p->data[ret].name);
		printf("请输入年龄>:");
		scanf("%d", &(p->data[ret].age));
		printf("请输入性别>:");
		scanf("%s", p->data[ret].sex);
		printf("请输入电话>:");
		scanf("%s", p->data[ret].tel);
		printf("请输入地址>:");
		scanf("%s", p->data[ret].addr);

		printf("修改成功\n");

	}
}

//打印通讯录成员
void SHOW(const struct contact* p)
{
	int i = 0;
	printf("%-10s%-5s%-5s%-12s%-15s\n", "姓名", "年龄", "性别", "电话", "地址");
	for (; i < p->size; i++)
	{
		printf("%-10s%-5d%-5s%-12s%-15s\n", 
			p->data[i].name, 
			p->data[i].age, 
			p->data[i].sex, 
			p->data[i].tel, 
			p->data[i].addr);
	}
}

//qsort需要的比较函数
//int compare_str(void* p1, size_t width)
//{
//	return strncmp((char*)p1, (char*)p1 + width, NAME_MAX);
//}

//int compare_age(void* p1)
//{
//	return *(int*)p1 - *((int*)p1 + 1);
//}

void cmp_by_name(struct contact* p)
{
	int i = 0;
	struct PeoInfo tmp;
	size_t sz = sizeof(tmp);
	if (0 == p->size)
	{
		printf("通讯录为空\n");
	}
	else
	{
		for (; i < p->size - 1; i++)
		{
			int ret = strncmp(p->data[i].name, p->data[i].name + sz, NAME_MAX);
			if (ret > 0)
			{
				memcpy(&tmp, &(p->data[i]), sz);
				memcpy(&(p->data[i]), &(p->data[i + 1]), sz);
				memcpy(&(p->data[i + 1]), &tmp, sz);
			}
		}
		SHOW(p);
	}
}


//排序通讯录，可选择排序条件
void SORT(struct contact* p)
{
	int a = 0;
	int ret=0;
	int i = 0;
	int j = 0;

	struct PeoInfo tmp;
	size_t sz = sizeof(tmp);
	if (0 == p->size)
	{
		printf("通讯录为空\n");
	}
	else
	{
		
			printf("请选择排序条件：1.姓名  2.年龄  3.电话  4.地址\n");
			scanf("%d", &a);
			
			for (i = 0; i < p->size - 1; i++)
			{
				for (j = 0; j < p->size - 1 - i; j++)
				{
					switch (a)
					{
					case 1:
						ret = strncmp(p->data[j].name, p->data[j].name + sz, NAME_MAX);
						break;
					case 2:
						ret = p->data[j].age - p->data[j + 1].age;
						break;
					case 3:
						ret = strncmp(p->data[j].tel, p->data[j].tel + sz, TEL_MAX);
						break;
					case 4:
						ret = strncmp(p->data[j].addr, p->data[j].addr + sz, ADDR_MAX);
						break;
						//default:
						//	printf("输入错误\n");
						//	break;
					}

					if (ret > 0)
					{
						memcpy(&tmp, &(p->data[j]), sz);
						memcpy(&(p->data[j]), &(p->data[j + 1]), sz);
						memcpy(&(p->data[j + 1]), &tmp, sz);
					}
				}
				
			}
			SHOW(p);
			

	}
	
}


void DestoryContact(contact* p)
{
	free(p->data);
	p->data = NULL;
}