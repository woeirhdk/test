#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//ʲô����䣿 
//���ʽ���
//�����������
//�������
//�������
//�����

//����������ڿ��Ƴ����ִ�����̣���ʵ�ֳ���ĸ��ֽṹ��ʽ���������ض�����䶨�����ɣ�C������9�ֿ�����䡣
//���Է�Ϊ�������ࣺ
//1.�����ж���䣬Ҳ�з�֧��䣻
//2.ѭ��ִ����䣺do while��䡢while��䡢for��䣻
//3.ת����䣺break��䡢goto��䡢continue��䡢return��䡣
//--------------------------�����ж����------------------------------------
//int main()
//{
	//int a = 10;
	//if (a == 3)
	//	printf("hehe\n");

	////int age = 10;
	////if (age >= 18)
	////	printf("����\n");

	//int age = 20;
	////Ĭ������� if����ֻ�ܸ�һ����䣬Ҫ��ִ�ж�����䣬��Ҫʹ�ô�����������
	//if (age < 18)
	//{
	//	printf("δ����\n");
	//	printf("��ֹ����\n"); 
	//}
	//else
	//{
	//	printf("����\n");
	//}

	//int age = 10;

	//if (age < 18)
	//	printf("������\n");
	//else if (age >= 18 && age < 28)
	//	printf("����\n");
	//else if (age >= 28 && age < 40)
	//	printf("׳��\n");
	//else if (age >= 40 && age < 60)
	//	printf("����\n");
	//else if (age >= 60 && age <= 100)
	//	printf("����\n");
	//else
	//	printf("������\n");


	//return 0;
//}

//int main()
//{
	////else�������ifƥ��
	//int a = 0;
	//int b = 2;
	//if (a == 1)
	//	if (b == 2)
	//		printf("hehe\n");
	//else
	//	printf("haha\n");
	//return 0;
//}

//�ж�һ�����Ƿ�Ϊ����
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if ( num % 2 == 1)
//	{
//		printf("%d������", num);
//	}
//	else
//	{
//		printf("%d��������", num);
//	}
//	return 0;
//}

//���1~100֮�������
//int main()
//{
//	int num = 0;
//	while (num<= 100)
//	{
//		if (num % 2 == 1)
//			printf("%d ",num);
//		num++;
//	}
//	return 0;
//}

//int main()
//{
//	//switch ���ʽ����Ϊ����
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����1\n");
//		break;
//	case 2:
//		printf("����2\n");
//		break;
//	case 3:
//		printf("����3\n");
//		break;
//	case 4:
//		printf("����4\n");
//		break;
//	case 5:
//		printf("����5\n");
//		break;
//	case 6:
//		printf("����6\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	}
//	return 0;
//}


//����1-5���weekday������6 7���weekend
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//
//	return 0;
//}

//switch��ϰ
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:m++; //m=3
//	case 2:n++; //n=2
//	case 3:
//		switch(n)
//		{//switch����Ƕ��ʹ��
//		case 1:n++; //n=2��ִ��
//		case 2:m++; n++; //m=4 n=3
//			break;  //������ǰ�ṹ�壬���������ṹ��
//		}
//	case 4:
//		m++;//m=5
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d", m, n); //m=5 n=3
//	return 0;
//}


//-------------------------3.ѭ�����--------------------------------
//3.1 whileѭ��
//int main()
//{
//	while (1) //while (���ʽ) �����ʽΪ�� ��ִ��
//	{//ѭ�����
//		printf("hehe\a");
//	}
//	return 0;
//}

//��ӡ1-10����
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//whileѭ���е�break����������ֹѭ������������ѭ����
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i++;
//		if (5 == i)
//			continue;
//		printf("%d", i);
//	}
//	return 0;
//}

//whileѭ���е�continue������������ѭ������Ĵ��룬ֱ��ȥ�жϲ��֣�������һ��ѭ�����ж�
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i++;
//		if (5 == i)
//			continue;
//		printf("%d ", i); //2 3 4 6 7 8 9 10 11
//	}
//	return 0;
//}

//int main()
//{
	//scanf��getchar���Ǵ����뻺������ȡ�ַ������뻺������ŵ��Ǽ������������
	//scanf�����ո񡢻س��򳬳����ͳ��Ⱥ��ֹͣ��ȡ  getchar��˳���ȡ���������ַ�������ֻ��ȡһ��
	//�������abcdef defg
	// scanfֻ���ȡ��abcdef ʣ����ַ��Ա����ڻ�������
	//������Ҫ�����ַ������жϣ�����յ�ʣ���ַ��ĸ���
	// ��ʱ����ͨ���������ַ��������������
	// 
	//int ch = 0;
	//while ((ch = getchar()) != EOF)
	//{
	//	putchar(ch);
	//}
//
//	char password[20] = {0};
//	printf("����������:>");
//	scanf("%s", password);
//	int ch = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ������(Y/N)");
//	int ret = getchar();
//	if ('Y' == ret || 'y' == ret)
//		printf("Yes\n");
//	else
//		printf("No\n");
//
//	return 0;
//}

//