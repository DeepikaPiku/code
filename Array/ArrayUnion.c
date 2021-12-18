/*array union
input : let array 1 : 1 2 3 4 5
	    array 2 : 3 4 5
output : after union : 1 2 3 4 5
*/
#include<stdio.h>
int arrayUnion(int a[],int an,int b[],int bn)
{
	int i,j;
	int flag = 0;
	
	for(i = 0;i < an;i++)
	printf("%d, ",a[i]);	
	
	for(i=0;i<bn;i++)
	{
		for(j=0;j<an;j++)
		{
			if(b[i] == a[j])
			flag = 1;
		}
	}
	if(flag == 0){
		printf("%d, ",b[i]);
	}
		
	flag = 0 ;
	
}


int main()
{
	int i,an,bn,a[100],b[100];
	printf("Enter the array size of array a: ");
	scanf("%d",&an);
	for(i=0;i<an;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Enter the array size of array b: ");
	scanf("%d",&bn);
	
	for(i=0;i<bn;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("array union\n");
	arrayUnion(a,an,b,bn);
}
