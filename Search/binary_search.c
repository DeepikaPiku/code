/* Binary Search*/
#include<stdio.h>

int binarySearch(int a[],int k,int low,int high)
{
	int mid = low + (high - low) /2;
	
	while(low<=high)
	{
		if(a[mid]==k)
			return mid;
		if(a[mid] < k)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return -1;
}
int main()
{
	int n,key,arr[100],i;
	printf("Enter the array element: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the search element: ");
	scanf("%d",&key);
	
	int result = binarySearch(arr,key,0,n-1);
	
	if(result ==-1)
		printf("NOT Found");
	else
		printf("Element found at index %d",result);
}
