#include"func.h"

void swap1(int a, int b)//ֵ����  ����
{
	int tmp = a;
	a = b;
	b = tmp;
	cout << "swap1  �� �潻����a��" << a << "  b:" << b<<endl;
}

void swap2(int *a, int *b)//��ַ����  ����
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
	cout << "swap2  �� �潻����q��" << *a << "  w:" << *b << endl;
}

void swap3(int& a, int& b)//���ô���  ����
{
	int tmp = a;
	a = b;
	b = tmp;
	cout << "swap3  �� �潻����r��" << a << "  t:" << b << endl;
}


int &test01() //���� �ֲ����� ���õ�ʵ��
{
	int a = 10;
	return a;
}

int test02()	//���غ����ڲ���������ã�Ҳ��Σ�յ�
{
	int a = 100;
	int& b = a;
	return b;
}

int& test03()
{
	int static a = 1000;	//��̬�������洢��ȫ����
	return a;
}

int printf01(const int& a)	//�������ã����������βΣ���ֹ�������
{
	cout << "printf01 a=" << a << endl;
	return 0;
}

void swap_test_show(void)
{
	int a = 2, b = 6;
	cout << "swap1  ǰ �潻����a��" << a << "  b:" << b << endl;
	swap1(a, b);
	cout << "ֵ���� swap1  �� �潻����a��" << a << "  b:" << b << endl<<endl;;

	int q = 11, w = 22;
	cout << "swap2  ǰ �潻����q��" << q << "  w:" << w << endl;
	swap2(&q, &w);
	cout << "��ַ���� swap2  �� �潻����q��" << q << "  w:" << w << endl << endl;

	int r = 55, t = 99;
	cout << "swap3  ǰ �潻����r��" << r << "  t:" << t << endl;
	swap3(r, t);
	cout << "���ô��� swap3  �� �潻����r��" << r << "  t:" << t << endl << endl;

	int& ref1 = test01();//��Ҫ���� ���ֲ�'����'�� ���ã���Ϊ�����
	cout << "���ؾֲ����õ�ʵ��1 ref1=" << ref1 << endl;
	cout << "���ؾֲ����õ�ʵ��1 ref1=" << ref1 << endl;

	int ref2 = test02();//�п��ܳ���������������������������
	int ref22 = test02();//�п��ܳ���������������������������
	int ds = 123;
	int das = 432;
	int dsaaa = das + ds;
	cout << "���ؾֲ����õ�ʵ��22 ref2=" << ref22 << endl;
	cout << "���ؾֲ����õ�ʵ��22 ref2=" << ref22 << endl;
	cout << "���ؾֲ����õ�ʵ��22 ref2=" << ref22<< endl;
	cout << "���ؾֲ����õ�ʵ��2 ref2=" << ref2 << endl;	
	cout << "���ؾֲ����õ�ʵ��2 ref2=" << ref2 << endl;
	cout << "���ؾֲ����õ�ʵ��2 ref2=" << ref2 << endl;
	cout << "���ؾֲ����õ�ʵ��2 ref2=" << ref2 << endl;

	int& ref3 = test03();	//���Է��ؾ�̬���������á�
	cout << "���ؾ�̬�������õ�ʵ��3 ref3=" << ref3 << endl;
	cout << "���ؾ�̬�������õ�ʵ��3 ref3=" << ref3 << endl;

	test03() = 3222;    //��������ķ���ֵ�����ã���ô����������þͿ�����Ϊ��ֵ
	cout << "���ؾֲ����õ�ʵ��3 ref3=" << ref3 << endl;
	cout << "���ؾֲ����õ�ʵ��3 ref3=" << ref3 << endl;

	//int &ref22 = 10; //���Ǵ����	,��Ϊ����ֻ�Ǳ����ı������ͱ�������ռ䣨ջ����
	//const int & ref22 =121;  //���ǿ��еģ�����ָ����һ��Ϸ����ڴ�ռ䣨ȫ������	//����д����Ҫ��Ϊ���﷨ͨ����� 
	//����const֮�� �������Ὣ�����޸�Ϊ��
	//int tmp=10; const int &ref22 =tmp;

	printf01(test03());

	//��C++�У���ֵ���Գ����ڸ�ֵ������ߺ��ұߣ���ֵֻ�ܳ����ڸ�ֵ�����ұߣ����ܳ����ڸ�ֵ������ߡ���������ֵ����������ֵ��
	//�ǳ������õĳ�ʼֵ��������ֵ; ���һ�����ò������� ���γ����ģ���ô�����Ƿǳ������á�
	//������ֵ����ֵ�ı�ݷ����ǣ����ܲ��ܶԱ��ʽȡ��ַ������ܣ���Ϊ��ֵ������Ϊ��ֵ��
	//	��ô�ٸ�������
	//	int i = 5;
	//int& a = i;
	//��ʱ����ͨ��
	//	������� int& a = 5; �����ͳ�����
	//	���5��i��ʲô���𣬴𰸾���5����ֵ��i����ֵ

}