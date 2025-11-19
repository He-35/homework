#include <stdio.h>
int* find_middle(int a[], int n) {
    int mid = n / 2; // 偶数取较大下标（如n=4，mid=2）
    return &a[mid];
}
int main() {
    int arr[] = {1,2,3,4,5};
    int n = 5;
    int* midPtr = find_middle(arr, n);
    printf("中间元素：%d\n", *midPtr);
    return 0;
}