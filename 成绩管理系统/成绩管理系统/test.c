#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
	int id;//ѧ�� 
	char name[50];//���� 
	char sex[10];//�Ա� 
	int ch, ma, en;//����Ӣ 
	int sum;//�ܷ� 

	struct Node* next;//ָ���� 
}node;

node List;//���� 

//��ȡ�ļ� 
int readFile(node* L);

//�����ļ�
int saveFile(node* L);

// ���˵�����
void welcome();
//����ѧ����Ϣ

void printAddStuInfo();//���� 
void insertStuInfo(node* L, node e);//���� 

//ɾ��ѧ����Ϣ
//���� 
void printDeleteStuInfo(node* L);
//�߼����� 
void deleteStuInfo(node* pr);

//�޸�ѧ����Ϣ
void printFixStuInfo(node* L);



//��ѯѧ����Ϣ
void printSearchStuInfo(node* L);
//��ѧ�Ž��в��� 
node* searchStuInfoById(int id, node* L);
//���������в��� 
node* searchStuInfoByName(char name[], node* L);



//���ѧ����Ϣ
void printStuInfo(node* L);

//�˳�����
void goodBye();




int main() {
	int choice = 0;
	readFile(&List);
	while (1) {
		welcome();
		scanf("%d", &choice);
		switch (choice) {
		case 1://����ѧ����Ϣ 
			printAddStuInfo();
			break;
		case 2://ɾ��ѧ����Ϣ
			printDeleteStuInfo(&List);
			break;
		case 3://�޸�ѧ����Ϣ 
			printFixStuInfo(&List);
			break;
		case 4://��ѯѧ����Ϣ
			printSearchStuInfo(&List);
			break;
		case 5://���ѧ����Ϣ
			printStuInfo(&List);
			break;
		case 0://�˳����� 
			goodBye();
			break;
		}
		printf("�Ƿ���Ҫ����������(yes:1 / no:0 )��");
		scanf("%d", &choice);
		if (choice == 0) {
			break;
		}
	}

	return 0;
}

//���˵����� 
void welcome() {
	system("cls");
	printf("************************\n");
	printf("**  ѧ���ɼ�����ϵͳ  **\n");
	printf("**    ���ߣ�������    **\n");
	printf("**                    **\n");
	printf("**  ����ѧ����Ϣ ---1 **\n");
	printf("**  ɾ��ѧ����Ϣ ---2 **\n");
	printf("**  �޸�ѧ����Ϣ ---3 **\n");
	printf("**  ��ѯѧ����Ϣ ---4 **\n");
	printf("**  ���ѧ����Ϣ ---5 **\n");
	printf("**  �˳�����ϵͳ ---0 **\n");

	printf("�������Ӧ�Ĺ��ܼ������֣�: ");
}

//����ѧ����Ϣ
void printAddStuInfo() {
	// 
	system("cls");//��������
	node st;
	printf("����������ѧ�������Ϣ\n");
	printf("ѧ��:");
	scanf("%d", &st.id);
	printf("����:");
	scanf("%s", st.name);
	printf("�Ա�:");
	scanf("%s", st.sex);
	printf("����:");
	scanf("%d", &st.ch);
	printf("��ѧ:");
	scanf("%d", &st.ma);
	printf("Ӣ��:");
	scanf("%d", &st.en);
	st.sum = st.ch + st.ma + st.en;

	insertStuInfo(&List, st);

}
//����ѧ����Ϣ 
void insertStuInfo(node* L, node e) {
	//ͷ�巨
	node* h = L;
	node* s = (node*)malloc(sizeof(node));
	*s = e;

	s->next = h->next;
	h->next = s;

	//�����ļ� 
	saveFile(L);
}

//ɾ��ѧ����Ϣ
void printDeleteStuInfo(node* L) {
	system("cls");
	int id;

	node* p;

	printf("������Ҫɾ����ѧ��ѧ��");
	scanf("%d", &id);
	node* st = searchStuInfoById(id, L);
	p = st;

	if (st == NULL) {
		printf("���޴��ˣ�");
		return;
	}

	st = st->next;
	printf("________________________________________________________\n");
	printf("|ѧ��\t|����\t|�Ա�\t|����\t|��ѧ\t|Ӣ��\t|�ܷ�\t|\n");
	printf("________________________________________________________\n");
	printf("%d|%s\t|%s\t|%d\t|%d\t|%d\t|%d\t|\n", st->id, st->name, st->sex, st->ch, st->ma, st->en, st->sum);
	printf("________________________________________________________\n");

	deleteStuInfo(p);
	saveFile(L);

}
//ɾ��ѧ����Ϣ
void deleteStuInfo(node* pr) {
	node* s = pr->next;

	pr->next = s->next;
	s->next = NULL;

	free(s);//�ͷŽ��ռ� 

}

