/*Leap Year*/
#include <stdio.h>

int leapYear(int check_year)
{
	if(((check_year %4 ==0) && (check_year %100 !=0) )||(check_year % 400 == 0))
			printf("%d is leap Year",check_year);
	else
		printf("%d Not Leap Year\n",check_year);
}

int main()
{
	int year;
	printf("Enter yout year :%s\n",year);
	scanf("%d",year);
	leapYear(year);
	return 0;
}
