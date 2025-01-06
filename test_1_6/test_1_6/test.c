#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// & - 按（2进制）位与
// | - 按（2进制）位或
// ^ - 按（2进制）位异或
//int main()
//{
//	int a = 3; //
//	int b = -5;
//	printf("%d\n", a & b);
//	printf("%d\n", a | b);
//	printf("%d\n", a ^ b);
//	return 0;
//}

//编写代码实现：求一个整数存储在内存中的二进制中的1的个数

//int main()
//{
//	int a = 565466;
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if (a & 1 == 1)
//		{
//			count++;
//		}
//		a = a >> 1;
//	}
//	printf("%d", count);
//	return 0;
//}

//编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7

//int main()
//{
//	int m = 1999;
//	int n = 2299;
//	int tmp = m ^ n;
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if (tmp & 1 == 1)
//		{
//			count++;
//		}
//		tmp >>= 1;
//	}
//	printf("%d", count);
//	return 0;
//}

//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//int main()
//{
//	int ex = 123;//0111 1011
//	for (int i = 0; i < 32; i += 2)
//	{
//		printf("%d", (ex >> i) & 1);
//	}
//	printf("\n");
//	for (int i = 1; i < 32; i += 2)
//	{
//		printf("%d", (ex >> i) & 1);
//	}
//	printf("\n");
//	return 0;
//}

//不允许创建临时变量，交换两个整数的内容
int main()
{
	int a = 3;
	int b = 7;
	a ^= b;
	b ^= a;
	a ^= b;
	printf("%d %d", a, b);
	return 0;
}