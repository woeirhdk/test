#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//使用优先级：for > while > do while

//while 循环
//int main()
//{
//	int i = 1;//初始化
//	while (i<= 10)//判断
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;//调整
//	}
//	return 0;
//}


// for循环
// for(表达式1;表达式2;表达式3)
//	循环语句;
// 表达式1为初始化部分，表达式2为条件判断部分，表达式3为调整部分
// 

// 
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

// 建议:
//		1.不可在for循环体内修改循环变量，防止循环失去控制
//		2.建议for语句的循环控制变量的取值采用“前闭后开区间”写法
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//下标为0~9
//	int i = 0;
//	//前闭后开的写法
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	i = 0;
//	//两边都是闭区间
//	for (i = 0; i <= 9; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//for循环的变种
//for循环的初始化、判断和调整部分都可以省略
//for循环的判断部分省略意味着判断会恒成立(死循环)
//int main()
//{
//	for (;;)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//	{
//		k++;
//		printf("%d", k);
//	}
//	return 0;
//}


//do-while循环:循环至少执行一次
//do
//	循环语句;
//while(表达式);
//
//使用的场景有限，不是经常使用

//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d", i);
//		i++;
//	}
//	while (i <= 10);
//}



//计算 n的阶乘
//1*2*3...*n
//int main()
//{
//	int n = 0;
//	int i = 1;
//	int res = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		res = res * i;
//	}
//	printf("%d", res);
//	return 0;
//}

//计算 1!+2!+3!+....+10!
//int main()
{
	//int i = 1;
	//int j = 1;
	//int res = 1;
	//int sum = 0;
	//for ( i = 1; i < 11; i++)
	//{
	//	res = 1;
	//	for (j = 1; j <= i; j++)
	//	{
	//		res = res * j;
	//	}
	//	sum += res;
	//}
	//printf("%d", sum);

	//优化版
//	int i = 1;
//	int res = 1;
//	int sum = 0;
//	for (i = 1; i < 11; i++)
//	{
//		res = res * i;
//		sum = sum + res;
//	}
//	printf("%d", sum);
//
//	return 0;
//}