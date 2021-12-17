/*Selection Sort*/
#include<stdio.h>
#include <stdlib.h>

void swap(int *a,int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int selectionSort(int a[],int size)
{
	int i,j,min;
	for(i=0;i<size-1;i++)
	{
		int min = i;
		for(j=i+1;j<size;j++)
		{
			 if(a[j] <a[min])
			{
				min=j;
			}
			if(min!=i)
			{
				swap(&a[i],&a[min]);
			}
		}
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
	
	selectionSort(a,n);
	printf("Your Array in ascending order: ");
	printArray(a,n);
}

