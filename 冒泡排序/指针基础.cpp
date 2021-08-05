
#include"func.h"

int* ptr_test01(int a);
int* ptr_test02(int& b);
int ptr_test03();
void ptr_test(void)
{

    //空指针用来给指针变量进行初始化
    //空指针不允许被访问
    int* p1 = NULL;
    //*p1 = 100; //这是错误的，编译不报错，但是运行是会出错。
    //cout << "*p1="<< * p1 << endl; //也是报错


    //野指针出现的原因：
    //1.指针定义时未被初始化：指针在被定义的时候，如果程序不对其进行初始化的话，它会随机指向一个区域，因为任意指针变量（除了static修饰的指针）它的默认值都是随机的
    //2.指针被释放时没有置空：我们在用malloc（）开辟空间的时候，要检查返回值是否为空，如果为空，则开辟失败；如果不为空，则指针指向的是开辟的内存空间的首地址。指针指向的内存空间在用free()和delete释放后，如果程序员没有对其进行置空或者其他赋值操作的话，就会成为一个野指针
    //3.指针操作超越变量作用域：不要返回指向栈内存的指针或者引用，因为栈内存在函数结束的时候会被释放。

    int* p2 = (int*)0x2311; //这是一个野指针，(int *) 是将16进制数转换成地址的一种操作，
                            //这个地址 不是我们申请的，是系统的，受限地址。
    //cout << *p2 << endl; 	//和空指针一样，不被允许访问，但是编译不会报错，运行会出错。
                            //野指针不能判断是否为NULL来避免

    //垂悬指针：指针正常初始化，曾指向一个对象，该对象被销毁了，但是指针未制空，那么就成了悬空指针。

    //常量指针，const在 *p3的前面
    int a = 20;
    int b = 32;
    const int* p3 = &a;
    //此时指针p3的指向可以修改，即 p3=&b; 是对的
    //但是指针指向的值不可以被修改，即 *p3=64 是错的；也就是用这个指针指向的所有内存区域的东西都不可以通过*p3（也就是解引用的方式）修改，要修改p3所指向的a的值==》a=64

    //常量指针 和 指针常量的区别：
    //常量指针  意思是指针可以有多个女朋友（对象），但是女朋友的性格（性格 = 值）固定
    //指针常量  指针只有一个女朋友，但是性格可以很多种。

    //const修饰谁，谁就不能变。
    //例如常量指针，const修饰的是int ，那么int就是p指向的对象不能变；
    //指针常量，const修饰的是p，p就不能再指向其他对象。

    //快速记忆：根据 * 和const的位置连起来读， * = 指针，const = 常量
    //示例：const int* p3 = &a，  const *= = 》常量指针
    //int* const p3 = &a，* const == 》指针常量

    //指针常量，const在 * 和 p4 之间
    int* const p4 = &a;
    //此时指针p，指向的值可以修改，即* p4 = 63是对的；
    //但是p4 = &b是错的，因为p4只能指向a。

    const int* const p5 = &a;
    //p5 被const修饰，int也被const 修饰，p5不可以在指向其他对象，
    //p5指向的对象的值也不可以通过p5 更改


     //指针数组，存储的都是指针
    //元素表示： 要用指针里面的内容，需要解引用，*(h[]) 或者 *h[i],
    int* h[3];
    cout << "指针数组的大小：" << sizeof(h) << endl;    //12
    cout << "指针数组的大小：" << sizeof(*h) << endl;   //4
    //cout<<"指针数组的大小："<<sizeof(&a)<<endl;   错误
    cout << "h" << endl;
    cout << h << endl;                   //008FF318 h本身就是地址

    cout << *h << endl;             //CCCCCCCC
    cout << &h << endl;                  //008FF318 //数组的起始地址
    cout << h+1 << endl;            //CCCCCCD0

    cout <<"h[]"<< endl;
    //cout << *h[0] << endl;        错误
    cout << &h[0] << endl;              //008FF318  //数组的起始地址，也是第一个元素位置
    //cout << *h[1] << endl;        错误,因为h[1]内的地址是默认的C...，但这个C地址的内容不允许被访问
    cout << &h[1] << endl;              //008FF31C  //第二个元素地址
    cout << h[1] << endl;           //CCCCCCCC

    cout << endl;

    cout << *h + 1 << endl;         //CCCCCCD0，地址这个值的加减运算
    cout << &h + 1 << endl;             //008FF324  //越过一个数组的长度
    cout << *(h + 1) << endl;       //CCCCCCCC
    //cout<<&(a+1)<<endl;           错误

    cout << "数组指针测试：" << endl;
    //数组指针，一个指向未命名的数组的指针，把指针名字当成数组名字使用
    int kkk[3] = { 22,4,7 };
    int(*k)[3] ;
    /*
    //错误的赋值方法
    *k[1] = 1;
    *k[2] = 3;
    cout << k[1] << endl;
    cout << k[2] << endl;
    */
    k = &kkk;
    cout << *(k[1]) << endl;    //输出的是乱码
    cout <<(*k)[2] << endl; //正确，输出 7 .

    cout << "函数和指针测试：" << endl;
    //指针函数=带指针的函数，本质是一个函数，函数返回类型是某一类型的指针。
    //类型标识符 *函数名(参数列表 )  eg：  int *test_func(int x,int y)

    int k_a = 1;
    int *k_b;
    k_b = ptr_test01(1);
    cout << "k_b="<<k_b << endl;
    cout << "*k_b=" << *k_b << endl;//因为01函数里面是局部变量，返回它的地址里面的值就是乱的

    k_b = ptr_test02(k_a);
    cout << "k_b=" << k_b << endl;
    cout << "*k_b=" << *k_b << endl;//02是地址传递，本体传过去了
    cout << "k_a=" << k_a << endl;//值被改变了，变成101
    cout << *ptr_test02(k_a) << endl;//201,因为返回的是指针，所以需要解引用，取出里面的值
    cout << "函数指针:" << endl;
    ptr_test03();
    cout << endl;
    
}

int* ptr_test01(int a)
{
    int b=a + 3;
    return &b;
}
int* ptr_test02(int& b)
{
    //或者在这里面定义静态变量，返回静态变量的地址也是可以的
    b = b + 100;
    //return b; 错误
    return &b;  //因为返回的是指针，所以需要取地址符
}

//函数指针=函数的指针变量，本质是指针变量
// 类型说明符 (*函数名)(参数)   
/*
eg: 
int (*test_ptr)(int a)  //声明一个函数指针
int fun(int x);

test_ptr=fun;//将fun的地址给到test_ptr，千万不要()，不然变成了函数调用
//调用
(*test_ptr)(2);

*/

int ptr_test04(int a)
{
    return a+100;
}
int ptr_test05()
{
    cout << "无参调用" << endl;
    return 0;
}
int (*ptr_test06)();
int ptr_test03()
{
    int (*test_ptr)(int a);
    
    ptr_test06 = ptr_test05;
    ptr_test06();
    (*ptr_test06)();

    cout << endl;
    test_ptr = ptr_test04;
    int xx=test_ptr(123123);
    int yy=(*test_ptr)(123123);
    cout << xx <<  " === " << yy << endl;
    return 0;
}