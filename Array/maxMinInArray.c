/*Maximum and Minumim in Array*/
#include<stdio.h>

int max(int a[],int n)
{
	int i,j;
	int max = a[0];
	int index;
	for(i=1;i<n;i++)
	{
		if(a[i] > max)
		{
		max = a[i];
		index = i;
		}
	}
	printf("Max is %d and position is %d\n",max,index+1);
}

int min(int a[],int n)
{
	int i,j;
	int index;
	int min = a[0];
	for(i=1;i<n;i++)
	{
		if(a[i] < min)
		{
			min = a[i];
			index = i;
		}	
	}
	printf("Min is %d and position is %d\n",min,index+1);
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
	max(a,n);
	min(a,n);
}


