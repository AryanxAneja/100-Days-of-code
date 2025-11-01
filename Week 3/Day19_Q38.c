//Write a program to find the sum of digits of a number.
#include<stdio.h>

int main(){
    int digits = 0;
    int n;
    int sum = 0;
    printf("Enter a Number : ");
    scanf("%d",&n);

    while(n!=0){
        digits = n%10;
        n= n/10;
        sum = sum + digits;
    }
    printf("The sum of digits is : %d",sum);
    return 0;
}