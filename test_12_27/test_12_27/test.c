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
//void Swap2(int* px,int* py)	//ָ��������յ�ַ
//{
//	int z = 0;
//	z = *px;
//	*px = *py;				//��x�ĵ�ַ��Ϊy�ĵ�ַ
//	*py = z;					//��y�ĵ�ַ��Ϊx�ĵ�ַ
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	//��ֵ���� �������βκ�ʵ�ηֱ�ռ�в�ͬ�ڴ�飬���βε��޸Ĳ���Ӱ��ʵ�Ρ�
//	Swap1(a, b);
//	//��ַ���� �Ѻ����ⲿ�����������ڴ��ַ���ݸ�������һ�ֵ��ú����ķ�ʽ
//	//			���ִ��η�ʽ�����ú����ͺ�����ߵı�����������������ϵ��Ҳ���Ǻ����ڲ�����ֱ�Ӳ��������ⲿ�ı�����
//	Swap2(&a, &b);
//	printf("%d %d", a, b);
//	return 0;
//}

//дһ�� ���� �ж�һ�����ǲ�������
//ֻ�ܱ�1����������������
//7

//#include <math.h>
//
////sqrt����ѧ�⺯��
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
//		//�ж�i�Ƿ�Ϊ����
//		//�������ʹ�ӡ
//		if(is_prime(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n%d\n", count);
//	return 0;
//}

//дһ�� ���� �ж�һ���ǲ�������
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

//дһ�� ������ʵ��һ��������������Ķ��ֲ���
//���鴫��ʵ���ϴ��ݵ���������Ԫ�صĵ�ַ����������������
//���Ժ����ڲ�����һ�������������ֵ������Ԫ�ظ����ǲ����׵�
//int binary_search(int arr[],int k, int sz)     //�β�arr���������飬��������ָ��
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
//			return mid;//�ҵ��˷����±�
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
//		printf("�Ҳ���");
//	}
//	else
//	{
//		printf("�ҵ���,�±���%d\n",ret);
//	}
//	return 0;
//}

//дһ��������ÿ����һ������������ͻὫnum��ֵ+1
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

// ��������Ƕ�׵���
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


// ��ʽ����
//#include <string.h>
//
//int main()
//{
//	int len = strlen("abcdef");
//	printf("%d\n", len);
//	printf("%d\n", strlen("abedef"));
//
//	//Each of these functions returns the number of characters printed, or negative value if an error occurs.
//	//ÿһ�������ĺ������ص��Ǵ�ӡ���ַ��ĸ���(��ӡ�˼����ַ�����ֵ���Ǽ�)
//	printf("%d", printf("%d", printf("%d", 43)));
//
//	return 0;
//}

//�����������Ͷ���
//�������� ���߱�������һ��������ʲô��������ʲô������������ʲô�����Ǿ����ǲ��Ǵ��ڣ����������������ˡ�
//����������һ������ں���ʹ��֮ǰ��Ҫ������������ʹ�á�
//����������һ��Ҫ����ͷ�ļ��еġ� //*.h
//�����Ķ������*.c

//���ÿ����ͷ�ļ� �� ������<>
//�����Զ����ͷ�ļ� �� ˫����" "
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

