/*
find max price among 20
*/
#include <stdio.h>
#include <math.h>
int findMax(int a[])
{
	int i = 1;
	int max = a[0];
	while(i<=20)
	{
		if(a[i]>max)
		{
			max = a[i];
		}
		i++;
	}
	printf("Max item is = %d",max);
}

int main()
{
	int a[20],i;
	printf("Enter the number : ");
	for(i=0;i<20;i++)
	{
		scanf("%d",&a[i]);
	}
	findMax(a);
}
