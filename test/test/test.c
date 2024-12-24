#define _CRT_SECURE_NO_WARNINGS
//在源文件第一行放上面这个代码，以取消scanf unsafe的警告
//或者在VS的安装路径下有个newc++file.cpp文件，所有VS工程中新建的.c或.cpp文件
//都是从newc++file.cpp拷贝过来的
//scanf_s 这个函数是由VS编译器提供的函数，并非按标准C语言提供的函数
//只有VS编译器认识scanf_s，其他编译器不认识，要想跨平台使用C语言，还是使用scanf
/*--------------------------认识C语言---------------------------*/
//C语言代码中一定要有main函数(主函数)

//printf是一个库函数
//专门用来打印数据的

//vs环境如何运行代码:
// Ctrl + F5
//
//vs中逐行执行代码
// F10
//  
//std - 标准 standard
//i - 输入   input
//o - 输出   output
#include <stdio.h>

//C语言规定
//main函数是程序的入口
//main函数有且仅有一个
// 
//标准的主函数的写法
//int main()
//{
//	printf("Hello World!\n");
//	return 0;				//在C语言里，约定俗成的习惯：如果函数正常运行，则返回0；如果异常了会返程非0值
//}

//古老的写法 - 不推荐
//void main()
//{
//
//}

/*--------------------------数据类型---------------------------*/

//char		字符数据类型
//short		短整型
//int		整型
//long		长整型
//long long	更长的整型
//float		单精度浮点数
//double	双精度浮点数
//每种类型的大小是多少？
//int main()
//{
//	printf("%zu\n",sizeof(char));		//1 sizeof()返回的值是字节
//	printf("%zu\n", sizeof(short));		//2
//	printf("%zu\n", sizeof(int));		//4
//	printf("%zu\n", sizeof(long));		//4
//	printf("%zu\n", sizeof(long long));	//8
//	printf("%zu\n", sizeof(float));		//4
//	printf("%zu\n", sizeof(double));	//8
//	return 0;
//}
//

//int main()
//{
//	int age = 20;
//	double price = 66.6;
//
//	return 0;
//}

/*--------------------------变量和常量---------------------------*/

//变量和常量的概念
//C语言中用常量表示不变的值，用变量表示变的值
//变量分为：
//局部变量 - {}内部定义的变量 
//全局变量 - {}外部定义的变量
//
//int b = 20;	//全局变量
//int main()
//{
//	//short age = 20;
//	//int high = 180;
//	//float weight = 88.5;
//	int a = 10;	//局部变量
//	return = 0;
//}

//int a = 100;
//
//int main()
//{
//	//int a = 10;
//	printf("a=%d\n",a);//当全局变量和局部变量名字相同的情况下，局部有限
//	return 0;
//}

//但是建议不要将全局变量和局部变量的名字写成一样的

//写一个代码，计算2个整数的和
//scanf 是一个输入函数
//printf是一个输出函数
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;//创建变量时就赋一个值（初始化），没有初始化的化系统会默认赋随机值
//	//输入2个整数
//	scanf("%d", &num1);
//	scanf("%d", &num2);
//	//求和
//	int sum = 0;
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}

//变量的作用域
//局部变量
// 局部变量的作用域是变量所在的局部范围
//全局变量
// 全局变量的作用域是整个工程

//变量生命周期
//局部变量的生命周期是：进入作用域生命周期开始，出作用域生命周期结束
//全局变量的生命周期是：整个程序的生命周期


////1 在作用域内定义局部变量，可以被调用
//int main()
//{
//	{
//		int a = 10;				//局部变量 它的作用域就在{}这个范围内
//		printf("a=%d\n", a);
//	}
//	return 0;
//}

////2 在作用域外定义局部变量，不可以被调用
//int main()
//{
//	int a = 10;
//	{
//		printf("a=%d\n", a);
//	}
//	return 0;
//}

////3 声明一个全局变量 整个工程都能用
//int a = 10;
//void test()
//{
//	printf("a=%d\n",a);
//}
//
//int main()
//{
//	test();
//	printf("a=%d\n", a);
//	{
//		printf("a=%d\n", a);
//	}
//	return 0;
//}

////4 在本工程内其它文件add.c中声明一个全局变量，整个工程都能用
//extern int a;//使用extern 声明来自外部的符号
//void test()
//{
//	printf("a=%d\n", a);
//}
//int main()
//{
//	test();
//	printf("a=%d\n", a);
//	{
//		printf("a=%d\n", a);
//	}
//	return 0;
//}

