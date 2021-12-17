/*Factorial using while loop*/
#include <stdio.h>
int factorialUsingWhile(int num)
{
	int sum = 1;
	int i = 1;
	while(i<=num)
	{
		sum *=i;
		i++;
	}
	printf("Factorial of %d = %d\n",num,sum);
}
int main()
{
	int A,B ;
	printf("Enter number for A: ");
	scanf("%d",&A);
	factorialUsingWhile(A);
}
