/*copy one string to another without library function*/
#include <stdio.h>

int copyStringWithoutLibraryFunction(char st[])
{
	char copy_sr[100];
	int i = 0;
	while(st[i] !='\0')
	{
		copy_sr[i] = st[i];
		i++;
	}
	copy_sr[i] = '\0';
	printf("COPIED STRING : %s\n",copy_sr);
}

int main()
{
	char str[100];
	printf("Enter the string:");
	gets(str);
	copyStringWithoutLibraryFunction(str);
}
