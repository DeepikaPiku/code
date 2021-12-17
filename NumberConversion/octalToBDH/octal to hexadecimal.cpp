/*octal to hexadecimal*/
#include <stdio.h>
#include <math.h>

int otox(int oct)
{
	int rem, dec = 0,i = 0;
	//convert octal to decimal
	while(oct != 0)
	{
		dec += (oct % 10) * pow(8,i);
		++i;
		oct /= 10;
	}
	//printf("%d",dec);
	//return dec;
	//convert decimal to hexa
	printf("octal to hexa value: ");
	i = 1;
	int a[1000],j;
	for(i = 0;dec>0;i++)
	{
		a[i] = dec % 16;
		dec /= 16;
	}
	
	for(j = i-1;j>=0;j--)
	{
		printf("%X",a[j]);
	}
}
int main()
{
	int n;
	printf("Enter the octal number:");
	scanf("%d",&n);
	otox(n);
	//printf("decimal number of %d is : %d  ",n,otox(n));
}

