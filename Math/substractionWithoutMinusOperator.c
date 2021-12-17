/*substraction using - operator*/

#include <stdio.h>

int substractionWithoutMinusOperator(int a,int b)
{
	if(b == 0)
		return a;
	else
		return substractionWithoutMinusOperator(a ^ b,(unsigned)(~a & b) << 1);
}

int main()
{
	int x,y;
	printf("Enter two number : ");
	scanf("%d %d",&x,&y);
	printf("Addition without - operator\n");
	
	printf("Addition is = %d\n",substractionWithoutMinusOperator(x,y));
}
