#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], *p;
    gets(str);
    p = str + strlen(str) - 1; 

    while(p >= str)
    {
        putchar(*p);
        p--;
    }
    printf("\n");
    return 0;
}