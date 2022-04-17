#include<stdio.h>
int main()
{
    int i,n,k,temp,flag=0,f[10];
    scanf("%d",&n);
    temp=n;
    for(i=0;i<10;i++)
    {
        f[i]=0;
    }
    while(n>0)
    {
        k=n%10;
        f[k]++;
        n=n/10;
    }
    for(i=0;i<10;i++)
    {
        if(f[i]>1)
        {
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("Unique Number");
    }
    else
    {
        printf("Not Unique Number");
    }
    return 0;
}