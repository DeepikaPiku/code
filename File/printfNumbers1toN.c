/*File*/
#include<stdio.h>

int main()
{
	int n,i;
	scanf("%d",&n);
	fopen("output.txt","w",stdout);
	
	for(i=1;i<=n;i++)
	{
		printf("%d",i);
	}
}
