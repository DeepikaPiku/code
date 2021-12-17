/*Binary to Hexadecimal*/
/*Binary to Octal*/
#include<stdio.h>
#include<math.h>

int btoh(long long bn)
{
	int i = 0;
	int rem;
	int dec = 0;
	int hex = 0;
	int a[100];
	
	//convert binary to decimal
	while(bn != 0 ){
		rem = bn % 10;
		dec += rem * pow(2,i);
		++i;
		bn /= 10;	
	}
	//convert binary to hexadecimal
	for(i=0;dec>0;i++){
		a[i] = dec % 16;
		dec /=16;
	}
	for(i=i-1;i>=0;i--){
		printf("%X",a[i]);
	}
}

int main()
{
	long long n;
	printf("enter the bainary value:");
	scanf("%d",&n);
	btoh(n);
}
