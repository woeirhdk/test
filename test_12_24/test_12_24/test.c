#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//ʹ�����ȼ���for > while > do while

//while ѭ��
//int main()
//{
//	int i = 1;//��ʼ��
//	while (i<= 10)//�ж�
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;//����
//	}
//	return 0;
//}


// forѭ��
// for(���ʽ1;���ʽ2;���ʽ3)
//	ѭ�����;
// ���ʽ1Ϊ��ʼ�����֣����ʽ2Ϊ�����жϲ��֣����ʽ3Ϊ��������
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

// ����:
//		1.������forѭ�������޸�ѭ����������ֹѭ��ʧȥ����
//		2.����for����ѭ�����Ʊ�����ȡֵ���á�ǰ�պ����䡱д��
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//�±�Ϊ0~9
//	int i = 0;
//	//ǰ�պ󿪵�д��
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	i = 0;
//	//���߶��Ǳ�����
//	for (i = 0; i <= 9; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//forѭ���ı���
//forѭ���ĳ�ʼ�����жϺ͵������ֶ�����ʡ��
//forѭ�����жϲ���ʡ����ζ���жϻ�����(��ѭ��)
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


//do-whileѭ��:ѭ������ִ��һ��
//do
//	ѭ�����;
//while(���ʽ);
//
//ʹ�õĳ������ޣ����Ǿ���ʹ��

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



//���� n�Ľ׳�
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

//���� 1!+2!+3!+....+10!
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

	//�Ż���
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