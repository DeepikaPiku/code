/*Binary to Decimal*/
#include<stdio.h>
#include<math.h>

int btod(int num)
{
	int i = 0,j;
	int rem;
	int dec = 0;
	while(num != 0 ){
		rem = num % 10;
		dec += rem * pow(2,i);
		num/=10;
		i++;
	}
	printf("bintoDecimal : %d\n",dec);
}

int main()
{
	int n;
	printf("enter the bainary value:");
	scanf("%i",&n);
	btod(n);
}
