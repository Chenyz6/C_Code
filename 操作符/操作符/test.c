#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��һ�������ڴ���1�ĸ���
int main()
{
	int a = 15;//1111
	int count = 0;
	for (int i = 0; i < 32; i++)
	{
		int c = (a >> i)& 1;
		if (c == 1)
			count++;
	}
	printf("%d\n", count);
	return 0;
}