//C语言中的常量分为以下几种：
//字面变量、const修饰的常变量、#define定义的标识符常量、枚举常量
//int main()
//{
//	//字面常量
//	//30;
//	//3.14;
//	//'a';		//字符
//	//"adf";	//字符串
//	//常变量	
//	const int a = 10;
//	//a = 20;		//经过const修饰的a，本质是变量，但是无法直接修改，具有了常量的属性
//	printf("%d", a);
//	return 0;
//}

//#define 定义的标识符常量
//#define MAX 100
//#define STR "abcdef"

//int main()
//{
//	printf("%d\n", MAX);
//	int a = MAX;
//	printf("%d\n", a);
//	printf("%s\n", STR);
//	//MAX=200 //无法修改常量
//	return 0;
//}

//枚举常量: 
//enum Color //定义Color这个变量的可能取值
//{
//	RED,
//	GREEN,
//	BLUE
//};
//enum Sex	//定义Sex这个变量的可能取值
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	int num = 10;
//	enum Color c = RED;
//	//RED = 20;//不可更改
//	return 0;
//}


/*--------------------------字符串---------------------------*/
//#include <string.h>
//
//int main()
//{
//	//char 字符类型
//	//'a';		//字符常量
//	//char ch = 'w';
//	//"abcdef"	//这种由双引号引起来的一串字符称为字符串字面值，或者简称字符串。
//	//字符串会自动在结尾添加结束符\0
//	//注：字符串的结束标志是一个\0的转义字符。在计算字符串长度的时候\0是结束标志，不算作字符串内容。
//	// 
//	//C语言中有没有字符串类型？ - 没有
//	//按F10 打开监视窗口（调试-窗口-监视）,添加要监视的项，输入str1  str2  str3
//	//可以看到str1有\0  str2没有\0 当需要打印str2时，printf会因为找不到结束符一直往后找，直到找到\0才会停止打印，在str3最后手动添加一个\0，就可以正常打印
//	char str1[] = "abcdef"; //
//	char str2[] = { 'a','b','c','d','e','f'};//
//	char str3[] = { 'a','b','c','d','e','f','\0'};
//	
//	printf("%d\n", strlen(str1));//6
//	printf("%d\n", strlen(str2));
//	printf("%d\n", strlen(str3));//6
//
//	//int len = strlen("abc");//求字符串长度的一个函数(string length),其头文件为string.h
//	//printf("%d",len);
//
//	//printf("%s\n", str1);
//	//printf("%s\n", str2);
//	//printf("%s\n", str3);
//	
//	return 0;
//}

/*--------------------------转义字符---------------------------*/
//	\0		空字符	
//*	\ ?		在书写连续多个问号时使用，防止他们被解析成三字母词
//*	\’		单引号（‘’）	
//*	\"		双引号（"）	
//*	\\		反斜线字符（\）	，防止它被解释为一个转义序列符。
//	\a		警告字符，蜂鸣
//	\b		退格（Backspace）
//	\f		换页（进纸符）		
//*	\n		回车换行（Enter）
//*	\r		回车	
//*	\t		水平制表符（即横向跳格）		
//	\v		垂直制表符（竖向跳格）
//*	\ddd	1~3位八进制所代表的字符 如\130 X
//*	\xdd	1~2位十六进制所代表的字符\x30 0


//int main()
//{
//	printf("abc\n");
//	return 0;
//}

//int main()
//{
//	printf("abc\0def");
//	return 0;
//}
//

//
//%d - 打印整型
//%c - 打印字符
//%s - 打印字符串
//%f - 打印float类型的数据
//%lf - 打印double类型的数据
//$zu - 打印sizeof()的返回值
//int main()
//{
//	printf("%s\n","(are you ok??)"); //早期编译器会打印为(are you ok]
//	printf("%s\n","(are you ok\?\?)");//转义后则不会出现这个问题
//	printf("%c\n", '\'');
//	printf("\"\n");
//	printf("abcd\\0ef\n");
//	printf("蜂鸣\\a\a\n");
//	printf("%c\n",'\130');
//	printf("%c\n", '\x63');
//	return 0;
//}

/*-----------------------------注释------------------------------*/
//注释:注解 解释
/*C语言的注释风格*/
//C++的注释风格

//
//1.注释可以梳理思路
//2.对复杂的代码进行解释
//
//int main()
//{
	//创建指针变量p，并赋值为NULL
	//int* p = NULL;
	//return 0;
//}

