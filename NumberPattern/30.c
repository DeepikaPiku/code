/*
5
45
345
2345
12345
*/
#include<stdio.h>

int main()
{
	int i,j,n;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",n-i+j);
		}
		printf("\n");
	}
}
