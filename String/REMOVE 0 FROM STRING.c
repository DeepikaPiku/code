/*REMOVE 0 FROM STRING*/
#include <stdio.h>

int rem_zero(char str[])
{
	int i,j,flag = 0;
	char new_str[100];
	int l = strlen(str);
	for(i=0;i<l;i++)
	{
		if(str[i] == 0)
			flag = 1;
		else
			new_str[j]=str[i];
			j++;
	}
	if(flag == 0)
		printf("String after remove 0: %s\n",new_str);
}

int main()
{
	char str[100];
	printf("Enter the string:");
	gets(str);
	rem_zero(str);
}
//
//int main()
//{
//    int rem,rev=0,rnum;
//    long int n,an;
//    printf("Enter any Number\n");
//    scanf("%ld",&n);
//    an=n;
//    while(n>0)
//    {
//        rem=n%10;
//        if(rem!=0)
//        rev=rev*10+rem;
//        n=n/10;
//    }
//    while(rev>0)
//    {
//        rem=rev%10;
//        rnum=rnum*10+rem;
//        rev=rev/10;
//    }
//    printf("Original Number = %ld\n",an);
//    printf("Number after removing all the Zeros = %d",rnum);
//    return 0;
//}
