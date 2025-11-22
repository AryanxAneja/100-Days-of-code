//Write a program to check if a number is an Armstrong number.
#include<stdio.h>
int main(){
    int n, originalNumber, remainder, result = 0, digits = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    originalNumber = n;

    // Count the number of digits
    while(originalNumber != 0){
        originalNumber /= 10;
        digits++;
    }

    originalNumber = n;

    // Calculate the sum of the cubes of each digit
    while(n != 0){
        remainder = n % 10;
        int power = 1;
        for(int i = 0; i < digits; i++){
            power *= remainder;
        }
        result += power;
        n /= 10;
    }

    if(result == originalNumber){
        printf("%d is an Armstrong number.\n", originalNumber);
    } else {
        printf("%d is not an Armstrong number.\n", originalNumber);
    }

    return 0;
}