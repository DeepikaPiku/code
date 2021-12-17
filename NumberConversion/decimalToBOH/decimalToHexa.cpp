/*Decimal TO hehadecimal*/
#include <stdio.h>
#include <math.h>
int dtoh(int num)
{
	int a[100];
	int i;
	int j;
	
	for(i=0;num>0;i++)
	{
		a[i] = num % 16;
		num /=16;
	}
	printf("DECIMAL TO Binary:");
	for(j = i-1;j>=0;j--){
		printf("%X",a[j]);
	}
}

int main()
{
	int n;
	printf("Enter the decimal number:");
	scanf("%d",&n);
	dtoh(n);
}
