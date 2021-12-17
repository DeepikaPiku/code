/*total number of digits using recursion*/
#include <stdio.h>

int countDigits(long long num)
{
	int rem,count = 0;
	while(num != 0)
	{
		rem = num % 10;
		++count;
		countDigits(num /=10);
	}
	return count;
	
}

int main()
{
	long long number;
	printf("Enter the number : ");
	scanf("%lld",&number);
	printf("Numbers of Digits %lld\n",countDigits(number));
}
