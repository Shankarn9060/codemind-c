#include<stdio.h>
int main()
{
	int n,v,k;
	scanf("%d",&n);
	for(v=n;v>=1;v--)
	{
		for(k=1;k<=n;k++)
		{
			if(k+v==n+1||k-v==0)
			{
				printf("%d ",v);
			}
			else
			{
				printf(" ");
			}
		}
		printf("
");
	}
	return 0;
}