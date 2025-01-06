#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//最大公约数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int min = a < b ? a : b;
//	int m = min;
//	while (1)
//	{
//		if (a % m == 0 && b % m == 0)
//		{
//			break;
//		}
//		m--;
//	}
//	printf("%d", m);
//	return 0;
//}

//数组
//一组相同类型元素的集合
//数组的创建
//type_t         arr_name        [const_n]
//数组的元素类型   数组名     用于指定数组大小的常量表达式
//int main()
//{
//	int arr[10];
//	char ch[5];
//	double data1[20];
//	double data2[15 + 5];
//
//	//下面这段代码只能在支持C99标准的编译器上编译
//	/*int n = 10;
//	scanf("%d", &n);
//	int arr2[n];*/ //这种数组是不能初始化的
//	//在C99标准之前，数组的大小必须是常量或者常量表达式
//	//在C99之后，数组的大小可以是变量，为了支持变长数组
//
//	return 0;
//}

//int main()
//{
//	//不完全初始化，剩余的元素默认初始化为0
//	int arr[10] = { 1,2,3 };
//	char ch[10] = { 'a','b','c' };//a b c 0 0 0 0 0 0 0
//	char ch2[10] = "abc";		//a b c \0 0 0 0 0 0 0
//	//完全初始化
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int arr2[] = { 1,2,3 };
//	char ch3[] = { 'a','b','c' };
//	char ch4[] = "abc";
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	//[] - 下标引用操作符
//	//printf("%d\n", arr[4]);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	return 0;
//}

//二维数组
//二维数组的初始化
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };
//	int arr1[3][4] = { {1,2},{3,4},{4,5} };
//	int arr[][4] = { {1,2,3,4},{2,3} };
//
//}

//二维数组的使用
//int main()
//{
//	int i = 0;
//	int arr[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//二维数组在内存中的存储(二维数组在内存中也是连续存放的)
//int main()
//{
//	int i = 0;
//	int arr[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]%p\n ",i,j,&arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//数组越界
//数组的下标是有范围限制的。
//数组的下标规定是从0开始的，如果数组有n个元素，最后一个元素的下标就是n-1.
//所以数组的下标如果小于0，或者大于n-1，就是数组越界访问了，超出了数组合法空间的访问。
//C语言本身是不做数组下标的越界检查，编译器也不一定报错，但是编译器不报错，并不意味着程序就是正确的
//所以程序员写代码时，最好自己做越界的检查。




//数组作为函数参数

//冒泡排序
//冒泡排序的核心思想：两个相邻的元素进行比较
//一冒泡排序让一个数据来到它最终应该出现的位置上

//数组传参的时候，形参有2种写法
//1.数组 int arr[]
//2.指针 int* arr
void bubble_sort(int arr[], int sz)//地址用指针接受，这里arr看起来是数组，本质是指针变量
{
	//	趟数
	int i = 0;
	for (i;i<sz-1;i++)
	{
		//一趟冒泡排序
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if(arr[j]>arr[j+1])
				{
					int tmp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = tmp;
				}
		}
	}
}

int main()
{
	//数组
	//把数组的数据排成升序
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);	//数组传参时直接给数组名，传的是首元素的地址
	for (int i = 0; i < sz; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}