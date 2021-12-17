/*Transpose Matrix*/
#include <stdio.h>

int main()
{
	int i,j,k,ar,ac,br,bc,a[100][100],b[100][100];
	printf("Enter the row and coloumn of MATRIX A: ");
	scanf("%d %d",&ar,&ac);
	
		for(i=0;i<ar;i++)
		{
			for(j=0;j<ac;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		
		br = ac;
		bc = ar;
			
		for(i=0;i<ar;i++)
		{
			for(j=0;j<ac;j++)
			{
				b[j][i] = a[i][j];
			}
		}
		
		printf("Transpose Of Matrix\n");
		for(i=0;i<br;i++)
		{
			for(j=0;j<bc;j++)
			{
				printf("%d ",b[i][j]);
			}
			printf("\n");
		}		
}