/*---------------------------选择语句----------------------------*/
//int main()
//{
//	char input = 0;
//	printf("是否同意(Y/N)?\n");
//	scanf("%c", &input);
//	if (input == 'Y')
//	{
//		printf("同意");
//	}
//	else
//	{
//		printf("不同意");
//	}
//	return 0;
//}
/*---------------------------循环语句----------------------------*/
//int main()
//{
//	int i = 0;
//	while (i <= 20)
//	{	
//		i++;
//		printf("%d\n", i);
//		if (i == 10)
//		{
//			printf("大功已成\n");
//			break;
//		}
//	}
//	return 0;
//}
/*----------------------------函数-----------------------------*/
//函数
//int Add(int x, int y)// int为函数的返回类型 Add函数名 ()内为函数参数
//{
//	int z = 0;
//	z = x + y;		//整个{}里的内容叫做函数体
//	return z;
//}
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	//输入
//	scanf("%d %d", &n1, &n2);
//	//求和
//	//int sum =  n1 + n2;
//	
//	//打印
//	//printf("%d", sum);
//	printf("%d", Add(n1, n2));
//	return 0;
//}
//int MAX(int a, int b)
//{
//	if (a > b)
//	{
//		return a;
//	}
//	else
//	{
//		return b;
//	}
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//	printf("%d", MAX(x, y));
//	return 0;
//}

/*---------------------------数组----------------------------*/
//数组：一组相同类型元素的集合
//数组的每个元素都有一个下标（索引）
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	//printf("%d",arr[8]);
//	int i = 0;
//	while (i < 10) 
//	{
//		printf("%d ",arr[i]);
//		i++;
//	}
//	return 0;
//}

/*---------------------------操作符----------------------------*/
//算数操作符：+ - * / %
//int main()
//{
//	int a = 7 / 2;
//	int b = 7 % 2;//取模
//	printf("%d\n", a);
//	printf("%d\n", b);//7 / 2 = 3 余 1
//	//除号的两端都是整数的时候，执行的是整数出发，如果两端只要有一个浮点数，就执行浮点数的除法
//	float c = 7 / 2.0;
//	//int d = b = 7 % 2.0; //取模操作符的两端的操作数只能是整数
//	printf("%.2f\n", c);
//	//printf("%d\n", d);
//	return 0;
//}

//移位操作符 >> <<

//位操作符 & ^ |

//赋值操作符 = += -= *= /= &= ^= |= >>= <<=
//int main()
//{
//	int a = 0;//初始化
//	a = 20;//赋值
//	
//	a = a + 3;//a = 23
//	a += 3;
//	
//	a -= 3;
//	a = a - 3;
//	return 0;
//}

//单目操作符
//!逻辑反操作 -负值 +正值 &取地址 siezeof操作数的类型长度（以字节位单位
//~对一个数的二进制按位取反 --  ++   *间接访问操作符 （类型)强制类型转换
//C语言中 0 表示假，非 0 表示真
//int main()
//{
	/*int flag = 0;
	if (!flag)
	{
		printf("hehe\n");
	}

	int a = -10;
	int b = -a;
	printf("%d", b);
	*/

	//sizeof是单目操作符 不是函数 计算的是整个数组的大小，单位是字节
	//int a = 10;
	//printf("%d\n", sizeof(a));//4
	//printf("%d\n", sizeof(int));//4
	//printf("%d\n", sizeof a);//4
	//
	//int arr[10] = { 0 };
	//printf("%d\n", sizeof(arr));//40  1个整型4个字节 共40个字节 
	//printf("%d\n", sizeof(arr[0]));
	//printf("%d\n", sizeof(arr) / sizeof(arr[0]));//10

	//int a = 10;
	//int b = a++;//后置++，先使用，后++(b = a; a++)
	//printf("%d\n", a); 
	//printf("%d\n", b);
	//a = 10;	
	//int c = ++a;//前置++，先++，后使用(a++; b = a)
	//printf("%d\n", a);
	//printf("%d\n", c);
	
	//强制类型转换
	//int a = (int)3.14;//3.14 字面浮点数，编译器默认理解为double类型
	//printf("%d\n", a);
	//return 0;
//}

//关系操作符 > >= < <= != ==
//int main()
//{
//	int a = 10;
//	if (a == 3)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//逻辑操作符
// &&逻辑与-并且
// ||逻辑或-或者

//int main()
//{
//	int a = 10;
//	int b = 20;
//	if (a && b) //都为真才运行
//	{
//		printf("ab都为真\n");
//	}
//	//测试逻辑与 有一个为假 则不运行
//	a = 0;
//	if (a && b)
//	{
//		printf("ab有一个不为真\n");
//	}
//	//测试逻辑或
//	if (a || b)
//	{
//		printf("ab有一个为真则运行\n");
//	}
//	b = 0;
//	if (a || b)
//	{
//		printf("ab都为0，不运行\n");
//	}
//	return 0;
//}

//条件操作符（三目操作符） exp1 ? exp2 : exp3

//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int r = (a > b ? a : b);//exp1: a > b    exp2:a     exp3:b      a大于b为真，返回a；a大于b为假，则返回b
//	printf("%d", r);
//	return 0;
//}

