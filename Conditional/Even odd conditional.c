/*Even odd conditional*/

int evenOddConditiona(int num)
{
	int n = (num % 2 == 0) ? printf("%d is Even\n",num):printf("%d is Odd\n",num);
}

int main()
{
	int x;
	printf("Enter the number: ");
	scanf("%d",&x);
	evenOddConditiona(x);
}
