#include<stdio.h>
int main()
{
    int i,N;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        int v[2004],n,r,k;
        scanf("%d",&n);
        for(k=0;k<n;k++)
        {
            scanf("%d",&v[k]);
        }
        k=0;
        for(r=0;r<n;r++)
        {
            k+=(v[r]%2);
        }
        printf("%d
",k/2);
    }
}