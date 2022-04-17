#include<stdio.h>
int main()
{
    int i,n,b,arr1,arr2;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&arr1,&arr2);
        b=arr1+arr2;
        printf("%d
",b);
    }
    return 0;
}    