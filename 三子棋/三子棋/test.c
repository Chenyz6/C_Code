#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
void menu()
{
	printf("*************************\n");
	printf("*****  1.��������Ϸ  ****\n");
	printf("*****  0.�˳�        ****\n");
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
		printf("��ѡ��->");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("�˳�\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}