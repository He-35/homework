#include <stdio.h>

void access_1d(int **pp, int n)
{
    for(int i=0; i<n; i++)
        printf("%d ", *(*pp + i));
    printf("\n");
}


void access_2d(int **pp, int row, int col)
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
            printf("%d ", *(*(pp+i) + j));
        printf("\n");
    }
}

int main()
{
    
    int arr1[10] = {1,2,3,4,5,6,7,8,9,10};
    int *p1 = arr1;
    int **pp1 = &p1;
    access_1d(pp1, 10);

    
    int arr2[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
    int *p2[3] = {arr2[0], arr2[1], arr2[2]};
    int **pp2 = p2;
    access_2d(pp2, 3, 4);

    return 0;
}