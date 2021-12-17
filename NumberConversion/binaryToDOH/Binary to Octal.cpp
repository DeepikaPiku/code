/*Binary to Octal*/
#include<stdio.h>
#include<math.h>

int btoo(long long bn)
{
	int i = 0;
	int rem;
	int dec = 0;
	int oct = 0;
	int a[100];
	//convert binary to decimal
	while(bn != 0 ){
		rem = bn % 10;
		dec += rem * pow(2,i);
		++i;
		bn /= 10;	
	}
	i =1;
	//convert decimal to octal
	while(dec != 0){
		oct += (dec % 8)*i;
		dec /= 8;
		i *= 10;
	}
	printf("%d",oct);

//this part will also work
//	for(i=0;dec>0;i++) {
//		a[i] = dec % 8;
//		dec /= 8;	
//	}
//	for(i=i-1;i>=0;i--){
//		printf("%o",a[i]);
//	}
	
}

int main()
{
	long long n;
	printf("enter the bainary value:");
	scanf("%d",&n);
	btoo(n);
}
