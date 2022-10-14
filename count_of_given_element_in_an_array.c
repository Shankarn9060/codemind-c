#include<stdio.h>
int main()
{
    int s,v[200],n,k,c=0;
    scanf("%d",&n);
    for(s=0;s<n;s++)
    {
        scanf("%d",&v[s]);
    }
    scanf("%d",&k);
    for(s=0;s<n;s++)
    {
        if(v[s]==k)
        {
            c++;
        }
    }
    printf("%d",c);
}