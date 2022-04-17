#include<stdio.h>
int main ()
{
    int a[100],i,n,sum=0,avg;
    printf("EnTer how many number : ");
    scanf("%d", &n);
    printf("the number is : ");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    avg=sum/n;
    printf("The Average is : %d",avg);
    return 0;



}
