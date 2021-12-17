/*factor
input 10
output
factor 2 and 5
sum 7
*/

#include <stdio.h>

int factor(int num)
{
	int i = 2,flag = 0,sum = 0;
	int factor;
	while(i < num)
	{
		if (num % i == 0)
		{
			printf("Factors are = %d\n",i);
			flag = 1;
			if(flag == 1)
				{
					sum += i;
				}
			else
			{
				printf("No factor Found\n");
			}	
		}
		i++;
	}
	printf("\nSum = %d",sum);
}

int main()
{
	int num ;
	printf("Enter the number : ");
	scanf("%d",&num);
	factor(num);
}
