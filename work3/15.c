#include <stdio.h>
int main()
{
    int num, digit, count = 0, reverse = 0, temp;
    printf("请输入一个不多于5位的正整数：");
    scanf("%d", &num);
    temp = num;

    // 计算位数并逆序
    while (temp != 0)
    {
        digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp /= 10;
        count++;
    }

    printf("是%d位数\n", count);
    printf("各位数字：");
    temp = num;
    while (temp != 0)
    {
        digit = temp % 10;
        printf("%d ", digit);
        temp /= 10;
    }
    printf("\n逆序：%d\n", reverse);
    return 0;
}