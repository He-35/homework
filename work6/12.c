#include <stdio.h>
int age(int n); // 函数声明
int main()
{
    int n = 12;
    printf("Age is %d\n", age(n));
    return 0;
}
int age(int n)
{
    int c;
    // 递归终止条件：第1位学生年龄10岁
    if(n == 1) 
        c = 10;
    else
        c = age(n-1) + 2;
    return c;
}