#include <stdio.h>

int main()
{
    int day = 10;
    int num = 1; // 第10天剩下的巧克力
    
    for(int i = 9; i >= 1; i--)
    {
        num = (num + 1) * 2;
    }
    
    printf("小明妈妈总共买了%d块巧克力\n", num);
    return 0;
}