/*
54321
5432
543
54
5
*/
#include<stdio.h>

int main()
{
	int i,j,n;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i+1;j++)
		{
			printf("%d",n-j+1);
		}
		printf("\n");
	}
}
