#include"func.h"

int sui_ji_shu_test(void)
{
    srand((unsigned)time(NULL));
    for (int i = 0; i < 10; i++)
        cout << rand() << '\t';
    cout << endl;
    return 0;
}

//(rand() % (b - a)) + a ，生成[a, b) 的随机整数
//(rand() % (b - a + 1)) + a ，生成[a, b] 的随机整数
//rand() / double(RAND_MAX) ，生成0～1之间的浮点数