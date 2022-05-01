#include<stdio.h>
int main()
{
    int arr[100],i,fact=1,n,temp=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<10)
        {
            for(temp=1;temp<=arr[i];temp++)
            {
                fact = fact*temp;
            }
            printf("%d
",fact);
        }
        fact=1;
    }
    return 0;
}