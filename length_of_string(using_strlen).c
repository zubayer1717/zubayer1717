/*#include<stdio.h>
int main ()
{
    char a[7];
    printf("Enter any name: ",a);
    gets(a);
    printf("The name is : %s\n",a);
    int len=strlen(a);
    printf("The length is : %d\n",len);
    return 0;
}
*/

#include<stdio.h>
int main ()

{
    char a[]="zubayer Bin ahamed";
    int i=0,count=0;
    while(a[i]!='\0'){
        i++;
        count++;
    }
    printf("The Length = %d",count);
    return 0;
}
