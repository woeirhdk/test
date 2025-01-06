#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void InitBoard(char board[ROWS][COLS],int row,int col,char s)
{
	int i = 0;
	for (i = 0; i < ROWS; i++)
	{
		int j = 0;
		for (j = 0; j < COLS; j++)
		{
			board[i][j] = s;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	printf("-----ɨ����Ϸ-----\n");
	for (i = 0; i <=row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		int j = 0;
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("-----ɨ����Ϸ-----\n");
}

void SetMine(char board[ROWS][COLS], int row, int col) 
{
	int count = EASY_MINE;
	while (count != 0)
	{
		int	x = rand() % 9 + 1;
		int y = rand() % 9 + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
		else
			continue;
	}
}

int get_mine_count(char board[ROWS][COLS],int x,int y)
{
	return (board[x - 1][y - 1] + board[x - 1][y] + board[x - 1][y + 1] +
		board[x][y - 1] + board[x][y + 1] +
		board[x + 1][y - 1] + board[x + 1][y] + board[x + 1][y + 1] - 8 * '0');
}

void SearchMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (1)
	{
		printf("������Ҫɨ������:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= 9)
		{
			if (mine[x][y] == '1')
			{
				printf("��ϲ�㣬��ը������\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else
			{
				int count = get_mine_count(mine,x,y);
				show[x][y] = count + '0';
				DisplayBoard(show, ROW, COL);
			}
		}
		else
		{
			printf("���������Ƿ�������������\n");
		}
		if (win = ROW * COL - EASY_MINE)
		{
			printf("��ϲ�㣬ɨ�׳ɹ���\n");
			break; 
		}
	}
}