//�޸�ѧ����Ϣ
void printFixStuInfo(node* L) {
	system("cls");
	int id;
	int choice = -1;

	printf("������Ҫ���ҵ�ѧ��ѧ��");
	scanf("%d", &id);
	node* st = searchStuInfoById(id, L);

	if (st == NULL) {
		printf("���޴��ˣ�");
		return;
	}

	st = st->next;





	while (1) {
		system("cls");
		printf("________________________________________________________\n");
		printf("|ѧ��\t|����\t|�Ա�\t|����\t|��ѧ\t|Ӣ��\t|�ܷ�\t|\n");
		printf("________________________________________________________\n");
		printf("%d|%s\t|%s\t|%d\t|%d\t|%d\t|%d\t|\n", st->id, st->name, st->sex, st->ch, st->ma, st->en, st->sum);
		printf("________________________________________________________\n");
		printf("�޸�����---- 1\n");
		printf("�޸��Ա�---- 2\n");
		printf("�޸�����---- 3\n");
		printf("�޸���ѧ---- 4\n");
		printf("�޸�Ӣ��---- 5\n");

		printf("������Ҫ�޸ĵ���Ϣ: ");
		scanf("%d", &choice);

		switch (choice) {
		case 1:
			printf("������������");
			scanf("%s", st->name);
			break;
		case 2:
			printf("�������Ա�");
			scanf("%s", st->sex);
			break;
		case 3:
			printf("���������ģ�");
			scanf("%d", &st->ch);
			break;
		case 4:
			printf("��������ѧ��");
			scanf("%d", &st->ma);
			break;
		case 5:
			printf("������Ӣ�");
			scanf("%d", &st->en);
			break;
		}
		st->sum = st->ch + st->ma + st->en;
		printf("�Ƿ�����޸�ѧ����Ϣ?��y-1 / n-0��\n");
		scanf("%d", &choice);
		if (choice == 0) {
			break;
		}
	}

	printf("________________________________________________________________\n");
	printf("|ѧ��\t\t|����\t|�Ա�\t|����\t|��ѧ\t|Ӣ��\t|�ܷ�\t|\n");
	printf("________________________________________________________________\n");
	printf("%d|%s\t\t|%s\t|%d\t|%d\t|%d\t|%d\t|\n", st->id, st->name, st->sex, st->ch, st->ma, st->en, st->sum);
	printf("________________________________________________________________\n");


	saveFile(L);
}

//��ѯѧ����Ϣ
void printSearchStuInfo(node* L) {
	system("cls");
	int choice = 0;
	int id;
	char name[50];
	node* st;
	printf("��ѧ�Ų�ѯ----- 1\n");
	printf("��������ѯ----- 2\n");
	printf("�������ѯ��ʽ��");
	scanf("%d", &choice);

	if (choice == 1) {
		printf("������Ҫ��ѯ��ѧ�ţ�");
		scanf("%d", &id);
		st = searchStuInfoById(id, L);

		if (st == NULL) {
			printf("���޴��ˣ�\n");
		}
		else {
			st = st->next;
			printf("________________________________________________________\n");
			printf("|ѧ��\t|����\t|�Ա�\t|����\t|��ѧ\t|Ӣ��\t|�ܷ�\t|\n");
			printf("________________________________________________________\n");
			printf("%d|%s\t|%s\t|%d\t|%d\t|%d\t|%d\t|\n", st->id, st->name, st->sex, st->ch, st->ma, st->en, st->sum);
			printf("________________________________________________________\n");
		}
	}
	else if (choice == 2) {
		printf("������Ҫ��ѯ��������");
		scanf("%s", name);
		st = searchStuInfoByName(name, L);

		if (st == NULL) {
			printf("���޴��ˣ�\n");
		}
		else {
			st = st->next;
			printf("________________________________________________________\n");
			printf("|ѧ��\t|����\t|�Ա�\t|����\t|��ѧ\t|Ӣ��\t|�ܷ�\t|\n");
			printf("________________________________________________________\n");
			printf("%d|%s\t|%s\t|%d\t|%d\t|%d\t|%d\t|\n", st->id, st->name, st->sex, st->ch, st->ma, st->en, st->sum);
			printf("________________________________________________________\n");
		}
	}

}
//��ѧ�Ž��в��� 
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
//���������в��� 
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


//���ѧ����Ϣ
void printStuInfo(node* L) {
	system("cls");
	node* p = L->next;
	printf("________________________________________________________________\n");
	printf("|ѧ��\t\t|����\t|�Ա�\t|����\t|��ѧ\t|Ӣ��\t|�ܷ�\t|\n");//  \t ��������λ��8��
	printf("________________________________________________________________\n");
	if (p != NULL) {

		while (p != NULL) {
			printf("%d\t|%s\t|%s\t|%d\t|%d\t|%d\t|%d\t|\n", p->id, p->name, p->sex, p->ch, p->ma, p->en, p->sum);
			printf("________________________________________________________________\n");
			p = p->next;
		}
	}
}

//�˳�����
void goodBye() {
	system("cls");
	printf("��ӭ�´�ʹ��~\n");
	exit(0);//�������� 
}

// �ļ�����
int readFile(node* L) {
	FILE* fpr = fopen("studentInfo.txt", "r");
	node st;//����һ���ṹ����
	node* s;
	node* t = L;

	if (fpr == NULL) {
		return 0;
	}
	else {
		//fcanf()

		while (fscanf(fpr, "%d %s %s %d %d %d %d", &st.id, st.name, 
			st.sex, &st.ch, &st.ma, &st.en, &st.sum) != EOF)
			//ASCII����ֵ�ķ�Χ��0~127�������ܳ���-1����˿�����EOF��Ϊ�ļ�������־��
		{
			s = (node*)malloc(sizeof(node));//β�巨

			*s = st;

			t->next = s;
			t = s;
			
		}t->next = NULL;//
	}
	fclose(fpr);//�ر��ļ�ָ�� 
	return 1;
}

//�����ļ�
int saveFile(node* L) {
	FILE* fpw = fopen("studentInfo.txt", "w");
	if (fpw == NULL) return 0;

	//fprintf(fpw,"xxx",);
	node* p = L->next;

	while (p != NULL) {

		fprintf(fpw, "%d %s %s %d %d %d %d\n", p->id, p->name, p->sex, p->ch, p->ma, p->en, p->sum);
		p = p->next;
	}
	fclose(fpw);//�ر��ļ�ָ��
	return 1;
}
