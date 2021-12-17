/*insertion Sort*/
#include<stdio.h>
#include <stdlib.h>

int insertionSort(int a[],int size)
{
	int i,j;
	//outer loop i.e unsorted loop
	for(i=1;i<size;i++)
	{
		int temp = a[i];
		j = i-1;
		//iner loop ie.sorted array
		while(j>=0 && a[j]>temp)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1] = temp;
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
	
	insertionSort(a,n);
	printf("Your Array in ascending order: ");
	printArray(a,n);
}
