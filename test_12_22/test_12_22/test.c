#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//什么是语句？ 
//表达式语句
//函数调用语句
//控制语句
//复合语句
//空语句

//控制语句用于控制程序的执行流程，以实现程序的各种结构方式，它们由特定的语句定义符组成，C语言有9种控制语句。
//可以分为以下三类：
//1.条件判断语句，也叫分支语句；
//2.循环执行语句：do while语句、while语句、for语句；
//3.转向语句：break语句、goto语句、continue语句、return语句。
//--------------------------条件判断语句------------------------------------
//int main()
//{
	//int a = 10;
	//if (a == 3)
	//	printf("hehe\n");

	////int age = 10;
	////if (age >= 18)
	////	printf("成年\n");

	//int age = 20;
	////默认情况下 if后面只能跟一条语句，要想执行多条语句，需要使用大括号括起来
	//if (age < 18)
	//{
	//	printf("未成年\n");
	//	printf("禁止饮酒\n"); 
	//}
	//else
	//{
	//	printf("成年\n");
	//}

	//int age = 10;

	//if (age < 18)
	//	printf("青少年\n");
	//else if (age >= 18 && age < 28)
	//	printf("青年\n");
	//else if (age >= 28 && age < 40)
	//	printf("壮年\n");
	//else if (age >= 40 && age < 60)
	//	printf("中年\n");
	//else if (age >= 60 && age <= 100)
	//	printf("老年\n");
	//else
	//	printf("老寿星\n");


	//return 0;
//}

//int main()
//{
	////else与最近的if匹配
	//int a = 0;
	//int b = 2;
	//if (a == 1)
	//	if (b == 2)
	//		printf("hehe\n");
	//else
	//	printf("haha\n");
	//return 0;
//}

//判断一个数是否为奇数
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if ( num % 2 == 1)
//	{
//		printf("%d是奇数", num);
//	}
//	else
//	{
//		printf("%d不是奇数", num);
//	}
//	return 0;
//}

//输出1~100之间的奇数
//int main()
//{
//	int num = 0;
//	while (num<= 100)
//	{
//		if (num % 2 == 1)
//			printf("%d ",num);
//		num++;
//	}
//	return 0;
//}

//int main()
//{
//	//switch 表达式必须为整型
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期1\n");
//		break;
//	case 2:
//		printf("星期2\n");
//		break;
//	case 3:
//		printf("星期3\n");
//		break;
//	case 4:
//		printf("星期4\n");
//		break;
//	case 5:
//		printf("星期5\n");
//		break;
//	case 6:
//		printf("星期6\n");
//		break;
//	case 7:
//		printf("星期日\n");
//		break;
//	}
//	return 0;
//}


//星期1-5输出weekday，星期6 7输出weekend
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//
//	return 0;
//}

//switch练习
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:m++; //m=3
//	case 2:n++; //n=2
//	case 3:
//		switch(n)
//		{//switch允许嵌套使用
//		case 1:n++; //n=2不执行
//		case 2:m++; n++; //m=4 n=3
//			break;  //跳出当前结构体，并非整个结构体
//		}
//	case 4:
//		m++;//m=5
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d", m, n); //m=5 n=3
//	return 0;
//}


//-------------------------3.循环语句--------------------------------
//3.1 while循环
//int main()
//{
//	while (1) //while (表达式) 当表达式为真 则执行
//	{//循环语句
//		printf("hehe\a");
//	}
//	return 0;
//}

//打印1-10数字
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//while循环中的break用于永久终止循环（跳出整个循环）
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i++;
//		if (5 == i)
//			continue;
//		printf("%d", i);
//	}
//	return 0;
//}

//while循环中的continue用于跳过本次循环后面的代码，直接去判断部分，进行下一次循环的判断
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i++;
//		if (5 == i)
//			continue;
//		printf("%d ", i); //2 3 4 6 7 8 9 10 11
//	}
//	return 0;
//}

//int main()
//{
	//scanf和getchar都是从输入缓冲区获取字符，输入缓冲区存放的是键盘输入的内容
	//scanf读到空格、回车或超出类型长度后会停止读取  getchar按顺序获取缓冲区内字符，单次只获取一个
	//如果输入abcdef defg
	// scanf只会获取到abcdef 剩余的字符仍保存在缓存区内
	//若还需要输入字符进行判断，则会收到剩余字符的干扰
	// 此时可以通过下面这种方法来清除缓存区
	// 
	//int ch = 0;
	//while ((ch = getchar()) != EOF)
	//{
	//	putchar(ch);
	//}
//
//	char password[20] = {0};
//	printf("请输入密码:>");
//	scanf("%s", password);
//	int ch = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认密码(Y/N)");
//	int ret = getchar();
//	if ('Y' == ret || 'y' == ret)
//		printf("Yes\n");
//	else
//		printf("No\n");
//
//	return 0;
//}

//