/*
55555
54444
54333
54322
54321
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
			if(j>=i)
				printf("%d ",n-i+1);
		}	
		printf("\n");
	}
	
	for(i=i+1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",n+i+j+1);
		}
	}
	printf("\n");			
}
