#include<stdio.h>
int main()
{
    int v[2004],r,k,n=0,m=0;
    scanf("%d",&r);
    for(k=1;k<=r;k++)
    {
        scanf("%d",&v[k]);
    }
    for(k=1;k<=r;k++)
    {
        if(k<=r/2)
        {
            m+=v[k];
        }
        else
        {
            n+=v[k];
        }
    }
    printf("%d
%d",m,n);
}