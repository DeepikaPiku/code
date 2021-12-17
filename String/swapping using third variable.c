/*swapping using third variable*/

/*Programmer can use any type*/

#include <stdio.h>
#include <stdlib.h>
//type 1: using third variable
//int swap_third_variable(int a,int b)
//{
//	int c = a;
//		a = b;
//		b = c;
//	
//	printf("a = %d and b = %d\n",a,b);
//}

//type 2: using pointer and third variable
int swap_third_variable(int *a,int *b)
{
	int t = *a;
		*a = *b;
		*b = t;	
}

int main()
{
	int x,y;
	printf("Enter two number : ");
	scanf("%d %d",&x,&y);
	printf("After swapping\n");
	//Function for pointer
	swap_third_variable(&x,&y);
	printf("x = %d and y = %d\n",x,y);
}
