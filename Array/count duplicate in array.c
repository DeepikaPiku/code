/*count duplicate in array*/
#include<stdio.h>

int removeDuplicates(int a[],int n)
{
	int i,j,count = 0;

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i] ==a[j])
			{
				count++;
				break;
			}
		}
	}
	printf("%d ",count);
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
	printf("NUmber of duplicate elements ");
	removeDuplicates(a,n);
}
