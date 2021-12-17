/*valid triangle*/
/*Triangle Validation*/
#include <stdio.h>

int validTriangle(int s1,int s2,int s3)
{
	if((s1+s2)>s3)
	{
		if((s2+s3)>s1)
		{
			if((s3+s1)>s2)
			{
				printf("Triangle is Valid\n");
			}
			else
			{
				printf("Triangle is NOT Valid\n");
			}
		}
		else
		{
			printf("Triangle is NOT Valid\n");
		}
			
	}
	else
	{
		printf("Triangle is NOT Valid\n");
	}
	
}
int main()
{
	int side1,side2,side3;
	printf("Enter the three side of the triange\n");
	scanf("%d %d %d",&side1,&side2,&side3);
	validTriangle(side1,side2,side3);
}
