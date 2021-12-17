/*
1
01
010
1010
10101
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
			if(k%2==0)
				printf("0");
			else
				printf("1");
			k++;
		}
		printf("\n");
	}
}
