#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

//��ӡ�˵�
void menu()
{
	printf("************************\n");
	printf("*****1. play 0.exit*****\n");
	printf("************************\n");
}
//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//��ӡ����
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		//��ӡ�ָ���
		if (i < row - 1)
		{
			int j = 0;
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}

int IsEmpty(char board[ROW][COL],int row,int col)
{
	if (board[row][col] == ' ')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	while (1)
	{
		printf("�������\n");
		printf("������Ҫ�����λ��:>");
		scanf("%d %d", &row, &col);
		if (IsEmpty(board, row - 1, col - 1))
		{
			board[row - 1][col - 1] = '*';
			break;
		}
		else
		{
			printf("�����겻���ã�������ѡ��\n");
		}
	}
}

void ComputerMove(char board[ROW][COL])
{
	printf("��������\n");
	while (1)
	{	
		int row = rand() % 3;
		int col = rand() % 3;
		if (IsEmpty(board,row,col))
		{
			board[row][col] = '#';
			break;
		}
		else
			continue;
	}
}

int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}	
		}
	}
	return 1;
}

char IsWin(char board[ROW][COL],int row,int col)
{

	int i = 0;
	int j = 0;
	//����ͬ
	for (i= 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	//����ͬ
	for (j = 0; j < col; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
		{
			return board[1][j];
		}
	}
	//б��ͬ
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//ƽ��?�������
	if (IsFull(board, row, col))
	{
		return 'Q';
	}
	else
	{
		return 'C';
	}
}