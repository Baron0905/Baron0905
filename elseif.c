#include <stdio.h>

int main(void)
{
    int age;
    
    printf("年齢を入力してください >>>");
    scanf("%d",&age);
    
    if (age < 18)
        printf("未成年です。\n");
    else if (age < 65)
        printf("成人です。\n");
    else
        printf("高齢者です。\n");

    return 0;
}