#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//数组名是什么？

//数组名确实能表示首元素的地址
//但是有2个例外：
//1. sizeof(数组名)，这里的数组名表示整个数组，计算的是整个数组的大小，单位是字节
//2. &数组名，这里的数组名表示整个数组，取出的是整个数组的地址
//int main()
//{
//	int arr[10];
//	printf("%p\n", arr);//arr就是首元素的地址
//	printf("%p\n", arr+1);
//	printf("----------------------\n");
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);//首元素的地址
//	printf("----------------------\n");
//	printf("%p\n", &arr);//数组的地址
//	printf("%p\n", &arr+1);
//	return 0;
//}


//二维数组的数组名的理解

//int main()
//{
//	int arr[3][4] = {0};
//	//int sz = sizeof(arr);
//	//printf("%d\n", sz); // 12 * 8
//	printf("%zu", sizeof(arr) / sizeof(arr[0])); //arr = 48  arr[0] = 16 -->3
//	printf("%zu", sizeof(arr[0]) / sizeof(arr[0][0]));//arr[0] = 16  arr[0][0] = 4 -->4
//	printf("%p\n",arr); //二维数组的数组名也表示数组首元素的地址 它的首元素为第一个一维数组
//	printf("%p\n", arr + 1);
//	
//	return 0;
//}
