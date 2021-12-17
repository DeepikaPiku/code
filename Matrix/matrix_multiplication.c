/*matrix multiplication*/
#include <stdio.h>

int main()
{
	int i,j,k,ar,ac,br,bc,a[100][100],b[100][100],mat_mul = 0;
	printf("Enter the row and coloumn of MATRIX A: ");
	scanf("%d %d",&ar,&ac);
	printf("Enter the row and coloumn of MATRIX b: ");
	scanf("%d %d",&br,&bc);
	
	if(ac == br)
	{
		printf("Mattrix multiplication posible\n");
		printf("Enter value of Mat A\n");
		
		for(i=0;i<ar;i++)
		{
			for(j=0;j<ac;j++)
			{
			scanf("%d",&a[i][j]);
			}
		}
		
		printf("Enter value of Mat B\n");
		
		for(i=0;i<br;i++)
		{
			for(j=0;j<bc;j++)
			{
			scanf("%d",&b[i][j]);
			}
		}
		

		printf("Matrix multiplication\n");

		for(i=0;i<ar;i++)
		{
			for(j=0;j<bc;j++)
			{
				for(k=0;k<ac;k++)
				{
					mat_mul += a[i][k] * b[k][j];	
				}
				printf("%d ",mat_mul);
				mat_mul = 0;	
			}
			printf("\n");
		}	
	}
	else
	printf("\nImpossible to multiplication\n");
	printf("----------------------------\n");	
}

