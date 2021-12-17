/*strong number*/
#include <stdio.h>

int strongNumber(int num)
{
	int rem;
	int x = num;
	int fact;
	int sum = 0;
	while(num != 0) 
	{
		rem = num % 10;
		fact = 1;
			while(rem != 0){
				fact = fact * rem;
				rem--;
			}	
		sum = sum + fact;
		num /= 10;	
	}
	if(sum == x)
		printf("%d Strong Number\n",x);
	else
		printf("%d NOT Strong Number\n",x);
}
int main()
{
	int number ;
	printf("Enter the number : ");
	scanf("%d",&number);
	strongNumber(number);
}
