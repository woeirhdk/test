#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	printf("     **\n");
//	printf("     **\n");
//	printf("***********\n");
//	printf("***********\n");
//	printf("    *  *\n");
//	printf("    *  *\n");
//	return 0;
//}
//int main()
//{
//	printf("Name    Age    Gender\n");
//	printf("---------------------\n");
//	printf("Jack    18     Man\n");
//	return 0;
//}
// 
//int main()
//{
//	printf("I lost my cellphone");
//	return 0;
//}
// 
//int main()
//{
//	int a = 40;
//	int c = 212;
//	int result = (-8 + 22) * a - 10 / c / 2;
//	printf("%d", result);
//	return 0;
//}
// 
//int func1(int x)
//{
//	int y = 0;
//	if (x < 0)
//	{
//		y = 1;
//	}
//	else if (x == 0)
//	{
//		y = 0;
//	}
//	else if (x > 0)
//	{
//		y = -1;
//	}
//	return y;
//}
// 
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int res = func1(a);
//	printf("%d", res);
//	return 0;
//}


//找出100到200之间的素数 素数：只能被1和他本身整除
//int main()
//{
//	int i = 100;
//	while (i <= 200)
//	{
//		int j = 2;
//		while (j<i)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//			j++;
//			if (i == j)
//			{
//				printf("%d ", i);
//			}
//		}
//		i++;
//	}
//	return 0;
//}

//打印1000年到2000年之间的闰年
//要求1000年到2000年之间的闰年，只需要知道求解闰年的方法即可。
//闰年的条件：如果N能够被4整除，并且不能被100整除，则是闰年
//或者：N能被400整除，也是闰年
//即：4年一润并且百年不润，每400年再润一次
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year%4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//		}
//		else if(year % 400 == 0)
//		{
//			printf("%d", year);
//		}
//		else
//		{
//			;
//		}
//	}
//	return 0;
//}

/*写代码将三个整数数按从大到小输出。
输入：2 3 1
输出：3 2 1
*/
//int main()
//{
//	int a = 2;
//	int b = 3;
//	int c = 1;
//	int max = 0;
//	//输入
//	//scanf("%d%d%d", &a, &b, &c);
//	//判断
//	if (a < b)
//	{
//		max = b;
//		b = a;
//		a = max;
//	}
//	if (a < c)
//	{
//		max = c;
//		c = a;
//		a = max;
//	}
//	if (c > b)
//	{
//		max = b;
//		c = b;
//		b = max;
//	}
//	//输出
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//写一个代码打印1-100之间所有3的倍数的数字
//int main()
//{
//	for (int a = 1; a < 101; a++)
//	{
//		if (a%3 == 0)
//		{
//			printf("%d ", a);
//		}
//	}
//	return 0;
//}

//BoBo教KiKi字符常量或字符变量表示的字符在内存中以ASCII码形式存储。
//BoBo出了一个问题给KiKi，输入一个字符，输出该字符相应的ASCII码。
//int main() {
//    char ch = 0;
//    scanf("%c", &ch);
//    printf("%d", ch);
//    return 0;
//}

//输入一个人的出生日期（包括年月日），将该生日中的年、月、日分别输出。
//
//数据范围：年份满足1990≤y≤20151990≤y≤2015 ，月份满足1≤m≤12，日满足1≤d≤30
//输入描述：
//输入只有一行，出生日期，包括年月日，年月日之间的数字没有分隔符。
//输出描述：
//三行，第一行为出生年份，第二行为出生月份，第三行为出生日期。输出时如果月份或天数为1位数，需要在1位数前面补0。
//测试用例20130225
//int main() {
//    int year = 0;
//    int month = 0;
//    int date = 0;
//    scanf("%4d%2d%2d", &year, &month, &date);
//    printf("year=%d\n", year);
//    printf("month=%02d\n", month);
//    printf("date=%02d", date);
//    return 0;
//}


//依次输入一个学生的学号，以及3科（C语言，数学，英语）成绩，在屏幕上输出该学生的学号，3科成绩（注：输出成绩时需进行四舍五入且保留2位小数）。
//数据范围：学号满足1≤n≤20000000  ，各科成绩使用百分制，且不可能出现负数
//输入描述：
//学号以及3科成绩，学号和成绩之间用英文分号隔开，成绩之间用英文逗号隔开。
// 17140216;80.845,90.55,100.00
//输出描述：
//学号，3科成绩，输出格式详见输出样例。
//The each subject score of No. 17140216 is 80.85, 90.55, 100.00.
//int main() {
//    int num = 0;
//    float c = 0.0f;  //如果赋值为0.0 编译器会认为是double类型的数据
//    float math = 0.0f;// 后面加上f  赋值为 0.0.f 声明其为float类型的数据
//    float eng = 0.0f;
//    scanf("%d;%f,%f,%f", &num, &c, &math, &eng);
//    printf("The each subject score of No. %d is %.2f, %.2f, %.2f.", num, c, math, eng);
//    return 0;
//}

//KiKi写了一个输出"Hello world!"的程序，BoBo老师告诉他printf有返回值，你能帮他写个程序输出pritnf("Hello world!")的返回值吗？
//int main()
//{
//	int re = printf("Hello world!");
//	printf("\n%d",re);
//	return 0;
//}

