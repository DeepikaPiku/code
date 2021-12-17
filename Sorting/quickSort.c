/*quick sort*/
#include<stdio.h>
#include <stdlib.h>

void swap(int *a,int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int quickSort(int a[],int lb,int ub)
{
	int loc;
	if(lb<ub)
	{
		loc = partition(a,lb,ub);
		quickSort(a,lb,loc-1);
		quickSort(a,loc+1,ub);
	}
}

int partition(int a[],int lb,int ub)
{
	int pivot = a[lb];
	int start = lb;
	int end = ub;
	
	while(start < end)
	{
		while(a[start] <= pivot) {start++;}
		while(a[end] > pivot) {end--;}
			if(start<end)
			{
				swap(&a[start],&a[end]);
			}
	}
	swap(&a[lb],&a[end]);
		return end;
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
	
	quickSort(a,0,n-1);
	printf("Your Array in ascending order: ");
	printArray(a,n);
}



