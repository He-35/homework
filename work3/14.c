#include <stdio.h>
int main()
{
    int sex, weight, cubage;
    printf("请输入性别（男性输入非负数，女性输入负数）和体重：");
    scanf("%d,%d", &sex, &weight);
    if (sex >= 0)
    {
        if (weight > 120)
            cubage = 200;
        else
            cubage = 180;
    }
    else
    {
        if (weight > 100)
            cubage = 150;
        else
            cubage = 120;
    }
    printf("输血量为：%d 毫升\n", cubage);
    return 0;
}