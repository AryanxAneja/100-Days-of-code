//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include<stdio.h>
int main(){
    int a;
    printf("Enter a Number : ");
    scanf("%d",&a);
    if (a != 0)
    {
        if( a > 0){
        printf("Number is Positive");
    } else{
        printf("Number is negative");
    }
    
} else{
    printf("Number is Zero");
}
return 0;
}