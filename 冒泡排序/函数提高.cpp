#include"func.h"

//int fun01(int a, int b = 1, int c) //����д���Ǵ���ġ�������������Ĭ�ϲ�����
int fun01(int a, int b = 1, int c=7)
{
	return a + b + c;
}

#if 0
int fun01(int a, int b = 1)	//�����ĺ������ػ����������ԵĴ���������Ĭ�ϲ����ĺ���
{							//���磺fun01��1�� 3�� �������ĵ��÷�ʽ���������������Ƿ��ϵġ�
	return a + b ;
}

#endif
int fun01()
{
	cout << "�޲�fun01" << endl;
	return 0 ;
}

#if 0

int fun02(int a, int c = 1);	//������ʵ��ֻ����һ������Ĭ�ϲ���
int fun02(int a, int c = 1)		//������ʵ��ֻ����һ������Ĭ�ϲ���
int fun02(int a, int c)//����дʵ�ֻ��������Ͳ��ᱨ��;
{								//�����ʱ��ᱨ�� �ظ����� ����2
	return  a + c;
}
#endif

int fun03(int a, int = 0 )//�ڶ���������ռλ��������������ʱ�������eg��fun03(10 ,19)��a��ռλ����Ҳ������Ĭ��ֵ��
{
	cout << "1111" << endl;
	return a;
}

int fun03(int a, string s)//ռλ���� ������Ϊ�������ص���������������ֵ����ȴ�����ԣ���
{
	cout<<"22222" << endl;
	return 0;
}

int fun04(int &a)//������ �� �������á�������Ϊ���ص���������ֻ�ǳ����βκ��β����У���˼�����ڵ�fun04ȥ�� & ��
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
	fun03(1, s);//���22222
	fun03(1,"a");//���22222
	fun03(1, 's');//���1111


	fun04(a);
	const int a04 = 10;
	fun04(10);
	fun04(a04);

	return 0;
}
