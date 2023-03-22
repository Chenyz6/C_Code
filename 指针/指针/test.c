#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p", arr);
//	return 0;
//}

struct student
{
	char name[20];
	int number;
	double scorce;
};
void print(struct student s)
{
	printf("%s %d %lf\n", s.name, s.number, s.scorce);
}
void print1(struct student* s)
{
	printf("%s %d %lf\n", (*s).name, (*s).number, (*s).scorce);
	printf("%s %d %lf\n", s->name, s->number, s->scorce);
}
int main()
{ 
	struct student st = {"уехЩ",201,20.8};
	print(st);
	print1(&st);
	return 0;
}