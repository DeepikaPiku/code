/*
11111
10001
10001
10001
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
			if(i==1 || i==n ||j==1||j==n)  
				printf("1");
			else
				printf("0");
		}
		printf("\n");
	}				
}
