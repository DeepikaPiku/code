/*https://www.programiz.com/dsa/heap-sort*/
/*heap sort*/

#include <stdio.h>
#include <stdlib.h>

void swap(int *a,int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void heapfiy(int a[],int size,int i)
{
	// Find largest among root, left child and right child
	int largest = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;
	
	if (left <size && a[left] > a[largest])
		largest = left;
	if (right < size && a[right]> a[largest])
		largest = right;
	// Swap and continue heapifying if root is not largest
	if(largest != i)
		swap(&a[i],&a[largest]);
		heapfiy(a,size,largest);
}
// Main function to do heap sort
void heapsort(int a[],int size)
{
	int i;
	 // Build max heap
	for(i=size/2-1;i>=0;i--) 
	{
		heapfiy(a,size,i);
	}
	// Heap sort
	for(i=size-1;i>=0;i--)
	{
		swap(&a[0],&a[i]);
      // Heapify root element to get highest element at root again
		heapfiy(a,i,0);
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
	
	heapsort(a,n);
	printf("Your Array in ascending order: ");
	printArray(a,n);
}

