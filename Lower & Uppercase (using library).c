/*#include<stdio.h>
int main ()
{
    char lower,upper;
    printf("Enter lowercase letter : ");
    scanf("%c",&lower);
    upper = toupper(lower);
    printf("The uppercase letter : %c", upper);
    return 0;
}*/


#include<stdio.h>
int main ()
{
    char lower,upper;
    printf("Enter uppercase letter : ");
    scanf("%c",&upper);
    lower = tolower(upper);
    printf("The lowercase letter : %c", lower);
    return 0;
}
