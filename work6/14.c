#include <stdio.h>
#include <math.h>
// 判断素数：是返回1，否返回0
int isPrime(int num) {
    if(num <= 1) return 0;
    for(int i=2; i<=sqrt(num); i++) {
        if(num%i == 0) return 0;
    }
    return 1;
}
int main() {
    int n;
    printf("输入一个数：");
    scanf("%d", &n);
    if(isPrime(n)) {
        printf("%d是素数\n", n);
    } else {
        printf("%d不是素数\n", n);
    }
    return 0;
}