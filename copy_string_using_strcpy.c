#include<stdio.h>
int main ()
{
    char source[]="Zubayer Bin Ahamed";
    char target[20];
    strcpy(target,source);
    printf("Target string = %s\n", target);
    printf("source string = %s\n", source);
    return 0;
}
