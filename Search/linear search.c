/*linear search*/
#include<stdio.h>

int linearSearch(int a[],int num,int k)
{
	int i;
	for(i=0;i<=num;i++)
	{
		if(a[i]==k)
			return i;
		
	}
	return -1;
}

int main(void)
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
	
	int result = linearSearch(arr,n,key);
	
	if(result ==-1)
		printf("NOT Found");
	else
		printf("Element found at index %d",result+1);
}
