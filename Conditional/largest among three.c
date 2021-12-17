/*Find largest among three */
#include <stdio.h>
//this function is logicall and conditional
//int largestAmongThree(int a,int b,int c)
//{
//	int big = (a>b && a>c?a:b>c?b:c);
//	printf("Largest is : %d\n",big);	
//}
//big among three using conditional operator
int largestAmongThree(int a,int b,int c)
{
	int big = a > b ? (a > c?a:c):(b > c ? b : c);
	printf("Largest is : %d\n",big);	
}
int main()
{
	int x,y,z;
	printf("Enter three numbers:");
	scanf("%d %d %d",&x,&y,&z);
	largestAmongThree(x,y,z);
}
