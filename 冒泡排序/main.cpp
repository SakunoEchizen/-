
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
    cout << "�ڶ�������ĺ���A����:length of sequence :" << length << endl;
    b = Bubble_Sort(a, length);
    cout << "b:";
    printf_array(b, length);

    cout << "a:";
    printf_array(a, length);
    cout << "Bubble_Sort(ð������:" << endl;
 #endif;

#if Selection_Sort_Use
    b=Selection_Sort(a,length);
    cout << "Selection_Sort(ѡ������:" << endl;
#endif

#if Insertion_Sort_Use
    b=Insertion_Sort(a, length);
    cout << "Insertion_Sort(��������:" << endl;
#endif

#if Shell_Sort_Use
    b=Shell_Sort(a, length);
    cout << "Shell_Sort(ϣ������:" << endl;
#endif

    b=Merge_Sort(a, 0, length/2, length);
    cout << "Merge_Sort(�鲢����:" << endl;

    cout << "b:" ;
    printf_array(b, length);

    cout << "a:" ;
    printf_array(a, length);








    float  s1 = 663.657886f;    //��float���ͱ����ĸ�ֵ�������һ�� f ���������ͻὫ��ʶ��Ϊfloat��
    cout <<"s1: "<< s1 << endl;
    cout << "sizeof s1: " << sizeof(s1) << endl;    //4

    float  s2 = 3.534633787858585875858588678483;  //С������һλ��Ч���֡� float��7λ��double��15-16λ
    cout << "s2: " << s2 << endl;   //doubleռ8�ֽڡ� floatռ 4�ֽ�
    cout << "sizeof s2: " << sizeof(s2) << endl;    //4

    float s3 = 3e2;//��ʾ3*10��2������300���� 3 * 10^2 =300
    cout << "s3: " << s3 << endl;
    float s4 = 3e-8;//��ʾ3*10��-4������0.003�������4����8����������3e-8����������Ϊ��Чλ����
    cout << "s4: " << s4 << endl;

    /*char a = "a";                 //ʹ�õ���˫���ţ����Զ�����!
    cout << "a: " << a << endl;
    char b = "sss";
    cout << "b: " << b << endl;*/
    char c = 'jsda';                //�ַ������ĸ�ֵ���д�����ַ�   ��ֻ��ʹ�� �����š�ռ��һ���ֽ�
    cout << "c: " << c << endl;    //ֻ��������һ���ַ�����a������д���ַ����˻��ᱨ������4����
    /*char d = '34dfw3';
    cout << "d: " << d << endl;
    char e[] = 'sdsfwesdwew';
    cout << "e: " << e << endl;*/
    char f[] = "dsasraffwefas";     ////�ַ������ĸ�ֵ����д�ܶ������ʹ�� ˫���š�
    cout << "f: " << f << endl;
    f[0] = 'h';
    cout << "fh: " << f << endl;

    char h[] = {"qwerasdf"};   //[] �ڱ�����ڵ���9  
    cout << "h: " << h << endl;
    int cnt = sizeof(h);    //sizeof�����ַ����飬����롯\0�������Ա�ʵ�ʶ�һλ��
    cout << "cnt:" << cnt << endl;      //9

    char hH[123] = { 'q' , 'w' , 'e' , 'r' , 'a' , 's' , 'd' , 'f'};
    cout << "hH: " << hH << endl;
    int cnt3 = sizeof(hH);    //sizeof�����ַ����飬����롯\0�������Ա�ʵ�ʶ�һλ��
    cout << "cnt3:" << cnt << endl;     //9

    int ina[5] = { 1,2,3,4,5 };
    int cnt1 = sizeof(ina)/sizeof(ina[0]);    //sizeof�����������飬������롯\0��
    cout << "cnt:" << cnt1<< endl;

    int cnt2 = strlen(h);       // strlenֻ������ַ�����
    cout << "cnt2:" << cnt2 << endl;//strlen�����ַ����飬������롯\0��

    cout << "\\" << endl;//���������һ��б��

    cout << "\thello" << endl;  // \t��ˮƽ�Ʊ����һ��ת����ţ������  \t ǰ������ݣ���ʹû�ж�������ռ�˸��ֽڡ�
    cout << "aa\thello" << endl;    //������������ ��aa        hello����hello��ǰ����6���ո񣬼�������aa����8����

    string str = "aaasdasdasdafs";
    cout << "c++ string��" << str << endl;
    str[1] = 'h';
    cout << "c++ string��" << str << endl;

    bool flagtest = false;
    // cin >> flagtest;    //��bool���͸�ֵ��ʱ������0�㼸��С����0���������false���������1��С�ڸ�1�Ķ�Ϊ�档
    cout << "bool flagtest:" << flagtest << endl;
   // cout_test();

    //ȡģ����������࣬%��      �������������
    int test_num1 = -10.4;
    int test_num2 = 3.1;
    int test1 = test_num1 % test_num2;//���������test_num2�����Ǵ���1��������Ȼ��int���������ʱ��0�㼸����0��
    cout << test1 << endl;  //����������1��ʱ�򣬵õ�����������-����˼��ֻ�������(������������������
    cout <<( test_num1 == test_num2 )<< endl;   //ֱ������Ƚ�����Ľ��ʱ����Ҫ����С���ţ���ѧ�����ϵ���������������

    //float test_num3 = 3.0f;
    //float test_num4 = 2.0f;
    //float test2 = test_num3 % test_num4; 
    //cout << test2 << endl;
    //С���޷���ȡģ���㣬���̵��ǿ��ԡ����Ͳſ��ԡ�  

    /*
    int pig1, pig2, pig3;
    cin >> pig1 >> pig2 >> pig3;
    cout << "pig max is:" << ((pig1 > pig2 ? pig1 : pig2) > pig3 ? (pig1 > pig2 ? pig1 : pig2) : pig3) << endl;
    */
    
    //C++���Ŀ��������Է��ص��Ǳ����������Լ�����������ֵ
    //(pig1 > pig2 ? pig1 : pig2) = 100; //�Ƚ�����������˭�Ƚϴ�˭���ᱻ��ֵΪ100

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

    //  //��Ҳ²�һ�����֣����Ƿ��PC������һ��
    //int guess1,guess2;
    //cout << "����������²�����֣�";
    //cin >> guess1;
    //guess2 = rand();  
    //while (guess1 != guess2)
    //{
    //    cout << "��Ǹ������ PC����="<< guess2<<endl;
    //    guess2 = rand();
    //    cout << "������²�����֣�";
    //    cin >> guess1;
    //}
    //rand()%100 ����ʾ����0-99������

    //ˮ�ɻ��������ָ�λʮλ��λ��ÿ��λ�ϵ��������η���ӣ���������ֱ���
    int num5 = 100;
    do
    {
        int num5_100 = num5 / 100;      //ȡ�ð�λ����
        int num5_10 = (num5- num5_100*100 ) / 10;       //ȡ��10λ���֣����ã�num5_10 = num5 / 10 % 10
        int num5_1 = num5 - num5_100*100 - num5_10*10;      //ȡ�ø�λ���֣����ã�num5_1 = num5 % 10
        //cout << num5_100 <<" " << num5_10 << " " << num5_1 << endl;

        int num5_res = num5_100 * num5_100 * num5_100 + num5_10 * num5_10 * num5_10 + num5_1 * num5_1* num5_1;
        if (num5_res == num5)
        {
            cout << "����һ��ˮ�ɻ�����" << num5 << endl;
        }
        num5++;
    } while (num5 < 1000);

    cout << "7654321 �ĸ�λ�� =" << 7654321 % 10 << endl;
    cout << "7654321 ��ʮλ�� =" << 7654321/10 % 10 << endl;
    cout << "7654321 �İ�λ�� =" << 7654321 / 100 % 10 << endl;
    cout << "7654321 ��ǧλ�� =" << 7654321 / 1000 % 10 << endl;
    cout << "7654321 ����λ�� =" << 7654321 / 10000 % 10 << endl;
    //���һ��������λ�ϵ������򵥵ķ�ʽģ�壺
    //      λ����=  �� / 10^��λ-1�� % 10 
    //eg��   ��7312�ĸ�λ���Լ�ǧλ�����Ƕ���
    //eg��   ��λ�� 2=7312 / 10^0 % 10;  ��λ���� λ=1��
    //        ��λ��3=7312 / 10^2 % 10;    ��λ���� λ=3��

    //�����ӣ���1��100��ֻҪ��������7������7�ı��������������
    int num_qiao = 0;
    for (num_qiao; num_qiao < 101; num_qiao++)
    {
        if (num_qiao/10 == 7||num_qiao%10==7||num_qiao%7==0)
        {
            cout << "������ ��   " <<num_qiao<< endl;
        }
    }

    int num6[]{ 1,2,3 };
    cout << "����2 " << num6[2] << endl;

    int af = dd(3.01);
    cout << af << endl;
    
    float ab = dd(5.01);
    cout <<ab << endl;

    float adc = 2.02f;
    cout << adc << endl;

    ptr_test();   //����ָ��

    //ֵ�����ǽ�ʵ�ε����ݿ���һ�ݸ����βΣ�����֮���βε����ݸ��ģ�����Ӱ�쵽ʵ�Ρ�

    //printf_teacher();

    sui_ji_shu_test();

    //C++������ִ�е�ʱ���ڴ��Ϊ4�����򣺴�������ȫ������ջ��������

    //��������ǰ����Ϊȫ�����ʹ�������
    //��������Ÿ߼�����ת�ɶ����ƵĻ���ָ�
    //�ص㡮�����Ƕ��ʹ�ó���ֻ��Ҫ����ͬһ�ݴ��롯��ֻ����ֻ�����ȡ�������ݣ����ܸ��Ĵ������ݣ���ֹ�ƻ���
    //���������ڴ��ɲ���ϵͳ����

    //ȫ�ֱ�������̬���������� ==�������  ȫ����  �У���������󣬴������ɲ���ϵͳ�ͷ�
    //�ַ���������ȫ�ֳ��� ����������  ==>�������������� Ҳ���� ȫ����
    //����ַ��������ĵ�ַ��eg�� cout<<(int)&"hello world"<<endl;

    //�ֲ��������ֲ��������βΣ����������� ==��ջ���������� �����ڴ�
    //�ֲ��������ں����ڣ���const���εľ��Ǿֲ�����
    //��Ҫ���ؾֲ������ĵ�ַ����Ϊ�����������ڴ�ᱻ�ջء�

    //����������Ա������ͷš�

    swap_test_show();

    show_fun01();

    cout_test();

    return 0;
}