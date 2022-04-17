#include<stdio.h>
int main()
{
    int a,b,lcm,fac=1;
    scanf("%d%d",&a,&b);
    lcm=(a>b) ? a:b;
    while(fac)
    {
        if(lcm%a==0 && lcm%b==0)
        {
            printf("%d",lcm);
            fac=0;
        }
        lcm++;
    }
    
    
}