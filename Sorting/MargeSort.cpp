/*MargeShort*/
#include<stdio.h>
#include <stdlib.h>
int marge(int a[],int lb,int mid,int ub)
{
	int i = lb;
	int j = mid + 1;
	int k = lb;	
	int b[100];
	while(i<=mid && j<=ub)
	{
		if(a[i]<=a[j])
		{
			b[k]=a[i];
			i++;
		}
		else
		{
			b[k]=a[j];
			j++;
		}
		k++;
	} 
	
	if(i>mid)
	{
		while(j<=ub)
		{
			b[k]=a[j];
			j++;
			k++;
		}
	}
	else{
		while(i<=mid)
		{
			b[k]=a[i];
			i++;
			k++;
		}	
	}
	
	for(k=lb;k<=ub;k++)
	{
		a[k]=b[k];
	}
	//printf("Marg Sorted arry: %d\n",a[k]);	
}

int maregSort(int a[],int lb,int ub)
{
	int mid;
	if(lb<ub)
	{
		mid = (lb+ub)/2;
		maregSort(a,lb,mid);
		maregSort(a,mid+1,ub);
		marge(a,lb,mid,ub); 
	}
}

//void printArry(int a[],int ub,int lb)
//{
//	int k;
//	int b[100];
//	for(k=lb;k<=ub;k++)
//	{
//		a[k]=b[k];
//	}
//	printf("Marg Sorted arry: %d",a[k]);
//}
void printarray(int a[],int size)
{
	int i;
	printf("Marge sorted array: ");
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}
int main()
{
	int a[100],i,n;
	
	printf("Enter the value of N : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	maregSort(a,0,n-1);
	printarray(a,n);
}
