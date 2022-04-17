#include<stdio.h>
int main()
{
    int i,n,d,rev=0,temp;
    scanf("%d",&n);
    temp=n;
    rev=0;
    while(n)
    {
        d=n%10;
        rev=rev*10+d;
        n/=10;
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
    return 0;
}