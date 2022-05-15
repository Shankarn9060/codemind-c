#include<stdio.h>
int main()
{
	int n,v,k,l;
	scanf("%d",&n);
	for(v=1;v<=n;v++)
	{
		for(k=1;k<=n-2;k++)
		{
			printf("%d",k);
	    }
	    for(l=1;l<=n-3;l++)
	    {
	    	printf("%d",l);
		}
		printf("
");
	}
	return 0;
}