/*
10001
01010
00100
01010
10001
*/
#include<stdio.h>

int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if((i == n/2) || (j == n/2))
				printf("0");
			else
				printf("1");
		}
		printf("\n");
	}				
}
