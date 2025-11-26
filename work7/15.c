#include <stdio.h>
int main()
{
    int arr[15] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int x, *p;
    printf("输入要查找的数:");
    scanf("%d", &x);

    for(p = arr; p < arr+15; p++)
    {
        if(*p == x)
        {
            printf("位置: %d\n", p - arr + 1); 
            return 0;
        }
    }
    printf("No Found\n");
    return 0;
}