#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
	int id;//学号 
	char name[50];//姓名 
	char sex[10];//性别 
	int ch, ma, en;//语数英 
	int sum;//总分 

	struct Node* next;//指针域 
}node;

node List;//链表 

//读取文件 
int readFile(node* L);

//保存文件
int saveFile(node* L);

// 主菜单界面
void welcome();
//增加学生信息

void printAddStuInfo();//界面 
void insertStuInfo(node* L, node e);//功能 

//删除学生信息
//界面 
void printDeleteStuInfo(node* L);
//逻辑功能 
void deleteStuInfo(node* pr);

//修改学生信息
void printFixStuInfo(node* L);



//查询学生信息
void printSearchStuInfo(node* L);
//按学号进行查找 
node* searchStuInfoById(int id, node* L);
//按姓名进行查找 
node* searchStuInfoByName(char name[], node* L);



//输出学生信息
void printStuInfo(node* L);

//退出程序
void goodBye();




int main() {
	int choice = 0;
	readFile(&List);
	while (1) {
		welcome();
		scanf("%d", &choice);
		switch (choice) {
		case 1://增加学生信息 
			printAddStuInfo();
			break;
		case 2://删除学生信息
			printDeleteStuInfo(&List);
			break;
		case 3://修改学生信息 
			printFixStuInfo(&List);
			break;
		case 4://查询学生信息
			printSearchStuInfo(&List);
			break;
		case 5://输出学生信息
			printStuInfo(&List);
			break;
		case 0://退出程序 
			goodBye();
			break;
		}
		printf("是否需要继续操作？(yes:1 / no:0 )：");
		scanf("%d", &choice);
		if (choice == 0) {
			break;
		}
	}

	return 0;
}

//主菜单界面 
void welcome() {
	system("cls");
	printf("************************\n");
	printf("**  学生成绩管理系统  **\n");
	printf("**    作者：陈与泽    **\n");
	printf("**                    **\n");
	printf("**  增加学生信息 ---1 **\n");
	printf("**  删除学生信息 ---2 **\n");
	printf("**  修改学生信息 ---3 **\n");
	printf("**  查询学生信息 ---4 **\n");
	printf("**  输出学生信息 ---5 **\n");
	printf("**  退出管理系统 ---0 **\n");

	printf("请输入对应的功能键（数字）: ");
}

//增加学生信息
void printAddStuInfo() {
	// 
	system("cls");//清屏操作
	node st;
	printf("请输入新增学生相关信息\n");
	printf("学号:");
	scanf("%d", &st.id);
	printf("姓名:");
	scanf("%s", st.name);
	printf("性别:");
	scanf("%s", st.sex);
	printf("语文:");
	scanf("%d", &st.ch);
	printf("数学:");
	scanf("%d", &st.ma);
	printf("英语:");
	scanf("%d", &st.en);
	st.sum = st.ch + st.ma + st.en;

	insertStuInfo(&List, st);

}
//插入学生信息 
void insertStuInfo(node* L, node e) {
	//头插法
	node* h = L;
	node* s = (node*)malloc(sizeof(node));
	*s = e;

	s->next = h->next;
	h->next = s;

	//保存文件 
	saveFile(L);
}

//删除学生信息
void printDeleteStuInfo(node* L) {
	system("cls");
	int id;

	node* p;

	printf("请输入要删除的学生学号");
	scanf("%d", &id);
	node* st = searchStuInfoById(id, L);
	p = st;

	if (st == NULL) {
		printf("查无此人！");
		return;
	}

	st = st->next;
	printf("________________________________________________________\n");
	printf("|学号\t|姓名\t|性别\t|语文\t|数学\t|英语\t|总分\t|\n");
	printf("________________________________________________________\n");
	printf("%d|%s\t|%s\t|%d\t|%d\t|%d\t|%d\t|\n", st->id, st->name, st->sex, st->ch, st->ma, st->en, st->sum);
	printf("________________________________________________________\n");

	deleteStuInfo(p);
	saveFile(L);

}
//删除学生信息
void deleteStuInfo(node* pr) {
	node* s = pr->next;

	pr->next = s->next;
	s->next = NULL;

	free(s);//释放结点空间 

}

//修改学生信息
void printFixStuInfo(node* L) {
	system("cls");
	int id;
	int choice = -1;

	printf("请输入要查找的学生学号");
	scanf("%d", &id);
	node* st = searchStuInfoById(id, L);

	if (st == NULL) {
		printf("查无此人！");
		return;
	}

	st = st->next;





	while (1) {
		system("cls");
		printf("________________________________________________________\n");
		printf("|学号\t|姓名\t|性别\t|语文\t|数学\t|英语\t|总分\t|\n");
		printf("________________________________________________________\n");
		printf("%d|%s\t|%s\t|%d\t|%d\t|%d\t|%d\t|\n", st->id, st->name, st->sex, st->ch, st->ma, st->en, st->sum);
		printf("________________________________________________________\n");
		printf("修改姓名---- 1\n");
		printf("修改性别---- 2\n");
		printf("修改语文---- 3\n");
		printf("修改数学---- 4\n");
		printf("修改英语---- 5\n");

		printf("请输入要修改的信息: ");
		scanf("%d", &choice);

		switch (choice) {
		case 1:
			printf("请输入姓名：");
			scanf("%s", st->name);
			break;
		case 2:
			printf("请输入性别：");
			scanf("%s", st->sex);
			break;
		case 3:
			printf("请输入语文：");
			scanf("%d", &st->ch);
			break;
		case 4:
			printf("请输入数学：");
			scanf("%d", &st->ma);
			break;
		case 5:
			printf("请输入英语：");
			scanf("%d", &st->en);
			break;
		}
		st->sum = st->ch + st->ma + st->en;
		printf("是否继续修改学生信息?（y-1 / n-0）\n");
		scanf("%d", &choice);
		if (choice == 0) {
			break;
		}
	}

	printf("________________________________________________________________\n");
	printf("|学号\t\t|姓名\t|性别\t|语文\t|数学\t|英语\t|总分\t|\n");
	printf("________________________________________________________________\n");
	printf("%d|%s\t\t|%s\t|%d\t|%d\t|%d\t|%d\t|\n", st->id, st->name, st->sex, st->ch, st->ma, st->en, st->sum);
	printf("________________________________________________________________\n");


	saveFile(L);
}

