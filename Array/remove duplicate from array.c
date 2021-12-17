/*remove duplicate from array*/
#include<stdio.h>

int removeDuplicates(int a[],int n)
{
	int i,j,k = 0,count = 0;
	int noRepArry[100];
	//array is empty or single string
	if(n == 0 || n == 1)
		return n;
	//check for repeted elements
	for(i=0;i<n-1;i++)
	{
		if(a[i] !=a[i+1])
		{
			noRepArry[k++]=a[i];
		}
	
	}
	//storing non repeted array elements
	noRepArry[k++] = a[n-1];
	
	//printfing non repeted array
	for(i=0;i<k;i++)
	{
		printf("%d ",noRepArry[i]);
	}
}

int main()
{
	int i,n,a[100];
	printf("Enter the array size: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("After remove the array is : ");
	removeDuplicates(a,n);
}
