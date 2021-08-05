#include"func.h"

void swap1(int a, int b)//值传递  交换
{
	int tmp = a;
	a = b;
	b = tmp;
	cout << "swap1  里 面交换后，a：" << a << "  b:" << b<<endl;
}

void swap2(int *a, int *b)//地址传递  交换
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
	cout << "swap2  里 面交换后，q：" << *a << "  w:" << *b << endl;
}

void swap3(int& a, int& b)//引用传递  交换
{
	int tmp = a;
	a = b;
	b = tmp;
	cout << "swap3  里 面交换后，r：" << a << "  t:" << b << endl;
}


int &test01() //返回 局部变量 引用的实验
{
	int a = 10;
	return a;
}

int test02()	//返回函数内部定义的引用，也是危险的
{
	int a = 100;
	int& b = a;
	return b;
}

int& test03()
{
	int static a = 1000;	//静态变量，存储在全局区
	return a;
}

int printf01(const int& a)	//常量引用，用来修饰形参，防止误操作。
{
	cout << "printf01 a=" << a << endl;
	return 0;
}

void swap_test_show(void)
{
	int a = 2, b = 6;
	cout << "swap1  前 面交换后，a：" << a << "  b:" << b << endl;
	swap1(a, b);
	cout << "值传递 swap1  外 面交换后，a：" << a << "  b:" << b << endl<<endl;;

	int q = 11, w = 22;
	cout << "swap2  前 面交换后，q：" << q << "  w:" << w << endl;
	swap2(&q, &w);
	cout << "地址传递 swap2  外 面交换后，q：" << q << "  w:" << w << endl << endl;

	int r = 55, t = 99;
	cout << "swap3  前 面交换后，r：" << r << "  t:" << t << endl;
	swap3(r, t);
	cout << "引用传递 swap3  外 面交换后，r：" << r << "  t:" << t << endl << endl;

	int& ref1 = test01();//不要返回 “局部'变量'” 引用，因为会出错。
	cout << "返回局部引用的实验1 ref1=" << ref1 << endl;
	cout << "返回局部引用的实验1 ref1=" << ref1 << endl;

	int ref2 = test02();//有可能出错！！！！！！！！！！！！！
	int ref22 = test02();//有可能出错！！！！！！！！！！！！！
	int ds = 123;
	int das = 432;
	int dsaaa = das + ds;
	cout << "返回局部引用的实验22 ref2=" << ref22 << endl;
	cout << "返回局部引用的实验22 ref2=" << ref22 << endl;
	cout << "返回局部引用的实验22 ref2=" << ref22<< endl;
	cout << "返回局部引用的实验2 ref2=" << ref2 << endl;	
	cout << "返回局部引用的实验2 ref2=" << ref2 << endl;
	cout << "返回局部引用的实验2 ref2=" << ref2 << endl;
	cout << "返回局部引用的实验2 ref2=" << ref2 << endl;

	int& ref3 = test03();	//可以返回静态变量的引用。
	cout << "返回静态变量引用的实验3 ref3=" << ref3 << endl;
	cout << "返回静态变量引用的实验3 ref3=" << ref3 << endl;

	test03() = 3222;    //如果函数的返回值是引用，那么这个函数调用就可以作为左值
	cout << "返回局部引用的实验3 ref3=" << ref3 << endl;
	cout << "返回局部引用的实验3 ref3=" << ref3 << endl;

	//int &ref22 = 10; //这是错误的	,因为引用只是变量的别名，和变量共享空间（栈区）
	//const int & ref22 =121;  //这是可行的，引用指向了一块合法的内存空间（全局区）	//这种写法主要是为了语法通过检查 
	//加上const之后 编译器会将代码修改为：
	//int tmp=10; const int &ref22 =tmp;

	printf01(test03());

	//在C++中，左值可以出现在赋值语句的左边和右边；右值只能出现在赋值语句的右边，不能出现在赋值语句的左边。变量是左值，常量是右值。
	//非常量引用的初始值必须是左值; 如果一个引用不是用来 修饰常量的，那么它就是非常量引用。
	//区分左值与右值的便捷方法是：看能不能对表达式取地址，如果能，则为左值，否则为右值。
	//	那么举个例子先
	//	int i = 5;
	//int& a = i;
	//这时编译通过
	//	但是如果 int& a = 5; 这样就出错了
	//	这个5和i有什么区别，答案就是5是右值，i是左值

}