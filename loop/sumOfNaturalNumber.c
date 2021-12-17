/*1 to N*/
#include <stdio.h>
int naturalNumber(int n)
{
	int i = 1;
	int sum = 0;
	while( i <= n)
	{
		sum += i;
		printf("%d",i);
		i++;
	}
	printf(" = %d",sum);
}

int main()
{
	int num ;
	printf("Enter the number : ");
	scanf("%d",&num);
	naturalNumber(num);
}
