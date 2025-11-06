//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter 1st Number : ");
    scanf("%d",&a);
    printf("Enter 2nd Number : ");
    scanf("%d", &b);
    printf("Sum is : %d \n", a+b);
    printf(" Difference of a and b is : %d\n", a-b);
    printf("Product is : %d \n", a*b);
    printf("Quotient is : %d \n", a/b);
    return 0;

}