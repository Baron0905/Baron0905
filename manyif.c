
#include <stdio.h>

int main(void)
{
    int Dog, Cat, Rabbit;
    
    Dog = 12;     //犬の体重
    Cat = 5;      //猫の体重
    Rabbit = 3;   //ウサギの体重
    
    //変数と定数の比較
   if (Dog == 12)
       printf("犬は12Kgです。\n");
       
   if (Cat != 10)
       printf("猫は10Kgではありません。\n");
       
   if (Dog >= 10)
       printf("犬は10Kg以上です。\n");
   
   if (Rabbit < 5)
       printf("ウサギは5Kg未満です。\n");

   //変数と変数の比較
   if (Dog > Cat)
       printf("犬は猫より重いです。\n");
       
   if (Cat > Rabbit)
       printf("猫はウサギより重いです。\n");
       

    return 0;
}