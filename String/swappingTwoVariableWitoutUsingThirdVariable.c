/*SwappingTwoVariablesWithoutUsingTemporaryVariable*/

/*Programmer can choice any type*/

#include <stdio.h>
//Type 1:
//int swap(int a,int b)
//{
//	a = b + a;
//	b = a - b;
//	a = a - b;
//	
//	printf("a = %d and b = %d\n",a,b);
//	
//}

//Type 2:
//int swap(int a,int b)
//{
//	a = a + b-(b=a);
//	
//	printf("a = %d and b = %d\n",a,b);
//	
//}
//Type 3:
//int swap(int a,int b)
//{
//	a = a ^ b;
//	b = a ^ b;
//	a = b ^ a;
//	
//	printf("a = %d and b = %d\n",a,b);
//	
//}

//Type 4:
//int swap(int a,int b)
//{
//	a = b - ~a - 1;
//	b = a + ~b + 1;
//	a = a + ~b + 1;
//	
//	printf("a = %d and b = %d\n",a,b);	
//}
//Type 5:
int swap(int a,int b)
{
	a = b + a;
	b = a - b
	a = a - b;
	
	printf("a = %d and b = %d\n",a,b);	
}

int main()
{
	int x,y;
	printf("Enter two number : ");
	scanf("%d %d",&x,&y);
	printf("After swapping\n");
	swap(x,y);
}
