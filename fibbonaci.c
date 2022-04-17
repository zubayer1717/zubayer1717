#include<stdio.h>
int main ()
{
    int n1=0,n2=1,n3,n;
    printf("enter a number : ");
    scanf("%d",&n);
    printf("fibonnaci seris : %d , %d,  ",n1,n2);
    n3=n1+n2;
    while(n3<=n)
    {
        printf("%d , ",n3);
        n1=n2;
        n2=n3;
        n3=n2+n1;
    }
    return 0;
}
