#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
void menu()
{
	printf("*************************\n");
	printf("*****  1.三子棋游戏  ****\n");
	printf("*****  0.退出        ****\n");
	printf("*************************\n");
	printf("*************************\n");
}
void game()
{
	char board[ROW][COL];

}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择->");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("退出\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}