#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//  a = 5 b = 7    35   能被a b整除的数
int main()
{
	int a = 0, b = 0,i = 0,min = 0;
	scanf("%d %d", &a, &b);
	min = a > b ? a : b;
	for (i = min; i <=(a * b); i++)
	{
			if ((i % a == 0) && (i % b == 0))
			{
				printf("%d", i);
				break;
			}
	}
	return 0;
}