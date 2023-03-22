#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	//printf("\a\a\a\n");//警告字符 蜂鸣
//	printf("%c\n", '\130');// X
//	printf("%d\n", '\130');// 88
//	/*
//	printf("%d\n", '\111');  C注释风格   不支持嵌套
//	*/
//	return 0;
//}




//指针
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	//&a 是拿出第一个地址
//	printf("%p\n", &a);
//	//%p 用来打印地址    0x00AFF8BC
//	int * pa = &a;//pa是用来存放地址的，在c语言中pa是指针变量
//	//* 说明pa是指针变量
//	//int 说明pa执行的对象是int类型
//	
//	char ch = 'w';
//	char * pc = &ch;
//
//	return 0;
//}



//结构体
#include <stdio.h>
struct stu {
	char name[5];
	int age;
	double score;
};
int main()
{
	struct stu s = {"张三", 10, 99.8};   
	//一个字符等于一个字节。一个汉字是两个字节，也就是等于两个字符
	printf("1: %s %d %lf\n", s.name, s.age, s.score);
	
	struct stu * ps = &s;
	printf("2: %s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);

	printf("3: %s %d %lf\n", ps->name, ps->age, ps->score);
	//printf("\a");   蜂鸣
	return 0;
}