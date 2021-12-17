/*vowl consonant number and other char count */
#include<stdio.h>
int vcno_count(char str[])
{
	int i,j,vowel = 0,consonant = 0, number = 0,special_symbol = 0;
	for(i=0;i<strlen(str)-1;i++)
	{
		if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U' ||
			str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='e') 
				{vowel++;}
		else if ((str[i] >='a' && str[i] <='z') || (str[i] >='A' && str[i] <='Z'))	{consonant++;}
			
		else if(str[i]>='0' && str[i]<='9'){number++;}
		
		else 
			special_symbol++;
	}
	printf("Vowel = %d\n",vowel);
	printf("consonant = %d\n",consonant);
	printf("Number = %d\n",number);
	printf("Other Symbol = %d\n",special_symbol);
	
}
int main()
{
	char str[100];
	printf("Enter the string:");
	gets(str);
	vcno_count(str);
}
