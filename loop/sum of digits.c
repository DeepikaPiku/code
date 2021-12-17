/*sum of digits*/
#include <stdio.h>

//for non recursive function
int sumOfDigits(int num)
{
	int rem,sum = 0;
	while(num != 0)
	{
		rem = num % 10;
		sum += rem;
		num /= 10;
	}
	
	printf("NON RecursiveSum of digits : %d",sum);
}

//for recursive function
int sumOfDigitsRecursive(int num)
{
	int rem,sum = 0;
	while(num != 0)
	{
		rem = num % 10;
		sum += rem;
		sumOfDigitsRecursive(num /= 10);
	}
	return sum;
	//printf("Sum of digits : %d",sum);
}
int main()
{
	int num ;
	printf("Enter the number : ");
	scanf("%d",&num);
	//for non recursive function
	sumOfDigits(num);
	//for recursive function
	printf("\nRecursive Sum of digits : %d",sumOfDigitsRecursive(num));
}
