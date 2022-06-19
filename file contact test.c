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
	//初始化通讯录
	Init_con(&con);


	do
	{
		menus();


		printf("请选择>:");
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
			printf("保存成功\n");
			break;
		case Exit:
			SAVE(&con);
			DestoryContact(&con);
			printf("退出通讯录。");
			break;
		default:
			printf("输入错误，请重新输入。");
			break;
		}
	} while (input);

	return 0;
}