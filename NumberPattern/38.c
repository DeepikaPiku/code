/*
1
11
101
1001
11111
*/
#include<stdio.h>

int main()
{
	int i,j,n,k=1;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i==1 || i==n || j==1 || j==i)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
		}
		printf("\n");
	}
}
