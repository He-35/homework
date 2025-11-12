#include <stdio.h>

int main() 
{
    int n = 3;
    int magic[n][n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            magic[i][j] = 0;

    int i = 0, j = n / 2;
    for (int num = 1; num <= n * n; num++) {
        magic[i][j] = num;
        i--; j++;
        if (i < 0) i = n - 1;
        if (j >= n) j = 0;
        if (magic[i][j] != 0) {
            i += 2; j--;
            if (i >= n) i = 0;
            if (j < 0) j = n - 1;
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%d ", magic[i][j]);
        printf("\n");
    }

    return 0;
}