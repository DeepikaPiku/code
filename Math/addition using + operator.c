/*addition using + operator*/

#include <stdio.h>

int addWithoutPlusOperator(int a,int b)
{
	if(b == 0)
		return a;
	else
		return addWithoutPlusOperator(a ^ b,(unsigned)(a & b) << 1);
}

int main()
{
	int x,y;
	printf("Enter two number : ");
	scanf("%d %d",&x,&y);
	printf("Addition without + operator\n");
	
	printf("Addition is = %d\n",addWithoutPlusOperator(x,y));
}
