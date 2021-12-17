/*
555555555
544444445
543333345
543222345
543212345
543222345
543333345
544444445
555555555
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
			if(i==1|| i==n||j==1||j==n)
				printf("%d",n);
			if(i==(i+1)|| i==(n-1)||j==(j+1)||j==(n-1))
				printf("%d",n-1);
			else
				printf(" ");
		}
		printf("\n");
	}
	
}
