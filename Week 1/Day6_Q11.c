//Write a program to input an integer and check whether it is even or odd using if–else.
#include<stdio.h>
int main(){
    int a;
    printf("Enter a Number : ");
    scanf("%d",&a);
    if (a % 2 == 0)
    {
        printf("The Number is EVEN");
    } else{
        printf("Number is odd");
    }
    return 0;
}