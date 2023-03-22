#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

void reverse(char* first, char* last)
{
	while (first < last)
	{
	char temp = 0;
	temp = *first;
	*first = *last;
	*last = temp;
	first++;
	last--;
	}
}
int main()
{
	char str[100] = { 0 };
	gets(str);
	int len = strlen(str);
	reverse(str,str+len-1);
	char* start = str;
	while (*start)
	{
		char* last = start;
		while (*last != '\0' && *last != ' ')
		{
			last++;
		}
		reverse(start, last - 1);
		if (*last == ' ')
			start = last + 1;
		else
			start = last;
	}
	printf("%s\n", str);
	return 0;
}