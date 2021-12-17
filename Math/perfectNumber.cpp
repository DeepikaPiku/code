#include <stdio.h>
#include <math.h>

int perfect(int n){
	int sum = 0;
	int i = 1;
	int k = n;
	while(i < n){
		if(n % i == 0){
			sum = sum + i;	
		}
		i++;
	}
	if(sum == k)
		printf("%d Perfect Number \n",k);
	else
		printf("%d is NOT Perfect Number \n",k);
}

int main(void){
	int input;
	printf("Enter your number: ");
	scanf("%d",&input);
	perfect(input);	
}
