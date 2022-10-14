#include<stdio.h>
int main()
{
    int v[2004],r,k,i,a,m=0;
    scanf("%d",&r);
    for (k=0;k<r;k++)
    {
        scanf("%d",&v[k]);
    }
    scanf("%d",&i);
    for(k=0;k<r;k++)
    {
        if(i==v[k])
        {
            a=k;
            break;
        }
    }
    for(k=0;k<=a;k++)
    {
        m+=v[k];
    }
    printf("%d",m);
}