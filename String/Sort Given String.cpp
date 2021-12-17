#include <stdio.h>
#include <string.h>
int swap(char *x,char *y)
{
	char temp = *x;
	*x = *y;
	*y = temp;
}
int sortString(char st[])
{
	int i,j;
	
	for(i = 0;i <strlen(st);i++)
	{
		for(j = i+1;j<strlen(st);j++)
		{
			if(st[i] > st[j])
			{
				swap(&st[i],&st[j]);
			}
		}
	}
	printf("%s",st);
}

int main()
{
	char str[100];
	printf("Enter String: ");
	gets(str);
	printf("String after sorting\n");
	sortString(str);
}
