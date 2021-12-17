/*
12345
23456
34567
45678
56789
*/
#include<stdio.h>

int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j<n+i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}				
}
