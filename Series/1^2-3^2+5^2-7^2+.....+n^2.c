/*1^2-3^2+5^2-7^2+.....+n^2*/
#include <stdio.h>

int loopSqure(int num)
{
	int sum = 0;
	int i = 1;
	while(i<=num)
	{
		if(i % 2 != 0)
		{
			sum += i * i;
		}
		else
		{
			sum -= i * i;
		}
		i += 2;
		
	}
	
	printf("Sum of seried = %d\n",sum);
}
int main()
{
	int A,B ;
	printf("Enter number for A: ");
	scanf("%d",&A);
	loopSqure(A);
}
