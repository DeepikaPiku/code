/*hexa to decimal*/
#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void)
{
	char hex[17];
	long long decimal = 0,place = 0;
	int i = 0,val,len;
	
	printf("Enter the hexadecimal number : ");
	gets(hex);           
	
	len = strlen(hex);
	len--;
	
	for(i=0;hex[i]!='\0';i++)
	{
		if(hex[i]>='0' && hex[i]<='9')
		{
			val = hex[i]-48;
		}
		else if(hex[i]>='a' && hex[i]<='f')
		{
			val = hex[i] - 97 + 10;
		}
		else if(hex[i]>='A' && hex[i]<='F')
		{
			val = hex[i] - 65 + 10;
		}
		decimal +=val * pow(16,len);
		len--;
	}
	printf("Hexadecimal number = %s\n",hex);
	printf("Decimal number = %lld\n",decimal);	
}

//int main()
//{
//	char hexadecimal;
//
//	printf("\nEnter an hexadecimal number: ");
//	scanf("%X", &hexadecimal);
//	htod(hexadecimal)
//	//printf("\nhexadecimal to decimal : %d\n", octal_to_binary(octal));
//	return 0;
//	
//}
