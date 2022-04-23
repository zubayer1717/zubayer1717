#include<stdio.h>
#include<string.h>
int main ()
{
    char a[100];
    int n,i;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%s",a);
        int l=strlen(a);
        if(l>10)
        {
            printf("%c%d%c\n",a[0],l-2,a[l-1]);
        }
        else{
            printf("%s\n",a);
        }
    }
    return 0;
}
