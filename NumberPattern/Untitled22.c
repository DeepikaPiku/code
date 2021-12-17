/*
0
10
101
0101
01010
*/
#include<stdio.h>

int main()
{
	int i,j,n,k=1;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			
			k++;
		}
		printf("\n");
	}
}
