#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

//��װ����������������ͨѶ¼�����������±�
static int FindByName(const struct contact* p)
{
	int i = 0;
	char name[NAME_MAX];
	printf("����������>:");
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

//��ʼ��ͨѶ¼�ṹ��
void Init_con(struct contact* p)
{
	p->data = (PeoInfo*)malloc(DEFAULT_SZ * sizeof(PeoInfo));
	if (p->data == NULL)
		return;
	p->size = 0;
	p->capacity = DEFAULT_SZ;
}

//ͨѶ¼���
void CheckContact(contact* p)
{
	if (p->size == p->capacity)
	{
		PeoInfo* ptr = (contact*)realloc(p->data, (p->capacity + 2) * sizeof(PeoInfo));
		if (ptr != NULL)
		{
			p->data = ptr;
			p->capacity += 2;
			printf("���ݳɹ�\n");
		}
		else
			printf("����ʧ��\n");
	}
}


//���ͨѶ¼�ṹ���Ա
void ADD(struct contact* p)
{
	//���ͨѶ¼����
	CheckContact(p);

	printf("����������>:");
	scanf("%s", p->data[p->size].name);
	printf("����������>:");
	scanf("%d", &(p->data[p->size].age));
	printf("�������Ա�>:");
	scanf("%s", p->data[p->size].sex);
	printf("������绰>:");
	scanf("%s", p->data[p->size].tel);
	printf("�������ַ>:");
	scanf("%s", p->data[p->size].addr);

	p->size++;
	printf("��ӳɹ�\n");

	/*if (NUM_MAX == p->size)
	{
		printf("ͨѶ¼����\n");
	}
	else
	{
		printf("����������>:");
		scanf("%s", p->data[p->size].name);
		printf("����������>:");
		scanf("%d", &(p->data[p->size].age));
		printf("�������Ա�>:");
		scanf("%s", p->data[p->size].sex);
		printf("������绰>:");
		scanf("%s", p->data[p->size].tel);
		printf("�������ַ>:");
		scanf("%s", p->data[p->size].addr);

		p->size++;
		printf("��ӳɹ�\n");
	}*/
}

//ɾ��ͨѶ¼��Ա����
void DELETE(struct contact* p)
{
	int ret = FindByName(p);
	int i = 0;

	if (-1 == ret)
	{
		printf("Ҫɾ�����˲�����\n");
	}
	else
	{
		while (ret < (p->size - 1))
		{
			memcpy(&(p->data[ret]), &(p->data[ret + 1]), sizeof(p->data[0]));
			ret++;
		}
		p->size--;
		printf("ɾ���ɹ�\n");
	}
}

//����������ͨѶ¼������ӡ����
void SEARCH(const struct contact* p)
{
	int ret = FindByName(p);

	if (-1 == ret)
	{
		printf("���ҵ��˲�����\n");
	}
	else
	{
		printf("�ҵ���\n");
		printf("%-10s%-5s%-5s%-12s%-15s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-10s%-5d%-5s%-12s%-15s\n", 
			p->data[ret].name, 
			p->data[ret].age, 
			p->data[ret].sex, 
			p->data[ret].tel, 
			p->data[ret].addr);

	}
}

//�����޸�ͨѶ¼��Ա
void MODIFY(struct contact* p)
{
	int ret = FindByName(p);

	if (-1 == ret)
	{
		printf("Ҫ�޸ĵ��˲�����\n");
	}
	else
	{
		printf("����������>:");
		scanf("%s", p->data[ret].name);
		printf("����������>:");
		scanf("%d", &(p->data[ret].age));
		printf("�������Ա�>:");
		scanf("%s", p->data[ret].sex);
		printf("������绰>:");
		scanf("%s", p->data[ret].tel);
		printf("�������ַ>:");
		scanf("%s", p->data[ret].addr);

		printf("�޸ĳɹ�\n");

	}
}

//��ӡͨѶ¼��Ա
void SHOW(const struct contact* p)
{
	int i = 0;
	printf("%-10s%-5s%-5s%-12s%-15s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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

//qsort��Ҫ�ıȽϺ���
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
		printf("ͨѶ¼Ϊ��\n");
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


//����ͨѶ¼����ѡ����������
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
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		
			printf("��ѡ������������1.����  2.����  3.�绰  4.��ַ\n");
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
						//	printf("�������\n");
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