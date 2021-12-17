/*
nth fibonnacci series
*/
#include <stdio.h>
int fibonacci(long long num)
{
	long long i;
	long long first_num = 0;
	long long second_num = 1;
	long long nth_sum  = 0;
	printf("Fibonacci Series are\n");
	
	for(i=1;i<=num;i++)
	{
		printf("%lld ",nth_sum);
		
		first_num = second_num;
		second_num = nth_sum;
		nth_sum = first_num + second_num;
	}
}

int main()
{
	long long number;
	printf("Enter the number : ");
	scanf("%lld",&number);
	fibonacci(number);
}