//查询学生信息
void printSearchStuInfo(node* L) {
	system("cls");
	int choice = 0;
	int id;
	char name[50];
	node* st;
	printf("按学号查询----- 1\n");
	printf("按姓名查询----- 2\n");
	printf("请输入查询方式：");
	scanf("%d", &choice);

	if (choice == 1) {
		printf("请输入要查询的学号：");
		scanf("%d", &id);
		st = searchStuInfoById(id, L);

		if (st == NULL) {
			printf("查无此人！\n");
		}
		else {
			st = st->next;
			printf("________________________________________________________\n");
			printf("|学号\t|姓名\t|性别\t|语文\t|数学\t|英语\t|总分\t|\n");
			printf("________________________________________________________\n");
			printf("%d|%s\t|%s\t|%d\t|%d\t|%d\t|%d\t|\n", st->id, st->name, st->sex, st->ch, st->ma, st->en, st->sum);
			printf("________________________________________________________\n");
		}
	}
	else if (choice == 2) {
		printf("请输入要查询的姓名：");
		scanf("%s", name);
		st = searchStuInfoByName(name, L);

		if (st == NULL) {
			printf("查无此人！\n");
		}
		else {
			st = st->next;
			printf("________________________________________________________\n");
			printf("|学号\t|姓名\t|性别\t|语文\t|数学\t|英语\t|总分\t|\n");
			printf("________________________________________________________\n");
			printf("%d|%s\t|%s\t|%d\t|%d\t|%d\t|%d\t|\n", st->id, st->name, st->sex, st->ch, st->ma, st->en, st->sum);
			printf("________________________________________________________\n");
		}
	}

}
//按学号进行查找 
node* searchStuInfoById(int id, node* L) {

	node* p = L;

	while (p->next != NULL) {

		if (p->next->id == id) {
			return p;
		}

		p = p->next;
	}

	return NULL;
}
//按姓名进行查找 
node* searchStuInfoByName(char name[], node* L) {
	node* p = L;

	while (p->next != NULL) {

		if (strcmp(name, p->next->name) == 0) {
			return p;
		}

		p = p->next;
	}

	return NULL;
}


//输出学生信息
void printStuInfo(node* L) {
	system("cls");
	node* p = L->next;
	printf("________________________________________________________________\n");
	printf("|学号\t\t|姓名\t|性别\t|语文\t|数学\t|英语\t|总分\t|\n");//  \t 跳过绝对位置8个
	printf("________________________________________________________________\n");
	if (p != NULL) {

		while (p != NULL) {
			printf("%d\t|%s\t|%s\t|%d\t|%d\t|%d\t|%d\t|\n", p->id, p->name, p->sex, p->ch, p->ma, p->en, p->sum);
			printf("________________________________________________________________\n");
			p = p->next;
		}
	}
}

//退出程序
void goodBye() {
	system("cls");
	printf("欢迎下次使用~\n");
	exit(0);//结束程序 
}

// 文件输入
int readFile(node* L) {
	FILE* fpr = fopen("studentInfo.txt", "r");
	node st;//创建一个结构体存放
	node* s;
	node* t = L;

	if (fpr == NULL) {
		return 0;
	}
	else {
		//fcanf()

		while (fscanf(fpr, "%d %s %s %d %d %d %d", &st.id, st.name, 
			st.sex, &st.ch, &st.ma, &st.en, &st.sum) != EOF)
			//ASCII代码值的范围是0~127，不可能出现-1，因此可以用EOF作为文件结束标志。
		{
			s = (node*)malloc(sizeof(node));//尾插法

			*s = st;

			t->next = s;
			t = s;
			
		}t->next = NULL;//
	}
	fclose(fpr);//关闭文件指针 
	return 1;
}

//保存文件
int saveFile(node* L) {
	FILE* fpw = fopen("studentInfo.txt", "w");
	if (fpw == NULL) return 0;

	//fprintf(fpw,"xxx",);
	node* p = L->next;

	while (p != NULL) {

		fprintf(fpw, "%d %s %s %d %d %d %d\n", p->id, p->name, p->sex, p->ch, p->ma, p->en, p->sum);
		p = p->next;
	}
	fclose(fpw);//关闭文件指针
	return 1;
}
