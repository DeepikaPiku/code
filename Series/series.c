/* 1 2 3 6 9 18 27 54 81 162*/

#include <stdio.h>

int series(int num)
{
	int a=1,b=2,i;
	for(i=3;i<=num;i++)
	{
		if(i % 2 == 1)
		{
			printf("%d ",a);
			a *=3;
		}
		else
		{
			printf("%d ",b);
			b *=3;	
		}
	}
}

int main()
{
	int number;
	printf("Enter the number : ");
	scanf("%d",&number);
	series(number);
}
