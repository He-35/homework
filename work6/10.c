#include <stdio.h>
float func(float a, float b); // 修改返回类型声明
int main()
{
    float x, y;
    float z;
    scanf("%f%f", &x, &y); // 修正格式符（输入用空格分隔）
    z = func(x, y);
    printf("z=%f\n", z);
    return 0;
}
float func(float a, float b) // 修改返回类型
{
    float c;
    c = a * a + b * b;
    return c;
}