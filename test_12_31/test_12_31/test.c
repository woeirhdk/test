#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//��������ʲô��

//������ȷʵ�ܱ�ʾ��Ԫ�صĵ�ַ
//������2�����⣺
//1. sizeof(������)���������������ʾ�������飬���������������Ĵ�С����λ���ֽ�
//2. &���������������������ʾ�������飬ȡ��������������ĵ�ַ
//int main()
//{
//	int arr[10];
//	printf("%p\n", arr);//arr������Ԫ�صĵ�ַ
//	printf("%p\n", arr+1);
//	printf("----------------------\n");
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);//��Ԫ�صĵ�ַ
//	printf("----------------------\n");
//	printf("%p\n", &arr);//����ĵ�ַ
//	printf("%p\n", &arr+1);
//	return 0;
//}


//��ά����������������

//int main()
//{
//	int arr[3][4] = {0};
//	//int sz = sizeof(arr);
//	//printf("%d\n", sz); // 12 * 8
//	printf("%zu", sizeof(arr) / sizeof(arr[0])); //arr = 48  arr[0] = 16 -->3
//	printf("%zu", sizeof(arr[0]) / sizeof(arr[0][0]));//arr[0] = 16  arr[0][0] = 4 -->4
//	printf("%p\n",arr); //��ά�����������Ҳ��ʾ������Ԫ�صĵ�ַ ������Ԫ��Ϊ��һ��һά����
//	printf("%p\n", arr + 1);
//	
//	return 0;
//}
