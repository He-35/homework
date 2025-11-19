#include <stdio.h>
#define ROW 3
#define COL 3
// 转置函数
void transpose(int a[ROW][COL], int b[COL][ROW]) {
    for(int i=0; i<ROW; i++) {
        for(int j=0; j<COL; j++) {
            b[j][i] = a[i][j];
        }
    }
}
// 打印数组
void printArr(int arr[ROW][COL], int r, int c) {
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int a[ROW][COL] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int b[COL][ROW];
    printf("原数组：\n");
    printArr(a, ROW, COL);
    transpose(a, b);
    printf("转置后：\n");
    printArr(b, COL, ROW);
    return 0;
}