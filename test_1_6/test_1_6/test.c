#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// & - ����2���ƣ�λ��
// | - ����2���ƣ�λ��
// ^ - ����2���ƣ�λ���
//int main()
//{
//	int a = 3; //
//	int b = -5;
//	printf("%d\n", a & b);
//	printf("%d\n", a | b);
//	printf("%d\n", a ^ b);
//	return 0;
//}

//��д����ʵ�֣���һ�������洢���ڴ��еĶ������е�1�ĸ���

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

//���ʵ�֣�����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//������� : 7

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

//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
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

//����������ʱ������������������������
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