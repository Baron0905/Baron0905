#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int f, s, t;
    
    srand(time(0));
    
    f = rand() % 21;
    s = rand() % (21 - f);
    t = 20 - f - s;
    
    if(f >= s && f >= t)         printf("Class: mage\n");
    else if(s >= f && s >= t)    printf("Class: knight\n");
    else                         printf("Class: thief\n");
    
    printf("intelligence=%d stamina=%d charisma=%d\n", f, s, t);

    return 0;
}