/*catalan number*/
#include<stdio.h>
unsigned long int catalanNumber(unsigned int n) 
{
	int i;
	if(n <= 1)
		return 1;
	
	unsigned long int res = 0;
	for(i = 0;i < n;i++)
		res += catalanNumber(i)*catalanNumber(n - i -1);
	return res;
}

int main()
{
	int n;
	int a[100],i;
	
	printf("Enter the value of N : ");
	scanf("%d",&n);
	printf("Catalan NUmber series: %d",catalanNumber(n));
}
