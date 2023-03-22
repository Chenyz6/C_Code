#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

unsigned int my_strlen(const char* arr)
{
	assert(arr != NULL);
	unsigned int count = 0;   // size_t    ==  unsigned int
	while (*arr != '\0')
	{
		count++;
		arr++;
	}
	return count;
}
int main()
{
	char str[10] = { "hello r" };
	printf("%d", my_strlen(str));
	return 0;
}