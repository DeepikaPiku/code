/*octal to decimal*/
#include <stdio.h>
#include <math.h>

int otod(int oct)
{
	int rem, dec = 0,i = 0;
	
	while(oct != 0)
	{
		dec += (oct % 10) * pow(8,i);
		++i;
		oct /= 10;
	}
	//printf("%d",dec);
	return dec;
}
int main()
{
	int n;
	printf("Enter the octal number:");
	scanf("%d",&n);
	otod(n);
	printf("decimal number of %d is : %d  ",n,otod(n));
}

