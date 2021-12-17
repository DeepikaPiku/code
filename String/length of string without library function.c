/*length of string without library function*/
#include<stdio.h>

int lengthWithoutLibraryFunction(char str[])
{
	int length = 0;
	while(str[length]!='\0')
		length++;
	printf("%d",length);
}

int main()
{
	char str[100];
	printf("Enter the string:");
	gets(str);
	lengthWithoutLibraryFunction(str);
}
