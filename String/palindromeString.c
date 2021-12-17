/*PALINDROME STRING*/	
#include <stdio.h>
#include <string.h>
int palindrome(char str[])
{
	int i = 0,j,flag = 0;
	int l = strlen(str);
	for(i = 0;i<l;i++)
	if(str[i] !=str[l-i-1])
	{
		flag = 1;
	}
	i++;
	if(flag == 0)
		printf("[ %s ] is palindrome\n",str);
	else
		printf("[ %s ] is NOT palindrome\n",str);
}

int main()
{
	char str[100];
	printf("Enter the string:");
	gets(str);
	palindrome(str);
}
