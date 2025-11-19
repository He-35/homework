#include <stdio.h>
// 筛选函数
void findNum() {
    for(int i=10; i<=99; i++) {
        int ge = i%10;
        int shi = i/10;
        // 能被3整除 且 个位/十位是5
        if(i%3 == 0 && (ge == 5 || shi == 5)) {
            printf("%d ", i);
        }
    }
}
int main() {
    printf("符合条件的数：");
    findNum();
    return 0;
}