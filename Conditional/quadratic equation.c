/*quadratic equation*/
#include<stdio.h>
#include<math.h>
int quadraticEquation(int a,int b,int c)
{
	double root1,root2;
	int determinant = (b*b-4*a*c);
	float equalRoot;
	if(determinant < 0) 
		printf("Root is negative\n");
	else if(determinant == 0){
		equalRoot = -b/(2*a);
		printf("Roots are edual and root is:%.2f\n",equalRoot);
	}
	
	else {
		if(determinant > 0)
			root1 = (-b+sqrt(b*b-4*a*c)/(2*a));
			root2 = (-b-sqrt(b*b-4*a*c)/(2*a));
			
			printf("First root : %lf",root1);
			printf("\nSecond root : %lf",root2);
	}		
}

int main()
{
	int x,y,z;
	printf("Enter the three number\n");
	scanf("%d %d %d",&x,&y,&z);
	quadraticEquation(x,y,z);
}

