#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d", &x);
    if (x <= -1)
        y = x - 1;
    else if (-1 < x && x <= 3)
        y = 2 * x;
    else if (3 < x && x <= 9)
        y = x * (x + 2);
    else
        y = -1;
    printf("%d\n", y);
    return 0;
}