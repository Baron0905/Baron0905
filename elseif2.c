#include <stdio.h>

int main(void)
{
    int a, b;
    
    printf("二つの数字をスペースで区切って入力してください >>>");
    scanf("%d %d",&a,&b);
    
    if (a % 2 == 0 && b % 2 == 0)
        printf("どちらも偶数です。\n");
    else if (a % 2 == 1 && b % 2 == 1)
        printf("どちらも奇数です。\n");
    else
        printf("片方が奇数でもう片方が偶数です。\n");

    return 0;
}