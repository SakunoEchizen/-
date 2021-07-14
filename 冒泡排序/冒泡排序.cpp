// 冒泡排序.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

int *Bubble_Sort(int *a)
{
    int temp;

    int length = sizeof( a ) /sizeof(a[0]);
    cout << "将一个函数A里面定义的数组当参数传给函数B时，在B里面计算：length of sequence :" << length << endl;
    //当将数组作为实参传递到另一个函数中时, 另一个函数的形参相当于一个指针变量, 因为将数组的名作为实参时, 就是将数字的首地址作为实参
    length = 9;
    for (int i = 0; i < length-1; i++)
    {
        for (int j=0; j < length -1-i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
        }
    }
    return a;
    //想要返回一个数组，那么函数必须是指针函数，且指着指针函数的形参也是指针才可以
}

int main()
{
    int a[9] = { 6,3,2,6,3,1,0,4,5};
    int *b;
    int length = sizeof(a) / sizeof(int);

    cout << "在定义数组的函数A计算:length of sequence :" << length << endl;
    b=Bubble_Sort(a);
    cout << "Bubble_Sort(冒泡排序）:" << endl;
    for (int i = 0; i < 9; i++)
    {
        cout << b[i]<<" ";
    }
    return 0;
}


// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
