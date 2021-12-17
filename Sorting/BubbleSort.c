/*bubble short*/
#include<stdio.h>
#include <stdlib.h>
int swap(int *x,int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
int bubbleSort(int a[],int size)
{
	int i,j;
	for(i=0;i<size-1;i++)
	{
		int flag = 0;
		for(j=0;j<size-1-i;j++)
		{
			if(a[j] > a[j+1])
			{
//				int temp;
//				temp = a[j];
//				a[j] = a[j+1];
//				a[j+1] = temp;
				swap(&a[j],&a[j+1]);
				flag = 1;
			}
		}
		if(flag == 0) break;
	}	
}

void printArray(int a[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}

int main()
{
	int n;
	int a[100],i;
	
	printf("Enter the value of N : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	bubbleSort(a,n);
	printf("Your Array in ascending order: ");
	printArray(a,n);
}

