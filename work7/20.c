#include <stdio.h>
#include <string.h>


int cmp_str(char *s1, char *s2)
{
    return strcmp(s1, s2) == 0;
}

int main()
{
    char s1[100], s2[100];
    gets(s1);
    gets(s2);

    int (*fp)(char*, char*) = cmp_str;
    if(fp(s1, s2))
        printf("两行字符串一致\n");
    else
        printf("两行字符串不一致\n");
    return 0;
}