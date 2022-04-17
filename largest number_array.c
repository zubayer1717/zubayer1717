#include<stdio.h>
int main ()
{
    int a[100],n,i,max;
    printf("Enter how many number : ");
    scanf("%d", &n);
    printf("The number is : ");

    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=1; i<n; i++){
        if(max < a[i])
            max=a[i];
    }

    printf("The maximum value is : %d",max);
    return 0;
}
