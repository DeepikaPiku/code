/*cgange case and reverse
input
	Hello Guys
output
	SYUg OLLEh
*/
#include <stdio.h>
#include <string.h>

int swap(char *x,char *y)
{
	char temp = *x;
	*x = *y;
	*y = temp;
}
void changeCageAndReverse(char st[])
{
	int i;
	int l = strlen(st);
	for(i= 0;i<l;i++)
	{
		if(st[i] >='a' && st[i] <='z') st[i] -=32;
		else if (st[i] >='A' && st[i] <='Z') st[i] +=32;
	}
	
	for(i=0;i<l/2;i++)
	swap(&st[i],&st[l-i-1]);
	
	printf("%s",st);
}

int main()
{
	char str[100];
	printf("Enter the string:");
	gets(str);
//	printf("%c",changeCageAndReverse(str));
	changeCageAndReverse(str);
}
