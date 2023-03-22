#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	char name[20];
	int sex;
	float score;
}stu;

int main()
{
	
	//FILE* fp = fopen("file.txt", "r");
	//if (fp == NULL)
	//{
	//	perror("fopen:");
	//	return 1;
	//}
	//for (int i = 0; i < 10; i++)
	//{
	//	printf(fp, "%s %d %f", st.name, st.sex, st.score);
	//}
	//fclose(fp);
	//fp = NULL;

	//打开文件
	FILE* p = fopen("file.txt", "r");
	stu st;
	if (p == NULL)
	{
		perror("fopen:");
		return 1;
	}
	for (int i = 0; i < 10; i++)
	{
		while(fscanf(p, "%s %d %f", st.name, &(st.sex), &(st.score))!=EOF)//读取到文件末尾
		
		printf("%s %d %f\n", st.name, st.sex, st.score);
	}

	//关闭文件
	fclose(p);
	p = NULL;
	return 0;
}