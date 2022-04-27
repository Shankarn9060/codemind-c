#include <stdio.h>
int main(void)
{
   long n;
   scanf("%li", &n);
   long y = n;
   int i;
   for( i = 0; n >= 1; i++)
   {
       n = n/10;
   }
   int x = y/1000000000;
   
   if(i == 10 && x != 0)
   {
       printf("Valid
");
   }
   else
   {
       printf("Invalid
") ;
   }
}