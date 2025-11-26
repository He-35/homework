#include <stdio.h>
typedef int Bool;
#define true 1
#define false 0

Bool search(int a[], int n, int key)
{
    int *p;
    for(p = a; p < a + n; p++)
    {
        if(*p == key)
            return true;
    }
    return false;
}


int main()
{
    int arr[] = {2,4,6,8};
    printf("%d\n", search(arr, 4, 6)); 
    printf("%d\n", search(arr, 4, 5));
    return 0;
}