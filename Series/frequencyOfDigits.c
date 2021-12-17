/*occurance if digit*/
#include <stdio.h>
#define FERQ 10
int occurance(long long num)
{
	int i,freq[FERQ],rem;
	long long n;
	for(i = 0;i< FERQ;i++)
	{
		freq[i] = 0;
	}
	
	n = num;
	
	while(num != 0)
	{
		rem = num % 10;
		num /= 10;
		freq[rem]++;
	}
	
	printf("Frequency of each digits of %lld\n",num);
	for(i=0; i < FERQ; i++)
    {
        printf("Frequency of %d = %d\n", i, freq[i]);
    }
}

void printfFrequency(int freq[])
{
	
}
int main()
{
	long long number ;
	printf("Enter the number : ");
	scanf("%lld",&number);
	occurance(number);
}
