int mystrlen(char str[])
{
    int i;
    for(i=0; str[i] != '\0'; i++);
    return(i);
}
int main()
{
    char s[100];
    printf("请输入字符串：");
    scanf("%s", s);
    printf("字符串长度为：%d\n", mystrlen(s));
    return 0;
}