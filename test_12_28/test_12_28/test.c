#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//递归
//递归的两个必要条件：
//存在限制条件，当满足这个条件的时候，递归便不再继续。
//每次递归调用之后越来越接近这个限制条件。

//接收一个整型值（无符号），按照顺序打印它的每一位。
//例如：
//输入：1234，输出1 2 3 4.

//%d 是打印有符号的整数（有正负数）
//%u 是打印无符号的整数（没有负数）

//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	print(num);
//	return 0;
//}



//编写函数不允许创建临时变量，求字符长度
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}

//n的阶乘

//int fac(int n)
//{
//	if (n < -1)
//		return 1;
//	else
//		return n * n - 1;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("%d", ret);
//	return 0;
//}


//求第n个斐波那契数列
//1 1 2 3 5 8 13 21 34 55...
//

//int fib(int n) //递归斐波那契
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}

//int fib(int n) //循环斐波那契
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c; 
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d", ret);
//	return 0;
//}