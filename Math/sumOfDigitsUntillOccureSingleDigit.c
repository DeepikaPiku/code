/*sumOfDigitsUntillOccureSingleDigit*/
#include <stdio.h>
//type 1
int sumOfDigitsUntillOccureSingleDigit(int num)
{
	int step = 0;
	while(num > 9)
	{
		int rem = 0,sum = 0;
		while(num)
		{
			rem = num % 10;
			sum = sum + rem;
			num /= 10; 
		}
		step++;
		printf("Step %d : %d\n",step,sum);
		num = sum;	
	}
	
}
//type 2
//int sumOfDigitsUntillOccureSingleDigit(long long num)
//{
//	
//	int sum = 0;
//    
//    // Loop to do sum while
//    // sum is not less than
//    // or equal to 9
//    while(num > 0 || sum > 9)
//    {
//        if(num == 0)
//        {
//            num = sum;
//            sum = 0;
//        }
//        sum += num % 10;
//        num /= 10;
//    }
//    //return sum;
//    printf("%d",sum);
//}					
//type 3
//int sumOfDigitsUntillOccureSingleDigit(long long num)
//{
//	long long x;
//
//    //printf("Enter an integer number: ");
//    //scanf("%d", &x);
//
//    if (x == 0)
//        printf("%d", 0);
//    else if (x % 9 == 0)
//        printf("%d", 9);
//    else
//        printf("%d", x % 9);
//
//    printf("\n");
//}


int main()
{
	long long number;
	printf("Enter the number : ");
	scanf("%lld",&number);
	sumOfDigitsUntillOccureSingleDigit(number);
}
