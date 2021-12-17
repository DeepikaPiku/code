/*
10101
01010
10101
01010
10101
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
			if(i % 2 == 1) { if(j % 2 == 1) printf("1"); else  printf("0"); } 
			if(i % 2 == 0) { if(j % 2 != 0) printf("0"); else  printf("1"); } 
		}
		printf("\n");
	}				
}
