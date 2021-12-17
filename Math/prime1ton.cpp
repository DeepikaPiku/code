/**primr in 1 to n*/
#include <stdio.h>
#include <math.h>
int prime(int mn,int mx){
	int number;
	int i;
	number = mn;
	int count;
	
	while(number <= mx)
	{
		count = 0;
		i = 2;
		while(i <= number/2)
		{
			if(number % i == 0)
			{
				count++;
				break;
			}
			i++;
		}
		
		if(count == 0 && number != 1)
		{
			printf(" %d ",number);
		}
		number++;
	}
}	
	
int main(){
	int number,min,max;
	scanf("%d %d",&min,&max);
	prime(min,max);	
}

