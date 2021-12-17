/*count word in string without library function*/
#include<stdio.h>

//int countWordWithoutLibrayFunction(char st[],int n)
//{
//	int word = 0,i=0;
//	while(st[n]!='\0') n++;
//	for(i=0;i<n;i++)
//	{
//		if(st[i]==''&&st[i+1]!='')
//		word++;
//	}
//	printf("Number of word : %d\n",word+1);
//}

int main()
{
	char str[100];
	int n = 0;
	int word =0,i=0;
	printf("Enter the string:");
	scanf("%[^\n]s",str);
	
	while(str[n]!='\0') n++;
	for(i=0;i<n;i++)
	{
		if(str[i] ==''&& str[i+1] !='')
		word++;
	}
	printf("Number of word : %d\n",word+1);
	
	//countWordWithoutLibrayFunction(str,n);
}
