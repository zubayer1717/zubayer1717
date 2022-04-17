/*#include<stdio.h>
int main ()
{
    char a[]="niloy";
    int i=0;
    while(a[i]!='\0')
    {
        printf("%c\n",a[i]);
    i++;
    }
   return 0;

}*/

#include<stdio.h>
int main ()
{
    char a[]="niloy";
    int i;
    for(i=0; a[i]!='\0'; i++){
        printf("%c\n",a[i]);

    }
    return 0;
}
