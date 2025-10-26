#include <stdio.h>
#define PI 3.1415926
int main()
{
    float r = 5.0, c, s;
    c = 2 * PI * r;
    s = PI * r * r;
    printf("周长为%.3f，面积为%.3f\n", c, s);
    return 0;
}