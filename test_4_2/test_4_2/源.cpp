#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	//printf("\a\a\a\n");//�����ַ� ����
//	printf("%c\n", '\130');// X
//	printf("%d\n", '\130');// 88
//	/*
//	printf("%d\n", '\111');  Cע�ͷ��   ��֧��Ƕ��
//	*/
//	return 0;
//}




//ָ��
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	//&a ���ó���һ����ַ
//	printf("%p\n", &a);
//	//%p ������ӡ��ַ    0x00AFF8BC
//	int * pa = &a;//pa��������ŵ�ַ�ģ���c������pa��ָ�����
//	//* ˵��pa��ָ�����
//	//int ˵��paִ�еĶ�����int����
//	
//	char ch = 'w';
//	char * pc = &ch;
//
//	return 0;
//}



//�ṹ��
#include <stdio.h>
struct stu {
	char name[5];
	int age;
	double score;
};
int main()
{
	struct stu s = {"����", 10, 99.8};   
	//һ���ַ�����һ���ֽڡ�һ�������������ֽڣ�Ҳ���ǵ��������ַ�
	printf("1: %s %d %lf\n", s.name, s.age, s.score);
	
	struct stu * ps = &s;
	printf("2: %s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);

	printf("3: %s %d %lf\n", ps->name, ps->age, ps->score);
	//printf("\a");   ����
	return 0;
}