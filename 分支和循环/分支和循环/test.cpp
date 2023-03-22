#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	a + b; //语句
//	;//空语句
//	//C语言中 真 假 
//	//真 非0
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	while (i <= 10) {
//		if (i == 5)
//			continue;       //在while循环中  break用于永久终止循环
//							//在while循环中  continue的作用是跳过本次循环continue之后的代码
//							//直接去判断  看是否进行下一次循环
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//EOF   end of file   文件结束标志  == -1
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
//	while ((ch = getchar()) != EOF)  // ctrl+z   getchar就读取结束
//		putchar(ch);
//	return 0;
//}


int main()
{
	char password[20] = { 0 };
	printf("请输入密码：");
	scanf("%s", password);//  数组的名字就是地址，不需要再加&   
	                      //  scanf  出现空格的时候就不读取了   gets函数可以读取空格
	printf("请确认密码：Y/N");
	//清空缓冲区
	//getchar()   处理\n
	int t = 0;
	while ((t = getchar()) != '\n')//getchar 返回的值是int
	{
		;
	}
	char ch = 0;
	ch = getchar() ;
	if (ch == 'Y')
		printf("确认正确");
	else
		printf("确认错误");
	return 0;
}