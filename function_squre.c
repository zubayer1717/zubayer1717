#include<stdio.h>
int sqr(int x)
{

   return x*x;

}

int main ()
{
   int y=12;
   int result=sqr(y);
   printf("squre of %d is %d\n", y,result);

  return 0;

}
