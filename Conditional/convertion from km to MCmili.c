/*convert  KM to Meter Centimeter Milimeter */
#include <stdio.h>
int km_convertion(int num,char choice)
{
	float answer;
	if(choice == 'M' || choice == 'm'){
		answer = num * 1000;
		printf("Answer = %.2f",answer);
	}
	
	if(choice == 'C' || choice == 'c'){
		answer = num * 100000;
		printf("Answer = %.2f",answer);
		}
	if(choice == 'I' || choice == 'i'){
		answer = num * 1000000;
		printf("Answer = %.2f",answer);
	}
	if(choice != ('M' || 'm' || 'C' || 'c' || 'I'||'i')){
		printf("Invalid Input\n");
	}
}
int main()
{
	int x,i;
	char operation_key;
	printf("Enter numbers:");
	scanf("%d",&x);
	printf("\nEnter your switch conversion char:");
	scanf("%c",&operation_key);
//	switch(operation_key)
//	{
//		case 'M':
//		case 'm': printf("Answer = %.2f",num * 1000);break;
//		
//		case 'C':
//		case 'c':printf("Answer = %.2f",num * 100000);break;
//			
//		case 'I':
//		case 'I':printf("Answer = %.2f",num * 100000);break;
//			
//		default:
//			printf("Invalid key inserted\n"); break;
//	}
	km_convertion(x,operation_key);
}
