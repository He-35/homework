#include <stdio.h>
#include <ctype.h>

int main() 
{
    char str[100];
    int letters = 0, spaces = 0, digits = 0, others = 0;

    printf("输入一行字符: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) letters++;
        else if (isspace(str[i])) spaces++;
        else if (isdigit(str[i])) digits++;
        else others++;
    }

    printf("字母: %d, 空格: %d, 数字: %d, 其他: %d\n", 
           letters, spaces, digits, others);

    return 0;
}