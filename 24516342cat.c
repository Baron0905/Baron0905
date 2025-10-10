/**文字を表記するためのプログラム**/

#include <stdio.h>

int main()
{
/**名前を付けて数字を保存する**/
    int cat = 4;
 /**printfは、""の間に、表記したい文字を書くよ**/
    printf("ねこが%d匹います!\n",cat);
    cat = cat+2;
    printf("よくみたら%d匹でした!",cat);
    
    return 0;
}