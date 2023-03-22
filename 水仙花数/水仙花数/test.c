#define _CRT_SECURE_NO_WARNINGS 1
//各位数的n次幂等于本身
#include<stdio.h>
#include<math.h>

int main()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		int tmp = 1;
		int num = i;
		int sum = 0;
		//求出每位数
		while (num / 10)
		{
			tmp++;
			num = num / 10;
		}
		//对每位求3次幂
		num = i;
		while(num)
		{
			sum = sum + pow(num % 10, tmp);
			num = num / 10;
		}
		//进行比较
		if (sum == i)
		{
			printf("%d ", sum);
		}
		
	}
	return 0;
}