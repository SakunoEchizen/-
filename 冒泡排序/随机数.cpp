#include"func.h"

int sui_ji_shu_test(void)
{
    srand((unsigned)time(NULL));
    for (int i = 0; i < 10; i++)
        cout << rand() << '\t';
    cout << endl;
    return 0;
}

//(rand() % (b - a)) + a ������[a, b) ���������
//(rand() % (b - a + 1)) + a ������[a, b] ���������
//rand() / double(RAND_MAX) ������0��1֮��ĸ�����