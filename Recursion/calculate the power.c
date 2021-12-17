/*calculate the power using recursion */
int calaculateThePowerRecursive(int b,int e)
{
	if(e != 0)
		return b*calaculateThePowerRecursive(b,e-1);
	else
		return 1;
	
}

int main()
{
	int base,exponent;
	printf("Enter the number : ");
	scanf("%d",&base);
	printf("Enter the number : ");
	scanf("%d",&exponent);
	
	printf("\nRecursive Sum of digits : %d",calaculateThePowerRecursive(base,exponent));
}
