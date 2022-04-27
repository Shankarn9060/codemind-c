#include <stdio.h>
int main(void)
{
    int a, b, c, i = 0;
    scanf("%d%d%d", &a, &b, &c);
    for(int j = 0; a <= b ; j++)
    {
        if(a % c == 0)
        {
            i++;
        }
        a++;
    }
    printf("%d
", i);
}