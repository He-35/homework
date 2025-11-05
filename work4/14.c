#include <stdio.h>

int main()
{
    int a, b, temp, gcd, lcm;
    printf("请输入两个正整数: ");
    scanf("%d %d", &a, &b);
    
    // 保存原始值
    int a_orig = a, b_orig = b;
    
    // 计算最大公约数
    while(b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;
    
    // 计算最小公倍数
    lcm = (a_orig * b_orig) / gcd;
    
    printf("最大公约数: %d\n", gcd);
    printf("最小公倍数: %d\n", lcm);
    
    return 0;
}