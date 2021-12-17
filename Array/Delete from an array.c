/*Delete from an array*/
#include<stdio.h>

int deleteFromArray(int a[],int n,int position)
{
	int i,j,k;
	if(position > n + 1 || position <=0){printf("Invalid position");}
	else
	{
		for(i=position-1;i<n-1;i++)
		{
			a[i] = a[i+1];
		}
	}	
}

void printArray(int a[],int n)
{
	int i;
	for(i=0;i<n-1;i++)
	{
		printf("%d\t",a[i]);
	}
}
int main()
{
	int i,n,a[100];
	int value,index;
	printf("Enter the array size: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Enter the index to delete: ");
	scanf("%d",&index);
	
	printf("sum And Devide bt the array elements\n");
	deleteFromArray(a,n,index);
	printf("After deletion: ");
	printArray(a,n);
}

