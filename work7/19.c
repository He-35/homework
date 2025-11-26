#include <stdio.h>
#include <string.h>
void replace_foo(char *str)
{
    char *p;
    while((p = strstr(str, "foo")) != NULL) 
    {
        *p = 'x';       
        *(p+1) = 'x';   
        *(p+2) = 'x';  
        str = p + 3;  
    }
}


int main()
{
    char str[] = "food fool";
    replace_foo(str);
    printf("%s\n", str);
    return 0;
}