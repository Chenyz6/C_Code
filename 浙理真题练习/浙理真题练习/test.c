#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//������
//#include<math.h>
//int main()
//{
//	int m = 0;
//	int k = 0;
//	int i = 0,n;
//	for (n = 1; n <= 200; n++)
//	{
//		k = sqrt(n);
//		for (i = 2; i <= k; i++)
//		{
//			if (n % i == 0)break;
//		}
//		if (i >= k + 1)
//		{
//			printf("%d ", n);
//			m = m + 1;
//			if (m % 10 == 0)
//				printf("\n");
//		}
//	}
//	return 0;
//}
// 
// 

//���ַ�������
//#include<string.h>
//void Reverse(char* s, int len)
//{
//	char* end = s + len - 1;
//	while (s < end)
//	{
//		char temp;
//		temp = *s;
//		*s = *end;
//		*end = temp;
//		end--;
//		s++;
//	}
//}
//int main()
//{
//	char arr[20] = { 0 };
//	scanf("%s", arr);
//	int n = strlen(arr);
//	Reverse(arr, n);
//	printf("%s", arr);
//	return 0;
//}

//��1!+2!+3��+4��+5��
//int main()
//{
//	int sum = 1;
//	int t = 1;
//	for (int i = 2; i <= 5; i++)
//	{
//		t = t * i;
//		sum = sum + t;
//	}
//	printf("%d", sum);
//	return 0;
//}

//ˮ�ɻ���
//#include<math.h>
//int cimi(int x)
//{
//	return x * x * x;
//}
//int main()
//{
//	int i = 0;
//	for (i = 153; i <= 999; i++)
//	{
//		int tmp = i;
//		int k1 = tmp % 10;
//		tmp = tmp / 10;   //  �����˸�ֵ
//		int k2 = tmp % 10;
//		tmp = tmp / 10;
//		int k3 = tmp % 10;
//		if ((cimi(k1) + cimi(k2) + cimi(k3)) == i)
//		printf("%d ", i);
//	}
//		
//	return 0;
//}

//���ݷ�
//int main()
//{
//	int arr[10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < 9; i++)
//	{
//		for (int j = 0; j < 9 - i; j++)
//		{
//			int tmp;
//			if (arr[j] > arr[j + 1])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[6] = { 47,44,30,25,8 };//����һ��6����������
//	int a = 0;
//	scanf("%d", &a);//����һ��Ҫ���������
//	arr[5] = a;//����������ַ������һ��λ��{ 47,44,30,25,8,a }
//	for (int i = 5; i >= 1; i--)//�����һ��λ��ѭ�����ڶ���λ�ã���Ϊÿ�αȽ϶��Ǹ�ǰһ�����ֱȽϣ�����ѭ�����ڶ���λ�þͻ����һ��λ�ý��бȽ�
//	{
//		if (arr[i] >= arr[i - 1])//��ǰһ��λ�ý��бȽϣ����>=ǰһ��λ�þͽ��н���
//		{
//			int tmp = 0;//����һ���ձ��������ڽ���
//			tmp = arr[i];//���������������������������ֽ���
//			arr[i] = arr[i - 1];
//			arr[i - 1] = tmp;
//		}
//	}
//	for (int i = 0; i < 6; i++)
//	{
//		printf("%d ", arr[i]);//������6����������
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 3,5,4,6,7,8,9,1,2,0 };//��С�������� ѡ��
//	int i, j, k;
//	for (i = 0; i < 9; i++)
//	{
//		min = i;
//		for (j = i+1; j < 10; j++)
//		{
//			if (arr[j] < arr[min])
//				min = j;
//		}
//		int temp = 0;
//		temp = arr[i];
//		arr[i] = arr[min];
//		arr[min] = temp;
//	}
//	int i = 0, j = 0, temp = 0;
//	for (i = 0; i < 9; i++)//��С���� ð�ݷ�
//	{
//		for (j = 0; j < 9 - i; j++)
//		{
//			if (arr[j] > arr[j + 1]) {
//				temp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = temp;
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
//
//#include<math.h>
//int main()
//{
//	int i = 0,j = 0;
//	for (i = 101; i <= 200; i++)
//	{
//		int k = sqrt(i);
//		for (j = 2; j <= k; j++)
//		{
//			if (i % j == 0) break;
//		}
//		if (j >= k+1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//
//#include<string.h>
//void strcat_my(char x[], char y[])
//{
//	int a = strlen(x);
//	int i = 0;
//	while (y[i] != '\0')
//	{
//		x[a++] = y[i++];
//	}
//	x[a] = '\0';
//}
//int main()
//{
//	char a[50] = { 0 };
//	char b[50] = { 0 };
//	scanf("%s", a);
//	scanf("%s", b);
//	strcat_my(a, b);
//	printf("%s", a);
//	return 0;
//}
//
