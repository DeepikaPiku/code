#include <stdio.h>

int main(int argc, char const *argv[])
{
	int h,b,x;
	float area;
	scanf("%d %d %d",&h,&b,&x);
	int perer = 2*(h + b);

	if(x <= perer){
		area = h * b;
		printf("%f",area);
	}
	else
	printf("The cow cant grass\n");
	return 0;
}
