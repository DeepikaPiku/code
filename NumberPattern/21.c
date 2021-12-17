/*
55555
4444
333
22
1
*/
#include<stdio.h>

int main()
{
	int i,j,n;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf("%d",n-i);
		}
		printf("\n");
	}
}
