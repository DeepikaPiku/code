/*swapping string*/
#include <stdio.h>
int swapstring(char str1[],char str2[])
{
	int i = 0,j = 0;
	int temp_str[100];
	
	//coping string to temp_string from srt1
	while(str1[i]!='\0')
	{
		temp_str[j++] = str1[i++];
	}
	temp_str[j] = '\0';
	i=0,j=0;
	
	//coping string to str1 from srt2
	while(str2[i]!='\0')
	{
		str1[j++] = str2[i++];
	}
	str1[j] = '\0';
	i=0,j=0;
	
	//coping string to srt1 from temp_string
	while(temp_str[i]!='\0')
	{
		str2[j++] = temp_str[i++];
	}
	str2[j] = '\0';
	printf("\nString After Swapping\n");
	printf("------------------------\n");
	printf("New string 1 : %s\n",str1);
	printf("New string 2 : %s\n",str2);
		
}
int main()
{
	char str1[100];
	char str2[100];
	printf("Enter the string 1:");
	gets(str1);
	printf("Enter the string 2:");
	gets(str2);
	
	swapstring(str1,str2);
}
