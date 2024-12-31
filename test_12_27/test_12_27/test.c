#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//void Swap1(int x, int y)	
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//
//void Swap2(int* px,int* py)	//指针变量接收地址
//{
//	int z = 0;
//	z = *px;
//	*px = *py;				//将x的地址改为y的地址
//	*py = z;					//将y的地址改为x的地址
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	//传值调用 函数的形参和实参分别占有不同内存块，对形参的修改不会影响实参。
//	Swap1(a, b);
//	//传址调用 把函数外部创建变量的内存地址传递给函数的一种调用函数的方式
//	//			这种传参方式可以让函数和函数外边的变量建立起真正的联系，也就是函数内部可以直接操作函数外部的变量。
//	Swap2(&a, &b);
//	printf("%d %d", a, b);
//	return 0;
//}

//写一个 函数 判断一个数是不是素数
//只能被1和它本身整除的数
//7

//#include <math.h>
//
////sqrt是数学库函数
//int is_prime(int x)
//{
//	int y = 0;
//	for (y = 2; y <= sqrt(x); y++)
//	{
//		if (x % y == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//是素数就打印
//		if(is_prime(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n%d\n", count);
//	return 0;
//}

//写一个 函数 判断一年是不是闰年
//int is_leap_year(x)
//{
//	int y = 0;
//	y = x % 4 == 0 && x % 100 != 0 || x % 400 == 0 ? 1 : 0;
//	return y;
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000;year <= 2000;year++)
//	{ 
//		if (is_leap_year(year) == 1)
//		{
//			printf("%d ", year);
//		}
//	}
//
//	return 0;
//}

//写一个 函数，实现一个整形有序数组的二分查找
//数组传参实际上传递的是数组首元素的地址，而不是整个数组
//所以函数内部计算一个函数参数部分的数组的元素个数是不靠谱的
//int binary_search(int arr[],int k, int sz)     //形参arr看似是数组，本质上是指针
//{
//	int left = 0;
//	int right = sz - 1;;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;//找到了返回下标
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("找不到");
//	}
//	else
//	{
//		printf("找到了,下标是%d\n",ret);
//	}
//	return 0;
//}

//写一个函数，每调用一次这个函数，就会将num的值+1
//void add_num(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	add_num(&num);
//	printf("%d\n", num);
//	add_num(&num);
//	printf("%d\n", num);
//	add_num(&num);
//	printf("%d\n", num);
//	add_num(&num);
//	printf("%d\n", num);
//	return 0;
//}

// 函数可以嵌套调用
//void new_line()
//{
//	printf("hello\n");
//}
//void three_line()
//{
//	for (int i = 0; i < 3; i++)
//	{
//		new_line();
//	}
//}
//
//int main()
//{
//	three_line();
//	return 0;
//}


// 链式访问
//#include <string.h>
//
//int main()
//{
//	int len = strlen("abcdef");
//	printf("%d\n", len);
//	printf("%d\n", strlen("abedef"));
//
//	//Each of these functions returns the number of characters printed, or negative value if an error occurs.
//	//每一个这样的函数返回的是打印的字符的个数(打印了几个字符返回值就是几)
//	printf("%d", printf("%d", printf("%d", 43)));
//
//	return 0;
//}

//函数的声明和定义
//函数声明 告诉编译器有一个函数叫什么，参数是什么，返回类型是什么。但是具体是不是存在，函数声明决定不了。
//函数的声明一般出现在函数使用之前。要满足先声明后使用。
//函数的声明一般要放在头文件中的。 //*.h
//函数的定义放在*.c

//引用库里的头文件 用 尖括号<>
//引用自定义的头文件 用 双引号" "
#include "add.h"
#include "sub.h"

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	
	int sum = Add(a, b);
	printf("%d\n", sum);

	int ret = Sub(a, b);
	printf("%d\n", ret);
	return 0;
}

