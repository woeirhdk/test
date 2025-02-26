#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void menu()
{
	printf("**************************\n");
	printf("*****1. play  0. exit*****\n");
	printf("**************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { '0' };
	char show[ROWS][COLS] = { '0' };
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	SearchMine(mine,show,ROW,COL);
}


int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入不合法，请重试!'\n");
			break;
		}
	} while (input);

	return 0;
}