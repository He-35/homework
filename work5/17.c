#include <stdio.h>

int main() 
{
    float height = 100, total = 100;

    for (int i = 1; i < 10; i++) {
        height /= 2;
        total += 2 * height;
    }

    printf("第10次落地时总路程: %.2f 米\n", total);
    printf("第10次反弹高度: %.2f 米\n", height / 2);

    return 0;
}