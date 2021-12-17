/*
12345
23451
34521
45321
54321
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
			printf("%d ",n-j);
		}

		printf("\n");
	}
		
}

