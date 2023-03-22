#define _CRT_SECURE_NO_WARNINGS
//求两个数中的最大值 用函数实现
#include <stdio.h>
#include<stdlib.h>
//
//int Max(int a, int b) 
//{
//	if (a > b)
//		return a;
//	else
//		return b;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = Max(a, b);
//	printf("Max=%d", c);
//	return 0;
//}


//typedef struct Node {
//	int id = 10;//学号 
//	char name[50] = {"gfdsgdsg"};//姓名 
//	char sex[10] = {"df"};//性别 
//	int ch=3, ma=3, en=1;//语数英 
//	int sum=3;//总分 
//
//	struct Node* next;//指针域 
//}node;
//node *L;
//node st;//创建一个结构体存放
//node* s;
//node* t = L;
//int main()
//{
//		s = (node*)malloc(sizeof(node));
//
//		*s = st;
//
//		t->next = s;
//		t = s;
//		t->next = NULL;//
//	node *p = L->next;
//	while (p != NULL) 
//	{
//		printf("%d %s %s %d %d %d %d\n", p->id, p->name, p->sex, p->ch, p->ma, p->en, p->sum);
//		p = p->next;
//	}	return 0;
//}
	
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d,,%d", &a, &b);
//	printf("%d", a + b);
//	return 0;
//}
//
//int main()
//{
//	char c;
//	c = getchar();
//	while (c != '?') {
//		putchar(c);
//		c = getchar();
//	}
//	return 0;
//}

//int main()
//{
//	int i, s;
//	for (i = 2; i <= 100; i += 2) {
//		s += i;
//	}
//	printf("%d", s);
//	return 0;
//}

//int main()
//{
//	char ch[3][5] = { {"aaaa"},{"bbb"},{"cc"}};
//	printf("\"%s\" ", ch[1]);
//	return 0;
//}
//

//
//int main()
//{
//	int arr[10] = { 0 };
//	int max = 0;
//	int min = 0;
//	for (int i = 0; i < 3; i++)
//	{
//		scanf("%d", arr + i);
//	}
//	for (int j = 0; j < 3; j++) {
//	if (arr[j] > max)
//		max = arr[j];
//	}
//	printf("%d", max);
//	return 0;
//}

//int main()
//{
//	int i, max, data[10];//定义3个变量
//	for (i = 0; i < 10; i++)
//
//		scanf("%d", &data[i]); //输入10个整数
//		//打擂台算法，就是假设第一个数据是最大，并赋给max，然后看后面的数是否有
//		//大于max的，如果有，则将该数赋给max ，这样始终在max中存放最大的数。
//	max = data[0];
//
//	for (i = 1; i < 10; i++)//输入循环体
//	{
//		if (data[i] > max)
//			max = data[i];
//	}
//	printf("\nmax num is：%d", max);//输出最大数
//	return 0;
//}

//int main()
//{
//	FILE* fp = fopen("file.txt", "r");
//	if (fp == NULL)
//	{
//		return 1;
//	}
//	char a = 10;
//	a = fgetc(fp);
//	printf("%c", a);
//	a = fgetc(fp);
//	printf("%c", a);
//	a = fgetc(fp);
//	printf("%c", a);
//	//rewind(fp);//返回到开始
//	a = fgetc(fp);
//	printf("%c\n", a);
//	fseek(fp, 2, SEEK_CUR);
//	int b = ftell(fp);
//	printf("%d\n", b);
//	a = fgetc(fp);
//	printf("%c\n", a);
//
//	return 0;
//}

//int main()
//{
//	/*if (-100)
//	{
//		printf("hehe");
//	}*/
//	char s[80], c = 'a';
//	int i = 0;
//	scanf("%s", s);
//	while (s[i++] != '\0')
//		if (s[i] == c) s[i] = s[i] - 32;
//		else if (s[i] == c - 32) s[i] = s[i] + 32;
//	puts(s);
//	return 0;
//}

int main()
{
	int i;
	printf("%d", sizeof(i));
	return 0;
}