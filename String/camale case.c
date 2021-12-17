/*camale case
Bangladesh fifty year of indepedence
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int camel_case(char str[])
{
	int i=0,j=0,flag = 0;
	char camel_case[100];
	while(str[i]!='\0')
	{
		if(str[i]==' ')
		{
			i++;
			flag = 1;
			continue;
		}
		if(flag==1)
		{
			camel_case[j] = str[i] - 32;
			flag = 0;
		}
		else
		{
			camel_case[j] = str[i];
		}
		j++;
		i++;
	}
	printf("Sentence to Camel case : %s\n",camel_case);
}

int main()
{
	char str[100];
	printf("Enter the string:");
	gets(str);
	camel_case(str);
}
