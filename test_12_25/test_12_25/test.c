#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//在一个有序数组中查找具体的某个数字n。
//int main()
//{
	//遍历查找
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int k = 7;
	////在一个有序数组中查找具体的某个数字n
	//int i = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//for (i = 0; i <= sz; i++)
	//{
	//	if (arr[i] == k)
	//	{
	//		printf("找到了，下标为%d",i);
	//	}
	//}

	//二分查找
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
//			printf("找到了，下标为%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	
//	return 0;
//}

//编写代码，演示多个字符从两端移动，向中间汇聚
//welcome!!!
//w########!
//we######!!
//wel####!!!
//....
//#include <Windows.h>
//#include <stdlib.h>
//int main()
//{
//	char arr1[] = "welcome!!!";
//	char arr2[] = "##########";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls"); //system是一个库函数，可以执行系统命令
//		left++;
//		right--;
//	}
//
//	return 0;
//}

//编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入3次密码，如果密码正确
//则提示登录成功，如果三次均输入错误，则退出程序；

//比较两个字符串是否相等，不能使用==，而应该使用一个库函数：strcmp(字符串1,字符串2)   (string compare)
//如果返回值是0，表示2个字符串相等
//#include <string.h>
//int main()
//{
//	int count = 0;
//	char pwd[20] = {0};
//	char c_pwd[] = "123456";
//	for (count = 0; count < 3; count++)
//	{	
//		printf("请输入密码：");
//		scanf("%s", pwd);
//		if (strcmp(pwd,c_pwd) == 0)
//		{
//			printf("登录成功!\n");
//			break;
//		}
//		else
//		{
//			printf("输入错误\n");
//		}
//	}
//	if (count == 3)
//	{
//		printf("三次均输入错误\n");
//	}
//	return 0;
//}

//猜数字游戏
//1.电脑产生一个随机数(1~100)
//2.猜数字
//猜大了
//猜小了
//#include <stdlib.h>
//#include <time.h>
//void menu()
//{
//	printf("******************************\n");
//	printf("********  1.play   ***********\n");
//	printf("********  0.exit   ***********\n");
//	printf("******************************\n");
//}
//
//void game()
//{
//	int guess = 0;
//	//1.生成随机数
//	int ret = rand() % 100 + 1;
//	//2.猜数字
//	while (1)
//	{
//		printf("请猜数字：");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了！\n");
//			break;
//		}
//	}
//}
//
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
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，重新选择\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}



//goto语句

//int main()
//{
//again:
//	printf("hehe\n");
//	printf("haha\n");
//	goto again;
//	return 0;
//}


//恶搞程序
//#include <Windows.h>
//#include <string.h>
////
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 120");
//again:
//	printf("请注意，你的电脑将在60秒内关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s", &input);
//	if (strcmp(input,"我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}




//-------------函数--------------
// 
//#include <string.h>
//int main()
//{
//	//char arr1[20] = {0};
//	//char arr2[] = "hello";
//	//
//	//strcpy(arr1, arr2);
//	//
//	//printf("%s", arr1);
//
//	char arr[20] = "hello world";
//	memset(arr, 'x', 5);
//	memset(arr + 6, 'y', 3);
//	printf("%s\n", arr);
//
//	return 0;
//}


//自定义函数

//写一个函数，找出两个整数中的最大值

//int get_max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//
//void test()   //void无返回值
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = get_max(a, b);
//	printf("%d\n", m);
//}

//写一个函数可以交换两个整型变量的内容

//形参
//void Swap(int* px, int* py)
//{
//	int z = *px;
//	*px = *py;
//	*py = z;
//}
//
//
////
////当实参传递给形参的时候，形参是实参的一份临时拷贝
////对形参的修改不会影响实参
////
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("交换前:a=%d,b=%d\n", a, b);
//	Swap(&a, &b);//实参
//	printf("交换后:a=%d,b=%d\n", a, b);
//
//	return 0;
//}