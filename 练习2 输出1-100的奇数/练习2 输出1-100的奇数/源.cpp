#define _CRT_SECURE_NO_WARNINGS 1
//输出1-100的奇数
#include <stdio.h>
int main()
{
	//c++ c99 支持int写在里面
	for (int i = 1; i < 101; i++) {
		if (1 == i % 2)
			printf("%d ", i);
	}
	return 0;
}