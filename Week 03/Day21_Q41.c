//Write a program to swap the first and last digit of a number
#include <stdio.h> 
#include <math.h>

int main(){
    int number, firstDigit, LastDigit,digits;
    printf("Enter The Number : ");
    scanf("%d",&number);
    LastDigit = number %10; //get last digit
    digits = (int)log10(number); // total no of digits
    int power = (int)pow(10, digits);
    firstDigit = number / pow(10,digits); // first digit
    int middle= number % power; //removing the first digit
    middle = middle / 10; // removing last digit
    int newNum = LastDigit *power+ middle * 10 + firstDigit;
    printf("new number is : %d", newNum);
    return 0;
}
