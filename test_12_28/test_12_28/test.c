#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�ݹ�
//�ݹ��������Ҫ������
//�����������������������������ʱ�򣬵ݹ�㲻�ټ�����
//ÿ�εݹ����֮��Խ��Խ�ӽ��������������

//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ��
//���磺
//���룺1234�����1 2 3 4.

//%d �Ǵ�ӡ�з��ŵ�����������������
//%u �Ǵ�ӡ�޷��ŵ�������û�и�����

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



//��д��������������ʱ���������ַ�����
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

//n�Ľ׳�

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


//���n��쳲���������
//1 1 2 3 5 8 13 21 34 55...
//

//int fib(int n) //�ݹ�쳲�����
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

//int fib(int n) //ѭ��쳲�����
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