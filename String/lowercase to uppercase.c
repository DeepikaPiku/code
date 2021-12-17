/*lowercase to uppercase*/
#include<stdio.h>
#include <string.h>

void lowercasetouppercase(char st[])
{
	int i;
	int l = strlen(st);
	for(i= 0;i<l;i++)
	{
		if (st[i] >='a' && st[i] <='z') st[i] -=32;
	}
	
	printf("%s",st);
}

int main()
{
	char str[100];
	printf("Enter the string:");
	gets(str);
	lowercasetouppercase(str);
}
