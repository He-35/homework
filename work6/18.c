#include <stdio.h>
#include <string.h>
void countChar(char str[]) {
    int count[256] = {0}; // 存储每个字符的出现次数
    int len = strlen(str);
    // 统计次数
    for(int i=0; i<len; i++) {
        count[(unsigned char)str[i]]++;
    }
    // 输出重复字符
    printf("重复字符及次数：\n");
    for(int i=0; i<256; i++) {
        if(count[i] > 1) {
            printf("%c: %d次\n", i, count[i]);
        }
    }
}
int main() {
    char s[100];
    printf("输入字符串：");
    scanf("%s", s);
    countChar(s);
    return 0;
}