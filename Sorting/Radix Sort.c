/*Radix Sort*/
#include<stdio.h>

// Function to get the largest element from an array
int getMax(int a[],int size)
{
	int max = a[0];
	int i;
	for(i = 1;i<size;i++)
	{
		if(a[i]>max)
			max = a[i];
		return max;
	}
	
}
// Using counting sort to sort the elements in the basis of significant places
void countingSort(int a[],int size,int place)
{
	int output[size+1];
	int i;
	int max = (a[0] / place) % 10;
	
	for(i= 1;i < size;i++)
	{
		if(((a[i] / place) % 10) >max)
			max = a[i];
	}
	int count[max + 1];
	
	for(i = 0;i < max;++i)
		count[i] = 0;
	
	// Calculate count of elements
	for(i = 1;i < size;i++)
		count[(a[i]/place) % 10]++;
		
	// Calculate cumulative count
	for(i =1;i < 10;i++)
		count[i] +=count[i-1];
	
	// Place the elements in sorted order
	for(i = size - 1;i>=0;i--)
	{
		output[count[(a[i]/place)%10] - 1] = a[i];
		count[(a[i]/place)% 10]--;
	}
	
	for(i = 0;i < size;i++)
	{
		a[i] = output[i];
	}	
}

// Main function to implement radix sort
void radixSort(int a[],int size)
{
	// Get maximum element
	int max = getMax(a,size);
	int place;
	
	// Apply counting sort to sort elements based on place value.
	for(place = 1; max / place >0;place *=10)
		countingSort(a,size,place);
}

// Print an array
void printArray(int a[],int size)
{
	int i;
	for(i=0;i<size;++i)
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
	
	radixSort(a,n);
	printf("Your Array in ascending order:\n");
	printArray(a,n);
}
