/*
12345
678910
1112131415
1617181920
2122232425
*/
#include<stdio.h>

int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d ",i * n + j);
		}
		printf("\n");
	}				
}
