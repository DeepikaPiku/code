/*
how many bit have to change convert int A to int B
Sample A = 10,B = 20 output = 4	
*/

#include <stdio.h>
int changeBit(int a,int b)
{
	int c = 0,p = 0;
	c = a ^ b;
	while(c)
	{
		p += c & 1;
		c >>= 1;
	}
	
	printf("Number of bit differences = %d\n",p);
}
int main()
{
	int A,B ;
	printf("Enter number for A: ");
	scanf("%d",&A);
	printf("Enter number for B: ");
	scanf("%d",&B);
	changeBit(A,B);
}