//给定一个球的半径，计算其体积，其中球体体积公式为V = 4/3*pi*r³，其中pi为3.1415926。
//int main()
//{
//	float pi = 3.1415926;
//	float V = 0.0f;
//	float r = 0.0f;
//	scanf("%f", &r);
//	V = 4 / 3.0 * pi * r * r * r;
//	printf("%.3f", V);
//	return 0;
//}

//计算BMI指数
//计算方式:体重公斤数除身高厘米数的平方得出的数字
//int main()
//{
//	int weight = 0;
//	int height = 0;
//	float BMI = 0.0f;
//	scanf("%d %d", &weight, &height);
//	BMI = weight / (height / 100.0) / (height / 100.0);
//	printf("%.2f", BMI);
//	return 0;
//}

//给定两个数，求这两个数的最大公约数
//输:20 40
//输出:40
//int main()
//{
//	int a = 20;
//	int b = 40;
//	int c = 0;
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d\n", b);
//	return 0;
//}

//二分查找
//int main()
//
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0; 
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
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
//			printf("找到了，下标为%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到\n");
//}

//猜数字游戏
//#include <stdlib.h>
//#include <time.h>
//
//void menu()
//{
//	printf("*******************************\n");
//	printf("********    1.play    *********\n");
//	printf("********    0.exit    *********\n");
//	printf("*******************************\n");
//}
//
//void game()
//{
//	int ret = rand() % 100 + 1;
//	int num = 0;
//	
//	while (1)
//	{
//		printf("请输入数字:");
//		scanf("%d", &num);
//		if (num > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (num < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你猜对了!\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//编写程序数一下 1到 100 的所有整数中出现多少个数字9
//int main()
//{
//	int count = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 ==9)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//查找10个数中的最大值
//int main()
//{
//	int arr[10] = { 0 };
//	int a = 0;
//	for (a = 0; a < 10; a++)
//	{
//		scanf("%d", &arr[a]);
//	}
//	int i = 0;
//	int max = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//}

//输出99乘法表
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < 10; i++)
//	{
//
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d\t", j, i, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//编写程序实现功能：输入整数a和b，若a²+b²>100，则输出a²+b²的百位以上数字，否则直接输出a²＋b²
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	if (a*a+b*b > 100)
//	{
//		printf("计算结果：%d\n", a * a + b * b);
//		printf("百位以上：%d\n", (a * a + b * b)/100);
//	}
//	else
//	{
//		printf("%d", a * a + b * b);
//	}
//	return 0;
//}

//编写程序判断输入的正整数是否既是5又是7的整倍数。若是，则输出yes；否则输出no。
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	if (input % 5 == 0 && input % 7 == 0)
//	{
//		printf("yes");
//	}
//	else
//	{
//		printf("no");
//	}
//	return 0;
//}

//编写程序实现功能:对输入的每个x值，计算出相应的y值。
//	 x		y
//	x<0		0
//0<x<=10	x
//10<x<=20	10
//20<x<40	-0.5x+20

//int main()
//{
//	int x = 1;
//	float y = 0;
//	printf("输入一个小于40的数:\n");
//	while (x)
//	{
//		scanf("%d", &x);
//		if (x < 0)
//		{
//			y = 0;
//		}
//		else if (x <= 10)
//		{
//			y = x;
//		}
//		else if (x <= 20)
//		{
//			y = 10;
//		}
//		else if (x < 40)
//		{
//			y = x * -0.5 + 20;
//		}
//		else
//		{
//			printf("输入错误");
//			continue;
//		}
//		printf("%f\n", y);
//	}
//	return 0;
//}

//编写程序实现：输入一个整数，判断它能否分别被3、5、7整除，并输出以下信息之一：
//(1)能同时被3、5、7整除；
//(2)能被其中两数(要指出哪两个)整除;
//(3)能被其中一个数(要指出哪一个)整除;
//(4)不能被3、5、7中任一个整除;

//int main()
//{
//    int num;
//    printf("请输入一个整数: ");
//    scanf("%d", &num);
//
//    // 判断能否被3、5、7整除
//    int divisible_by_3 = (num % 3 == 0);
//    int divisible_by_5 = (num % 5 == 0);
//    int divisible_by_7 = (num % 7 == 0);
//
//    // 输出结果
//    if (divisible_by_3 && divisible_by_5 && divisible_by_7)
//    {
//        printf("能同时被3、5、7整除。\n");
//    }
//    else if ((divisible_by_3 && divisible_by_5) ||
//        (divisible_by_3 && divisible_by_7) ||
//        (divisible_by_5 && divisible_by_7))
//    {
//        printf("能被其中两个数整除：");
//        if (divisible_by_3 && divisible_by_5)
//            printf("3和5\n");
//        if (divisible_by_3 && divisible_by_7)
//            printf("3和7\n");
//        if (divisible_by_5 && divisible_by_7)
//            printf("5和7\n");
//    }
//    else if (divisible_by_3 || divisible_by_5 || divisible_by_7)
//    {
//        printf("能被其中一个数整除：");
//        if (divisible_by_3)
//            printf("3\n");
//        if (divisible_by_5)
//            printf("5\n");
//        if (divisible_by_7)
//            printf("7\n");
//    }
//    else
//    {
//        printf("不能被3、5、7中任一个整除。\n");
//    }
//    return 0;
//}


//用switch语句编程实现以下函数关系:
//	   -1  (x<0)
//y =  0   (x=0)
//	   1   (x>0)