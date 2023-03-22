#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a[10] = {0};
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int j = 0; j < 9; j++)
	{
		for (int k = 0; k < 9 - j; k++)
		{
			if (a[k] > a[k + 1])
			{
				int temp = a[k];
				a[k] = a[k + 1];
				a[k + 1] = temp;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}