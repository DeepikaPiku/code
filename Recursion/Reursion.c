/*recursion*/
#include<stdio.h>


int recursiv(int num){
    if(num == 0 || num == 1)
        return 1;
    else
        return num*recursiv(num -1);
}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int x = recursiv(n);
    printf("Recursoin = %d",x);

}
