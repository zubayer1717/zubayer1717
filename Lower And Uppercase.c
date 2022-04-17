/*#include<stdio.h>
int main ()
{
    char lower;
    printf("Enter any lowercase letter : ");
    scanf("%c", &lower);
    printf("The uppercase letter : %c", lower-32);
    return 0;
}*/


#include<stdio.h>
int main ()
{
    char upper;
    printf("Enter any uppercase letter : ");
    scanf("%c", &upper);
    printf("The lowercase letter : %c", upper+32);
    return 0;
}
