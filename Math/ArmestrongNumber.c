/*Armestrong Number*/

#include<stdio.h>
#include<math.h>

int armstrong_num(int num){
    int rem;
    int k = num;
    int sum = 0;
    int power = 0;
    //Finding the number of digits
    while(k != 0){
        k /=10;
        ++power;
    }

    k = num;
    //calculating sum
    while(k != 0){
        rem = k % 10;
        sum += pow(rem,power);
        k/=10;
    }

    if(sum == num)
        printf("YES!Armestrong NUmber\n");
    else
        printf("Not!Armestrong numer \n");
}

int main(){
    int n,x;
    scanf("%d",&n);
    armstrong_num(n);
}
