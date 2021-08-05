
#include"func.h"

void* printf_array(int* a, int len)
{
    for (int i = 0; i <len; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return NULL;

}

int dd(float a)
{
    cout << "dd:" << a << endl;
    return a;
}

int main()
{
   

    int a[] = { 6,3,2,6,3,1,0,4,5 ,2,1,4,9,9,85,3};
    int* b;
    int length = sizeof(a) / sizeof(int);

 #if Bubble_Sort_Use
    cout << "在定义数组的函数A计算:length of sequence :" << length << endl;
    b = Bubble_Sort(a, length);
    cout << "Bubble_Sort(冒泡排序）:" << endl;
 #endif;

#if Selection_Sort_Use
    b=Selection_Sort(a,length);
    cout << "Selection_Sort(选择排序）:" << endl;
#endif

#if Insertion_Sort_Use
    b=Insertion_Sort(a, length);
    cout << "Insertion_Sort(插入排序）:" << endl;
#endif

#if Shell_Sort_Use
    b=Shell_Sort(a, length);
    cout << "Shell_Sort(希尔排序）:" << endl;
#endif

    b=Merge_Sort(a, 0, length/2, length);
    cout << "Merge_Sort(归并排序）:" << endl;

    cout << "b:" ;
    printf_array(b, length);

    cout << "a:" ;
    printf_array(a, length);

    float  s1 = 663.657886f;    //在float类型变量的赋值后面加上一个 f ，编译器就会将它识别为float，不然还是 double。
    cout <<"s1: "<< s1 << endl;

    float  s2 = 3.5346333;  //小数点算一位有效数字。 float有7位，double是15-16位
    cout << "s2: " << s2 << endl;   //double占8字节。 float占 4字节

    float s3 = 3e2;//表示3*10（2），即300，即 3 * 10^2 =300
    cout << "s3: " << s3 << endl;
    float s4 = 3e-4;//表示3*10（-4），即0.003；；如果4换成8，则会输出“3e-8”，这是因为有效位数。
    cout << "s4: " << s4 << endl;

    /*char a = "a";
    cout << "a: " << a << endl;
    char b = "sss";
    cout << "b: " << b << endl;*/
    char c = 'jsda';                //字符变量的赋值最好写单个字符   ，只能使用 单引号。占用一个字节
    cout << "c: " << c << endl;    //只会输出组后一个字符，即a，这种写法字符多了还会报错，极限4个。
    /*char d = '34dfw3';
    cout << "d: " << d << endl;
    char e[] = 'sdsfwesdwew';
    cout << "e: " << e << endl;*/
    char f[] = "dsasraffwefas";     ////字符变量的赋值可以写很多个，且使用 双引号。
    cout << "f: " << f << endl;
    f[0] = 'h';
    cout << "fh: " << f << endl;

    char h[] = {"qwerasdf"};     
    cout << "h: " << h << endl;
    int cnt = sizeof(h);    //sizeof计算字符数组，会计入’\0‘，所以比实际多一位。
    cout << "cnt:" << cnt << endl;

    int ina[5] = { 1,2,3,4,5 };
    int cnt1 = sizeof(ina)/sizeof(ina[0]);    //sizeof计算整形数组，不会计入’\0‘
    cout << "cnt:" << cnt1<< endl;

    int cnt2 = strlen(h);       // strlen只是针对字符串。
    cout << "cnt2:" << cnt2 << endl;//strlen计算字符数组，不会计入’\0‘

    cout << "\\" << endl;//这样会输出一个斜杠

    cout << "\thello" << endl;  // \t是水平制表符，一种转义符号，这代表  \t 前面的内容（即使没有东西）会占八个字节。
    cout << "aa\thello" << endl;    //这个的输出就是 ”aa        hello“，hello的前面有6个空格，加上两个aa正好8个。

    string str = "aaasdasdasdafs";
    cout << "c++ string：" << str << endl;
    str[1] = 'h';
    cout << "c++ string：" << str << endl;

    bool flagtest = false;
    // cin >> flagtest;    //给bool类型赋值的时候，正负0点几的小数和0，结果都是false。大等于正1和小于负1的都为真。
    cout << "bool flagtest:" << flagtest << endl;
   // cout_test();

    //取模运算就是求余，%，      运算必须有整数
    int test_num1 = 10.4;
    int test_num2 = -3.1;
    int test1 = test_num1 % test_num2;//在这里，除数test_num2必须是大于1的数，不然在int里面运算的时候，0点几会变成0！
    cout << test1 << endl;  //当被除数是1的时候，得到的余数带有-，意思是只看左边数带不带负号
    cout <<( test_num1 == test_num2 )<< endl;   //直接输出比较运算的结果时，需要加上小括号，数学意义上的先运算括号里面

    //float test_num3 = 3.0f;
    //float test_num4 = 2.0f;
    //float test2 = test_num3 % test_num4; 
    //cout << test2 << endl;
    //小数无法做取模运算，求商倒是可以。整型才可以。  

    /*
    int pig1, pig2, pig3;
    cin >> pig1 >> pig2 >> pig3;
    cout << "pig max is:" << ((pig1 > pig2 ? pig1 : pig2) > pig3 ? (pig1 > pig2 ? pig1 : pig2) : pig3) << endl;
    */
    
    //C++里，三目运算符可以返回的是变量，还可以继续给变量赋值
    //(pig1 > pig2 ? pig1 : pig2) = 100; //比较两个变量，谁比较大，谁将会被赋值为100

    int sw1 = 2;
    switch (sw1)
    {
        case 0:
            cout << "switch 0" << endl;
            break;
        case 2:
            cout << "switch 2" << endl;
             break;
        case 3:
            cout << "switch 3" << endl;
            break;
        default:
            cout << "switch default" << endl;
            break;
    }

    //  //玩家猜测一个数字，看是否和PC给出的一样
    //int guess1,guess2;
    //cout << "首先输入你猜测的数字：";
    //cin >> guess1;
    //guess2 = rand();  
    //while (guess1 != guess2)
    //{
    //    cout << "抱歉！！！ PC数字="<< guess2<<endl;
    //    guess2 = rand();
    //    cout << "输入你猜测的数字：";
    //    cin >> guess1;
    //}
    //rand()%100 ，表示生成0-99的数字

    //水仙花数，数字个位十位百位，每个位上的数的三次方相加，会等于数字本身
    int num5 = 100;
    do
    {
        int num5_100 = num5 / 100;      //取得百位数字
        int num5_10 = (num5- num5_100*100 ) / 10;       //取得10位数字，更好：num5_10 = num5 / 10 % 10
        int num5_1 = num5 - num5_100*100 - num5_10*10;      //取得个位数字，更好：num5_1 = num5 % 10
        //cout << num5_100 <<" " << num5_10 << " " << num5_1 << endl;

        int num5_res = num5_100 * num5_100 * num5_100 + num5_10 * num5_10 * num5_10 + num5_1 * num5_1* num5_1;
        if (num5_res == num5)
        {
            cout << "这是一个水仙花数：" << num5 << endl;
        }
        num5++;
    } while (num5 < 1000);

    //敲桌子，从1到100，只要含有数字7或者是7的倍数就输出敲桌子
    int num_qiao = 0;
    for (num_qiao; num_qiao < 101; num_qiao++)
    {
        if (num_qiao/10 == 7||num_qiao%10==7||num_qiao%7==0)
        {
            cout << "敲桌子 ！   " <<num_qiao<< endl;
        }
    }

    int num6[]{ 1,2,3 };
    cout << "数组2" << num6[2] << endl;

    int af = dd(3.01);
    cout << af << endl;
    
    float ab = dd(5.01);
    cout <<ab << endl;

    float adc = 2.02f;
    cout << adc << endl;

    //ptr_test();   //测试指针

    //值传递是将实参的数据拷贝一份给到形参，所以之后形参的数据更改，不会影响到实参。



    return 0;
}