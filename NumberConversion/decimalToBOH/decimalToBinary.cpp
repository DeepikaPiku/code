/*Decimal TO binary*/
#include<stdio.h>

int dtob(int num)
{
	int a[100];
	int i;
	int j;
	
	for(i=0;num>0;i++)
	{
		a[i] = num % 2;
		num /=2;
	}
	printf("DECIMAL TO Binary:");
	for(j = i-1;j>=0;j--){
		printf("%d",a[i]);
	}
	
}

int main()
{
	int n;
	printf("Enter the decimal number:");
	scanf("%d",&n);
	dtob(n);
}
