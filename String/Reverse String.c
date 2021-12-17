/**Reverse String*/
#include <stdio.h>
#include <string.h>

int reverseString(char str[])
{
	int i,j = 0;
	char st_new[100];
	for(i=strlen(str)-1;i>=0;i--)
	{
		st_new[j] = str[i];
		j++;
	}
	st_new[j]='\0';
	printf("%s",st_new);
}

int main()
{
	char str[100];
	printf("Enter the string:");
	gets(str);
	reverseString(str);
}
