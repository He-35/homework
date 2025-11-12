#include <stdio.h>

int main() 
{
    int matrix[5][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };
    int sum1 = 0, sum2 = 0;

    for (int i = 0; i < 5; i++) {
        sum1 += matrix[i][i];
        sum2 += matrix[i][4 - i];
    }

    printf("主对角线和: %d\n", sum1);
    printf("副对角线和: %d\n", sum2);

    return 0;
}