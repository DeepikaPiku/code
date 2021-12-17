/*
inverser pattern
1+1/2+1/3+1/4+1/5+1/6+.....+1/n
*/
#include <stdio.h>
#include <math.h>
int serisPattern(int num)
{
	double i = 2;
	double sum =0.0;
	printf("1");
	while(i<=num)
	{
		sum += 1/i;
		printf("+ 1/%.f ",i);
		i++;
	}
	printf(" = %.3f",1+sum);
}

int main()
{
	int num ;
	printf("Enter the number : ");
	scanf("%d",&num);
	serisPattern(num);
}
