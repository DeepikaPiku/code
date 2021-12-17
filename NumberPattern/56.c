/*
1
123
12345
123457
12345789
1234567
12345
123
1
*/
#include<stdio.h>

int main()
{
	int i,j,n;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=2*i-1;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	
	for(i=1;i<=n-1;i++)
	{
		for(j=1;j<=2*(n-i)-1;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}	
}
