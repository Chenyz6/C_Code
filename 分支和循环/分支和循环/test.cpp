#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	a + b; //���
//	;//�����
//	//C������ �� �� 
//	//�� ��0
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	while (i <= 10) {
//		if (i == 5)
//			continue;       //��whileѭ����  break����������ֹѭ��
//							//��whileѭ����  continue����������������ѭ��continue֮��Ĵ���
//							//ֱ��ȥ�ж�  ���Ƿ������һ��ѭ��
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//EOF   end of file   �ļ�������־  == -1
//int main()
//{
//	int ch = getchar();
//	//printf("%c", ch);
//	putchar(ch);
//	return 0;
//}



//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)  // ctrl+z   getchar�Ͷ�ȡ����
//		putchar(ch);
//	return 0;
//}


int main()
{
	char password[20] = { 0 };
	printf("���������룺");
	scanf("%s", password);//  ��������־��ǵ�ַ������Ҫ�ټ�&   
	                      //  scanf  ���ֿո��ʱ��Ͳ���ȡ��   gets�������Զ�ȡ�ո�
	printf("��ȷ�����룺Y/N");
	//��ջ�����
	//getchar()   ����\n
	int t = 0;
	while ((t = getchar()) != '\n')//getchar ���ص�ֵ��int
	{
		;
	}
	char ch = 0;
	ch = getchar() ;
	if (ch == 'Y')
		printf("ȷ����ȷ");
	else
		printf("ȷ�ϴ���");
	return 0;
}