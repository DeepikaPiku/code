/*
11111
00000
11111
00000
11111
*/
#include<stdio.h>

int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i % 2 == 0)  
				printf("0");
			else
				printf("1");
		}
		printf("\n");
	}				
}
