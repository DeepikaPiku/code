#include <stdio.h>

//int addMatrix(int a[],int x,int b[],int y)
//{
//	for
//}

int main()
{
	int i,j,ar,ac,br,bc,a[100][100],b[100][100],mat[10][10],sum = 0;
	printf("Enter the row and coloumn of MATRIX A: ");
	scanf("%d %d",&ar,&ac);
	printf("Enter the row and coloumn of MATRIX b: ");
	scanf("%d %d",&br,&bc);
	
	if(ar == br && ac == bc)
	{
		printf("Mattrix addition posible\n");
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
		

		printf("Matrix Addition\n");
		//printf("Show the matrix A\n");
		
//		for(i=0;i<ar;i++)
//		{
//			for(j=0;j<ac;j++)
//			{
//			printf("%d ",a[i][j]);
//			}
//			printf("\n");
//		}
//	
//		printf("\t + ");
//		//printf("Show the matrix b\n");
//		for(i=0;i<br;i++)
//			{
//				for(j=0;j<bc;j++)
//				{
//				printf("%d ",b[i][j]);
//				}
//				printf("\n");
//			}
//	
//		printf("\t = ");
		
		//printf("Mattrix Additon Result\n");
		for(i=0;i<ar;i++)
		{
			for(j=0;j<ac;j++)
			{
				sum = a[i][j] + b[i][j];
				printf("%d ",sum);
			}
			printf("\n");
		}	
	}
	else
	printf("\nImpossible to addition\n");
		
	
//	printf("Matrix Addition\n");
//	addMatrix(a,an,b,bn);
}

