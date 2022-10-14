#include<stdio.h>
int main()
{
    int r,v[2004],k,l=0;
    scanf("%d",&r);
    for(k=0;k<r;k++)
    {
        scanf("%d",&v[k]);
    }
    for(k=0;k<r;k++)
    {
        if(v[k]==0 || v[k]==1)
        {
            l++;
        }
    }
   if(l==r)
   {
       printf("True");
   }
   else
   {
       printf("False");
   }
}