#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int my_strlen(char* str)
{
	int* start = str;
	while (*str != '\0')
	{
		str++;
	}
	return str - start;
}
int main()
{
	int len = my_strlen("abc");
	printf("%d", len);
	return 0;
}