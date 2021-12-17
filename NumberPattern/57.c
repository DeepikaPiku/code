/*
1
121
12321
1234321
123454321
1234321
12321
121
1
*/
#include<stdio.h>

int main()
{
	int i,j,n;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		for(j=2*i+1;j<=n-i;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	
//	for(i=1;i<=n-1;i++)
//	{
//		for(j=1;j<=2*(n-i)-1;j++)
//		{
//			printf("%d",j);
//		}
//		printf("\n");
//	}	
}
