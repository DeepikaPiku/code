/*
12345
21234
32123
43212
54321
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
			printf("%d",i-j+1);
		}
		
		for(j=i+1;j<=n;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	
}
