#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//��һ�����������в��Ҿ����ĳ������n��
//int main()
//{
	//��������
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int k = 7;
	////��һ�����������в��Ҿ����ĳ������n
	//int i = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//for (i = 0; i <= sz; i++)
	//{
	//	if (arr[i] == k)
	//	{
	//		printf("�ҵ��ˣ��±�Ϊ%d",i);
	//	}
	//}

	//���ֲ���
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
//			printf("�ҵ��ˣ��±�Ϊ%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	
//	return 0;
//}

//��д���룬��ʾ����ַ��������ƶ������м���
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
//		system("cls"); //system��һ���⺯��������ִ��ϵͳ����
//		left++;
//		right--;
//	}
//
//	return 0;
//}

//��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ��������3�����룬���������ȷ
//����ʾ��¼�ɹ���������ξ�����������˳�����

//�Ƚ������ַ����Ƿ���ȣ�����ʹ��==����Ӧ��ʹ��һ���⺯����strcmp(�ַ���1,�ַ���2)   (string compare)
//�������ֵ��0����ʾ2���ַ������
//#include <string.h>
//int main()
//{
//	int count = 0;
//	char pwd[20] = {0};
//	char c_pwd[] = "123456";
//	for (count = 0; count < 3; count++)
//	{	
//		printf("���������룺");
//		scanf("%s", pwd);
//		if (strcmp(pwd,c_pwd) == 0)
//		{
//			printf("��¼�ɹ�!\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (count == 3)
//	{
//		printf("���ξ��������\n");
//	}
//	return 0;
//}

//��������Ϸ
//1.���Բ���һ�������(1~100)
//2.������
//�´���
//��С��
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
//	//1.���������
//	int ret = rand() % 100 + 1;
//	//2.������
//	while (1)
//	{
//		printf("������֣�");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶��ˣ�\n");
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
//		printf("��ѡ��:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}



//goto���

//int main()
//{
//again:
//	printf("hehe\n");
//	printf("haha\n");
//	goto again;
//	return 0;
//}


//������
//#include <Windows.h>
//#include <string.h>
////
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 120");
//again:
//	printf("��ע�⣬��ĵ��Խ���60���ڹػ���������룺��������ȡ���ػ�\n");
//	scanf("%s", &input);
//	if (strcmp(input,"������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}




//-------------����--------------
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


//�Զ��庯��

//дһ���������ҳ����������е����ֵ

//int get_max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//
//void test()   //void�޷���ֵ
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

//дһ���������Խ����������ͱ���������

//�β�
//void Swap(int* px, int* py)
//{
//	int z = *px;
//	*px = *py;
//	*py = z;
//}
//
//
////
////��ʵ�δ��ݸ��βε�ʱ���β���ʵ�ε�һ����ʱ����
////���βε��޸Ĳ���Ӱ��ʵ��
////
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("����ǰ:a=%d,b=%d\n", a, b);
//	Swap(&a, &b);//ʵ��
//	printf("������:a=%d,b=%d\n", a, b);
//
//	return 0;
//}