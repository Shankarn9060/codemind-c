#include<stdio.h>
int main()
{
    long int arr[100],s=0;
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%ld",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        s = s +arr[i];
    }
    printf("%ld",s);
    return 0;
}