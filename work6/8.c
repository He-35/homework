#include <stdio.h>
double fun(double x, int y)
{
    int i;
    double z;
    for(i=1, z=x; i<y; i++)  z = z * x;
    return z;
}
int main()
{
    double x;
    int y;
    printf("请输入x和y：");
    scanf("%lf%d", &x, &y);
    printf("%.2lf的%d次方是：%.2lf\n", x, y, fun(x, y));
    return 0;
}