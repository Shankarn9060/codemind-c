#include<stdio.h>
int main()
{
    int i,n,arr[100],d,rev=0,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        temp=arr[i];
        rev=0;
        while(arr[i])
        {
            d=arr[i]%10;
            rev=rev*10+d;
            arr[i]/=10;
        }
        if(rev==temp)
        {
        printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
    return 0;
    
}