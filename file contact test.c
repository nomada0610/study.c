#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

void menus()
{
	printf("*******************************\n");
	printf("*****  1.ADD    2.DELETE  *****\n");
	printf("*****  3.SEARCH 4.MODIFY  *****\n");
	printf("*****  5.SHOW   6.SORT    *****\n");
	printf("*****  7,SAVE   0.EXIT    *****\n");
	printf("*******************************\n");

}

int main()
{
	int input = 0;
	struct contact con;
	//��ʼ��ͨѶ¼
	Init_con(&con);


	do
	{
		menus();


		printf("��ѡ��>:");
		scanf("%d", &input);
		switch (input)
		{
		case add:
			ADD(&con);
			break;
		case del:
			DELETE(&con);
			break;
		case search:
			SEARCH(&con);
			break;
		case modify:
			MODIFY(&con);
			break;
		case show:
			SHOW(&con);
			break;
		case sort:
			SORT(&con);
			break;
		case save:
			SAVE(&con);
			printf("����ɹ�\n");
			break;
		case Exit:
			SAVE(&con);
			DestoryContact(&con);
			printf("�˳�ͨѶ¼��");
			break;
		default:
			printf("����������������롣");
			break;
		}
	} while (input);

	return 0;
}