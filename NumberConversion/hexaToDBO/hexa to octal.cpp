/*hexa to octal*/
#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
	char hex[100];
	long long bin,octal,place;
	int i = 0,rem,val;
	
	printf("Enter the hexadecimal number : ");
	gets(hex);  
	
	bin = 0ll;
	octal = 0ll;
	place = 0ll;
	
	for(i=0;hex[i] !='\0';i++)
	{
		bin = bin * place;
		switch(hex[i])
		{
			case '0':bin +=0; break;
			case '1':bin +=1; break;
			case '2':bin +=2; break;
			case '3':bin +=3; break;
			case '4':bin +=4; break;
			case '5':bin +=5; break;
			case '6':bin +=6; break;
			case '7':bin +=7; break;
			case '8':bin +=8; break;
			case '9':bin +=9; break;
			case 'a':
			case 'A':bin +=1010; break;
			case 'b':
			case 'B':bin +=1011; break;
			case 'c':
			case 'C':bin +=1100; break;
			case 'd':
			case 'D':bin +=1101; break;
			case 'e':
			case 'E':bin +=1110; break;
			case 'f':
			case 'F':bin +=1111; break;
			default: printf("Invalid");
		}
		place = 10000;	
	}
	place  = 1;
	
	while(bin > 0)
	{
		rem = bin % 1000;
		switch(rem)
		{
			case 0:val = 0;break;
			case 1:val = 1;break;
			case 10:val = 2;break;
			case 11:val = 3;break;
			case 100:val = 4;break;
			case 101:val = 5;break;
			case 110:val = 6;break;
			case 111:val = 7;break;
		}
		octal += val * place;
		bin /= 1000;
		place *=10;
	}
	printf("Hexadecimal numbber = %s\n",hex);
	printf("Octal number = %lld\n",octal);	
}

