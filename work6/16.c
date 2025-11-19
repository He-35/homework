#include <stdio.h>
int check(int x, int y, int n) {
    return (x >= 0 && x < n && y >= 0 && y < n) ? 1 : 0;
}
int main() {
    int x, y, n;
    printf("输入x,y,n：");
    scanf("%d%d%d", &x, &y, &n);
    printf("结果：%d\n", check(x, y, n));
    return 0;
}