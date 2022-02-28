#include<stdio.h>
int main()
{
    int n,sum=0,r,i,temp;
    scanf("%d",&n);
    temp=n;
    i=n*n;
    while(i>0)
    {
        r=i%10;
        sum=sum+r;
        i=i/10;
    }
    if(temp==sum)
    {
        printf("Neon Number");
    }else
    {
        printf("Not Neon Number");
    }
}