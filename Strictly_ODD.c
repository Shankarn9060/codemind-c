#include<stdio.h>
int main()
{
    int i,n,a[20];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
        if(a[i]%2==0)
        {
            printf("False");
        }
        else{
        printf("True");
        }    
    return 0;
}