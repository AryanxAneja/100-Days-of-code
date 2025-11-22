//Write a program to reverse a given number.
#include<stdio.h>

int main(){
    int n, reversedNumber = 0, digit;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while(n != 0){
        digit = n % 10;
        reversedNumber = reversedNumber * 10 + digit;
        n /= 10;
    }

    printf("Reversed Number: %d\n", reversedNumber);

    return 0;
}