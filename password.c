#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    char pw[100];
    int hasUpper = 0, hasLower = 0;

    printf("パスワードを入力してください >>> ");
    scanf("%99s", pw);                     // パスワードを入力する

    int len = strlen(pw);                 // 文字数を取得する

    for (int i = 0; i < len; i++) {       // 1文字ずつ確認する
        if (isupper(pw[i])) hasUpper = 1; // 大文字があるか確認する
        if (islower(pw[i])) hasLower = 1; // 小文字があるか確認する
    }

    if (len >= 8 && hasUpper && hasLower) { // 条件をすべて満たすかどうか確認する
        printf("強いパスワードです！\n");
    } else {
        printf("強いパスワードではありません。\n改善点:\n");

        if (len < 8)
            printf("- 8文字以上にしてください。\n"); // 8文字以上か確認する

        if (!hasUpper)
            printf("- 大文字を含めてください。\n");  // 大文字を含むか確認する

        if (!hasLower)
            printf("- 小文字を含めてください。\n");  // 小文字を含むか確認する
    }

    return 0;
}
