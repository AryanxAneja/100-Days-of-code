//Write a program to convert temperature from Celsius to Fahrenheit.
#include<stdio.h>
int main(){
    float temp;
    printf("Enter Value IN Celsius : ");
    scanf("%f", &temp);
    printf("Fahrenhiet is : %f", (temp *9/5) + 32 );
    return 0;
}