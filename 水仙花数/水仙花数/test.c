#define _CRT_SECURE_NO_WARNINGS 1
//��λ����n���ݵ��ڱ���
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
		//���ÿλ��
		while (num / 10)
		{
			tmp++;
			num = num / 10;
		}
		//��ÿλ��3����
		num = i;
		while(num)
		{
			sum = sum + pow(num % 10, tmp);
			num = num / 10;
		}
		//���бȽ�
		if (sum == i)
		{
			printf("%d ", sum);
		}
		
	}
	return 0;
}