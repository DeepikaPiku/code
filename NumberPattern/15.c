/*
12345
23455
34555
45555
55555
*/
#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			printf("%d ",j);
		}
		for(j=n-i;j<n;j++)
		{
			printf("%d ",n);
		}

		printf("\n");
	}
		
}

