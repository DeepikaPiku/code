/*
54321
4321
321
21
1
*/
#include<stdio.h>

int main()
{
	int i,j,n;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=n-i+1;j>0;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
