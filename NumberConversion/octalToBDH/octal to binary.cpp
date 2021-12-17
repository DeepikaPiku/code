/*octal to binary*/
#include <stdio.h>
#include <math.h>
#include <string.h>
#define max 1000

int main()
{
	char octalnum[max];
	long i = 0;
	
	printf("Enter the octal number : ");
	scanf("%s",octalnum);
	
	printf("Binary number begin : ");
	while(octalnum[i])
	{
		switch(octalnum[i])
		{
			case '0':printf("000");break;
			case '1':printf("001");break;
			case '2':printf("010");break;
			case '3':printf("011");break;
			case '4':printf("100");break;
			case '5':printf("101");break;
			case '6':printf("110");break;
			case '7':printf("111");break;
			default: printf("INVALID"); 
		}
		i++;
	}		
}


//int otob(int oct){
//	long i = 0;
//	printf("Equalivant binary number : ");
//	int a[100];
//	int b[100];
//	int m,n,rem;
//
//	for(m=0;oct != 0;m++){
//		rem = oct % 10;
//		a[m] = rem;
//		oct /= 10;
//	}
//	for(n=m-1;m>=0;m--){
//		b[n] = a[m];
//	}
//
//	while(b[n]){
//		switch(b[n])
//			{
//				case '0':printf("000");break;
//				case '1':printf("001");break;
//				case '2':printf("010");break;
//				case '3':printf("011");break;
//				case '4':printf("100");break;
//				case '5':printf("101");break;
//				case '6':printf("110");break;
//				case '7':printf("111");break;
//				default: printf("INVALID"); break;
//			}
//		n++;
//	}
//}


//int main(){
//	int n;
//	printf("Enter the octal number:");
//	scanf("%d",&n);
//	otob(n);
//}
