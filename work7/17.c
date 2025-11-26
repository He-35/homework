#include <stdio.h>
int sum_array(int a[], int n)
{
    int sum = 0;
    int *p;
    for(p = a; p < a + n; p++)
        sum += *p;
    return sum;
}


int main()
{
    int arr[] = {1,2,3,4};
    printf("和为: %d\n", sum_array(arr, 4));
    return 0;
}