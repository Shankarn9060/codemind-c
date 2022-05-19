#include<stdio.h>
int main()
{
    int r,k,v=0;
    scanf("%d",&r);
    while(r>0)
    {
        k=r%10;
        v+=k;
        r=r/10;
        if(v>=9&&r==0)
        {
            r=v;
            v=0;
        }
    }
    printf("%d",v);
    return 0;
}