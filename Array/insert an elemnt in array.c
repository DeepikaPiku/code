/*insert an elemnt in array*/
#include<stdio.h>

int insertInArray(int a[],int n,int val,int position)
{
	int i,j,k;
	if(position > n + 1 || position <=0){printf("Invalid position");}
	else
	{
		for(i=n-1;i>=position-1;i--)
		{
			a[i+1] = a[i];
		}
		
		a[position-1] = val;
		++n;
	}	
}

void printArray(int a[],int n)
{
	int i;
	for(i=0;i<=n;i++)
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
	printf("Enter the value to insert: ");
	scanf("%d",&value);
	
	printf("Enter the value to insert: ");
	scanf("%d",&index);
	
	printf("sum And Devide bt the array elements\n");
	insertInArray(a,n,value,index);
	printf("After insertion: ");
	printArray(a,n);
}

