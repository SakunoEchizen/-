#include"func.h"

//int fun01(int a, int b = 1, int c) //这种写法是错误的。必须从右往左给默认参数。
int fun01(int a, int b = 1, int c=7)
{
	return a + b + c;
}

#if 0
int fun01(int a, int b = 1)	//这样的函数重载会遇到二义性的错误，碰到有默认参数的函数
{							//例如：fun01（1， 3） ，这样的调用方式，在两个函数都是符合的。
	return a + b ;
}

#endif
int fun01()
{
	cout << "无参fun01" << endl;
	return 0 ;
}

#if 0

int fun02(int a, int c = 1);	//声明和实现只能有一个带有默认参数
int fun02(int a, int c = 1)		//声明和实现只能有一个带有默认参数
int fun02(int a, int c)//这样写实现或者声明就不会报错;
{								//编译的时候会报错 重复声明 参数2
	return  a + c;
}
#endif

int fun03(int a, int = 0 )//第二个参数是占位参数，函数调用时必须填补，eg：fun03(10 ,19)。a和占位参数也可以有默认值。
{
	cout << "1111" << endl;
	return a;
}

int fun03(int a, string s)//占位参数 可以作为函数重载的条件，函数返回值类型却不可以！！
{
	cout<<"22222" << endl;
	return 0;
}

int fun04(int &a)//“引用 和 常量引用”可以作为重载的条件，但只是常量形参和形参则不行（意思是现在的fun04去掉 & ）
{
	cout << "fun04(int a)" << endl;
	return 0;
}

int fun04(const int &a)
{
	cout << "fun04(const int a)" << endl;
	return 0;
}

int show_fun01(void)
{
	int a = 2, b = 3;
	cout << "fun01(a, b) a = 2, b = 3  :"<<fun01(a, b) << endl;
	cout << "fun01(a) a = 2  : " << fun01(a) << endl;

	string s ="a" ;
	fun03(1, s);//输出22222
	fun03(1,"a");//输出22222
	fun03(1, 's');//输出1111


	fun04(a);
	const int a04 = 10;
	fun04(10);
	fun04(a04);

	return 0;
}
