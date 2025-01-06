#pragma once
#include <stdio.h>
#include <time.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define EASY_MINE 10


void InitBoard(char board[ROWS][COLS], int rows, int cols,char s);
void DisplayBoard(char board[ROWS][COLS], int row, int col);
void SetMine(char board[ROWS][COLS], int row, int col);
void SearchMine(char board[ROWS][COLS],char board2[ROWS][COLS], int row, int col);