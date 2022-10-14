#include<stdio.h>
int main()
{
    int k,v[2003],n,r;
    scanf("%d",&n);
    for(k=0;k<n;k++)
    {
        scanf("%d",&v[k]);
    }
    for(k=n-1;k>=0;k--)
    {
        if(v[k]%2==0)
       { 
        r=v[k];
        break;
       }
    }
    
        printf("%d",r);
}