//逗号表达式：就是逗号隔开的一串表达式
//逗号表达式的特点是：从左向右一次计算，整个表达式的结果是最后一个表达式的结果
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	//			c=8		a=28		5
//	int d = (c = a - 2, a = b + c, c - 3);
//	printf("%d", d);
//	return 0;
//}

//下标引用、函数调用和结构成员 []    ()    .    ->
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	arr[3] = 20;//[]就是下标引用操作符 arr和3就是[]的操作数
//	return 0;
//}

//函数调用操作符
//int Add(int x, int y)
//{
//	return x+y;
//}
//int main()
//{
//	int sum = Add(2, 3); //()就是函数调用操作符,Add,2,3都是()的操作数
//	printf("%d", sum);
//	return 0;
//}

/*---------------------------常见关键字----------------------------*/
//auto break case char const continue default do double else enum
//extern float for goto if int long register return short signed
//sizeof static struct switch typeof union unsigned void volatile while
//变量的名字不能是关键字

//typedef 类型定义
//typedef unsigned int uint;
//
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//int main()
//{
//	unsigned int num = 0; 
//	uint num2 = 1;
//	struct Node n;
//	Node n2;
//	return 0;
//}

//static 静态
//1.修饰局部变量 - 静态局部变量
// static修饰局部变量的时候,局部变量出作用域不被销毁，其生命周期与程序的寿命周期一致
// 本质上，static修饰局部变量的时候，改变了变量的存储位置
// 
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//2.修饰全局变量 - 静态全局变量
//全局变量具有外部链接属性，static修饰全局变量时，全局变量的外部链接属性
//就变成了内部链接属性，其他.c源文件就不能使用这个全局变量了


//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}

//3.修饰函数 - 静态函数
//函数具有外部链接属性,static修饰函数时，函数的外部链接属性就变成了内部链接属性
//其他.c源文件就无法使用这个函数了	

//extern int Add(int x, int y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	
//	int z = Add(a, b);
//	printf("%d", z);
//	return 0;
//}

//register 寄存器变量：建议将变量放在寄存器中，最终由电脑分配存放位置
//int main()
//{
//	register int num = 3;
//	return 0;
//}

/*----------------------#define定义常量和宏-----------------------*/

//#define定义标识符常量
//#define NUM 100

//#define定义宏 宏有参数
//#define ADD(x,y) ((x)+(y))  //ADD:宏名 x,y:宏的参数，参数是无类型  ((x)+(y)):宏体

//int main()
//{
//	//printf("%d\n", NUM);
//	//int n = NUM;
//	//printf("%d\n", n);
//	//int arr[NUM] = { 0 };
//	int a = 10;
//	int b = 20;
//	int c = ADD(a, b);
//	printf("%d\n", c);
//	return 0;
//}

/*---------------------------指针----------------------------*/

//指针变量
//int main()
//{
//	int a = 10; //向内存申请4个字节，存储10
//	&a;//取地址操作符
//	printf("%p\n",&a);//%p以地址的格式打印数据
//	int* p = &a;       //int说明p指向的对象是int类型的  *说明p是指针变量
//	//p就是指针变量
//	//编号->地址->地址也被称为指针
//	//存放指针（地址）的变量就是指针变量
//	*p = 20;//解引用操作符，通过p中存放的地址，找到p所指的对象
//	printf("%d\n", a);
//
//	char ch = 'w';
//	char* pc = &ch;
//	return 0;
//}

//指针变量的大小
//int main()
//{
//	//int* p;
//	//char* p2;
//	//不管是什么类型的指针，都是在创建指针变量
//	//指针变量是用来存放地址的
//	//指针变量的大小取决于一个地址存放的时候需要多少空间
//	//32位机器上的地址：32bit位 - 4byte，对应指针变量的大小就是4个字节
//	//64位机器上的地址：64bit位 - 8byte，对应指针变量的大小就是8个字节
//	printf("%zu\n", sizeof(char*));
//	printf("%zu\n", sizeof(short*));
//	printf("%zu\n", sizeof(int*));
//	printf("%zu\n", sizeof(float*));
//	printf("%zu\n", sizeof(double*));
//	return 0;
//}

/*---------------------------结构体----------------------------*/
//struct Stu
//{
//	char name[20];
//	int age;
//	char sex[10];
//	char tele[12];
//};
//
//void print(struct Stu* ps) 
//{
//	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
//	//结构体对象.成员名
//	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
//}
//
//int main()
//{
//	struct Stu s = { "zhangsan",22,"nan","19812345678" };
//	//结构体对象.成员名
//	printf("%s %d %s %s\n",s.name, s.age, s.sex, s.tele);
//	print(&s);
//	return 0;
//}
