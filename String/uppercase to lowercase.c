/*uppercase to lowercase*/
#include<stdio.h>
#include <string.h>

int swap(char *x,char *y)
{
	char temp = *x;
	*x = *y;
	*y = temp;
}
void uppercasetolowercase(char st[])
{
	int i;
	int l = strlen(st);
	for(i= 0;i<l;i++)
	{
		if (st[i] >='A' && st[i] <='Z') st[i] +=32;
	}
	
	printf("%s",st);
}

int main()
{
	char str[100];
	printf("Enter the string:");
	gets(str);
//	printf("%c",changeCageAndReverse(str));
	uppercasetolowercase(str);
}
