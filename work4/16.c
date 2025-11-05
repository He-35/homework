#include <stdio.h>

int main()
{
    double millionaire_give = 0;
    double stranger_give = 0;
    double day_give = 0.01; // 第一天给陌生人的钱
    
    for(int i = 1; i <= 30; i++)
    {
        millionaire_give += 100000;
        stranger_give += day_give;
        day_give *= 2;
    }
    
    printf("陌生人给了百万富翁: %.2f元\n", millionaire_give);
    printf("百万富翁给了陌生人: %.2f元\n", stranger_give);
    return 0;
}