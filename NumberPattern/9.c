/*
01110
10001
10001
10001
01110
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
			
			if((i==1 || i == n) ){
				if(j==1 || j == n) printf("0"); else printf("1");
			}
			
			else {
				if(i==(i+1) || i < n) {
				if(j==1 || j == n) printf("1");else printf("0");
				}	
			}
		}
		printf("\n");
	}				
}
