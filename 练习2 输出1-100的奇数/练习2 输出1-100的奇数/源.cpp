#define _CRT_SECURE_NO_WARNINGS 1
//���1-100������
#include <stdio.h>
int main()
{
	//c++ c99 ֧��intд������
	for (int i = 1; i < 101; i++) {
		if (1 == i % 2)
			printf("%d ", i);
	}
	return 0;
}