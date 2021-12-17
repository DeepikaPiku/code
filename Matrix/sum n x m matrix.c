/*Write down a function to compute the 
sum of row an NxM matrix of integer
BPSC AP - 2019

sapmle input
Enter matrix row: 2
Enter matrix col: 3
Enter MATRIX elemnt
1 2 3
4 5 6

sapmle output
6
15
*/
#include<stdio.h>

int main()
{
	int i,j,a[10][10];
	int r,c,sum;
	printf("Enter matrix row: ");
	scanf("%d",&r);
	printf("Enter matrix col:");
	scanf("%d",&c);
	printf("Enter MATRIX elemnt\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	printf("\nSum of the row of the matrix\n");
	
	for(i=0;i<r;i++)
	{
		
		for(j=0;j<c;j++)
		{
			sum +=a[i][j];
		}
		printf("%d",sum);
		sum = 0;
		printf("\n");
	}		
}
